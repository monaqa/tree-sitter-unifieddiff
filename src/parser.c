#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 61
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_DASH_DASH_DASH = 1,
  aux_sym_from_file_line_token1 = 2,
  anon_sym_LF = 3,
  anon_sym_PLUS_PLUS_PLUS = 4,
  anon_sym_TAB = 5,
  anon_sym_AT_AT = 6,
  anon_sym_DASH = 7,
  anon_sym_PLUS = 8,
  anon_sym_ = 9,
  aux_sym_from_file_token1 = 10,
  aux_sym_from_file_modification_time_token1 = 11,
  aux_sym_hunk_info_old_token1 = 12,
  sym_body = 13,
  sym_source_file = 14,
  sym_patch = 15,
  sym_header = 16,
  sym_from_file_line = 17,
  sym_to_file_line = 18,
  sym_hunk = 19,
  sym_hunk_info = 20,
  sym__diff_line = 21,
  sym_line_nochange = 22,
  sym_line_added = 23,
  sym_line_deleted = 24,
  sym_from_file = 25,
  sym_to_file = 26,
  sym_from_file_modification_time = 27,
  sym_to_file_modification_time = 28,
  sym_hunk_info_old = 29,
  sym_hunk_info_new = 30,
  aux_sym_source_file_repeat1 = 31,
  aux_sym_patch_repeat1 = 32,
  aux_sym_hunk_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DASH_DASH_DASH] = "---",
  [aux_sym_from_file_line_token1] = "from_file_line_token1",
  [anon_sym_LF] = "\n",
  [anon_sym_PLUS_PLUS_PLUS] = "+++",
  [anon_sym_TAB] = "\t",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_] = " ",
  [aux_sym_from_file_token1] = "from_file_token1",
  [aux_sym_from_file_modification_time_token1] = "from_file_modification_time_token1",
  [aux_sym_hunk_info_old_token1] = "hunk_info_old_token1",
  [sym_body] = "body",
  [sym_source_file] = "source_file",
  [sym_patch] = "patch",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_patch_repeat1] = "patch_repeat1",
  [aux_sym_hunk_repeat1] = "hunk_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
  [aux_sym_from_file_line_token1] = aux_sym_from_file_line_token1,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_PLUS_PLUS_PLUS] = anon_sym_PLUS_PLUS_PLUS,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_] = anon_sym_,
  [aux_sym_from_file_token1] = aux_sym_from_file_token1,
  [aux_sym_from_file_modification_time_token1] = aux_sym_from_file_modification_time_token1,
  [aux_sym_hunk_info_old_token1] = aux_sym_hunk_info_old_token1,
  [sym_body] = sym_body,
  [sym_source_file] = sym_source_file,
  [sym_patch] = sym_patch,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_patch_repeat1] = aux_sym_patch_repeat1,
  [aux_sym_hunk_repeat1] = aux_sym_hunk_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_from_file_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
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
  [sym_body] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(46);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(55);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '+') ADVANCE(54);
      END_STATE();
    case 11:
      if (lookahead == '+') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == ',') ADVANCE(25);
      if (lookahead == '-') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == ',') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == ',') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == ',') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == ',') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == '@') ADVANCE(56);
      END_STATE();
    case 23:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(23)
      END_STATE();
    case 24:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 44:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 45:
      if (eof) ADVANCE(46);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(45)
      END_STATE();
    case 46:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_from_file_line_token1);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_from_file_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(55);
      if (lookahead == '\n') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(55);
      if (lookahead == '\n') ADVANCE(50);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(17);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_from_file_token1);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_from_file_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_from_file_modification_time_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_hunk_info_old_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_body);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_body);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 45},
  [3] = {.lex_state = 45},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 45},
  [6] = {.lex_state = 45},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 45},
  [9] = {.lex_state = 45},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 45},
  [12] = {.lex_state = 45},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 45},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 23},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 23},
  [36] = {.lex_state = 23},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 23},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 23},
  [43] = {.lex_state = 23},
  [44] = {.lex_state = 23},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 23},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 23},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 23},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [aux_sym_from_file_modification_time_token1] = ACTIONS(1),
    [aux_sym_hunk_info_old_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(45),
    [sym_patch] = STATE(7),
    [sym_header] = STATE(16),
    [sym_from_file_line] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(14), 1,
      anon_sym_PLUS,
    ACTIONS(17), 1,
      anon_sym_,
    ACTIONS(9), 2,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
    STATE(2), 2,
      sym__diff_line,
      aux_sym_hunk_repeat1,
    STATE(6), 3,
      sym_line_nochange,
      sym_line_added,
      sym_line_deleted,
  [26] = 7,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    ACTIONS(24), 1,
      anon_sym_DASH,
    ACTIONS(26), 1,
      anon_sym_PLUS,
    ACTIONS(28), 1,
      anon_sym_,
    ACTIONS(22), 2,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
    STATE(2), 2,
      sym__diff_line,
      aux_sym_hunk_repeat1,
    STATE(6), 3,
      sym_line_nochange,
      sym_line_added,
      sym_line_deleted,
  [52] = 5,
    ACTIONS(24), 1,
      anon_sym_DASH,
    ACTIONS(26), 1,
      anon_sym_PLUS,
    ACTIONS(28), 1,
      anon_sym_,
    STATE(3), 2,
      sym__diff_line,
      aux_sym_hunk_repeat1,
    STATE(6), 3,
      sym_line_nochange,
      sym_line_added,
      sym_line_deleted,
  [71] = 2,
    ACTIONS(30), 2,
      ts_builtin_sym_end,
      anon_sym_,
    ACTIONS(32), 4,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [82] = 2,
    ACTIONS(34), 2,
      ts_builtin_sym_end,
      anon_sym_,
    ACTIONS(36), 4,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [93] = 5,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym_header,
    STATE(23), 1,
      sym_from_file_line,
    STATE(13), 2,
      sym_patch,
      aux_sym_source_file_repeat1,
  [110] = 2,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      anon_sym_,
    ACTIONS(42), 4,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [121] = 2,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_,
    ACTIONS(46), 4,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [132] = 4,
    ACTIONS(50), 1,
      anon_sym_AT_AT,
    STATE(4), 1,
      sym_hunk_info,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
    STATE(15), 2,
      sym_hunk,
      aux_sym_patch_repeat1,
  [147] = 2,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      anon_sym_,
    ACTIONS(54), 4,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [158] = 2,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      anon_sym_,
    ACTIONS(58), 4,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [169] = 5,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(16), 1,
      sym_header,
    STATE(23), 1,
      sym_from_file_line,
    STATE(13), 2,
      sym_patch,
      aux_sym_source_file_repeat1,
  [186] = 2,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_,
    ACTIONS(67), 4,
      anon_sym_DASH_DASH_DASH,
      anon_sym_AT_AT,
      anon_sym_DASH,
      anon_sym_PLUS,
  [197] = 4,
    ACTIONS(71), 1,
      anon_sym_AT_AT,
    STATE(4), 1,
      sym_hunk_info,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
    STATE(15), 2,
      sym_hunk,
      aux_sym_patch_repeat1,
  [212] = 3,
    ACTIONS(50), 1,
      anon_sym_AT_AT,
    STATE(4), 1,
      sym_hunk_info,
    STATE(10), 2,
      sym_hunk,
      aux_sym_patch_repeat1,
  [223] = 4,
    ACTIONS(74), 1,
      aux_sym_from_file_line_token1,
    ACTIONS(76), 1,
      anon_sym_LF,
    ACTIONS(78), 1,
      aux_sym_from_file_modification_time_token1,
    STATE(43), 1,
      sym_from_file_modification_time,
  [236] = 3,
    ACTIONS(78), 1,
      aux_sym_from_file_modification_time_token1,
    ACTIONS(80), 1,
      anon_sym_LF,
    STATE(39), 1,
      sym_from_file_modification_time,
  [246] = 1,
    ACTIONS(82), 3,
      aux_sym_from_file_line_token1,
      anon_sym_LF,
      aux_sym_from_file_modification_time_token1,
  [252] = 2,
    ACTIONS(86), 1,
      anon_sym_,
    ACTIONS(84), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [260] = 2,
    ACTIONS(88), 1,
      anon_sym_LF,
    ACTIONS(90), 1,
      sym_body,
  [267] = 2,
    ACTIONS(92), 1,
      anon_sym_LF,
    ACTIONS(94), 1,
      sym_body,
  [274] = 2,
    ACTIONS(96), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(56), 1,
      sym_to_file_line,
  [281] = 2,
    ACTIONS(98), 1,
      anon_sym_LF,
    ACTIONS(100), 1,
      sym_body,
  [288] = 2,
    ACTIONS(102), 1,
      aux_sym_from_file_token1,
    STATE(28), 1,
      sym_to_file,
  [295] = 2,
    ACTIONS(104), 1,
      aux_sym_from_file_modification_time_token1,
    STATE(52), 1,
      sym_to_file_modification_time,
  [302] = 2,
    ACTIONS(106), 1,
      aux_sym_hunk_info_old_token1,
    STATE(57), 1,
      sym_hunk_info_new,
  [309] = 2,
    ACTIONS(108), 1,
      anon_sym_LF,
    ACTIONS(110), 1,
      anon_sym_TAB,
  [316] = 2,
    ACTIONS(112), 1,
      aux_sym_hunk_info_old_token1,
    STATE(42), 1,
      sym_hunk_info_old,
  [323] = 1,
    ACTIONS(114), 2,
      anon_sym_LF,
      anon_sym_TAB,
  [328] = 2,
    ACTIONS(116), 1,
      aux_sym_from_file_token1,
    STATE(17), 1,
      sym_from_file,
  [335] = 1,
    ACTIONS(118), 1,
      aux_sym_from_file_line_token1,
  [339] = 1,
    ACTIONS(120), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [343] = 1,
    ACTIONS(122), 1,
      anon_sym_LF,
  [347] = 1,
    ACTIONS(124), 1,
      aux_sym_from_file_line_token1,
  [351] = 1,
    ACTIONS(126), 1,
      aux_sym_from_file_line_token1,
  [355] = 1,
    ACTIONS(128), 1,
      anon_sym_LF,
  [359] = 1,
    ACTIONS(130), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [363] = 1,
    ACTIONS(132), 1,
      aux_sym_from_file_line_token1,
  [367] = 1,
    ACTIONS(134), 1,
      anon_sym_LF,
  [371] = 1,
    ACTIONS(136), 1,
      anon_sym_LF,
  [375] = 1,
    ACTIONS(138), 1,
      aux_sym_from_file_line_token1,
  [379] = 1,
    ACTIONS(140), 1,
      aux_sym_from_file_line_token1,
  [383] = 1,
    ACTIONS(142), 1,
      aux_sym_from_file_line_token1,
  [387] = 1,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
  [391] = 1,
    ACTIONS(146), 1,
      anon_sym_AT_AT,
  [395] = 1,
    ACTIONS(148), 1,
      aux_sym_from_file_line_token1,
  [399] = 1,
    ACTIONS(150), 1,
      anon_sym_LF,
  [403] = 1,
    ACTIONS(152), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [407] = 1,
    ACTIONS(154), 1,
      anon_sym_PLUS,
  [411] = 1,
    ACTIONS(156), 1,
      anon_sym_LF,
  [415] = 1,
    ACTIONS(158), 1,
      anon_sym_LF,
  [419] = 1,
    ACTIONS(160), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [423] = 1,
    ACTIONS(162), 1,
      anon_sym_DASH,
  [427] = 1,
    ACTIONS(164), 1,
      anon_sym_AT_AT,
  [431] = 1,
    ACTIONS(166), 1,
      anon_sym_AT_AT,
  [435] = 1,
    ACTIONS(168), 1,
      aux_sym_from_file_line_token1,
  [439] = 1,
    ACTIONS(170), 1,
      anon_sym_AT_AT,
  [443] = 1,
    ACTIONS(172), 1,
      anon_sym_LF,
  [447] = 1,
    ACTIONS(174), 1,
      aux_sym_from_file_line_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 71,
  [SMALL_STATE(6)] = 82,
  [SMALL_STATE(7)] = 93,
  [SMALL_STATE(8)] = 110,
  [SMALL_STATE(9)] = 121,
  [SMALL_STATE(10)] = 132,
  [SMALL_STATE(11)] = 147,
  [SMALL_STATE(12)] = 158,
  [SMALL_STATE(13)] = 169,
  [SMALL_STATE(14)] = 186,
  [SMALL_STATE(15)] = 197,
  [SMALL_STATE(16)] = 212,
  [SMALL_STATE(17)] = 223,
  [SMALL_STATE(18)] = 236,
  [SMALL_STATE(19)] = 246,
  [SMALL_STATE(20)] = 252,
  [SMALL_STATE(21)] = 260,
  [SMALL_STATE(22)] = 267,
  [SMALL_STATE(23)] = 274,
  [SMALL_STATE(24)] = 281,
  [SMALL_STATE(25)] = 288,
  [SMALL_STATE(26)] = 295,
  [SMALL_STATE(27)] = 302,
  [SMALL_STATE(28)] = 309,
  [SMALL_STATE(29)] = 316,
  [SMALL_STATE(30)] = 323,
  [SMALL_STATE(31)] = 328,
  [SMALL_STATE(32)] = 335,
  [SMALL_STATE(33)] = 339,
  [SMALL_STATE(34)] = 343,
  [SMALL_STATE(35)] = 347,
  [SMALL_STATE(36)] = 351,
  [SMALL_STATE(37)] = 355,
  [SMALL_STATE(38)] = 359,
  [SMALL_STATE(39)] = 363,
  [SMALL_STATE(40)] = 367,
  [SMALL_STATE(41)] = 371,
  [SMALL_STATE(42)] = 375,
  [SMALL_STATE(43)] = 379,
  [SMALL_STATE(44)] = 383,
  [SMALL_STATE(45)] = 387,
  [SMALL_STATE(46)] = 391,
  [SMALL_STATE(47)] = 395,
  [SMALL_STATE(48)] = 399,
  [SMALL_STATE(49)] = 403,
  [SMALL_STATE(50)] = 407,
  [SMALL_STATE(51)] = 411,
  [SMALL_STATE(52)] = 415,
  [SMALL_STATE(53)] = 419,
  [SMALL_STATE(54)] = 423,
  [SMALL_STATE(55)] = 427,
  [SMALL_STATE(56)] = 431,
  [SMALL_STATE(57)] = 435,
  [SMALL_STATE(58)] = 439,
  [SMALL_STATE(59)] = 443,
  [SMALL_STATE(60)] = 447,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hunk_repeat1, 2),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hunk_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hunk_repeat1, 2), SHIFT_REPEAT(24),
  [14] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hunk_repeat1, 2), SHIFT_REPEAT(21),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hunk_repeat1, 2), SHIFT_REPEAT(22),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk, 2),
  [22] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hunk, 2),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_nochange, 3),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_nochange, 3),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__diff_line, 1),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__diff_line, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_deleted, 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_deleted, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_deleted, 3),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_deleted, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patch, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_added, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_added, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_added, 3),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_added, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_nochange, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_nochange, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_patch_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_patch_repeat1, 2), SHIFT_REPEAT(36),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_file, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hunk_info, 10),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_info, 10),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_to_file, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_info_new, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_file_line, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_file_line, 5),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_file_modification_time, 1),
  [144] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_file_line, 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk_info_old, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_file_line, 6),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_file_modification_time, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_file_line, 7),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_file_line, 6),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
