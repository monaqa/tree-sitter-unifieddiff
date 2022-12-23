#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 118
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 70
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_diff_DASH_DASHgit = 1,
  anon_sym_ = 2,
  anon_sym_LF = 3,
  anon_sym_oldmode = 4,
  anon_sym_newmode = 5,
  anon_sym_deletedfilemode = 6,
  anon_sym_newfilemode = 7,
  anon_sym_copyfrom = 8,
  anon_sym_copyto = 9,
  anon_sym_renamefrom = 10,
  anon_sym_renameto = 11,
  anon_sym_similarityindex = 12,
  aux_sym_git_similarity_index_token1 = 13,
  anon_sym_dissimilarityindex = 14,
  anon_sym_index = 15,
  aux_sym_git_index_token1 = 16,
  anon_sym_DASH_DASH_DASH = 17,
  aux_sym_from_file_line_token1 = 18,
  anon_sym_PLUS_PLUS_PLUS = 19,
  anon_sym_TAB = 20,
  anon_sym_AT_AT = 21,
  anon_sym_DASH = 22,
  anon_sym_COMMA = 23,
  anon_sym_PLUS = 24,
  sym__filename_git_command = 25,
  sym_filename = 26,
  aux_sym_from_file_modification_time_token1 = 27,
  sym_mode = 28,
  aux_sym_body_token1 = 29,
  sym__indicator_nochange = 30,
  sym__indicator_added = 31,
  sym__indicator_deleted = 32,
  sym_source_file = 33,
  sym_patch = 34,
  sym_git_header = 35,
  sym_git_diff_header = 36,
  sym__git_extended_header = 37,
  sym_git_old_mode = 38,
  sym_git_new_mode = 39,
  sym_git_deleted_file_mode = 40,
  sym_git_new_file_mode = 41,
  sym_git_copy_from = 42,
  sym_git_copy_to = 43,
  sym_git_rename_from = 44,
  sym_git_rename_to = 45,
  sym_git_similarity_index = 46,
  sym_git_dissimilarity_index = 47,
  sym_git_index = 48,
  sym_header = 49,
  sym_from_file_line = 50,
  sym_to_file_line = 51,
  sym_hunk = 52,
  sym_hunk_info = 53,
  sym_hunk_range_old = 54,
  sym_hunk_range_new = 55,
  sym__diff_line = 56,
  sym_line_nochange = 57,
  sym_line_added = 58,
  sym_line_deleted = 59,
  sym_from_file_modification_time = 60,
  sym_to_file_modification_time = 61,
  sym_hunk_location = 62,
  sym_hunk_length = 63,
  sym_body = 64,
  sym_hunk_comment = 65,
  aux_sym_source_file_repeat1 = 66,
  aux_sym_patch_repeat1 = 67,
  aux_sym_git_header_repeat1 = 68,
  aux_sym_hunk_repeat1 = 69,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_diff_DASH_DASHgit] = "diff --git ",
  [anon_sym_] = " ",
  [anon_sym_LF] = "\n",
  [anon_sym_oldmode] = "old mode ",
  [anon_sym_newmode] = "new mode ",
  [anon_sym_deletedfilemode] = "deleted file mode ",
  [anon_sym_newfilemode] = "new file mode ",
  [anon_sym_copyfrom] = "copy from ",
  [anon_sym_copyto] = "copy to ",
  [anon_sym_renamefrom] = "rename from ",
  [anon_sym_renameto] = "rename to ",
  [anon_sym_similarityindex] = "similarity index ",
  [aux_sym_git_similarity_index_token1] = "git_similarity_index_token1",
  [anon_sym_dissimilarityindex] = "dissimilarity index ",
  [anon_sym_index] = "index ",
  [aux_sym_git_index_token1] = "git_index_token1",
  [anon_sym_DASH_DASH_DASH] = "---",
  [aux_sym_from_file_line_token1] = "from_file_line_token1",
  [anon_sym_PLUS_PLUS_PLUS] = "+++",
  [anon_sym_TAB] = "\t",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_DASH] = "-",
  [anon_sym_COMMA] = ",",
  [anon_sym_PLUS] = "+",
  [sym__filename_git_command] = "filename",
  [sym_filename] = "filename",
  [aux_sym_from_file_modification_time_token1] = "from_file_modification_time_token1",
  [sym_mode] = "mode",
  [aux_sym_body_token1] = "body_token1",
  [sym__indicator_nochange] = " ",
  [sym__indicator_added] = "+",
  [sym__indicator_deleted] = "-",
  [sym_source_file] = "source_file",
  [sym_patch] = "patch",
  [sym_git_header] = "git_header",
  [sym_git_diff_header] = "git_diff_header",
  [sym__git_extended_header] = "_git_extended_header",
  [sym_git_old_mode] = "git_old_mode",
  [sym_git_new_mode] = "git_new_mode",
  [sym_git_deleted_file_mode] = "git_deleted_file_mode",
  [sym_git_new_file_mode] = "git_new_file_mode",
  [sym_git_copy_from] = "git_copy_from",
  [sym_git_copy_to] = "git_copy_to",
  [sym_git_rename_from] = "git_rename_from",
  [sym_git_rename_to] = "git_rename_to",
  [sym_git_similarity_index] = "git_similarity_index",
  [sym_git_dissimilarity_index] = "git_dissimilarity_index",
  [sym_git_index] = "git_index",
  [sym_header] = "header",
  [sym_from_file_line] = "from_file_line",
  [sym_to_file_line] = "to_file_line",
  [sym_hunk] = "hunk",
  [sym_hunk_info] = "hunk_info",
  [sym_hunk_range_old] = "hunk_range_old",
  [sym_hunk_range_new] = "hunk_range_new",
  [sym__diff_line] = "_diff_line",
  [sym_line_nochange] = "line_nochange",
  [sym_line_added] = "line_added",
  [sym_line_deleted] = "line_deleted",
  [sym_from_file_modification_time] = "from_file_modification_time",
  [sym_to_file_modification_time] = "to_file_modification_time",
  [sym_hunk_location] = "hunk_location",
  [sym_hunk_length] = "hunk_length",
  [sym_body] = "body",
  [sym_hunk_comment] = "hunk_comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_patch_repeat1] = "patch_repeat1",
  [aux_sym_git_header_repeat1] = "git_header_repeat1",
  [aux_sym_hunk_repeat1] = "hunk_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_diff_DASH_DASHgit] = anon_sym_diff_DASH_DASHgit,
  [anon_sym_] = anon_sym_,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_oldmode] = anon_sym_oldmode,
  [anon_sym_newmode] = anon_sym_newmode,
  [anon_sym_deletedfilemode] = anon_sym_deletedfilemode,
  [anon_sym_newfilemode] = anon_sym_newfilemode,
  [anon_sym_copyfrom] = anon_sym_copyfrom,
  [anon_sym_copyto] = anon_sym_copyto,
  [anon_sym_renamefrom] = anon_sym_renamefrom,
  [anon_sym_renameto] = anon_sym_renameto,
  [anon_sym_similarityindex] = anon_sym_similarityindex,
  [aux_sym_git_similarity_index_token1] = aux_sym_git_similarity_index_token1,
  [anon_sym_dissimilarityindex] = anon_sym_dissimilarityindex,
  [anon_sym_index] = anon_sym_index,
  [aux_sym_git_index_token1] = aux_sym_git_index_token1,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
  [aux_sym_from_file_line_token1] = aux_sym_from_file_line_token1,
  [anon_sym_PLUS_PLUS_PLUS] = anon_sym_PLUS_PLUS_PLUS,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym__filename_git_command] = sym_filename,
  [sym_filename] = sym_filename,
  [aux_sym_from_file_modification_time_token1] = aux_sym_from_file_modification_time_token1,
  [sym_mode] = sym_mode,
  [aux_sym_body_token1] = aux_sym_body_token1,
  [sym__indicator_nochange] = anon_sym_,
  [sym__indicator_added] = anon_sym_PLUS,
  [sym__indicator_deleted] = anon_sym_DASH,
  [sym_source_file] = sym_source_file,
  [sym_patch] = sym_patch,
  [sym_git_header] = sym_git_header,
  [sym_git_diff_header] = sym_git_diff_header,
  [sym__git_extended_header] = sym__git_extended_header,
  [sym_git_old_mode] = sym_git_old_mode,
  [sym_git_new_mode] = sym_git_new_mode,
  [sym_git_deleted_file_mode] = sym_git_deleted_file_mode,
  [sym_git_new_file_mode] = sym_git_new_file_mode,
  [sym_git_copy_from] = sym_git_copy_from,
  [sym_git_copy_to] = sym_git_copy_to,
  [sym_git_rename_from] = sym_git_rename_from,
  [sym_git_rename_to] = sym_git_rename_to,
  [sym_git_similarity_index] = sym_git_similarity_index,
  [sym_git_dissimilarity_index] = sym_git_dissimilarity_index,
  [sym_git_index] = sym_git_index,
  [sym_header] = sym_header,
  [sym_from_file_line] = sym_from_file_line,
  [sym_to_file_line] = sym_to_file_line,
  [sym_hunk] = sym_hunk,
  [sym_hunk_info] = sym_hunk_info,
  [sym_hunk_range_old] = sym_hunk_range_old,
  [sym_hunk_range_new] = sym_hunk_range_new,
  [sym__diff_line] = sym__diff_line,
  [sym_line_nochange] = sym_line_nochange,
  [sym_line_added] = sym_line_added,
  [sym_line_deleted] = sym_line_deleted,
  [sym_from_file_modification_time] = sym_from_file_modification_time,
  [sym_to_file_modification_time] = sym_to_file_modification_time,
  [sym_hunk_location] = sym_hunk_location,
  [sym_hunk_length] = sym_hunk_length,
  [sym_body] = sym_body,
  [sym_hunk_comment] = sym_hunk_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_patch_repeat1] = aux_sym_patch_repeat1,
  [aux_sym_git_header_repeat1] = aux_sym_git_header_repeat1,
  [aux_sym_hunk_repeat1] = aux_sym_hunk_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_diff_DASH_DASHgit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oldmode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_newmode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deletedfilemode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_newfilemode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_copyfrom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_copyto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_renamefrom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_renameto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_similarityindex] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_git_similarity_index_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_dissimilarityindex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_git_index_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_from_file_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PLUS_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [sym__filename_git_command] = {
    .visible = true,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_from_file_modification_time_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_mode] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_body_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__indicator_nochange] = {
    .visible = true,
    .named = false,
  },
  [sym__indicator_added] = {
    .visible = true,
    .named = false,
  },
  [sym__indicator_deleted] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_patch] = {
    .visible = true,
    .named = true,
  },
  [sym_git_header] = {
    .visible = true,
    .named = true,
  },
  [sym_git_diff_header] = {
    .visible = true,
    .named = true,
  },
  [sym__git_extended_header] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_git_old_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_git_new_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_git_deleted_file_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_git_new_file_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_git_copy_from] = {
    .visible = true,
    .named = true,
  },
  [sym_git_copy_to] = {
    .visible = true,
    .named = true,
  },
  [sym_git_rename_from] = {
    .visible = true,
    .named = true,
  },
  [sym_git_rename_to] = {
    .visible = true,
    .named = true,
  },
  [sym_git_similarity_index] = {
    .visible = true,
    .named = true,
  },
  [sym_git_dissimilarity_index] = {
    .visible = true,
    .named = true,
  },
  [sym_git_index] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_from_file_line] = {
    .visible = true,
    .named = true,
  },
  [sym_to_file_line] = {
    .visible = true,
    .named = true,
  },
  [sym_hunk] = {
    .visible = true,
    .named = true,
  },
  [sym_hunk_info] = {
    .visible = true,
    .named = true,
  },
  [sym_hunk_range_old] = {
    .visible = true,
    .named = true,
  },
  [sym_hunk_range_new] = {
    .visible = true,
    .named = true,
  },
  [sym__diff_line] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_line_nochange] = {
    .visible = true,
    .named = true,
  },
  [sym_line_added] = {
    .visible = true,
    .named = true,
  },
  [sym_line_deleted] = {
    .visible = true,
    .named = true,
  },
  [sym_from_file_modification_time] = {
    .visible = true,
    .named = true,
  },
  [sym_to_file_modification_time] = {
    .visible = true,
    .named = true,
  },
  [sym_hunk_location] = {
    .visible = true,
    .named = true,
  },
  [sym_hunk_length] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_hunk_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_patch_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_git_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hunk_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_new = 1,
  field_old = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_new] = "new",
  [field_old] = "old",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_new, 3},
    {field_old, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(170);
      if (lookahead == '\t') ADVANCE(199);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == ' ') ADVANCE(173);
      if (lookahead == '+') ADVANCE(205);
      if (lookahead == ',') ADVANCE(203);
      if (lookahead == '-') ADVANCE(202);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(56);
      if (lookahead == 's') ADVANCE(75);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(198);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == ' ') ADVANCE(172);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == '-') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(70);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(193);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(180);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(176);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(175);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(179);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(182);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(171);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(181);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(178);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(183);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(177);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(192);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(97);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(142);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(99);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 27:
      if (lookahead == '+') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '+') ADVANCE(197);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(195);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(74);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(140);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(165);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(143);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(150);
      END_STATE();
    case 39:
      if (lookahead == '@') ADVANCE(200);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(71);
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(116);
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(18);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(83);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(9);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(12);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(114);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 125:
      if (lookahead == 'w') ADVANCE(3);
      END_STATE();
    case 126:
      if (lookahead == 'x') ADVANCE(5);
      END_STATE();
    case 127:
      if (lookahead == 'x') ADVANCE(14);
      END_STATE();
    case 128:
      if (lookahead == 'x') ADVANCE(16);
      END_STATE();
    case 129:
      if (lookahead == 'y') ADVANCE(4);
      END_STATE();
    case 130:
      if (lookahead == 'y') ADVANCE(21);
      END_STATE();
    case 131:
      if (lookahead == 'y') ADVANCE(26);
      END_STATE();
    case 132:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(151);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 166:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(206);
      END_STATE();
    case 167:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(207);
      END_STATE();
    case 168:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 169:
      if (eof) ADVANCE(170);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '+') ADVANCE(204);
      if (lookahead == ',') ADVANCE(203);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == 'c') ADVANCE(105);
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(56);
      if (lookahead == 's') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_diff_DASH_DASHgit);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(196);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_oldmode);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_newmode);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_deletedfilemode);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_newfilemode);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_copyfrom);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_copyto);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_renamefrom);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_renameto);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_similarityindex);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_git_similarity_index_token1);
      if (lookahead == '-') ADVANCE(139);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_git_similarity_index_token1);
      if (lookahead == '.') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_git_similarity_index_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_git_similarity_index_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_git_similarity_index_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_git_similarity_index_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_git_similarity_index_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_git_similarity_index_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_dissimilarityindex);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_git_index_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_from_file_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(196);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(30);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(28);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__filename_git_command);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_from_file_modification_time_token1);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_mode);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_body_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(210);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 169},
  [2] = {.lex_state = 169},
  [3] = {.lex_state = 169},
  [4] = {.lex_state = 169},
  [5] = {.lex_state = 169},
  [6] = {.lex_state = 169},
  [7] = {.lex_state = 169},
  [8] = {.lex_state = 169, .external_lex_state = 1},
  [9] = {.lex_state = 169, .external_lex_state = 1},
  [10] = {.lex_state = 169},
  [11] = {.lex_state = 169},
  [12] = {.lex_state = 169},
  [13] = {.lex_state = 169},
  [14] = {.lex_state = 169},
  [15] = {.lex_state = 169},
  [16] = {.lex_state = 169},
  [17] = {.lex_state = 169, .external_lex_state = 1},
  [18] = {.lex_state = 169},
  [19] = {.lex_state = 169},
  [20] = {.lex_state = 169},
  [21] = {.lex_state = 169},
  [22] = {.lex_state = 169},
  [23] = {.lex_state = 169},
  [24] = {.lex_state = 0, .external_lex_state = 1},
  [25] = {.lex_state = 0, .external_lex_state = 1},
  [26] = {.lex_state = 169, .external_lex_state = 1},
  [27] = {.lex_state = 169, .external_lex_state = 1},
  [28] = {.lex_state = 169},
  [29] = {.lex_state = 169, .external_lex_state = 1},
  [30] = {.lex_state = 169, .external_lex_state = 1},
  [31] = {.lex_state = 169, .external_lex_state = 1},
  [32] = {.lex_state = 169},
  [33] = {.lex_state = 169},
  [34] = {.lex_state = 169, .external_lex_state = 1},
  [35] = {.lex_state = 169, .external_lex_state = 1},
  [36] = {.lex_state = 169},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 169},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 169},
  [45] = {.lex_state = 169},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 169},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 169},
  [56] = {.lex_state = 169},
  [57] = {.lex_state = 169},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 166},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 169},
  [71] = {.lex_state = 169},
  [72] = {.lex_state = 169},
  [73] = {.lex_state = 169},
  [74] = {.lex_state = 152},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 166},
  [78] = {.lex_state = 166},
  [79] = {.lex_state = 166},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 169},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 169},
  [86] = {.lex_state = 166},
  [87] = {.lex_state = 169},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 169},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 169},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 169},
  [95] = {.lex_state = 167},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 169},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 166},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 169},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 169},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 169},
  [111] = {.lex_state = 169},
  [112] = {.lex_state = 167},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 169},
};

