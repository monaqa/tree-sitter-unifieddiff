const tokens = {
  _filename_git_command: /[^ \t\r\n]+/,
  filename: /[^\t\r\n]+/,

  // FIXME: 適当
  from_file_modification_time:
    /\d\d\d\d-\d\d-\d\d \d\d:\d\d:\d\d.\d+ [+-]\d\d\d\d/,
  to_file_modification_time:
    /\d\d\d\d-\d\d-\d\d \d\d:\d\d:\d\d.\d+ [+-]\d\d\d\d/,

  hunk_location: /\d+/,
  hunk_length: /\d+/,

  body: /[^\n]+/,
  hunk_comment: /[^\n]+/,
};

const tokensFunc = Object.fromEntries(
  Object.entries(tokens).map(([k, v]) => [k, (_) => v]),
);

module.exports = grammar({
  name: "unifieddiff",

  supertypes: ($) => [$._git_index, $._diff_line],

  extras: ($) => [],

  externals: ($) => [
    $._indicator_nochange,
    $._indicator_added,
    $._indicator_deleted,
  ],

  rules: {
    source_file: ($) => seq(repeat($.patch)),

    patch: ($) =>
      seq(optseq($.git_comment, $._git_index), $.header, repeat1($.hunk)),

    // FIXME: 適当
    git_comment: ($) =>
      seq(
        "diff --git ",
        field("old", alias($._filename_git_command, $.filename)),
        " ",
        field("new", alias($._filename_git_command, $.filename)),
        "\n",
      ),

    _git_index: ($) => choice($.git_index_added, $.git_index_changed),

    git_index_added: ($) =>
      seq(
        "new file mode ",
        /\d{6}/,
        "\n",
        "index ",
        /[0-9a-f]{7}\.\.[0-9a-f]{7}/,
        "\n",
      ),
    git_index_changed: ($) =>
      seq("index ", /[0-9a-f]{7}\.\.[0-9a-f]{7}/, " ", /\d{6}/, "\n"),

    header: ($) => seq($.from_file_line, $.to_file_line),

    from_file_line: ($) =>
      seq(
        "---",
        /[ \t]+/,
        $.filename,
        optional(/[ \t]+/),
        optseq($.from_file_modification_time, /[ \t]+/),
        "\n",
      ),

    to_file_line: ($) =>
      seq(
        "+++",
        /[ \t]+/,
        $.filename,
        optseq("\t", $.to_file_modification_time),
        "\n",
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
      seq(alias($._indicator_nochange, " "), optional($.body), "\n"),
    line_added: ($) =>
      seq(alias($._indicator_added, "+"), optional($.body), "\n"),
    line_deleted: ($) =>
      seq(alias($._indicator_deleted, "-"), optional($.body), "\n"),

    ...tokensFunc,
  },
});

function optseq(...args) {
  return optional(seq(...args));
}

function sep(rule, delimiter) {
  return seq(rule, repeat(seq(delimiter, rule)));
}
