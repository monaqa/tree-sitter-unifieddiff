  supertypes: ($) => [$._git_index, $._diff_line],
      seq(optseq($.git_comment, $._git_index), $.header, repeat1($.hunk)),

    _git_index: ($) => choice($.git_index_added, $.git_index_changed),

    git_index_added: ($) =>
      seq(
        "new file mode ",
        /\d{6}/,
        "\n",
        "index ",
        /[0-9a-f]{7}\.\.[0-9a-f]{7}/,
      ),
    git_index_changed: ($) =>