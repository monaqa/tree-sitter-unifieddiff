#define STATE_COUNT 90
#define SYMBOL_COUNT 50
#define TOKEN_COUNT 24
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
  [anon_sym_newfilemode] = "new file mode ",
  [aux_sym_git_index_added_token1] = "git_index_added_token1",
  [aux_sym_git_index_added_token2] = "git_index_added_token2",
  [sym__git_index] = "_git_index",
  [sym_git_index_added] = "git_index_added",
  [sym_git_index_changed] = "git_index_changed",
  [anon_sym_newfilemode] = anon_sym_newfilemode,
  [aux_sym_git_index_added_token1] = aux_sym_git_index_added_token1,
  [aux_sym_git_index_added_token2] = aux_sym_git_index_added_token2,
  [sym__git_index] = sym__git_index,
  [sym_git_index_added] = sym_git_index_added,
  [sym_git_index_changed] = sym_git_index_changed,
  [anon_sym_newfilemode] = {
  [aux_sym_git_index_added_token1] = {
  [anon_sym_index] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_git_index_added_token2] = {
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
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
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
      if (lookahead == '\t') ADVANCE(96);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == '+') ADVANCE(102);
      if (lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead != 0) ADVANCE(114);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == ' ') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == ' ') ADVANCE(30);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == '+') ADVANCE(95);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '@') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'g') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == 't') ADVANCE(5);
      if (lookahead == 'w') ADVANCE(9);
      if (lookahead == 'x') ADVANCE(3);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
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
          lookahead != ' ') ADVANCE(104);
    case 80:
          lookahead != '\r') ADVANCE(105);
    case 81:
          lookahead != '\n') ADVANCE(48);
    case 82:
      if (eof) ADVANCE(83);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == ',') ADVANCE(101);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '@') ADVANCE(23);
      if (lookahead == 'd') ADVANCE(34);
          lookahead == ' ') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
    case 83:
    case 84:
    case 85:
    case 86:
          lookahead == ' ') ADVANCE(94);
    case 87:
    case 88:
      ACCEPT_TOKEN(anon_sym_newfilemode);
    case 89:
      ACCEPT_TOKEN(aux_sym_git_index_added_token1);
    case 90:
      ACCEPT_TOKEN(aux_sym_git_index_added_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
    case 91:
      ACCEPT_TOKEN(anon_sym_index);
    case 92:
      ACCEPT_TOKEN(aux_sym_git_index_added_token2);
      END_STATE();
    case 93:
    case 94:
          lookahead == ' ') ADVANCE(94);
    case 95:
    case 96:
    case 97:
          lookahead == ' ') ADVANCE(94);
    case 98:
    case 99:
    case 100:
      if (lookahead == '-') ADVANCE(14);
    case 101:
    case 102:
    case 103:
      if (lookahead == '+') ADVANCE(12);
    case 104:
          lookahead != ' ') ADVANCE(104);
    case 105:
          lookahead != '\r') ADVANCE(105);
    case 106:
    case 107:
      if (lookahead == '-') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
    case 108:
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
    case 109:
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
    case 110:
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
    case 111:
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
    case 112:
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
    case 113:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
    case 114:
          lookahead != '\n') ADVANCE(114);
  [1] = {.lex_state = 82},
  [2] = {.lex_state = 82, .external_lex_state = 1},
  [3] = {.lex_state = 82, .external_lex_state = 1},
  [4] = {.lex_state = 82, .external_lex_state = 1},
  [5] = {.lex_state = 82},
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
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 82},
  [24] = {.lex_state = 82},
  [25] = {.lex_state = 82},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0},
  [32] = {.lex_state = 82},
  [33] = {.lex_state = 82},
  [34] = {.lex_state = 1},
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
  [55] = {.lex_state = 65},
  [56] = {.lex_state = 0},
  [58] = {.lex_state = 82},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 65},
  [63] = {.lex_state = 82},
  [65] = {.lex_state = 80},
  [66] = {.lex_state = 82},
  [67] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 82},
  [71] = {.lex_state = 82},
  [72] = {.lex_state = 82},
  [73] = {.lex_state = 80},
  [75] = {.lex_state = 82},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 82},
  [81] = {.lex_state = 82},
  [82] = {.lex_state = 82},
  [83] = {.lex_state = 82},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 79},
  [89] = {.lex_state = 82},
    [anon_sym_newfilemode] = ACTIONS(1),
    [aux_sym_git_index_added_token1] = ACTIONS(1),
    [aux_sym_git_index_added_token2] = ACTIONS(1),
    [sym_source_file] = STATE(77),
    [sym_patch] = STATE(8),
    [sym_git_comment] = STATE(19),
    [sym_from_file_line] = STATE(33),
    [aux_sym_source_file_repeat1] = STATE(8),
    ACTIONS(14), 1,
    ACTIONS(17), 1,
    STATE(2), 2,
    STATE(9), 3,
      sym__indicator_nochange,
    ACTIONS(24), 1,
    ACTIONS(26), 1,
    STATE(2), 2,
    STATE(9), 3,
    ACTIONS(20), 4,
    ACTIONS(22), 1,
    ACTIONS(24), 1,
    ACTIONS(26), 1,
    STATE(2), 2,
    STATE(9), 3,
    ACTIONS(32), 1,
      anon_sym_diff_DASH_DASHgit,
    ACTIONS(35), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(19), 1,
      sym_git_comment,
    STATE(33), 1,
    STATE(5), 2,
    ACTIONS(22), 1,
    ACTIONS(24), 1,
    ACTIONS(26), 1,
    STATE(3), 2,
    STATE(9), 3,
    ACTIONS(22), 1,
    ACTIONS(24), 1,
    ACTIONS(26), 1,
    STATE(9), 3,
    ACTIONS(5), 1,
    ACTIONS(7), 1,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      sym_git_comment,
    STATE(33), 1,
    STATE(5), 2,
  [159] = 1,
    ACTIONS(40), 7,
  [169] = 1,
    ACTIONS(42), 7,
  [179] = 1,
    ACTIONS(44), 7,
  [189] = 1,
    ACTIONS(46), 7,
  [199] = 1,
    ACTIONS(48), 7,
  [209] = 1,
    ACTIONS(50), 7,
  [219] = 4,
    ACTIONS(54), 1,
      anon_sym_AT_AT,
    STATE(27), 1,
      sym_hunk_info,
    STATE(16), 2,
      sym_hunk,
      aux_sym_patch_repeat1,
    ACTIONS(52), 3,
  [235] = 4,
    ACTIONS(58), 1,
    STATE(27), 1,
    STATE(16), 2,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      anon_sym_diff_DASH_DASHgit,
      anon_sym_DASH_DASH_DASH,
  [251] = 1,
    ACTIONS(61), 7,
      sym__indicator_nochange,
      sym__indicator_added,
      sym__indicator_deleted,
      anon_sym_AT_AT,
    ACTIONS(54), 1,
    STATE(27), 1,
    STATE(16), 2,
    ACTIONS(63), 3,
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
    STATE(27), 1,
    STATE(15), 2,
  [302] = 3,
    ACTIONS(54), 1,
    STATE(27), 1,
    STATE(18), 2,
  [313] = 4,
    ACTIONS(69), 1,
    ACTIONS(71), 1,
    ACTIONS(73), 1,
    STATE(45), 1,
  [326] = 3,
    STATE(62), 1,
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
    STATE(53), 1,
      sym_from_file_modification_time,
  [356] = 3,
    STATE(64), 1,
  [366] = 3,
      aux_sym_body_token1,
    STATE(74), 1,
      sym_hunk_comment,
  [376] = 3,
    ACTIONS(77), 1,
      aux_sym_body_token1,
      anon_sym_LF,
    STATE(60), 1,
      sym_body,
      anon_sym_newfilemode,
      anon_sym_index,
  [391] = 1,
    ACTIONS(91), 2,
  [396] = 2,
    STATE(89), 1,
  [403] = 2,
  [410] = 2,
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
    STATE(83), 1,
  [438] = 2,
    ACTIONS(105), 1,
    STATE(80), 1,
      anon_sym_PLUS,
    STATE(75), 1,
      sym_hunk_range_new,
    ACTIONS(109), 1,
      aux_sym_from_file_line_token1,
      anon_sym_COMMA,
  [459] = 1,
    ACTIONS(113), 2,
  [464] = 2,
    ACTIONS(103), 1,
      aux_sym_hunk_location_token1,
    STATE(39), 1,
      sym_hunk_location,
  [471] = 2,
      anon_sym_TAB,
    ACTIONS(119), 1,
      aux_sym_git_index_added_token1,
    ACTIONS(121), 1,
      anon_sym_,
    ACTIONS(123), 1,
    ACTIONS(125), 1,
    ACTIONS(127), 1,
      aux_sym_from_file_line_token1,
    ACTIONS(129), 1,
    ACTIONS(131), 1,
      sym__filename_git_command,
    ACTIONS(133), 1,
      aux_sym_from_file_line_token1,
    ACTIONS(135), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(137), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(139), 1,
      aux_sym_from_file_line_token1,
    ACTIONS(141), 1,
      anon_sym_LF,
    ACTIONS(143), 1,
      aux_sym_git_index_added_token2,
  [530] = 1,
    ACTIONS(147), 1,
      anon_sym_AT_AT,
    ACTIONS(149), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(151), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(155), 1,
      aux_sym_git_index_added_token2,
    ACTIONS(157), 1,
    ACTIONS(159), 1,
      aux_sym_git_index_added_token1,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(163), 1,
      sym_filename,
    ACTIONS(165), 1,
      aux_sym_from_file_line_token1,
  [574] = 1,
    ACTIONS(169), 1,
    ACTIONS(171), 1,
      anon_sym_LF,
    ACTIONS(173), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(175), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(177), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(179), 1,
      sym_filename,
    ACTIONS(181), 1,
      anon_sym_LF,
    ACTIONS(183), 1,
    ACTIONS(185), 1,
      anon_sym_LF,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(189), 1,
      aux_sym_from_file_line_token1,
    ACTIONS(191), 1,
    ACTIONS(193), 1,
    ACTIONS(195), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [634] = 1,
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
  [SMALL_STATE(10)] = 169,
  [SMALL_STATE(11)] = 179,
  [SMALL_STATE(12)] = 189,
  [SMALL_STATE(13)] = 199,
  [SMALL_STATE(14)] = 209,
  [SMALL_STATE(15)] = 219,
  [SMALL_STATE(17)] = 251,
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