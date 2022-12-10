const tokens = {
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
};

const tokensFunc = Object.fromEntries(
  Object.entries(tokens).map(([k, v]) => [k, (_) => v]),
);

module.exports = grammar({
  name: "unifieddiff",

  supertypes: ($) => [$._diff_line],

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) =>
      seq(
        // optional($.git_comment),
        repeat($.patch),
      ),

    patch: ($) => seq($.header, repeat1($.hunk)),

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
        "\n",
      ),

    _diff_line: ($) => choice($.line_nochange, $.line_added, $.line_deleted),

    line_nochange: ($) => seq(" ", optional($.body), "\n"),
    line_added: ($) => seq("+", optional($.body), "\n"),
    line_deleted: ($) => seq("-", optional($.body), "\n"),

    ...tokensFunc,
  },
});

function optseq(...args) {
  return optional(seq(...args));
}

function sep(rule, delimiter) {
  return seq(rule, repeat(seq(delimiter, rule)));
}
