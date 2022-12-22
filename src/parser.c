#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 90
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_diff_DASH_DASHgit = 1,
  anon_sym_ = 2,
  anon_sym_LF = 3,
  anon_sym_newfilemode = 4,
  aux_sym_git_index_added_token1 = 5,
  anon_sym_index = 6,
  aux_sym_git_index_added_token2 = 7,
  anon_sym_DASH_DASH_DASH = 8,
  aux_sym_from_file_line_token1 = 9,
  anon_sym_PLUS_PLUS_PLUS = 10,
  anon_sym_TAB = 11,
  anon_sym_AT_AT = 12,
  anon_sym_DASH = 13,
  anon_sym_COMMA = 14,
  anon_sym_PLUS = 15,
  sym__filename_git_command = 16,
  sym_filename = 17,
  aux_sym_from_file_modification_time_token1 = 18,
  aux_sym_hunk_location_token1 = 19,
  aux_sym_body_token1 = 20,
  sym__indicator_nochange = 21,
  sym__indicator_added = 22,
  sym__indicator_deleted = 23,
  sym_source_file = 24,
  sym_patch = 25,
  sym_git_comment = 26,
  sym__git_index = 27,
  sym_git_index_added = 28,
  sym_git_index_changed = 29,
  sym_header = 30,
  sym_from_file_line = 31,
  sym_to_file_line = 32,
  sym_hunk = 33,
  sym_hunk_info = 34,
  sym_hunk_range_old = 35,
  sym_hunk_range_new = 36,
  sym__diff_line = 37,
  sym_line_nochange = 38,
  sym_line_added = 39,
  sym_line_deleted = 40,
  sym_from_file_modification_time = 41,
  sym_to_file_modification_time = 42,
  sym_hunk_location = 43,
  sym_hunk_length = 44,
  sym_body = 45,
  sym_hunk_comment = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_patch_repeat1 = 48,
  aux_sym_hunk_repeat1 = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_diff_DASH_DASHgit] = "diff --git ",
  [anon_sym_] = " ",
  [anon_sym_LF] = "\n",
  [anon_sym_newfilemode] = "new file mode ",
  [aux_sym_git_index_added_token1] = "git_index_added_token1",
  [anon_sym_index] = "index ",
  [aux_sym_git_index_added_token2] = "git_index_added_token2",
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
  [aux_sym_hunk_location_token1] = "hunk_location_token1",
  [aux_sym_body_token1] = "body_token1",
  [sym__indicator_nochange] = " ",
  [sym__indicator_added] = "+",
  [sym__indicator_deleted] = "-",
  [sym_source_file] = "source_file",
  [sym_patch] = "patch",
  [sym_git_comment] = "git_comment",
  [sym__git_index] = "_git_index",
  [sym_git_index_added] = "git_index_added",
  [sym_git_index_changed] = "git_index_changed",
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
  [aux_sym_hunk_repeat1] = "hunk_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_diff_DASH_DASHgit] = anon_sym_diff_DASH_DASHgit,
  [anon_sym_] = anon_sym_,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_newfilemode] = anon_sym_newfilemode,
  [aux_sym_git_index_added_token1] = aux_sym_git_index_added_token1,
  [anon_sym_index] = anon_sym_index,
  [aux_sym_git_index_added_token2] = aux_sym_git_index_added_token2,
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
  [aux_sym_hunk_location_token1] = aux_sym_hunk_location_token1,
  [aux_sym_body_token1] = aux_sym_body_token1,
  [sym__indicator_nochange] = anon_sym_,
  [sym__indicator_added] = anon_sym_PLUS,
  [sym__indicator_deleted] = anon_sym_DASH,
  [sym_source_file] = sym_source_file,
  [sym_patch] = sym_patch,
  [sym_git_comment] = sym_git_comment,
  [sym__git_index] = sym__git_index,
  [sym_git_index_added] = sym_git_index_added,
  [sym_git_index_changed] = sym_git_index_changed,
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
  [anon_sym_newfilemode] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_git_index_added_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_index] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_git_index_added_token2] = {
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
  [aux_sym_hunk_location_token1] = {
    .visible = false,
    .named = false,
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
  [sym_git_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__git_index] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_git_index_added] = {
    .visible = true,
    .named = true,
  },
  [sym_git_index_changed] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(83);
      if (lookahead == '\t') ADVANCE(97);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == ',') ADVANCE(101);
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '@') ADVANCE(23);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(96);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == '+') ADVANCE(102);
      if (lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 11:
      if (lookahead == '+') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '+') ADVANCE(95);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(93);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(53);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(78);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(56);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == '@') ADVANCE(98);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(8);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 43:
      if (lookahead == 'w') ADVANCE(9);
      END_STATE();
    case 44:
      if (lookahead == 'x') ADVANCE(3);
      END_STATE();
    case 45:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(64);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 79:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(104);
      END_STATE();
    case 80:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(105);
      END_STATE();
    case 81:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 82:
      if (eof) ADVANCE(83);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == ',') ADVANCE(101);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '@') ADVANCE(23);
      if (lookahead == 'd') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_diff_DASH_DASHgit);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_newfilemode);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_git_index_added_token1);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_git_index_added_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_git_index_added_token2);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_from_file_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(14);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(12);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__filename_git_command);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_from_file_modification_time_token1);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_hunk_location_token1);
      if (lookahead == '-') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_hunk_location_token1);
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_hunk_location_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_hunk_location_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_hunk_location_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_hunk_location_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_hunk_location_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_body_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(114);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 82},
  [2] = {.lex_state = 82, .external_lex_state = 1},
  [3] = {.lex_state = 82, .external_lex_state = 1},
  [4] = {.lex_state = 82, .external_lex_state = 1},
  [5] = {.lex_state = 82},
  [6] = {.lex_state = 0, .external_lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 82},
  [9] = {.lex_state = 82, .external_lex_state = 1},
  [10] = {.lex_state = 82, .external_lex_state = 1},
  [11] = {.lex_state = 82, .external_lex_state = 1},
  [12] = {.lex_state = 82, .external_lex_state = 1},
  [13] = {.lex_state = 82, .external_lex_state = 1},
  [14] = {.lex_state = 82, .external_lex_state = 1},
  [15] = {.lex_state = 82},
  [16] = {.lex_state = 82},
  [17] = {.lex_state = 82, .external_lex_state = 1},
  [18] = {.lex_state = 82},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 82},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 82},
  [25] = {.lex_state = 82},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 82},
  [33] = {.lex_state = 82},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 82},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 82},
  [40] = {.lex_state = 82},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 82},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 82},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 82},
  [48] = {.lex_state = 82},
  [49] = {.lex_state = 79},
  [50] = {.lex_state = 82},
  [51] = {.lex_state = 82},
  [52] = {.lex_state = 82},
  [53] = {.lex_state = 82},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 65},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 82},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 65},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 82},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 80},
  [66] = {.lex_state = 82},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 82},
  [71] = {.lex_state = 82},
  [72] = {.lex_state = 82},
  [73] = {.lex_state = 80},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 82},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 82},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 82},
  [82] = {.lex_state = 82},
  [83] = {.lex_state = 82},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 79},
  [89] = {.lex_state = 82},
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
    [anon_sym_newfilemode] = ACTIONS(1),
    [aux_sym_git_index_added_token1] = ACTIONS(1),
    [anon_sym_index] = ACTIONS(1),
    [aux_sym_git_index_added_token2] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [aux_sym_from_file_line_token1] = ACTIONS(1),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [aux_sym_from_file_modification_time_token1] = ACTIONS(1),
    [aux_sym_hunk_location_token1] = ACTIONS(1),
    [sym__indicator_nochange] = ACTIONS(1),
    [sym__indicator_added] = ACTIONS(1),
    [sym__indicator_deleted] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(77),
    [sym_patch] = STATE(8),
    [sym_git_comment] = STATE(19),
    [sym_header] = STATE(20),
    [sym_from_file_line] = STATE(33),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_diff_DASH_DASHgit] = ACTIONS(5),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      sym__indicator_nochange,
    ACTIONS(14), 1,
      sym__indicator_added,
    ACTIONS(17), 1,
      sym__indicator_deleted,
    STATE(2), 2,
      sym__diff_line,
      aux_sym_hunk_repeat1,
    STATE(9), 3,
      sym_line_nochange,
      sym_line_added,
      sym_line_deleted,
    ACTIONS(9), 4,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [25] = 6,
    ACTIONS(22), 1,
      sym__indicator_nochange,
    ACTIONS(24), 1,
      sym__indicator_added,
    ACTIONS(26), 1,
      sym__indicator_deleted,
    STATE(2), 2,
      sym__diff_line,
      aux_sym_hunk_repeat1,
    STATE(9), 3,
      sym_line_nochange,
      sym_line_added,
      sym_line_deleted,
    ACTIONS(20), 4,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [50] = 6,
    ACTIONS(22), 1,
      sym__indicator_nochange,
    ACTIONS(24), 1,
      sym__indicator_added,
    ACTIONS(26), 1,
      sym__indicator_deleted,
    STATE(2), 2,
      sym__diff_line,
      aux_sym_hunk_repeat1,
    STATE(9), 3,
      sym_line_nochange,
      sym_line_added,
      sym_line_deleted,
    ACTIONS(28), 4,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [75] = 7,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      anon_sym_diff_DASH_DASHgit,
    ACTIONS(35), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(19), 1,
      sym_git_comment,
    STATE(20), 1,
      sym_header,
    STATE(33), 1,
      sym_from_file_line,
    STATE(5), 2,
      sym_patch,
      aux_sym_source_file_repeat1,
  [98] = 5,
    ACTIONS(22), 1,
      sym__indicator_nochange,
    ACTIONS(24), 1,
      sym__indicator_added,
    ACTIONS(26), 1,
      sym__indicator_deleted,
    STATE(3), 2,
      sym__diff_line,
      aux_sym_hunk_repeat1,
    STATE(9), 3,
      sym_line_nochange,
      sym_line_added,
      sym_line_deleted,
  [117] = 5,
    ACTIONS(22), 1,
      sym__indicator_nochange,
    ACTIONS(24), 1,
      sym__indicator_added,
    ACTIONS(26), 1,
      sym__indicator_deleted,
    STATE(4), 2,
      sym__diff_line,
      aux_sym_hunk_repeat1,
    STATE(9), 3,
      sym_line_nochange,
      sym_line_added,
      sym_line_deleted,
  [136] = 7,
    ACTIONS(5), 1,
      anon_sym_diff_DASH_DASHgit,
    ACTIONS(7), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      sym_git_comment,
    STATE(20), 1,
      sym_header,
    STATE(33), 1,
      sym_from_file_line,
    STATE(5), 2,
      sym_patch,
      aux_sym_source_file_repeat1,
  [159] = 1,
    ACTIONS(40), 7,
      sym__indicator_nochange,
      sym__indicator_added,
      sym__indicator_deleted,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [169] = 1,
    ACTIONS(42), 7,
      sym__indicator_nochange,
      sym__indicator_added,
      sym__indicator_deleted,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [179] = 1,
    ACTIONS(44), 7,
      sym__indicator_nochange,
      sym__indicator_added,
      sym__indicator_deleted,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [189] = 1,
    ACTIONS(46), 7,
      sym__indicator_nochange,
      sym__indicator_added,
      sym__indicator_deleted,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [199] = 1,
    ACTIONS(48), 7,
      sym__indicator_nochange,
      sym__indicator_added,
      sym__indicator_deleted,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [209] = 1,
    ACTIONS(50), 7,
      sym__indicator_nochange,
      sym__indicator_added,
      sym__indicator_deleted,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [219] = 4,
    ACTIONS(54), 1,
      anon_sym_AT_AT,
    STATE(27), 1,
      sym_hunk_info,
    STATE(16), 2,
      sym_hunk,
      aux_sym_patch_repeat1,
    ACTIONS(52), 3,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
  [235] = 4,
    ACTIONS(58), 1,
      anon_sym_AT_AT,
    STATE(27), 1,
      sym_hunk_info,
    STATE(16), 2,
      sym_hunk,
      aux_sym_patch_repeat1,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
  [251] = 1,
    ACTIONS(61), 7,
      sym__indicator_nochange,
      sym__indicator_added,
      sym__indicator_deleted,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [261] = 4,
    ACTIONS(54), 1,
      anon_sym_AT_AT,
    STATE(27), 1,
      sym_hunk_info,
    STATE(16), 2,
      sym_hunk,
      aux_sym_patch_repeat1,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
  [277] = 4,
    ACTIONS(65), 1,
      anon_sym_newfilemode,
    ACTIONS(67), 1,
      anon_sym_index,
    STATE(24), 1,
      sym__git_index,
    STATE(51), 2,
      sym_git_index_added,
      sym_git_index_changed,
  [291] = 3,
    ACTIONS(54), 1,
      anon_sym_AT_AT,
    STATE(27), 1,
      sym_hunk_info,
    STATE(15), 2,
      sym_hunk,
      aux_sym_patch_repeat1,
  [302] = 3,
    ACTIONS(54), 1,
      anon_sym_AT_AT,
    STATE(27), 1,
      sym_hunk_info,
    STATE(18), 2,
      sym_hunk,
      aux_sym_patch_repeat1,
  [313] = 4,
    ACTIONS(69), 1,
      anon_sym_LF,
    ACTIONS(71), 1,
      aux_sym_from_file_line_token1,
    ACTIONS(73), 1,
      aux_sym_from_file_modification_time_token1,
    STATE(45), 1,
      sym_from_file_modification_time,
  [326] = 3,
    ACTIONS(75), 1,
      anon_sym_LF,
    ACTIONS(77), 1,
      aux_sym_body_token1,
    STATE(62), 1,
      sym_body,
  [336] = 3,
    ACTIONS(7), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(21), 1,
      sym_header,
    STATE(33), 1,
      sym_from_file_line,
  [346] = 3,
    ACTIONS(73), 1,
      aux_sym_from_file_modification_time_token1,
    ACTIONS(79), 1,
      anon_sym_LF,
    STATE(53), 1,
      sym_from_file_modification_time,
  [356] = 3,
    ACTIONS(77), 1,
      aux_sym_body_token1,
    ACTIONS(81), 1,
      anon_sym_LF,
    STATE(64), 1,
      sym_body,
  [366] = 3,
    ACTIONS(83), 1,
      anon_sym_LF,
    ACTIONS(85), 1,
      aux_sym_body_token1,
    STATE(74), 1,
      sym_hunk_comment,
  [376] = 3,
    ACTIONS(77), 1,
      aux_sym_body_token1,
    ACTIONS(87), 1,
      anon_sym_LF,
    STATE(60), 1,
      sym_body,
  [386] = 1,
    ACTIONS(89), 2,
      anon_sym_newfilemode,
      anon_sym_index,
  [391] = 1,
    ACTIONS(91), 2,
      anon_sym_LF,
      aux_sym_body_token1,
  [396] = 2,
    ACTIONS(93), 1,
      aux_sym_hunk_location_token1,
    STATE(89), 1,
      sym_hunk_length,
  [403] = 2,
    ACTIONS(95), 1,
      aux_sym_from_file_line_token1,
    ACTIONS(97), 1,
      anon_sym_COMMA,
  [410] = 2,
    ACTIONS(99), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(57), 1,
      sym_to_file_line,
  [417] = 2,
    ACTIONS(101), 1,
      anon_sym_DASH,
    STATE(48), 1,
      sym_hunk_range_old,
  [424] = 2,
    ACTIONS(103), 1,
      aux_sym_hunk_location_token1,
    STATE(32), 1,
      sym_hunk_location,
  [431] = 2,
    ACTIONS(93), 1,
      aux_sym_hunk_location_token1,
    STATE(83), 1,
      sym_hunk_length,
  [438] = 2,
    ACTIONS(105), 1,
      aux_sym_from_file_modification_time_token1,
    STATE(80), 1,
      sym_to_file_modification_time,
  [445] = 2,
    ACTIONS(107), 1,
      anon_sym_PLUS,
    STATE(75), 1,
      sym_hunk_range_new,
  [452] = 2,
    ACTIONS(109), 1,
      aux_sym_from_file_line_token1,
    ACTIONS(111), 1,
      anon_sym_COMMA,
  [459] = 1,
    ACTIONS(113), 2,
      aux_sym_from_file_line_token1,
      anon_sym_COMMA,
  [464] = 2,
    ACTIONS(103), 1,
      aux_sym_hunk_location_token1,
    STATE(39), 1,
      sym_hunk_location,
  [471] = 2,
    ACTIONS(115), 1,
      anon_sym_LF,
    ACTIONS(117), 1,
      anon_sym_TAB,
  [478] = 1,
    ACTIONS(119), 1,
      aux_sym_git_index_added_token1,
  [482] = 1,
    ACTIONS(121), 1,
      anon_sym_,
  [486] = 1,
    ACTIONS(123), 1,
      aux_sym_from_file_line_token1,
  [490] = 1,
    ACTIONS(125), 1,
      anon_sym_index,
  [494] = 1,
    ACTIONS(127), 1,
      aux_sym_from_file_line_token1,
  [498] = 1,
    ACTIONS(129), 1,
      aux_sym_from_file_line_token1,
  [502] = 1,
    ACTIONS(131), 1,
      sym__filename_git_command,
  [506] = 1,
    ACTIONS(133), 1,
      aux_sym_from_file_line_token1,
  [510] = 1,
    ACTIONS(135), 1,
      anon_sym_DASH_DASH_DASH,
  [514] = 1,
    ACTIONS(137), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [518] = 1,
    ACTIONS(139), 1,
      aux_sym_from_file_line_token1,
  [522] = 1,
    ACTIONS(141), 1,
      anon_sym_LF,
  [526] = 1,
    ACTIONS(143), 1,
      aux_sym_git_index_added_token2,
  [530] = 1,
    ACTIONS(145), 1,
      anon_sym_LF,
  [534] = 1,
    ACTIONS(147), 1,
      anon_sym_AT_AT,
  [538] = 1,
    ACTIONS(149), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [542] = 1,
    ACTIONS(151), 1,
      anon_sym_LF,
  [546] = 1,
    ACTIONS(153), 1,
      anon_sym_LF,
  [550] = 1,
    ACTIONS(155), 1,
      aux_sym_git_index_added_token2,
  [554] = 1,
    ACTIONS(157), 1,
      anon_sym_LF,
  [558] = 1,
    ACTIONS(159), 1,
      aux_sym_git_index_added_token1,
  [562] = 1,
    ACTIONS(161), 1,
      anon_sym_LF,
  [566] = 1,
    ACTIONS(163), 1,
      sym_filename,
  [570] = 1,
    ACTIONS(165), 1,
      aux_sym_from_file_line_token1,
  [574] = 1,
    ACTIONS(167), 1,
      anon_sym_AT_AT,
  [578] = 1,
    ACTIONS(169), 1,
      anon_sym_LF,
  [582] = 1,
    ACTIONS(171), 1,
      anon_sym_LF,
  [586] = 1,
    ACTIONS(173), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [590] = 1,
    ACTIONS(175), 1,
      anon_sym_DASH_DASH_DASH,
  [594] = 1,
    ACTIONS(177), 1,
      anon_sym_DASH_DASH_DASH,
  [598] = 1,
    ACTIONS(179), 1,
      sym_filename,
  [602] = 1,
    ACTIONS(181), 1,
      anon_sym_LF,
  [606] = 1,
    ACTIONS(183), 1,
      aux_sym_from_file_line_token1,
  [610] = 1,
    ACTIONS(185), 1,
      anon_sym_LF,
  [614] = 1,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
  [618] = 1,
    ACTIONS(189), 1,
      aux_sym_from_file_line_token1,
  [622] = 1,
    ACTIONS(191), 1,
      anon_sym_LF,
  [626] = 1,
    ACTIONS(193), 1,
      anon_sym_LF,
  [630] = 1,
    ACTIONS(195), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [634] = 1,
    ACTIONS(197), 1,
      aux_sym_from_file_line_token1,
  [638] = 1,
    ACTIONS(199), 1,
      aux_sym_from_file_line_token1,
  [642] = 1,
    ACTIONS(201), 1,
      anon_sym_,
  [646] = 1,
    ACTIONS(203), 1,
      anon_sym_AT_AT,
  [650] = 1,
    ACTIONS(205), 1,
      anon_sym_AT_AT,
  [654] = 1,
    ACTIONS(207), 1,
      anon_sym_LF,
  [658] = 1,
    ACTIONS(209), 1,
      sym__filename_git_command,
  [662] = 1,
    ACTIONS(211), 1,
      aux_sym_from_file_line_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 98,
  [SMALL_STATE(7)] = 117,
  [SMALL_STATE(8)] = 136,
  [SMALL_STATE(9)] = 159,
  [SMALL_STATE(10)] = 169,
  [SMALL_STATE(11)] = 179,
  [SMALL_STATE(12)] = 189,
  [SMALL_STATE(13)] = 199,
  [SMALL_STATE(14)] = 209,
  [SMALL_STATE(15)] = 219,
  [SMALL_STATE(16)] = 235,
  [SMALL_STATE(17)] = 251,
  [SMALL_STATE(18)] = 261,
  [SMALL_STATE(19)] = 277,
  [SMALL_STATE(20)] = 291,
  [SMALL_STATE(21)] = 302,
  [SMALL_STATE(22)] = 313,
  [SMALL_STATE(23)] = 326,
  [SMALL_STATE(24)] = 336,
  [SMALL_STATE(25)] = 346,
  [SMALL_STATE(26)] = 356,
  [SMALL_STATE(27)] = 366,
  [SMALL_STATE(28)] = 376,
  [SMALL_STATE(29)] = 386,
  [SMALL_STATE(30)] = 391,
  [SMALL_STATE(31)] = 396,
  [SMALL_STATE(32)] = 403,
  [SMALL_STATE(33)] = 410,
  [SMALL_STATE(34)] = 417,
  [SMALL_STATE(35)] = 424,
  [SMALL_STATE(36)] = 431,
  [SMALL_STATE(37)] = 438,
  [SMALL_STATE(38)] = 445,
  [SMALL_STATE(39)] = 452,
  [SMALL_STATE(40)] = 459,
  [SMALL_STATE(41)] = 464,
  [SMALL_STATE(42)] = 471,
  [SMALL_STATE(43)] = 478,
  [SMALL_STATE(44)] = 482,
  [SMALL_STATE(45)] = 486,
  [SMALL_STATE(46)] = 490,
  [SMALL_STATE(47)] = 494,
  [SMALL_STATE(48)] = 498,
  [SMALL_STATE(49)] = 502,
  [SMALL_STATE(50)] = 506,
  [SMALL_STATE(51)] = 510,
  [SMALL_STATE(52)] = 514,
  [SMALL_STATE(53)] = 518,
  [SMALL_STATE(54)] = 522,
  [SMALL_STATE(55)] = 526,
  [SMALL_STATE(56)] = 530,
  [SMALL_STATE(57)] = 534,
  [SMALL_STATE(58)] = 538,
  [SMALL_STATE(59)] = 542,
  [SMALL_STATE(60)] = 546,
  [SMALL_STATE(61)] = 550,
  [SMALL_STATE(62)] = 554,
  [SMALL_STATE(63)] = 558,
  [SMALL_STATE(64)] = 562,
  [SMALL_STATE(65)] = 566,
  [SMALL_STATE(66)] = 570,
  [SMALL_STATE(67)] = 574,
  [SMALL_STATE(68)] = 578,
  [SMALL_STATE(69)] = 582,
  [SMALL_STATE(70)] = 586,
  [SMALL_STATE(71)] = 590,
  [SMALL_STATE(72)] = 594,
  [SMALL_STATE(73)] = 598,
  [SMALL_STATE(74)] = 602,
  [SMALL_STATE(75)] = 606,
  [SMALL_STATE(76)] = 610,
  [SMALL_STATE(77)] = 614,
  [SMALL_STATE(78)] = 618,
  [SMALL_STATE(79)] = 622,
  [SMALL_STATE(80)] = 626,
  [SMALL_STATE(81)] = 630,
  [SMALL_STATE(82)] = 634,
  [SMALL_STATE(83)] = 638,
  [SMALL_STATE(84)] = 642,
  [SMALL_STATE(85)] = 646,
  [SMALL_STATE(86)] = 650,
  [SMALL_STATE(87)] = 654,
  [SMALL_STATE(88)] = 658,
  [SMALL_STATE(89)] = 662,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hunk_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hunk_repeat1, 2), SHIFT_REPEAT(28),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hunk_repeat1, 2), SHIFT_REPEAT(23),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hunk_repeat1, 2), SHIFT_REPEAT(26),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk, 3),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk, 4),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__diff_line, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_deleted, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_added, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_nochange, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_deleted, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_nochange, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patch, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_patch_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_patch_repeat1, 2), SHIFT_REPEAT(50),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_added, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patch, 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_comment, 5, .production_id = 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_info, 7),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_range_new, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_range_old, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_location, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__git_index, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_file_line, 5),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_file_line, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_file_modification_time, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_file_line, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_file_line, 6),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_index_added, 5),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_index_changed, 5),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_comment, 1),
  [187] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_file_modification_time, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_file_line, 7),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_length, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_range_old, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_file_line, 6),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_range_new, 4),
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
