#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 1

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
  anon_sym_PLUS = 13,
  sym_filename = 14,
  aux_sym_from_file_token1 = 15,
  aux_sym_from_file_modification_time_token1 = 16,
  aux_sym_hunk_info_old_token1 = 17,
  aux_sym_body_token1 = 18,
  sym_indicator_nochange = 19,
  sym_indicator_added = 20,
  sym_indicator_deleted = 21,
  sym_source_file = 22,
  sym_patch = 23,
  sym_git_comment = 24,
  sym_git_index = 25,
  sym_header = 26,
  sym_from_file_line = 27,
  sym_to_file_line = 28,
  sym_hunk = 29,
  sym_hunk_info = 30,
  sym__diff_line = 31,
  sym_line_nochange = 32,
  sym_line_added = 33,
  sym_line_deleted = 34,
  sym_from_file = 35,
  sym_to_file = 36,
  sym_from_file_modification_time = 37,
  sym_to_file_modification_time = 38,
  sym_hunk_info_old = 39,
  sym_hunk_info_new = 40,
  sym_body = 41,
  sym_comments = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_patch_repeat1 = 44,
  aux_sym_hunk_repeat1 = 45,
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
  [anon_sym_PLUS] = "+",
  [sym_filename] = "filename",
  [aux_sym_from_file_token1] = "from_file_token1",
  [aux_sym_from_file_modification_time_token1] = "from_file_modification_time_token1",
  [aux_sym_hunk_info_old_token1] = "hunk_info_old_token1",
  [aux_sym_body_token1] = "body_token1",
  [sym_indicator_nochange] = "indicator_nochange",
  [sym_indicator_added] = "indicator_added",
  [sym_indicator_deleted] = "indicator_deleted",
  [sym_source_file] = "source_file",
  [sym_patch] = "patch",
  [sym_git_comment] = "git_comment",
  [sym_git_index] = "git_index",
  [sym_header] = "header",
  [sym_from_file_line] = "from_file_line",
  [sym_to_file_line] = "to_file_line",
  [sym_hunk] = "hunk",
  [sym_hunk_info] = "hunk_info",
  [sym__diff_line] = "_diff_line",
  [sym_line_nochange] = "line_nochange",
  [sym_line_added] = "line_added",
  [sym_line_deleted] = "line_deleted",
  [sym_from_file] = "from_file",
  [sym_to_file] = "to_file",
  [sym_from_file_modification_time] = "from_file_modification_time",
  [sym_to_file_modification_time] = "to_file_modification_time",
  [sym_hunk_info_old] = "hunk_info_old",
  [sym_hunk_info_new] = "hunk_info_new",
  [sym_body] = "body",
  [sym_comments] = "comments",
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
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_filename] = sym_filename,
  [aux_sym_from_file_token1] = aux_sym_from_file_token1,
  [aux_sym_from_file_modification_time_token1] = aux_sym_from_file_modification_time_token1,
  [aux_sym_hunk_info_old_token1] = aux_sym_hunk_info_old_token1,
  [aux_sym_body_token1] = aux_sym_body_token1,
  [sym_indicator_nochange] = sym_indicator_nochange,
  [sym_indicator_added] = sym_indicator_added,
  [sym_indicator_deleted] = sym_indicator_deleted,
  [sym_source_file] = sym_source_file,
  [sym_patch] = sym_patch,
  [sym_git_comment] = sym_git_comment,
  [sym_git_index] = sym_git_index,
  [sym_header] = sym_header,
  [sym_from_file_line] = sym_from_file_line,
  [sym_to_file_line] = sym_to_file_line,
  [sym_hunk] = sym_hunk,
  [sym_hunk_info] = sym_hunk_info,
  [sym__diff_line] = sym__diff_line,
  [sym_line_nochange] = sym_line_nochange,
  [sym_line_added] = sym_line_added,
  [sym_line_deleted] = sym_line_deleted,
  [sym_from_file] = sym_from_file,
  [sym_to_file] = sym_to_file,
  [sym_from_file_modification_time] = sym_from_file_modification_time,
  [sym_to_file_modification_time] = sym_to_file_modification_time,
  [sym_hunk_info_old] = sym_hunk_info_old,
  [sym_hunk_info_new] = sym_hunk_info_new,
  [sym_body] = sym_body,
  [sym_comments] = sym_comments,
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_from_file_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_file_modification_time_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hunk_info_old_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_indicator_nochange] = {
    .visible = true,
    .named = true,
  },
  [sym_indicator_added] = {
    .visible = true,
    .named = true,
  },
  [sym_indicator_deleted] = {
    .visible = true,
    .named = true,
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
  [sym_from_file] = {
    .visible = true,
    .named = true,
  },
  [sym_to_file] = {
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
  [sym_hunk_info_old] = {
    .visible = true,
    .named = true,
  },
  [sym_hunk_info_new] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_comments] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(91);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(106);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\r') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 12:
      if (lookahead == '+') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '+') ADVANCE(105);
      END_STATE();
    case 14:
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 15:
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '.') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == ',') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == ',') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 19:
      if (lookahead == ',') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == ',') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == ',') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == ',') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == ',') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == ',') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == ',') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == ',') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == ',') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(102);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(58);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(60);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(88);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(63);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(71);
      END_STATE();
    case 38:
      if (lookahead == '@') ADVANCE(107);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 41:
      if (lookahead == 'f') ADVANCE(10);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 48:
      if (lookahead == 'x') ADVANCE(5);
      END_STATE();
    case 49:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(49)
      END_STATE();
    case 50:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(72);
      END_STATE();
    case 51:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 89:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 90:
      if (eof) ADVANCE(91);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(90)
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_diff_DASH_DASHgit);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(106);
      if (lookahead == '\n') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_git_index_token1);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_git_index_token2);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_git_index_token2);
      if (lookahead == ',') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_from_file_line_token1);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_from_file_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(106);
      if (lookahead == '\n') ADVANCE(94);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(13);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_from_file_token1);
      if (lookahead == ' ') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_from_file_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_from_file_modification_time_token1);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_hunk_info_old_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_body_token1);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_body_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 90},
  [2] = {.lex_state = 90, .external_lex_state = 1},
  [3] = {.lex_state = 90, .external_lex_state = 1},
  [4] = {.lex_state = 90},
  [5] = {.lex_state = 0, .external_lex_state = 1},
  [6] = {.lex_state = 90},
  [7] = {.lex_state = 90, .external_lex_state = 1},
  [8] = {.lex_state = 90, .external_lex_state = 1},
  [9] = {.lex_state = 90, .external_lex_state = 1},
  [10] = {.lex_state = 90, .external_lex_state = 1},
  [11] = {.lex_state = 90, .external_lex_state = 1},
  [12] = {.lex_state = 90, .external_lex_state = 1},
  [13] = {.lex_state = 90},
  [14] = {.lex_state = 90},
  [15] = {.lex_state = 90},
  [16] = {.lex_state = 90, .external_lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0, .external_lex_state = 1},
  [22] = {.lex_state = 0, .external_lex_state = 1},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 90},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 90},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 90},
  [35] = {.lex_state = 90},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 49},
  [39] = {.lex_state = 49},
  [40] = {.lex_state = 90},
  [41] = {.lex_state = 49},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 51},
  [44] = {.lex_state = 90},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 90},
  [52] = {.lex_state = 49},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 49},
  [56] = {.lex_state = 49},
  [57] = {.lex_state = 49},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 14},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 90},
  [64] = {.lex_state = 90},
  [65] = {.lex_state = 14},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 90},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 49},
  [72] = {.lex_state = 49},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 51},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 49},
};

