const tokens = {
  _filename_git_command: /[^ \t\r\n]+/,
  filename: /[^\t\r\n]+/,

  // FIXME: 適当
  from_file_modification_time:
    /\d\d\d\d-\d\d-\d\d \d\d:\d\d:\d\d.\d+ [+-]\d\d\d\d/,
  to_file_modification_time:
    /\d\d\d\d-\d\d-\d\d \d\d:\d\d:\d\d.\d+ [+-]\d\d\d\d/,

  mode: /\d{6}/,
  hash_index: /[0-9a-f]{7}/,

  hunk_location: /\d+/,
  hunk_length: /\d+/,

  body: /[^\n]+/,
  hunk_comment: /[^\n]+/,
};

const tokensFunc = Object.fromEntries(
  Object.entries(tokens).map(([k, v]) => [k, (_) => v]),
);

function line(...args) {
  return seq(...args, "\n");
}

module.exports = grammar({
  name: "unifieddiff",

  supertypes: ($) => [$._git_extended_header, $._diff_line],

  extras: ($) => [],

  externals: ($) => [
    $._indicator_nochange,
    $._indicator_added,
    $._indicator_deleted,
  ],

  rules: {
    source_file: ($) => repeat($.patch),

    patch: ($) => seq(optional($.git_header), $.header, repeat1($.hunk)),

    git_header: ($) => seq($.git_diff_header, repeat($._git_extended_header)),

    git_diff_header: ($) =>
      line(
        "diff --git ",
        field("old", alias($._filename_git_command, $.filename)),
        " ",
        field("new", alias($._filename_git_command, $.filename)),
      ),

    _git_extended_header: ($) =>
      choice(
        $.git_old_mode,
        $.git_new_mode,
        $.git_deleted_file_mode,
        $.git_new_file_mode,
        $.git_copy_from,
        $.git_copy_to,
        $.git_rename_from,
        $.git_rename_to,
        $.git_similarity_index,
        $.git_dissimilarity_index,
        $.git_index,
      ),

    git_old_mode: ($) => line("old mode ", $.mode),
    git_new_mode: ($) => line("new mode ", $.mode),
    git_deleted_file_mode: ($) => line("deleted file mode ", $.mode),
    git_new_file_mode: ($) => line("new file mode ", $.mode),
    git_copy_from: ($) =>
      line("copy from ", alias($._filename_git_command, $.filename)),
    git_copy_to: ($) =>
      line("copy to ", alias($._filename_git_command, $.filename)),
    git_rename_from: ($) =>
      line("rename from ", alias($._filename_git_command, $.filename)),
    git_rename_to: ($) =>
      line("rename to ", alias($._filename_git_command, $.filename)),
    git_similarity_index: ($) => line("similarity index ", /\d+/),
    git_dissimilarity_index: ($) => line("dissimilarity index ", /\d+/),
    git_index: ($) =>
      line(
        "index ",
        field("from", $.hash_index),
        "..",
        field("to", $.hash_index),
        optseq(" ", $.mode),
      ),

    header: ($) => seq($.from_file_line, $.to_file_line),

    from_file_line: ($) =>
      line(
        "---",
        /[ \t]+/,
        $.filename,
        optional(/[ \t]+/),
        optseq($.from_file_modification_time, /[ \t]+/),
      ),

    to_file_line: ($) =>
      line(
        "+++",
        /[ \t]+/,
        $.filename,
        optseq("\t", $.to_file_modification_time),
      ),

    hunk: ($) =>
      seq($.hunk_info, optional($.hunk_comment), "\n", repeat1($._diff_line)),

    hunk_info: ($) =>
      seq(
        "@@",
        /[ \t]+/,
        $.hunk_range_old,
        /[ \t]+/,
        $.hunk_range_new,
        /[ \t]+/,
        "@@",
      ),

    hunk_range_old: ($) =>
      seq("-", $.hunk_location, optseq(",", $.hunk_length)),
    hunk_range_new: ($) =>
      seq("+", $.hunk_location, optseq(",", $.hunk_length)),

    _diff_line: ($) => choice($.line_nochange, $.line_added, $.line_deleted),

    line_nochange: ($) =>
      line(alias($._indicator_nochange, " "), optional($.body)),
    line_added: ($) => line(alias($._indicator_added, "+"), optional($.body)),
    line_deleted: ($) =>
      line(alias($._indicator_deleted, "-"), optional($.body)),

    ...tokensFunc,
  },
});

function optseq(...args) {
  return optional(seq(...args));
}

function sep(rule, delimiter) {
  return seq(rule, repeat(seq(delimiter, rule)));
}
