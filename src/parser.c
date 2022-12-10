#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_diff_DASH_DASHgit = 1,
  anon_sym_ = 2,
  anon_sym_LF = 3,
  anon_sym_index = 4,
  aux_sym_git_index_token1 = 5,
  aux_sym_git_index_token2 = 6,
  anon_sym_DASH_DASH_DASH = 7,
  aux_sym_from_file_line_token1 = 8,
  anon_sym_PLUS_PLUS_PLUS = 9,
  anon_sym_TAB = 10,
  anon_sym_AT_AT = 11,
  anon_sym_DASH = 12,
  anon_sym_COMMA = 13,
  anon_sym_PLUS = 14,
  sym__filename_git_command = 15,
  sym_filename = 16,
  aux_sym_from_file_modification_time_token1 = 17,
  aux_sym_hunk_location_token1 = 18,
  aux_sym_body_token1 = 19,
  sym__indicator_nochange = 20,
  sym__indicator_added = 21,
  sym__indicator_deleted = 22,
  sym_source_file = 23,
  sym_patch = 24,
  sym_git_comment = 25,
  sym_git_index = 26,
  sym_header = 27,
  sym_from_file_line = 28,
  sym_to_file_line = 29,
  sym_hunk = 30,
  sym_hunk_info = 31,
  sym_hunk_range_old = 32,
  sym_hunk_range_new = 33,
  sym__diff_line = 34,
  sym_line_nochange = 35,
  sym_line_added = 36,
  sym_line_deleted = 37,
  sym_from_file_modification_time = 38,
  sym_to_file_modification_time = 39,
  sym_hunk_location = 40,
  sym_hunk_length = 41,
  sym_body = 42,
  sym_hunk_comment = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_patch_repeat1 = 45,
  aux_sym_hunk_repeat1 = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_diff_DASH_DASHgit] = "diff --git ",
  [anon_sym_] = " ",
  [anon_sym_LF] = "\n",
  [anon_sym_index] = "index ",
  [aux_sym_git_index_token1] = "git_index_token1",
  [aux_sym_git_index_token2] = "git_index_token2",
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
  [aux_sym_hunk_repeat1] = "hunk_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_diff_DASH_DASHgit] = anon_sym_diff_DASH_DASHgit,
  [anon_sym_] = anon_sym_,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_index] = anon_sym_index,
  [aux_sym_git_index_token1] = aux_sym_git_index_token1,
  [aux_sym_git_index_token2] = aux_sym_git_index_token2,
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
  [anon_sym_index] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_git_index_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_git_index_token2] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(70);
      if (lookahead == '\t') ADVANCE(83);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == '+') ADVANCE(89);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(82);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ' ') ADVANCE(72);
      if (lookahead == '+') ADVANCE(8);
      if (lookahead == '-') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 8:
      if (lookahead == '+') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '+') ADVANCE(81);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(79);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(40);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(65);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(44);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == '@') ADVANCE(84);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(6);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 31:
      if (lookahead == 'x') ADVANCE(3);
      END_STATE();
    case 32:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 66:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(90);
      END_STATE();
    case 67:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(91);
      END_STATE();
    case 68:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 69:
      if (eof) ADVANCE(70);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_diff_DASH_DASHgit);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_git_index_token1);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_git_index_token2);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_git_index_token2);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_from_file_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(9);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__filename_git_command);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_from_file_modification_time_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_hunk_location_token1);
      if (lookahead == '-') ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_hunk_location_token1);
      if (lookahead == '.') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_hunk_location_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_hunk_location_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_hunk_location_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_hunk_location_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_hunk_location_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_body_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 69},
  [2] = {.lex_state = 69, .external_lex_state = 1},
  [3] = {.lex_state = 69, .external_lex_state = 1},
  [4] = {.lex_state = 69, .external_lex_state = 1},
  [5] = {.lex_state = 69},
  [6] = {.lex_state = 0, .external_lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 69},
  [9] = {.lex_state = 69},
  [10] = {.lex_state = 69, .external_lex_state = 1},
  [11] = {.lex_state = 69, .external_lex_state = 1},
  [12] = {.lex_state = 69, .external_lex_state = 1},
  [13] = {.lex_state = 69, .external_lex_state = 1},
  [14] = {.lex_state = 69, .external_lex_state = 1},
  [15] = {.lex_state = 69, .external_lex_state = 1},
  [16] = {.lex_state = 69, .external_lex_state = 1},
  [17] = {.lex_state = 69},
  [18] = {.lex_state = 69},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 69},
  [22] = {.lex_state = 69},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 69},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 69},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 69},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 69},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 69},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 69},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 69},
  [44] = {.lex_state = 69},
  [45] = {.lex_state = 69},
  [46] = {.lex_state = 66},
  [47] = {.lex_state = 69},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 69},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 52},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 66},
  [56] = {.lex_state = 67},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 69},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 69},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 69},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 69},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 69},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 69},
  [77] = {.lex_state = 69},
  [78] = {.lex_state = 67},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 69},
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
    [anon_sym_index] = ACTIONS(1),
    [aux_sym_git_index_token1] = ACTIONS(1),
    [aux_sym_git_index_token2] = ACTIONS(1),
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
    [sym_source_file] = STATE(71),
    [sym_patch] = STATE(5),
    [sym_git_comment] = STATE(34),
    [sym_header] = STATE(20),
    [sym_from_file_line] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_diff_DASH_DASHgit] = ACTIONS(5),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      sym__indicator_nochange,
    ACTIONS(13), 1,
      sym__indicator_added,
    ACTIONS(15), 1,
      sym__indicator_deleted,
    STATE(3), 2,
      sym__diff_line,
      aux_sym_hunk_repeat1,
    STATE(16), 3,
      sym_line_nochange,
      sym_line_added,
      sym_line_deleted,
    ACTIONS(9), 4,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [25] = 6,
    ACTIONS(19), 1,
      sym__indicator_nochange,
    ACTIONS(22), 1,
      sym__indicator_added,
    ACTIONS(25), 1,
      sym__indicator_deleted,
    STATE(3), 2,
      sym__diff_line,
      aux_sym_hunk_repeat1,
    STATE(16), 3,
      sym_line_nochange,
      sym_line_added,
      sym_line_deleted,
    ACTIONS(17), 4,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [50] = 6,
    ACTIONS(11), 1,
      sym__indicator_nochange,
    ACTIONS(13), 1,
      sym__indicator_added,
    ACTIONS(15), 1,
      sym__indicator_deleted,
    STATE(3), 2,
      sym__diff_line,
      aux_sym_hunk_repeat1,
    STATE(16), 3,
      sym_line_nochange,
      sym_line_added,
      sym_line_deleted,
    ACTIONS(28), 4,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [75] = 7,
    ACTIONS(5), 1,
      anon_sym_diff_DASH_DASHgit,
    ACTIONS(7), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_header,
    STATE(34), 1,
      sym_git_comment,
    STATE(37), 1,
      sym_from_file_line,
    STATE(8), 2,
      sym_patch,
      aux_sym_source_file_repeat1,
  [98] = 5,
    ACTIONS(11), 1,
      sym__indicator_nochange,
    ACTIONS(13), 1,
      sym__indicator_added,
    ACTIONS(15), 1,
      sym__indicator_deleted,
    STATE(2), 2,
      sym__diff_line,
      aux_sym_hunk_repeat1,
    STATE(16), 3,
      sym_line_nochange,
      sym_line_added,
      sym_line_deleted,
  [117] = 5,
    ACTIONS(11), 1,
      sym__indicator_nochange,
    ACTIONS(13), 1,
      sym__indicator_added,
    ACTIONS(15), 1,
      sym__indicator_deleted,
    STATE(4), 2,
      sym__diff_line,
      aux_sym_hunk_repeat1,
    STATE(16), 3,
      sym_line_nochange,
      sym_line_added,
      sym_line_deleted,
  [136] = 7,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      anon_sym_diff_DASH_DASHgit,
    ACTIONS(37), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(20), 1,
      sym_header,
    STATE(34), 1,
      sym_git_comment,
    STATE(37), 1,
      sym_from_file_line,
    STATE(8), 2,
      sym_patch,
      aux_sym_source_file_repeat1,
  [159] = 4,
    ACTIONS(42), 1,
      anon_sym_AT_AT,
    STATE(23), 1,
      sym_hunk_info,
    STATE(18), 2,
      sym_hunk,
      aux_sym_patch_repeat1,
    ACTIONS(40), 3,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
  [175] = 1,
    ACTIONS(44), 7,
      sym__indicator_nochange,
      sym__indicator_added,
      sym__indicator_deleted,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [185] = 1,
    ACTIONS(46), 7,
      sym__indicator_nochange,
      sym__indicator_added,
      sym__indicator_deleted,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [195] = 1,
    ACTIONS(48), 7,
      sym__indicator_nochange,
      sym__indicator_added,
      sym__indicator_deleted,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [205] = 1,
    ACTIONS(50), 7,
      sym__indicator_nochange,
      sym__indicator_added,
      sym__indicator_deleted,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [215] = 1,
    ACTIONS(52), 7,
      sym__indicator_nochange,
      sym__indicator_added,
      sym__indicator_deleted,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [225] = 1,
    ACTIONS(54), 7,
      sym__indicator_nochange,
      sym__indicator_added,
      sym__indicator_deleted,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [235] = 1,
    ACTIONS(56), 7,
      sym__indicator_nochange,
      sym__indicator_added,
      sym__indicator_deleted,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [245] = 4,
    ACTIONS(42), 1,
      anon_sym_AT_AT,
    STATE(23), 1,
      sym_hunk_info,
    STATE(18), 2,
      sym_hunk,
      aux_sym_patch_repeat1,
    ACTIONS(58), 3,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
  [261] = 4,
    ACTIONS(62), 1,
      anon_sym_AT_AT,
    STATE(23), 1,
      sym_hunk_info,
    STATE(18), 2,
      sym_hunk,
      aux_sym_patch_repeat1,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
  [277] = 3,
    ACTIONS(42), 1,
      anon_sym_AT_AT,
    STATE(23), 1,
      sym_hunk_info,
    STATE(9), 2,
      sym_hunk,
      aux_sym_patch_repeat1,
  [288] = 3,
    ACTIONS(42), 1,
      anon_sym_AT_AT,
    STATE(23), 1,
      sym_hunk_info,
    STATE(17), 2,
      sym_hunk,
      aux_sym_patch_repeat1,
  [299] = 4,
    ACTIONS(65), 1,
      anon_sym_LF,
    ACTIONS(67), 1,
      aux_sym_from_file_line_token1,
    ACTIONS(69), 1,
      aux_sym_from_file_modification_time_token1,
    STATE(63), 1,
      sym_from_file_modification_time,
  [312] = 3,
    ACTIONS(7), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(19), 1,
      sym_header,
    STATE(37), 1,
      sym_from_file_line,
  [322] = 3,
    ACTIONS(71), 1,
      anon_sym_LF,
    ACTIONS(73), 1,
      aux_sym_body_token1,
    STATE(81), 1,
      sym_hunk_comment,
  [332] = 3,
    ACTIONS(75), 1,
      anon_sym_LF,
    ACTIONS(77), 1,
      aux_sym_body_token1,
    STATE(42), 1,
      sym_body,
  [342] = 3,
    ACTIONS(77), 1,
      aux_sym_body_token1,
    ACTIONS(79), 1,
      anon_sym_LF,
    STATE(57), 1,
      sym_body,
  [352] = 3,
    ACTIONS(77), 1,
      aux_sym_body_token1,
    ACTIONS(81), 1,
      anon_sym_LF,
    STATE(59), 1,
      sym_body,
  [362] = 3,
    ACTIONS(69), 1,
      aux_sym_from_file_modification_time_token1,
    ACTIONS(83), 1,
      anon_sym_LF,
    STATE(50), 1,
      sym_from_file_modification_time,
  [372] = 2,
    ACTIONS(85), 1,
      aux_sym_hunk_location_token1,
    STATE(33), 1,
      sym_hunk_location,
  [379] = 2,
    ACTIONS(87), 1,
      anon_sym_PLUS,
    STATE(69), 1,
      sym_hunk_range_new,
  [386] = 1,
    ACTIONS(89), 2,
      anon_sym_LF,
      aux_sym_body_token1,
  [391] = 2,
    ACTIONS(91), 1,
      anon_sym_DASH,
    STATE(45), 1,
      sym_hunk_range_old,
  [398] = 2,
    ACTIONS(93), 1,
      aux_sym_hunk_location_token1,
    STATE(83), 1,
      sym_hunk_length,
  [405] = 2,
    ACTIONS(95), 1,
      aux_sym_from_file_line_token1,
    ACTIONS(97), 1,
      anon_sym_COMMA,
  [412] = 2,
    ACTIONS(99), 1,
      anon_sym_index,
    STATE(22), 1,
      sym_git_index,
  [419] = 2,
    ACTIONS(93), 1,
      aux_sym_hunk_location_token1,
    STATE(77), 1,
      sym_hunk_length,
  [426] = 2,
    ACTIONS(101), 1,
      aux_sym_from_file_modification_time_token1,
    STATE(74), 1,
      sym_to_file_modification_time,
  [433] = 2,
    ACTIONS(103), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(68), 1,
      sym_to_file_line,
  [440] = 1,
    ACTIONS(105), 2,
      aux_sym_from_file_line_token1,
      anon_sym_COMMA,
  [445] = 2,
    ACTIONS(107), 1,
      anon_sym_LF,
    ACTIONS(109), 1,
      anon_sym_TAB,
  [452] = 2,
    ACTIONS(85), 1,
      aux_sym_hunk_location_token1,
    STATE(41), 1,
      sym_hunk_location,
  [459] = 2,
    ACTIONS(111), 1,
      aux_sym_from_file_line_token1,
    ACTIONS(113), 1,
      anon_sym_COMMA,
  [466] = 1,
    ACTIONS(115), 1,
      anon_sym_LF,
  [470] = 1,
    ACTIONS(117), 1,
      aux_sym_from_file_line_token1,
  [474] = 1,
    ACTIONS(119), 1,
      aux_sym_git_index_token2,
  [478] = 1,
    ACTIONS(121), 1,
      aux_sym_from_file_line_token1,
  [482] = 1,
    ACTIONS(123), 1,
      sym__filename_git_command,
  [486] = 1,
    ACTIONS(125), 1,
      aux_sym_from_file_line_token1,
  [490] = 1,
    ACTIONS(127), 1,
      anon_sym_index,
  [494] = 1,
    ACTIONS(129), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [498] = 1,
    ACTIONS(131), 1,
      aux_sym_from_file_line_token1,
  [502] = 1,
    ACTIONS(133), 1,
      anon_sym_LF,
  [506] = 1,
    ACTIONS(135), 1,
      anon_sym_LF,
  [510] = 1,
    ACTIONS(137), 1,
      aux_sym_git_index_token1,
  [514] = 1,
    ACTIONS(139), 1,
      anon_sym_LF,
  [518] = 1,
    ACTIONS(141), 1,
      sym__filename_git_command,
  [522] = 1,
    ACTIONS(143), 1,
      sym_filename,
  [526] = 1,
    ACTIONS(145), 1,
      anon_sym_LF,
  [530] = 1,
    ACTIONS(147), 1,
      anon_sym_,
  [534] = 1,
    ACTIONS(149), 1,
      anon_sym_LF,
  [538] = 1,
    ACTIONS(151), 1,
      anon_sym_,
  [542] = 1,
    ACTIONS(153), 1,
      aux_sym_from_file_line_token1,
  [546] = 1,
    ACTIONS(155), 1,
      anon_sym_AT_AT,
  [550] = 1,
    ACTIONS(157), 1,
      aux_sym_from_file_line_token1,
  [554] = 1,
    ACTIONS(159), 1,
      anon_sym_LF,
  [558] = 1,
    ACTIONS(161), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [562] = 1,
    ACTIONS(163), 1,
      anon_sym_DASH_DASH_DASH,
  [566] = 1,
    ACTIONS(165), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [570] = 1,
    ACTIONS(167), 1,
      anon_sym_AT_AT,
  [574] = 1,
    ACTIONS(169), 1,
      aux_sym_from_file_line_token1,
  [578] = 1,
    ACTIONS(171), 1,
      anon_sym_LF,
  [582] = 1,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
  [586] = 1,
    ACTIONS(175), 1,
      aux_sym_from_file_line_token1,
  [590] = 1,
    ACTIONS(177), 1,
      anon_sym_LF,
  [594] = 1,
    ACTIONS(179), 1,
      anon_sym_LF,
  [598] = 1,
    ACTIONS(181), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [602] = 1,
    ACTIONS(183), 1,
      aux_sym_from_file_line_token1,
  [606] = 1,
    ACTIONS(185), 1,
      aux_sym_from_file_line_token1,
  [610] = 1,
    ACTIONS(187), 1,
      sym_filename,
  [614] = 1,
    ACTIONS(189), 1,
      anon_sym_AT_AT,
  [618] = 1,
    ACTIONS(191), 1,
      anon_sym_AT_AT,
  [622] = 1,
    ACTIONS(193), 1,
      anon_sym_LF,
  [626] = 1,
    ACTIONS(195), 1,
      anon_sym_LF,
  [630] = 1,
    ACTIONS(197), 1,
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
  [SMALL_STATE(10)] = 175,
  [SMALL_STATE(11)] = 185,
  [SMALL_STATE(12)] = 195,
  [SMALL_STATE(13)] = 205,
  [SMALL_STATE(14)] = 215,
  [SMALL_STATE(15)] = 225,
  [SMALL_STATE(16)] = 235,
  [SMALL_STATE(17)] = 245,
  [SMALL_STATE(18)] = 261,
  [SMALL_STATE(19)] = 277,
  [SMALL_STATE(20)] = 288,
  [SMALL_STATE(21)] = 299,
  [SMALL_STATE(22)] = 312,
  [SMALL_STATE(23)] = 322,
  [SMALL_STATE(24)] = 332,
  [SMALL_STATE(25)] = 342,
  [SMALL_STATE(26)] = 352,
  [SMALL_STATE(27)] = 362,
  [SMALL_STATE(28)] = 372,
  [SMALL_STATE(29)] = 379,
  [SMALL_STATE(30)] = 386,
  [SMALL_STATE(31)] = 391,
  [SMALL_STATE(32)] = 398,
  [SMALL_STATE(33)] = 405,
  [SMALL_STATE(34)] = 412,
  [SMALL_STATE(35)] = 419,
  [SMALL_STATE(36)] = 426,
  [SMALL_STATE(37)] = 433,
  [SMALL_STATE(38)] = 440,
  [SMALL_STATE(39)] = 445,
  [SMALL_STATE(40)] = 452,
  [SMALL_STATE(41)] = 459,
  [SMALL_STATE(42)] = 466,
  [SMALL_STATE(43)] = 470,
  [SMALL_STATE(44)] = 474,
  [SMALL_STATE(45)] = 478,
  [SMALL_STATE(46)] = 482,
  [SMALL_STATE(47)] = 486,
  [SMALL_STATE(48)] = 490,
  [SMALL_STATE(49)] = 494,
  [SMALL_STATE(50)] = 498,
  [SMALL_STATE(51)] = 502,
  [SMALL_STATE(52)] = 506,
  [SMALL_STATE(53)] = 510,
  [SMALL_STATE(54)] = 514,
  [SMALL_STATE(55)] = 518,
  [SMALL_STATE(56)] = 522,
  [SMALL_STATE(57)] = 526,
  [SMALL_STATE(58)] = 530,
  [SMALL_STATE(59)] = 534,
  [SMALL_STATE(60)] = 538,
  [SMALL_STATE(61)] = 542,
  [SMALL_STATE(62)] = 546,
  [SMALL_STATE(63)] = 550,
  [SMALL_STATE(64)] = 554,
  [SMALL_STATE(65)] = 558,
  [SMALL_STATE(66)] = 562,
  [SMALL_STATE(67)] = 566,
  [SMALL_STATE(68)] = 570,
  [SMALL_STATE(69)] = 574,
  [SMALL_STATE(70)] = 578,
  [SMALL_STATE(71)] = 582,
  [SMALL_STATE(72)] = 586,
  [SMALL_STATE(73)] = 590,
  [SMALL_STATE(74)] = 594,
  [SMALL_STATE(75)] = 598,
  [SMALL_STATE(76)] = 602,
  [SMALL_STATE(77)] = 606,
  [SMALL_STATE(78)] = 610,
  [SMALL_STATE(79)] = 614,
  [SMALL_STATE(80)] = 618,
  [SMALL_STATE(81)] = 622,
  [SMALL_STATE(82)] = 626,
  [SMALL_STATE(83)] = 630,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk, 4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hunk_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hunk_repeat1, 2), SHIFT_REPEAT(24),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hunk_repeat1, 2), SHIFT_REPEAT(25),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hunk_repeat1, 2), SHIFT_REPEAT(26),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk, 3),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patch, 4),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_deleted, 3),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_added, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_nochange, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_deleted, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_added, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_nochange, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__diff_line, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patch, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_patch_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_patch_repeat1, 2), SHIFT_REPEAT(47),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_info, 7),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_range_new, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_location, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_range_old, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_file_modification_time, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_comment, 5, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_file_line, 5),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_file_line, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_file_line, 6),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_index, 5),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_file_line, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [173] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_file_modification_time, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_file_line, 7),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_length, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_range_old, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_file_line, 6),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_comment, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_range_new, 4),
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