enum {
  ts_external_token_indicator_nochange = 0,
  ts_external_token_indicator_added = 1,
  ts_external_token_indicator_deleted = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_indicator_nochange] = sym_indicator_nochange,
  [ts_external_token_indicator_added] = sym_indicator_added,
  [ts_external_token_indicator_deleted] = sym_indicator_deleted,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_indicator_nochange] = true,
    [ts_external_token_indicator_added] = true,
    [ts_external_token_indicator_deleted] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_diff_DASH_DASHgit] = ACTIONS(1),
    [anon_sym_index] = ACTIONS(1),
    [aux_sym_git_index_token1] = ACTIONS(1),
    [aux_sym_git_index_token2] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [aux_sym_from_file_modification_time_token1] = ACTIONS(1),
    [aux_sym_hunk_info_old_token1] = ACTIONS(1),
    [sym_indicator_nochange] = ACTIONS(1),
    [sym_indicator_added] = ACTIONS(1),
    [sym_indicator_deleted] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(58),
    [sym_patch] = STATE(4),
    [sym_git_comment] = STATE(32),
    [sym_header] = STATE(17),
    [sym_from_file_line] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_diff_DASH_DASHgit] = ACTIONS(5),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      sym_indicator_nochange,
    ACTIONS(14), 1,
      sym_indicator_added,
    ACTIONS(17), 1,
      sym_indicator_deleted,
    STATE(2), 2,
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
    ACTIONS(22), 1,
      sym_indicator_nochange,
    ACTIONS(24), 1,
      sym_indicator_added,
    ACTIONS(26), 1,
      sym_indicator_deleted,
    STATE(2), 2,
      sym__diff_line,
      aux_sym_hunk_repeat1,
    STATE(16), 3,
      sym_line_nochange,
      sym_line_added,
      sym_line_deleted,
    ACTIONS(20), 4,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [50] = 7,
    ACTIONS(5), 1,
      anon_sym_diff_DASH_DASHgit,
    ACTIONS(7), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_header,
    STATE(32), 1,
      sym_git_comment,
    STATE(35), 1,
      sym_from_file_line,
    STATE(6), 2,
      sym_patch,
      aux_sym_source_file_repeat1,
  [73] = 5,
    ACTIONS(22), 1,
      sym_indicator_nochange,
    ACTIONS(24), 1,
      sym_indicator_added,
    ACTIONS(26), 1,
      sym_indicator_deleted,
    STATE(3), 2,
      sym__diff_line,
      aux_sym_hunk_repeat1,
    STATE(16), 3,
      sym_line_nochange,
      sym_line_added,
      sym_line_deleted,
  [92] = 7,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      anon_sym_diff_DASH_DASHgit,
    ACTIONS(35), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(17), 1,
      sym_header,
    STATE(32), 1,
      sym_git_comment,
    STATE(35), 1,
      sym_from_file_line,
    STATE(6), 2,
      sym_patch,
      aux_sym_source_file_repeat1,
  [115] = 1,
    ACTIONS(38), 7,
      sym_indicator_nochange,
      sym_indicator_added,
      sym_indicator_deleted,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [125] = 1,
    ACTIONS(40), 7,
      sym_indicator_nochange,
      sym_indicator_added,
      sym_indicator_deleted,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [135] = 1,
    ACTIONS(42), 7,
      sym_indicator_nochange,
      sym_indicator_added,
      sym_indicator_deleted,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [145] = 1,
    ACTIONS(44), 7,
      sym_indicator_nochange,
      sym_indicator_added,
      sym_indicator_deleted,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [155] = 1,
    ACTIONS(46), 7,
      sym_indicator_nochange,
      sym_indicator_added,
      sym_indicator_deleted,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [165] = 1,
    ACTIONS(48), 7,
      sym_indicator_nochange,
      sym_indicator_added,
      sym_indicator_deleted,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [175] = 4,
    ACTIONS(52), 1,
      anon_sym_AT_AT,
    STATE(5), 1,
      sym_hunk_info,
    STATE(15), 2,
      sym_hunk,
      aux_sym_patch_repeat1,
    ACTIONS(50), 3,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
  [191] = 4,
    ACTIONS(52), 1,
      anon_sym_AT_AT,
    STATE(5), 1,
      sym_hunk_info,
    STATE(15), 2,
      sym_hunk,
      aux_sym_patch_repeat1,
    ACTIONS(54), 3,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
  [207] = 4,
    ACTIONS(58), 1,
      anon_sym_AT_AT,
    STATE(5), 1,
      sym_hunk_info,
    STATE(15), 2,
      sym_hunk,
      aux_sym_patch_repeat1,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
  [223] = 1,
    ACTIONS(61), 7,
      sym_indicator_nochange,
      sym_indicator_added,
      sym_indicator_deleted,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
  [233] = 3,
    ACTIONS(52), 1,
      anon_sym_AT_AT,
    STATE(5), 1,
      sym_hunk_info,
    STATE(14), 2,
      sym_hunk,
      aux_sym_patch_repeat1,
  [244] = 4,
    ACTIONS(63), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      aux_sym_from_file_line_token1,
    ACTIONS(67), 1,
      aux_sym_from_file_modification_time_token1,
    STATE(41), 1,
      sym_from_file_modification_time,
  [257] = 3,
    ACTIONS(52), 1,
      anon_sym_AT_AT,
    STATE(5), 1,
      sym_hunk_info,
    STATE(13), 2,
      sym_hunk,
      aux_sym_patch_repeat1,
  [268] = 1,
    ACTIONS(69), 3,
      anon_sym_LF,
      aux_sym_from_file_line_token1,
      aux_sym_from_file_modification_time_token1,
  [274] = 1,
    ACTIONS(71), 3,
      sym_indicator_nochange,
      sym_indicator_added,
      sym_indicator_deleted,
  [280] = 1,
    ACTIONS(73), 3,
      sym_indicator_nochange,
      sym_indicator_added,
      sym_indicator_deleted,
  [286] = 3,
    ACTIONS(75), 1,
      anon_sym_LF,
    ACTIONS(77), 1,
      aux_sym_body_token1,
    STATE(77), 1,
      sym_comments,
  [296] = 3,
    ACTIONS(79), 1,
      anon_sym_LF,
    ACTIONS(81), 1,
      aux_sym_body_token1,
    STATE(46), 1,
      sym_body,
  [306] = 3,
    ACTIONS(81), 1,
      aux_sym_body_token1,
    ACTIONS(83), 1,
      anon_sym_LF,
    STATE(47), 1,
      sym_body,
  [316] = 3,
    ACTIONS(81), 1,
      aux_sym_body_token1,
    ACTIONS(85), 1,
      anon_sym_LF,
    STATE(49), 1,
      sym_body,
  [326] = 3,
    ACTIONS(67), 1,
      aux_sym_from_file_modification_time_token1,
    ACTIONS(87), 1,
      anon_sym_LF,
    STATE(52), 1,
      sym_from_file_modification_time,
  [336] = 3,
    ACTIONS(7), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(19), 1,
      sym_header,
    STATE(35), 1,
      sym_from_file_line,
  [346] = 2,
    ACTIONS(89), 1,
      aux_sym_from_file_token1,
    STATE(18), 1,
      sym_from_file,
  [353] = 2,
    ACTIONS(91), 1,
      aux_sym_hunk_info_old_token1,
    STATE(72), 1,
      sym_hunk_info_new,
  [360] = 2,
    ACTIONS(93), 1,
      aux_sym_from_file_modification_time_token1,
    STATE(67), 1,
      sym_to_file_modification_time,
  [367] = 2,
    ACTIONS(95), 1,
      anon_sym_index,
    STATE(28), 1,
      sym_git_index,
  [374] = 2,
    ACTIONS(97), 1,
      aux_sym_from_file_token1,
    STATE(37), 1,
      sym_to_file,
  [381] = 2,
    ACTIONS(99), 1,
      aux_sym_hunk_info_old_token1,
    STATE(56), 1,
      sym_hunk_info_old,
  [388] = 2,
    ACTIONS(101), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(75), 1,
      sym_to_file_line,
  [395] = 1,
    ACTIONS(103), 2,
      anon_sym_LF,
      anon_sym_TAB,
  [400] = 2,
    ACTIONS(105), 1,
      anon_sym_LF,
    ACTIONS(107), 1,
      anon_sym_TAB,
  [407] = 1,
    ACTIONS(109), 1,
      aux_sym_from_file_line_token1,
  [411] = 1,
    ACTIONS(111), 1,
      aux_sym_from_file_line_token1,
  [415] = 1,
    ACTIONS(113), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [419] = 1,
    ACTIONS(115), 1,
      aux_sym_from_file_line_token1,
  [423] = 1,
    ACTIONS(117), 1,
      aux_sym_git_index_token2,
  [427] = 1,
    ACTIONS(119), 1,
      sym_filename,
  [431] = 1,
    ACTIONS(121), 1,
      aux_sym_git_index_token1,
  [435] = 1,
    ACTIONS(123), 1,
      anon_sym_LF,
  [439] = 1,
    ACTIONS(125), 1,
      anon_sym_LF,
  [443] = 1,
    ACTIONS(127), 1,
      anon_sym_LF,
  [447] = 1,
    ACTIONS(129), 1,
      anon_sym_,
  [451] = 1,
    ACTIONS(131), 1,
      anon_sym_LF,
  [455] = 1,
    ACTIONS(133), 1,
      anon_sym_index,
  [459] = 1,
    ACTIONS(135), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [463] = 1,
    ACTIONS(137), 1,
      aux_sym_from_file_line_token1,
  [467] = 1,
    ACTIONS(139), 1,
      anon_sym_LF,
  [471] = 1,
    ACTIONS(141), 1,
      anon_sym_LF,
  [475] = 1,
    ACTIONS(143), 1,
      aux_sym_from_file_line_token1,
  [479] = 1,
    ACTIONS(145), 1,
      aux_sym_from_file_line_token1,
  [483] = 1,
    ACTIONS(147), 1,
      aux_sym_from_file_line_token1,
  [487] = 1,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
  [491] = 1,
    ACTIONS(151), 1,
      anon_sym_LF,
  [495] = 1,
    ACTIONS(153), 1,
      anon_sym_AT_AT,
  [499] = 1,
    ACTIONS(155), 1,
      anon_sym_DASH,
  [503] = 1,
    ACTIONS(157), 1,
      anon_sym_LF,
  [507] = 1,
    ACTIONS(159), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [511] = 1,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH_DASH,
  [515] = 1,
    ACTIONS(163), 1,
      anon_sym_PLUS,
  [519] = 1,
    ACTIONS(165), 1,
      anon_sym_LF,
  [523] = 1,
    ACTIONS(167), 1,
      anon_sym_LF,
  [527] = 1,
    ACTIONS(169), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [531] = 1,
    ACTIONS(171), 1,
      anon_sym_,
  [535] = 1,
    ACTIONS(173), 1,
      anon_sym_AT_AT,
  [539] = 1,
    ACTIONS(175), 1,
      aux_sym_from_file_line_token1,
  [543] = 1,
    ACTIONS(177), 1,
      aux_sym_from_file_line_token1,
  [547] = 1,
    ACTIONS(179), 1,
      anon_sym_AT_AT,
  [551] = 1,
    ACTIONS(181), 1,
      sym_filename,
  [555] = 1,
    ACTIONS(183), 1,
      anon_sym_AT_AT,
  [559] = 1,
    ACTIONS(185), 1,
      anon_sym_LF,
  [563] = 1,
    ACTIONS(187), 1,
      anon_sym_LF,
  [567] = 1,
    ACTIONS(189), 1,
      aux_sym_from_file_line_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 73,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 115,
  [SMALL_STATE(8)] = 125,
  [SMALL_STATE(9)] = 135,
  [SMALL_STATE(10)] = 145,
  [SMALL_STATE(11)] = 155,
  [SMALL_STATE(12)] = 165,
  [SMALL_STATE(13)] = 175,
  [SMALL_STATE(14)] = 191,
  [SMALL_STATE(15)] = 207,
  [SMALL_STATE(16)] = 223,
  [SMALL_STATE(17)] = 233,
  [SMALL_STATE(18)] = 244,
  [SMALL_STATE(19)] = 257,
  [SMALL_STATE(20)] = 268,
  [SMALL_STATE(21)] = 274,
  [SMALL_STATE(22)] = 280,
  [SMALL_STATE(23)] = 286,
  [SMALL_STATE(24)] = 296,
  [SMALL_STATE(25)] = 306,
  [SMALL_STATE(26)] = 316,
  [SMALL_STATE(27)] = 326,
  [SMALL_STATE(28)] = 336,
  [SMALL_STATE(29)] = 346,
  [SMALL_STATE(30)] = 353,
  [SMALL_STATE(31)] = 360,
  [SMALL_STATE(32)] = 367,
  [SMALL_STATE(33)] = 374,
  [SMALL_STATE(34)] = 381,
  [SMALL_STATE(35)] = 388,
  [SMALL_STATE(36)] = 395,
  [SMALL_STATE(37)] = 400,
  [SMALL_STATE(38)] = 407,
  [SMALL_STATE(39)] = 411,
  [SMALL_STATE(40)] = 415,
  [SMALL_STATE(41)] = 419,
  [SMALL_STATE(42)] = 423,
  [SMALL_STATE(43)] = 427,
  [SMALL_STATE(44)] = 431,
  [SMALL_STATE(45)] = 435,
  [SMALL_STATE(46)] = 439,
  [SMALL_STATE(47)] = 443,
  [SMALL_STATE(48)] = 447,
  [SMALL_STATE(49)] = 451,
  [SMALL_STATE(50)] = 455,
  [SMALL_STATE(51)] = 459,
  [SMALL_STATE(52)] = 463,
  [SMALL_STATE(53)] = 467,
  [SMALL_STATE(54)] = 471,
  [SMALL_STATE(55)] = 475,
  [SMALL_STATE(56)] = 479,
  [SMALL_STATE(57)] = 483,
  [SMALL_STATE(58)] = 487,
  [SMALL_STATE(59)] = 491,
  [SMALL_STATE(60)] = 495,
  [SMALL_STATE(61)] = 499,
  [SMALL_STATE(62)] = 503,
  [SMALL_STATE(63)] = 507,
  [SMALL_STATE(64)] = 511,
  [SMALL_STATE(65)] = 515,
  [SMALL_STATE(66)] = 519,
  [SMALL_STATE(67)] = 523,
  [SMALL_STATE(68)] = 527,
  [SMALL_STATE(69)] = 531,
  [SMALL_STATE(70)] = 535,
  [SMALL_STATE(71)] = 539,
  [SMALL_STATE(72)] = 543,
  [SMALL_STATE(73)] = 547,
  [SMALL_STATE(74)] = 551,
  [SMALL_STATE(75)] = 555,
  [SMALL_STATE(76)] = 559,
  [SMALL_STATE(77)] = 563,
  [SMALL_STATE(78)] = 567,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hunk_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hunk_repeat1, 2), SHIFT_REPEAT(24),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hunk_repeat1, 2), SHIFT_REPEAT(25),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hunk_repeat1, 2), SHIFT_REPEAT(26),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk, 2),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_deleted, 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_added, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_nochange, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_deleted, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_added, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_nochange, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patch, 4),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patch, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_patch_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_patch_repeat1, 2), SHIFT_REPEAT(57),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__diff_line, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_file, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_info, 11),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_info, 10),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_to_file, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_file_modification_time, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_file_line, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_comment, 5),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_file_line, 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_info_old, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [149] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_file_line, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_file_line, 6),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_index, 5),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_file_modification_time, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_file_line, 7),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_file_line, 6),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_info_new, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comments, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
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
