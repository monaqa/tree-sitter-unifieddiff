const tokens = {
  filename: /[^ \t\r\n]+/,
  from_file: /[^\t\r\n]+/,
  to_file: /[^\t\r\n]+/,

  // FIXME: 適当
  from_file_modification_time:
    /\d\d\d\d-\d\d-\d\d \d\d:\d\d:\d\d.\d+ [+-]\d\d\d\d/,
  to_file_modification_time:
    /\d\d\d\d-\d\d-\d\d \d\d:\d\d:\d\d.\d+ [+-]\d\d\d\d/,

  hunk_info_old: /\d+,\d+/,
  hunk_info_new: /\d+,\d+/,

  body: /[^\n]+/,
  comments: /[^\n]+/,
};

const tokensFunc = Object.fromEntries(
  Object.entries(tokens).map(([k, v]) => [k, (_) => v]),
);

module.exports = grammar({
  name: "unifieddiff",

  supertypes: ($) => [$._diff_line],

  externals: ($) => [
    $.indicator_nochange,
    $.indicator_added,
    $.indicator_deleted,
  ],

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => seq(repeat($.patch)),

    patch: ($) =>
      seq(optseq($.git_comment, $.git_index), $.header, repeat1($.hunk)),

    // TODO: 適当
    git_comment: ($) => seq("diff --git ", $.filename, " ", $.filename, "\n"),
    git_index: ($) =>
      seq("index ", /[0-9a-f]{7}\.\.[0-9a-f]{7}/, " ", /\d{6}/, "\n"),

    header: ($) => seq($.from_file_line, $.to_file_line),

    from_file_line: ($) =>
      seq(
        "---",
        /[ \t]+/,
        $.from_file,
        optional(/[ \t]+/),
        optseq($.from_file_modification_time, /[ \t]+/),
        "\n",
      ),

    to_file_line: ($) =>
      seq(
        "+++",
        /[ \t]+/,
        $.to_file,
        optseq("\t", $.to_file_modification_time),
        "\n",
      ),

    hunk: ($) => seq($.hunk_info, repeat1($._diff_line)),

    hunk_info: ($) =>
      seq(
        "@@",
        /[ \t]+/,
        "-",
        $.hunk_info_old,
        /[ \t]+/,
        "+",
        $.hunk_info_new,
        /[ \t]+/,
        "@@",
        optional($.comments),
        "\n",
      ),

    _diff_line: ($) => choice($.line_nochange, $.line_added, $.line_deleted),

    line_nochange: ($) => seq($.indicator_nochange, optional($.body), "\n"),
    line_added: ($) => seq($.indicator_added, optional($.body), "\n"),
    line_deleted: ($) => seq($.indicator_deleted, optional($.body), "\n"),

    ...tokensFunc,
  },
});

function optseq(...args) {
  return optional(seq(...args));
}

function sep(rule, delimiter) {
  return seq(rule, repeat(seq(delimiter, rule)));
}