enum {
  ts_external_token__indicator_nochange = 0,
  ts_external_token__indicator_added = 1,
  ts_external_token__indicator_deleted = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__indicator_nochange] = sym__indicator_nochange,
  [ts_external_token__indicator_added] = sym__indicator_added,
  [ts_external_token__indicator_deleted] = sym__indicator_deleted,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__indicator_nochange] = true,
    [ts_external_token__indicator_added] = true,
    [ts_external_token__indicator_deleted] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_diff_DASH_DASHgit] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_oldmode] = ACTIONS(1),
    [anon_sym_newmode] = ACTIONS(1),
    [anon_sym_deletedfilemode] = ACTIONS(1),
    [anon_sym_newfilemode] = ACTIONS(1),
    [anon_sym_copyfrom] = ACTIONS(1),
    [anon_sym_copyto] = ACTIONS(1),
    [anon_sym_renamefrom] = ACTIONS(1),
    [anon_sym_renameto] = ACTIONS(1),
    [anon_sym_similarityindex] = ACTIONS(1),
    [aux_sym_git_similarity_index_token1] = ACTIONS(1),
    [anon_sym_dissimilarityindex] = ACTIONS(1),
    [anon_sym_index] = ACTIONS(1),
    [aux_sym_git_index_token1] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [aux_sym_from_file_line_token1] = ACTIONS(1),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [aux_sym_from_file_modification_time_token1] = ACTIONS(1),
    [sym_mode] = ACTIONS(1),
    [sym__indicator_nochange] = ACTIONS(1),
    [sym__indicator_added] = ACTIONS(1),
    [sym__indicator_deleted] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(105),
    [sym_patch] = STATE(23),
    [sym_git_header] = STATE(40),
    [sym_git_diff_header] = STATE(4),
    [sym_header] = STATE(38),
    [sym_from_file_line] = STATE(52),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_diff_DASH_DASHgit] = ACTIONS(5),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(9), 1,
      anon_sym_oldmode,
    ACTIONS(12), 1,
      anon_sym_newmode,
    ACTIONS(15), 1,
      anon_sym_deletedfilemode,
    ACTIONS(18), 1,
      anon_sym_newfilemode,
    ACTIONS(21), 1,
      anon_sym_copyfrom,
    ACTIONS(24), 1,
      anon_sym_copyto,
    ACTIONS(27), 1,
      anon_sym_renamefrom,
    ACTIONS(30), 1,
      anon_sym_renameto,
    ACTIONS(33), 1,
      anon_sym_similarityindex,
    ACTIONS(36), 1,
      anon_sym_dissimilarityindex,
    ACTIONS(39), 1,
      anon_sym_index,
    ACTIONS(42), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(2), 2,
      sym__git_extended_header,
      aux_sym_git_header_repeat1,
    STATE(21), 11,
      sym_git_old_mode,
      sym_git_new_mode,
      sym_git_deleted_file_mode,
      sym_git_new_file_mode,
      sym_git_copy_from,
      sym_git_copy_to,
      sym_git_rename_from,
      sym_git_rename_to,
      sym_git_similarity_index,
      sym_git_dissimilarity_index,
      sym_git_index,
  [54] = 14,
    ACTIONS(44), 1,
      anon_sym_oldmode,
    ACTIONS(46), 1,
      anon_sym_newmode,
    ACTIONS(48), 1,
      anon_sym_deletedfilemode,
    ACTIONS(50), 1,
      anon_sym_newfilemode,
    ACTIONS(52), 1,
      anon_sym_copyfrom,
    ACTIONS(54), 1,
      anon_sym_copyto,
    ACTIONS(56), 1,
      anon_sym_renamefrom,
    ACTIONS(58), 1,
      anon_sym_renameto,
    ACTIONS(60), 1,
      anon_sym_similarityindex,
    ACTIONS(62), 1,
      anon_sym_dissimilarityindex,
    ACTIONS(64), 1,
      anon_sym_index,
    ACTIONS(66), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(2), 2,
      sym__git_extended_header,
      aux_sym_git_header_repeat1,
    STATE(21), 11,
      sym_git_old_mode,
      sym_git_new_mode,
      sym_git_deleted_file_mode,
      sym_git_new_file_mode,
      sym_git_copy_from,
      sym_git_copy_to,
      sym_git_rename_from,
      sym_git_rename_to,
      sym_git_similarity_index,
      sym_git_dissimilarity_index,
      sym_git_index,
  [108] = 14,
    ACTIONS(44), 1,
      anon_sym_oldmode,
    ACTIONS(46), 1,
      anon_sym_newmode,
    ACTIONS(48), 1,
      anon_sym_deletedfilemode,
    ACTIONS(50), 1,
      anon_sym_newfilemode,
    ACTIONS(52), 1,
      anon_sym_copyfrom,
    ACTIONS(54), 1,
      anon_sym_copyto,
    ACTIONS(56), 1,
      anon_sym_renamefrom,
    ACTIONS(58), 1,
      anon_sym_renameto,
    ACTIONS(60), 1,
      anon_sym_similarityindex,
    ACTIONS(62), 1,
      anon_sym_dissimilarityindex,
    ACTIONS(64), 1,
      anon_sym_index,
    ACTIONS(68), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(3), 2,
      sym__git_extended_header,
      aux_sym_git_header_repeat1,
    STATE(21), 11,
      sym_git_old_mode,
      sym_git_new_mode,
      sym_git_deleted_file_mode,
      sym_git_new_file_mode,
      sym_git_copy_from,
      sym_git_copy_to,
      sym_git_rename_from,
      sym_git_rename_to,
      sym_git_similarity_index,
      sym_git_dissimilarity_index,
      sym_git_index,
  [162] = 1,
    ACTIONS(70), 12,
      anon_sym_oldmode,
      anon_sym_newmode,
      anon_sym_deletedfilemode,
      anon_sym_newfilemode,
      anon_sym_copyfrom,
      anon_sym_copyto,
      anon_sym_renamefrom,
      anon_sym_renameto,
      anon_sym_similarityindex,
      anon_sym_dissimilarityindex,
      anon_sym_index,
      anon_sym_DASH_DASH_DASH,
  [177] = 1,
    ACTIONS(72), 12,
      anon_sym_oldmode,
      anon_sym_newmode,
      anon_sym_deletedfilemode,
      anon_sym_newfilemode,
      anon_sym_copyfrom,
      anon_sym_copyto,
      anon_sym_renamefrom,
      anon_sym_renameto,
      anon_sym_similarityindex,
      anon_sym_dissimilarityindex,
      anon_sym_index,
      anon_sym_DASH_DASH_DASH,
  [192] = 1,
    ACTIONS(74), 12,
      anon_sym_oldmode,
      anon_sym_newmode,
      anon_sym_deletedfilemode,
      anon_sym_newfilemode,
      anon_sym_copyfrom,
      anon_sym_copyto,
      anon_sym_renamefrom,
      anon_sym_renameto,
      anon_sym_similarityindex,
      anon_sym_dissimilarityindex,
      anon_sym_index,
      anon_sym_DASH_DASH_DASH,
  [207] = 6,
    ACTIONS(78), 1,
      sym__indicator_nochange,
    ACTIONS(80), 1,
      sym__indicator_added,
    ACTIONS(82), 1,
      sym__indicator_deleted,
    STATE(9), 2,
      sym__diff_line,
      aux_sym_hunk_repeat1,
    STATE(26), 3,
      sym_line_nochange,
      sym_line_added,
      sym_line_deleted,
    ACTIONS(76), 4,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [232] = 6,
    ACTIONS(86), 1,
      sym__indicator_nochange,
    ACTIONS(89), 1,
      sym__indicator_added,
    ACTIONS(92), 1,
      sym__indicator_deleted,
    STATE(9), 2,
      sym__diff_line,
      aux_sym_hunk_repeat1,
    STATE(26), 3,
      sym_line_nochange,
      sym_line_added,
      sym_line_deleted,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [257] = 1,
    ACTIONS(95), 12,
      anon_sym_oldmode,
      anon_sym_newmode,
      anon_sym_deletedfilemode,
      anon_sym_newfilemode,
      anon_sym_copyfrom,
      anon_sym_copyto,
      anon_sym_renamefrom,
      anon_sym_renameto,
      anon_sym_similarityindex,
      anon_sym_dissimilarityindex,
      anon_sym_index,
      anon_sym_DASH_DASH_DASH,
  [272] = 1,
    ACTIONS(97), 12,
      anon_sym_oldmode,
      anon_sym_newmode,
      anon_sym_deletedfilemode,
      anon_sym_newfilemode,
      anon_sym_copyfrom,
      anon_sym_copyto,
      anon_sym_renamefrom,
      anon_sym_renameto,
      anon_sym_similarityindex,
      anon_sym_dissimilarityindex,
      anon_sym_index,
      anon_sym_DASH_DASH_DASH,
  [287] = 1,
    ACTIONS(99), 12,
      anon_sym_oldmode,
      anon_sym_newmode,
      anon_sym_deletedfilemode,
      anon_sym_newfilemode,
      anon_sym_copyfrom,
      anon_sym_copyto,
      anon_sym_renamefrom,
      anon_sym_renameto,
      anon_sym_similarityindex,
      anon_sym_dissimilarityindex,
      anon_sym_index,
      anon_sym_DASH_DASH_DASH,
  [302] = 1,
    ACTIONS(101), 12,
      anon_sym_oldmode,
      anon_sym_newmode,
      anon_sym_deletedfilemode,
      anon_sym_newfilemode,
      anon_sym_copyfrom,
      anon_sym_copyto,
      anon_sym_renamefrom,
      anon_sym_renameto,
      anon_sym_similarityindex,
      anon_sym_dissimilarityindex,
      anon_sym_index,
      anon_sym_DASH_DASH_DASH,
  [317] = 1,
    ACTIONS(103), 12,
      anon_sym_oldmode,
      anon_sym_newmode,
      anon_sym_deletedfilemode,
      anon_sym_newfilemode,
      anon_sym_copyfrom,
      anon_sym_copyto,
      anon_sym_renamefrom,
      anon_sym_renameto,
      anon_sym_similarityindex,
      anon_sym_dissimilarityindex,
      anon_sym_index,
      anon_sym_DASH_DASH_DASH,
  [332] = 1,
    ACTIONS(105), 12,
      anon_sym_oldmode,
      anon_sym_newmode,
      anon_sym_deletedfilemode,
      anon_sym_newfilemode,
      anon_sym_copyfrom,
      anon_sym_copyto,
      anon_sym_renamefrom,
      anon_sym_renameto,
      anon_sym_similarityindex,
      anon_sym_dissimilarityindex,
      anon_sym_index,
      anon_sym_DASH_DASH_DASH,
  [347] = 1,
    ACTIONS(107), 12,
      anon_sym_oldmode,
      anon_sym_newmode,
      anon_sym_deletedfilemode,
      anon_sym_newfilemode,
      anon_sym_copyfrom,
      anon_sym_copyto,
      anon_sym_renamefrom,
      anon_sym_renameto,
      anon_sym_similarityindex,
      anon_sym_dissimilarityindex,
      anon_sym_index,
      anon_sym_DASH_DASH_DASH,
  [362] = 6,
    ACTIONS(78), 1,
      sym__indicator_nochange,
    ACTIONS(80), 1,
      sym__indicator_added,
    ACTIONS(82), 1,
      sym__indicator_deleted,
    STATE(9), 2,
      sym__diff_line,
      aux_sym_hunk_repeat1,
    STATE(26), 3,
      sym_line_nochange,
      sym_line_added,
      sym_line_deleted,
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [387] = 1,
    ACTIONS(111), 12,
      anon_sym_oldmode,
      anon_sym_newmode,
      anon_sym_deletedfilemode,
      anon_sym_newfilemode,
      anon_sym_copyfrom,
      anon_sym_copyto,
      anon_sym_renamefrom,
      anon_sym_renameto,
      anon_sym_similarityindex,
      anon_sym_dissimilarityindex,
      anon_sym_index,
      anon_sym_DASH_DASH_DASH,
  [402] = 1,
    ACTIONS(113), 12,
      anon_sym_oldmode,
      anon_sym_newmode,
      anon_sym_deletedfilemode,
      anon_sym_newfilemode,
      anon_sym_copyfrom,
      anon_sym_copyto,
      anon_sym_renamefrom,
      anon_sym_renameto,
      anon_sym_similarityindex,
      anon_sym_dissimilarityindex,
      anon_sym_index,
      anon_sym_DASH_DASH_DASH,
  [417] = 1,
    ACTIONS(115), 12,
      anon_sym_oldmode,
      anon_sym_newmode,
      anon_sym_deletedfilemode,
      anon_sym_newfilemode,
      anon_sym_copyfrom,
      anon_sym_copyto,
      anon_sym_renamefrom,
      anon_sym_renameto,
      anon_sym_similarityindex,
      anon_sym_dissimilarityindex,
      anon_sym_index,
      anon_sym_DASH_DASH_DASH,
  [432] = 1,
    ACTIONS(117), 12,
      anon_sym_oldmode,
      anon_sym_newmode,
      anon_sym_deletedfilemode,
      anon_sym_newfilemode,
      anon_sym_copyfrom,
      anon_sym_copyto,
      anon_sym_renamefrom,
      anon_sym_renameto,
      anon_sym_similarityindex,
      anon_sym_dissimilarityindex,
      anon_sym_index,
      anon_sym_DASH_DASH_DASH,
  [447] = 8,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      anon_sym_diff_DASH_DASHgit,
    ACTIONS(124), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(4), 1,
      sym_git_diff_header,
    STATE(38), 1,
      sym_header,
    STATE(40), 1,
      sym_git_header,
    STATE(52), 1,
      sym_from_file_line,
    STATE(22), 2,
      sym_patch,
      aux_sym_source_file_repeat1,
  [473] = 8,
    ACTIONS(5), 1,
      anon_sym_diff_DASH_DASHgit,
    ACTIONS(7), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_git_diff_header,
    STATE(38), 1,
      sym_header,
    STATE(40), 1,
      sym_git_header,
    STATE(52), 1,
      sym_from_file_line,
    STATE(22), 2,
      sym_patch,
      aux_sym_source_file_repeat1,
  [499] = 5,
    ACTIONS(78), 1,
      sym__indicator_nochange,
    ACTIONS(80), 1,
      sym__indicator_added,
    ACTIONS(82), 1,
      sym__indicator_deleted,
    STATE(8), 2,
      sym__diff_line,
      aux_sym_hunk_repeat1,
    STATE(26), 3,
      sym_line_nochange,
      sym_line_added,
      sym_line_deleted,
  [518] = 5,
    ACTIONS(78), 1,
      sym__indicator_nochange,
    ACTIONS(80), 1,
      sym__indicator_added,
    ACTIONS(82), 1,
      sym__indicator_deleted,
    STATE(17), 2,
      sym__diff_line,
      aux_sym_hunk_repeat1,
    STATE(26), 3,
      sym_line_nochange,
      sym_line_added,
      sym_line_deleted,
  [537] = 1,
    ACTIONS(129), 7,
      sym__indicator_nochange,
      sym__indicator_added,
      sym__indicator_deleted,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [547] = 1,
    ACTIONS(131), 7,
      sym__indicator_nochange,
      sym__indicator_added,
      sym__indicator_deleted,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [557] = 4,
    ACTIONS(135), 1,
      anon_sym_AT_AT,
    STATE(39), 1,
      sym_hunk_info,
    STATE(32), 2,
      sym_hunk,
      aux_sym_patch_repeat1,
    ACTIONS(133), 3,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
  [573] = 1,
    ACTIONS(137), 7,
      sym__indicator_nochange,
      sym__indicator_added,
      sym__indicator_deleted,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [583] = 1,
    ACTIONS(139), 7,
      sym__indicator_nochange,
      sym__indicator_added,
      sym__indicator_deleted,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [593] = 1,
    ACTIONS(141), 7,
      sym__indicator_nochange,
      sym__indicator_added,
      sym__indicator_deleted,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [603] = 4,
    ACTIONS(145), 1,
      anon_sym_AT_AT,
    STATE(39), 1,
      sym_hunk_info,
    STATE(32), 2,
      sym_hunk,
      aux_sym_patch_repeat1,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
  [619] = 4,
    ACTIONS(135), 1,
      anon_sym_AT_AT,
    STATE(39), 1,
      sym_hunk_info,
    STATE(32), 2,
      sym_hunk,
      aux_sym_patch_repeat1,
    ACTIONS(148), 3,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
  [635] = 1,
    ACTIONS(150), 7,
      sym__indicator_nochange,
      sym__indicator_added,
      sym__indicator_deleted,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [645] = 1,
    ACTIONS(152), 7,
      sym__indicator_nochange,
      sym__indicator_added,
      sym__indicator_deleted,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [655] = 4,
    ACTIONS(154), 1,
      anon_sym_LF,
    ACTIONS(156), 1,
      aux_sym_from_file_line_token1,
    ACTIONS(158), 1,
      aux_sym_from_file_modification_time_token1,
    STATE(85), 1,
      sym_from_file_modification_time,
  [668] = 3,
    ACTIONS(135), 1,
      anon_sym_AT_AT,
    STATE(39), 1,
      sym_hunk_info,
    STATE(33), 2,
      sym_hunk,
      aux_sym_patch_repeat1,
  [679] = 3,
    ACTIONS(135), 1,
      anon_sym_AT_AT,
    STATE(39), 1,
      sym_hunk_info,
    STATE(28), 2,
      sym_hunk,
      aux_sym_patch_repeat1,
  [690] = 3,
    ACTIONS(160), 1,
      anon_sym_LF,
    ACTIONS(162), 1,
      aux_sym_body_token1,
    STATE(115), 1,
      sym_hunk_comment,
  [700] = 3,
    ACTIONS(7), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(37), 1,
      sym_header,
    STATE(52), 1,
      sym_from_file_line,
  [710] = 3,
    ACTIONS(164), 1,
      anon_sym_LF,
    ACTIONS(166), 1,
      aux_sym_body_token1,
    STATE(89), 1,
      sym_body,
  [720] = 3,
    ACTIONS(166), 1,
      aux_sym_body_token1,
    ACTIONS(168), 1,
      anon_sym_LF,
    STATE(91), 1,
      sym_body,
  [730] = 3,
    ACTIONS(166), 1,
      aux_sym_body_token1,
    ACTIONS(170), 1,
      anon_sym_LF,
    STATE(93), 1,
      sym_body,
  [740] = 3,
    ACTIONS(158), 1,
      aux_sym_from_file_modification_time_token1,
    ACTIONS(172), 1,
      anon_sym_LF,
    STATE(81), 1,
      sym_from_file_modification_time,
  [750] = 2,
    ACTIONS(174), 1,
      anon_sym_PLUS,
    STATE(103), 1,
      sym_hunk_range_new,
  [757] = 2,
    ACTIONS(176), 1,
      anon_sym_LF,
    ACTIONS(178), 1,
      anon_sym_TAB,
  [764] = 1,
    ACTIONS(180), 2,
      anon_sym_LF,
      aux_sym_body_token1,
  [769] = 2,
    ACTIONS(182), 1,
      anon_sym_,
    ACTIONS(184), 1,
      anon_sym_LF,
  [776] = 2,
    ACTIONS(186), 1,
      anon_sym_DASH,
    STATE(72), 1,
      sym_hunk_range_old,
  [783] = 2,
    ACTIONS(188), 1,
      aux_sym_git_similarity_index_token1,
    STATE(117), 1,
      sym_hunk_length,
  [790] = 2,
    ACTIONS(190), 1,
      aux_sym_from_file_line_token1,
    ACTIONS(192), 1,
      anon_sym_COMMA,
  [797] = 2,
    ACTIONS(194), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(69), 1,
      sym_to_file_line,
  [804] = 2,
    ACTIONS(196), 1,
      aux_sym_git_similarity_index_token1,
    STATE(51), 1,
      sym_hunk_location,
  [811] = 2,
    ACTIONS(188), 1,
      aux_sym_git_similarity_index_token1,
    STATE(111), 1,
      sym_hunk_length,
  [818] = 2,
    ACTIONS(198), 1,
      aux_sym_from_file_modification_time_token1,
    STATE(108), 1,
      sym_to_file_modification_time,
  [825] = 2,
    ACTIONS(200), 1,
      aux_sym_from_file_line_token1,
    ACTIONS(202), 1,
      anon_sym_COMMA,
  [832] = 1,
    ACTIONS(204), 2,
      aux_sym_from_file_line_token1,
      anon_sym_COMMA,
  [837] = 2,
    ACTIONS(196), 1,
      aux_sym_git_similarity_index_token1,
    STATE(56), 1,
      sym_hunk_location,
  [844] = 1,
    ACTIONS(206), 1,
      anon_sym_LF,
  [848] = 1,
    ACTIONS(208), 1,
      anon_sym_LF,
  [852] = 1,
    ACTIONS(210), 1,
      anon_sym_LF,
  [856] = 1,
    ACTIONS(212), 1,
      anon_sym_LF,
  [860] = 1,
    ACTIONS(214), 1,
      anon_sym_LF,
  [864] = 1,
    ACTIONS(216), 1,
      anon_sym_LF,
  [868] = 1,
    ACTIONS(218), 1,
      anon_sym_LF,
  [872] = 1,
    ACTIONS(220), 1,
      anon_sym_LF,
  [876] = 1,
    ACTIONS(222), 1,
      anon_sym_LF,
  [880] = 1,
    ACTIONS(224), 1,
      sym__filename_git_command,
  [884] = 1,
    ACTIONS(226), 1,
      anon_sym_AT_AT,
  [888] = 1,
    ACTIONS(228), 1,
      sym_mode,
  [892] = 1,
    ACTIONS(230), 1,
      aux_sym_from_file_line_token1,
  [896] = 1,
    ACTIONS(232), 1,
      aux_sym_from_file_line_token1,
  [900] = 1,
    ACTIONS(234), 1,
      aux_sym_from_file_line_token1,
  [904] = 1,
    ACTIONS(236), 1,
      aux_sym_git_index_token1,
  [908] = 1,
    ACTIONS(238), 1,
      aux_sym_git_similarity_index_token1,
  [912] = 1,
    ACTIONS(240), 1,
      aux_sym_git_similarity_index_token1,
  [916] = 1,
    ACTIONS(242), 1,
      sym__filename_git_command,
  [920] = 1,
    ACTIONS(244), 1,
      sym__filename_git_command,
  [924] = 1,
    ACTIONS(246), 1,
      sym__filename_git_command,
  [928] = 1,
    ACTIONS(248), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [932] = 1,
    ACTIONS(250), 1,
      aux_sym_from_file_line_token1,
  [936] = 1,
    ACTIONS(252), 1,
      anon_sym_LF,
  [940] = 1,
    ACTIONS(254), 1,
      anon_sym_LF,
  [944] = 1,
    ACTIONS(256), 1,
      anon_sym_LF,
  [948] = 1,
    ACTIONS(258), 1,
      aux_sym_from_file_line_token1,
  [952] = 1,
    ACTIONS(260), 1,
      sym__filename_git_command,
  [956] = 1,
    ACTIONS(262), 1,
      sym_mode,
  [960] = 1,
    ACTIONS(264), 1,
      anon_sym_LF,
  [964] = 1,
    ACTIONS(266), 1,
      anon_sym_LF,
  [968] = 1,
    ACTIONS(268), 1,
      sym_mode,
  [972] = 1,
    ACTIONS(270), 1,
      anon_sym_LF,
  [976] = 1,
    ACTIONS(272), 1,
      sym_mode,
  [980] = 1,
    ACTIONS(274), 1,
      anon_sym_LF,
  [984] = 1,
    ACTIONS(276), 1,
      sym_mode,
  [988] = 1,
    ACTIONS(278), 1,
      sym_filename,
  [992] = 1,
    ACTIONS(280), 1,
      anon_sym_AT_AT,
  [996] = 1,
    ACTIONS(282), 1,
      aux_sym_from_file_line_token1,
  [1000] = 1,
    ACTIONS(284), 1,
      anon_sym_LF,
  [1004] = 1,
    ACTIONS(286), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1008] = 1,
    ACTIONS(288), 1,
      anon_sym_,
  [1012] = 1,
    ACTIONS(290), 1,
      sym__filename_git_command,
  [1016] = 1,
    ACTIONS(292), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1020] = 1,
    ACTIONS(294), 1,
      aux_sym_from_file_line_token1,
  [1024] = 1,
    ACTIONS(296), 1,
      anon_sym_LF,
  [1028] = 1,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
  [1032] = 1,
    ACTIONS(300), 1,
      aux_sym_from_file_line_token1,
  [1036] = 1,
    ACTIONS(302), 1,
      anon_sym_LF,
  [1040] = 1,
    ACTIONS(304), 1,
      anon_sym_LF,
  [1044] = 1,
    ACTIONS(306), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1048] = 1,
    ACTIONS(308), 1,
      aux_sym_from_file_line_token1,
  [1052] = 1,
    ACTIONS(310), 1,
      aux_sym_from_file_line_token1,
  [1056] = 1,
    ACTIONS(312), 1,
      sym_filename,
  [1060] = 1,
    ACTIONS(314), 1,
      anon_sym_AT_AT,
  [1064] = 1,
    ACTIONS(316), 1,
      anon_sym_AT_AT,
  [1068] = 1,
    ACTIONS(318), 1,
      anon_sym_LF,
  [1072] = 1,
    ACTIONS(320), 1,
      anon_sym_LF,
  [1076] = 1,
    ACTIONS(322), 1,
      aux_sym_from_file_line_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 54,
  [SMALL_STATE(4)] = 108,
  [SMALL_STATE(5)] = 162,
  [SMALL_STATE(6)] = 177,
  [SMALL_STATE(7)] = 192,
  [SMALL_STATE(8)] = 207,
  [SMALL_STATE(9)] = 232,
  [SMALL_STATE(10)] = 257,
  [SMALL_STATE(11)] = 272,
  [SMALL_STATE(12)] = 287,
  [SMALL_STATE(13)] = 302,
  [SMALL_STATE(14)] = 317,
  [SMALL_STATE(15)] = 332,
  [SMALL_STATE(16)] = 347,
  [SMALL_STATE(17)] = 362,
  [SMALL_STATE(18)] = 387,
  [SMALL_STATE(19)] = 402,
  [SMALL_STATE(20)] = 417,
  [SMALL_STATE(21)] = 432,
  [SMALL_STATE(22)] = 447,
  [SMALL_STATE(23)] = 473,
  [SMALL_STATE(24)] = 499,
  [SMALL_STATE(25)] = 518,
  [SMALL_STATE(26)] = 537,
  [SMALL_STATE(27)] = 547,
  [SMALL_STATE(28)] = 557,
  [SMALL_STATE(29)] = 573,
  [SMALL_STATE(30)] = 583,
  [SMALL_STATE(31)] = 593,
  [SMALL_STATE(32)] = 603,
  [SMALL_STATE(33)] = 619,
  [SMALL_STATE(34)] = 635,
  [SMALL_STATE(35)] = 645,
  [SMALL_STATE(36)] = 655,
  [SMALL_STATE(37)] = 668,
  [SMALL_STATE(38)] = 679,
  [SMALL_STATE(39)] = 690,
  [SMALL_STATE(40)] = 700,
  [SMALL_STATE(41)] = 710,
  [SMALL_STATE(42)] = 720,
  [SMALL_STATE(43)] = 730,
  [SMALL_STATE(44)] = 740,
  [SMALL_STATE(45)] = 750,
  [SMALL_STATE(46)] = 757,
  [SMALL_STATE(47)] = 764,
  [SMALL_STATE(48)] = 769,
  [SMALL_STATE(49)] = 776,
  [SMALL_STATE(50)] = 783,
  [SMALL_STATE(51)] = 790,
  [SMALL_STATE(52)] = 797,
  [SMALL_STATE(53)] = 804,
  [SMALL_STATE(54)] = 811,
  [SMALL_STATE(55)] = 818,
  [SMALL_STATE(56)] = 825,
  [SMALL_STATE(57)] = 832,
  [SMALL_STATE(58)] = 837,
  [SMALL_STATE(59)] = 844,
  [SMALL_STATE(60)] = 848,
  [SMALL_STATE(61)] = 852,
  [SMALL_STATE(62)] = 856,
  [SMALL_STATE(63)] = 860,
  [SMALL_STATE(64)] = 864,
  [SMALL_STATE(65)] = 868,
  [SMALL_STATE(66)] = 872,
  [SMALL_STATE(67)] = 876,
  [SMALL_STATE(68)] = 880,
  [SMALL_STATE(69)] = 884,
  [SMALL_STATE(70)] = 888,
  [SMALL_STATE(71)] = 892,
  [SMALL_STATE(72)] = 896,
  [SMALL_STATE(73)] = 900,
  [SMALL_STATE(74)] = 904,
  [SMALL_STATE(75)] = 908,
  [SMALL_STATE(76)] = 912,
  [SMALL_STATE(77)] = 916,
  [SMALL_STATE(78)] = 920,
  [SMALL_STATE(79)] = 924,
  [SMALL_STATE(80)] = 928,
  [SMALL_STATE(81)] = 932,
  [SMALL_STATE(82)] = 936,
  [SMALL_STATE(83)] = 940,
  [SMALL_STATE(84)] = 944,
  [SMALL_STATE(85)] = 948,
  [SMALL_STATE(86)] = 952,
  [SMALL_STATE(87)] = 956,
  [SMALL_STATE(88)] = 960,
  [SMALL_STATE(89)] = 964,
  [SMALL_STATE(90)] = 968,
  [SMALL_STATE(91)] = 972,
  [SMALL_STATE(92)] = 976,
  [SMALL_STATE(93)] = 980,
  [SMALL_STATE(94)] = 984,
  [SMALL_STATE(95)] = 988,
  [SMALL_STATE(96)] = 992,
  [SMALL_STATE(97)] = 996,
  [SMALL_STATE(98)] = 1000,
  [SMALL_STATE(99)] = 1004,
  [SMALL_STATE(100)] = 1008,
  [SMALL_STATE(101)] = 1012,
  [SMALL_STATE(102)] = 1016,
  [SMALL_STATE(103)] = 1020,
  [SMALL_STATE(104)] = 1024,
  [SMALL_STATE(105)] = 1028,
  [SMALL_STATE(106)] = 1032,
  [SMALL_STATE(107)] = 1036,
  [SMALL_STATE(108)] = 1040,
  [SMALL_STATE(109)] = 1044,
  [SMALL_STATE(110)] = 1048,
  [SMALL_STATE(111)] = 1052,
  [SMALL_STATE(112)] = 1056,
  [SMALL_STATE(113)] = 1060,
  [SMALL_STATE(114)] = 1064,
  [SMALL_STATE(115)] = 1068,
  [SMALL_STATE(116)] = 1072,
  [SMALL_STATE(117)] = 1076,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_header_repeat1, 2), SHIFT_REPEAT(94),
  [12] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_header_repeat1, 2), SHIFT_REPEAT(92),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_header_repeat1, 2), SHIFT_REPEAT(90),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_header_repeat1, 2), SHIFT_REPEAT(87),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_header_repeat1, 2), SHIFT_REPEAT(86),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_header_repeat1, 2), SHIFT_REPEAT(79),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_header_repeat1, 2), SHIFT_REPEAT(78),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_header_repeat1, 2), SHIFT_REPEAT(77),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_header_repeat1, 2), SHIFT_REPEAT(76),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_header_repeat1, 2), SHIFT_REPEAT(75),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_header_repeat1, 2), SHIFT_REPEAT(74),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_git_header_repeat1, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_header, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_header, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_old_mode, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_rename_to, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_index, 5),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk, 4),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hunk_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hunk_repeat1, 2), SHIFT_REPEAT(41),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hunk_repeat1, 2), SHIFT_REPEAT(42),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hunk_repeat1, 2), SHIFT_REPEAT(43),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_copy_to, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_similarity_index, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_dissimilarity_index, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_index, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_rename_from, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_diff_header, 5, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_copy_from, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_new_mode, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_deleted_file_mode, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_new_file_mode, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__git_extended_header, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(101),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(106),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__diff_line, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_deleted, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patch, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_nochange, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_added, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_deleted, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_patch_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_patch_repeat1, 2), SHIFT_REPEAT(73),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patch, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_nochange, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_added, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_info, 7),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_range_new, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_range_old, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_location, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_file_line, 5),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_file_line, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_file_modification_time, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_file_line, 6),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_file_line, 4),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [298] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_file_modification_time, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_file_line, 7),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_length, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_range_old, 4),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_file_line, 6),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_comment, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_range_new, 4),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_unifieddiff_external_scanner_create(void);
void tree_sitter_unifieddiff_external_scanner_destroy(void *);
bool tree_sitter_unifieddiff_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_unifieddiff_external_scanner_serialize(void *, char *);
void tree_sitter_unifieddiff_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_unifieddiff(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_unifieddiff_external_scanner_create,
      tree_sitter_unifieddiff_external_scanner_destroy,
      tree_sitter_unifieddiff_external_scanner_scan,
      tree_sitter_unifieddiff_external_scanner_serialize,
      tree_sitter_unifieddiff_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
