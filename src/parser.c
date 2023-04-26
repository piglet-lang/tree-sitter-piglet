#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 11

enum {
  sym__ws = 1,
  anon_sym_COLON = 2,
  aux_sym_keyword_token1 = 3,
  anon_sym_CARET = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_LBRACK = 7,
  anon_sym_RBRACK = 8,
  sym_source = 9,
  sym__gap = 10,
  sym__form = 11,
  sym_keyword = 12,
  sym_symbol = 13,
  sym__symbol1 = 14,
  sym__symbol2 = 15,
  sym__symbol3 = 16,
  sym__metadata = 17,
  sym_list = 18,
  sym__bare_list = 19,
  aux_sym_source_repeat1 = 20,
  aux_sym_keyword_repeat1 = 21,
  aux_sym__metadata_repeat1 = 22,
  aux_sym_vector_repeat1 = 23,
  aux_sym__bare_list_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__ws] = "_ws",
  [anon_sym_COLON] = ":",
  [aux_sym_keyword_token1] = "keyword_token1",
  [anon_sym_CARET] = "^",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_source] = "source",
  [sym__gap] = "_gap",
  [sym__form] = "_form",
  [sym_keyword] = "keyword",
  [sym_symbol] = "symbol",
  [sym__symbol1] = "_symbol1",
  [sym__symbol2] = "_symbol2",
  [sym__symbol3] = "_symbol3",
  [sym__metadata] = "_metadata",
  [sym_list] = "list",
  [sym__bare_list] = "_bare_list",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_keyword_repeat1] = "keyword_repeat1",
  [aux_sym__metadata_repeat1] = "_metadata_repeat1",
  [aux_sym_vector_repeat1] = "vector_repeat1",
  [aux_sym__bare_list_repeat1] = "_bare_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__ws] = sym__ws,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_keyword_token1] = aux_sym_keyword_token1,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_source] = sym_source,
  [sym__gap] = sym__gap,
  [sym__form] = sym__form,
  [sym_keyword] = sym_keyword,
  [sym_symbol] = sym_symbol,
  [sym__symbol1] = sym__symbol1,
  [sym__symbol2] = sym__symbol2,
  [sym__symbol3] = sym__symbol3,
  [sym__metadata] = sym__metadata,
  [sym_list] = sym_list,
  [sym__bare_list] = sym__bare_list,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_keyword_repeat1] = aux_sym_keyword_repeat1,
  [aux_sym__metadata_repeat1] = aux_sym__metadata_repeat1,
  [aux_sym_vector_repeat1] = aux_sym_vector_repeat1,
  [aux_sym__bare_list_repeat1] = aux_sym__bare_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__ws] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__gap] = {
    .visible = false,
    .named = true,
  },
  [sym__form] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym__symbol1] = {
    .visible = false,
    .named = true,
  },
  [sym__symbol2] = {
    .visible = false,
    .named = true,
  },
  [sym__symbol3] = {
    .visible = false,
    .named = true,
  },
  [sym__metadata] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym__bare_list] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__metadata_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_vector_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__bare_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_close = 1,
  field_marker = 2,
  field_open = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_close] = "close",
  [field_marker] = "marker",
  [field_open] = "open",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 2},
  [4] = {.index = 7, .length = 2},
  [5] = {.index = 9, .length = 1},
  [6] = {.index = 10, .length = 5},
  [7] = {.index = 15, .length = 4},
  [8] = {.index = 19, .length = 2},
  [9] = {.index = 21, .length = 3},
  [10] = {.index = 24, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_marker, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [2] =
    {field_close, 0, .inherited = true},
    {field_open, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [5] =
    {field_marker, 0},
    {field_value, 1},
  [7] =
    {field_close, 1},
    {field_open, 0},
  [9] =
    {field_value, 0},
  [10] =
    {field_close, 1, .inherited = true},
    {field_marker, 0, .inherited = true},
    {field_open, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [15] =
    {field_marker, 0, .inherited = true},
    {field_marker, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [19] =
    {field_marker, 0},
    {field_value, 2},
  [21] =
    {field_close, 2},
    {field_open, 0},
    {field_value, 1, .inherited = true},
  [24] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
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
  [4] = 2,
  [5] = 3,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 13,
  [15] = 11,
  [16] = 12,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 18,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 19,
  [25] = 25,
  [26] = 12,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 28,
  [31] = 31,
  [32] = 32,
  [33] = 22,
  [34] = 23,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 11,
  [42] = 13,
  [43] = 43,
  [44] = 12,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == ']') ADVANCE(15);
      if (lookahead == '^') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '\f') ADVANCE(8);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '^') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == '^') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(10);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '\f') ADVANCE(8);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '^') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(10);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '\f') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_keyword_token1] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(53),
    [sym__gap] = STATE(6),
    [sym__form] = STATE(6),
    [sym_keyword] = STATE(6),
    [sym__metadata] = STATE(49),
    [sym_list] = STATE(6),
    [sym__bare_list] = STATE(23),
    [aux_sym_source_repeat1] = STATE(6),
    [aux_sym_vector_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__ws] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_CARET] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
  },
  [2] = {
    [sym__gap] = STATE(8),
    [sym__form] = STATE(21),
    [sym_keyword] = STATE(21),
    [sym__metadata] = STATE(49),
    [sym_list] = STATE(21),
    [sym__bare_list] = STATE(34),
    [aux_sym_vector_repeat1] = STATE(19),
    [aux_sym__bare_list_repeat1] = STATE(8),
    [sym__ws] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_CARET] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(19),
  },
  [3] = {
    [sym__gap] = STATE(2),
    [sym__form] = STATE(21),
    [sym_keyword] = STATE(21),
    [sym__metadata] = STATE(49),
    [sym_list] = STATE(21),
    [sym__bare_list] = STATE(34),
    [aux_sym_vector_repeat1] = STATE(19),
    [aux_sym__bare_list_repeat1] = STATE(2),
    [sym__ws] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_CARET] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(23),
  },
  [4] = {
    [sym__gap] = STATE(8),
    [sym__form] = STATE(21),
    [sym_keyword] = STATE(21),
    [sym__metadata] = STATE(49),
    [sym_list] = STATE(21),
    [sym__bare_list] = STATE(34),
    [aux_sym_vector_repeat1] = STATE(19),
    [aux_sym__bare_list_repeat1] = STATE(8),
    [sym__ws] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_CARET] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(25),
  },
  [5] = {
    [sym__gap] = STATE(4),
    [sym__form] = STATE(21),
    [sym_keyword] = STATE(21),
    [sym__metadata] = STATE(49),
    [sym_list] = STATE(21),
    [sym__bare_list] = STATE(34),
    [aux_sym_vector_repeat1] = STATE(19),
    [aux_sym__bare_list_repeat1] = STATE(4),
    [sym__ws] = ACTIONS(27),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_CARET] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(29),
  },
  [6] = {
    [sym__gap] = STATE(7),
    [sym__form] = STATE(7),
    [sym_keyword] = STATE(7),
    [sym__metadata] = STATE(49),
    [sym_list] = STATE(7),
    [sym__bare_list] = STATE(23),
    [aux_sym_source_repeat1] = STATE(7),
    [aux_sym_vector_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym__ws] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_CARET] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
  },
  [7] = {
    [sym__gap] = STATE(7),
    [sym__form] = STATE(7),
    [sym_keyword] = STATE(7),
    [sym__metadata] = STATE(49),
    [sym_list] = STATE(7),
    [sym__bare_list] = STATE(23),
    [aux_sym_source_repeat1] = STATE(7),
    [aux_sym_vector_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym__ws] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(40),
    [anon_sym_CARET] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(46),
  },
  [8] = {
    [sym__gap] = STATE(8),
    [sym__form] = STATE(21),
    [sym_keyword] = STATE(21),
    [sym__metadata] = STATE(49),
    [sym_list] = STATE(21),
    [sym__bare_list] = STATE(34),
    [aux_sym_vector_repeat1] = STATE(19),
    [aux_sym__bare_list_repeat1] = STATE(8),
    [sym__ws] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(52),
    [anon_sym_CARET] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(61),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(63), 1,
      sym__ws,
    ACTIONS(65), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      aux_sym_keyword_token1,
    STATE(10), 2,
      sym__gap,
      aux_sym__metadata_repeat1,
    STATE(46), 2,
      sym_keyword,
      sym_symbol,
    STATE(48), 3,
      sym__symbol1,
      sym__symbol2,
      sym__symbol3,
  [23] = 6,
    ACTIONS(65), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      aux_sym_keyword_token1,
    ACTIONS(69), 1,
      sym__ws,
    STATE(27), 2,
      sym__gap,
      aux_sym__metadata_repeat1,
    STATE(47), 2,
      sym_keyword,
      sym_symbol,
    STATE(48), 3,
      sym__symbol1,
      sym__symbol2,
      sym__symbol3,
  [46] = 4,
    ACTIONS(75), 1,
      aux_sym_keyword_token1,
    STATE(14), 1,
      aux_sym_keyword_repeat1,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(73), 3,
      anon_sym_COLON,
      anon_sym_CARET,
      anon_sym_LPAREN,
  [62] = 4,
    ACTIONS(77), 1,
      sym__ws,
    ACTIONS(81), 1,
      aux_sym_keyword_token1,
    STATE(12), 1,
      aux_sym_keyword_repeat1,
    ACTIONS(79), 4,
      anon_sym_COLON,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [78] = 4,
    ACTIONS(84), 1,
      sym__ws,
    ACTIONS(88), 1,
      aux_sym_keyword_token1,
    STATE(12), 1,
      aux_sym_keyword_repeat1,
    ACTIONS(86), 4,
      anon_sym_COLON,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [94] = 4,
    ACTIONS(90), 1,
      aux_sym_keyword_token1,
    STATE(16), 1,
      aux_sym_keyword_repeat1,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(86), 3,
      anon_sym_COLON,
      anon_sym_CARET,
      anon_sym_LPAREN,
  [110] = 4,
    ACTIONS(71), 1,
      sym__ws,
    ACTIONS(92), 1,
      aux_sym_keyword_token1,
    STATE(13), 1,
      aux_sym_keyword_repeat1,
    ACTIONS(73), 4,
      anon_sym_COLON,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [126] = 4,
    ACTIONS(94), 1,
      aux_sym_keyword_token1,
    STATE(16), 1,
      aux_sym_keyword_repeat1,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(79), 3,
      anon_sym_COLON,
      anon_sym_CARET,
      anon_sym_LPAREN,
  [142] = 4,
    ACTIONS(97), 1,
      anon_sym_COLON,
    ACTIONS(99), 1,
      aux_sym_keyword_token1,
    STATE(31), 1,
      aux_sym_keyword_repeat1,
    ACTIONS(101), 2,
      anon_sym_CARET,
      anon_sym_LPAREN,
  [156] = 2,
    ACTIONS(103), 1,
      sym__ws,
    ACTIONS(105), 4,
      anon_sym_COLON,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [166] = 5,
    ACTIONS(107), 1,
      anon_sym_CARET,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym__bare_list,
    STATE(45), 1,
      aux_sym_vector_repeat1,
    STATE(49), 1,
      sym__metadata,
  [182] = 2,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(105), 3,
      anon_sym_COLON,
      anon_sym_CARET,
      anon_sym_LPAREN,
  [192] = 2,
    ACTIONS(111), 1,
      sym__ws,
    ACTIONS(113), 4,
      anon_sym_COLON,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [202] = 2,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(117), 3,
      anon_sym_COLON,
      anon_sym_CARET,
      anon_sym_LPAREN,
  [212] = 2,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(121), 3,
      anon_sym_COLON,
      anon_sym_CARET,
      anon_sym_LPAREN,
  [222] = 5,
    ACTIONS(107), 1,
      anon_sym_CARET,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym__bare_list,
    STATE(45), 1,
      aux_sym_vector_repeat1,
    STATE(49), 1,
      sym__metadata,
  [238] = 4,
    ACTIONS(125), 1,
      anon_sym_COLON,
    ACTIONS(127), 1,
      aux_sym_keyword_token1,
    STATE(26), 1,
      aux_sym_keyword_repeat1,
    ACTIONS(129), 2,
      anon_sym_CARET,
      anon_sym_LPAREN,
  [252] = 3,
    ACTIONS(131), 1,
      aux_sym_keyword_token1,
    STATE(26), 1,
      aux_sym_keyword_repeat1,
    ACTIONS(77), 3,
      anon_sym_COLON,
      anon_sym_CARET,
      anon_sym_LPAREN,
  [264] = 3,
    ACTIONS(134), 1,
      sym__ws,
    ACTIONS(137), 2,
      anon_sym_COLON,
      aux_sym_keyword_token1,
    STATE(27), 2,
      sym__gap,
      aux_sym__metadata_repeat1,
  [276] = 2,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(141), 3,
      anon_sym_COLON,
      anon_sym_CARET,
      anon_sym_LPAREN,
  [286] = 4,
    ACTIONS(143), 1,
      anon_sym_COLON,
    ACTIONS(145), 1,
      aux_sym_keyword_token1,
    STATE(25), 1,
      aux_sym_keyword_repeat1,
    ACTIONS(147), 2,
      anon_sym_CARET,
      anon_sym_LPAREN,
  [300] = 2,
    ACTIONS(139), 1,
      sym__ws,
    ACTIONS(141), 4,
      anon_sym_COLON,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [310] = 4,
    ACTIONS(127), 1,
      aux_sym_keyword_token1,
    ACTIONS(149), 1,
      anon_sym_COLON,
    STATE(26), 1,
      aux_sym_keyword_repeat1,
    ACTIONS(151), 2,
      anon_sym_CARET,
      anon_sym_LPAREN,
  [324] = 4,
    ACTIONS(149), 1,
      anon_sym_COLON,
    ACTIONS(153), 1,
      aux_sym_keyword_token1,
    STATE(35), 1,
      aux_sym_keyword_repeat1,
    ACTIONS(151), 2,
      anon_sym_CARET,
      anon_sym_LPAREN,
  [338] = 2,
    ACTIONS(115), 1,
      sym__ws,
    ACTIONS(117), 4,
      anon_sym_COLON,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [348] = 2,
    ACTIONS(119), 1,
      sym__ws,
    ACTIONS(121), 4,
      anon_sym_COLON,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [358] = 4,
    ACTIONS(127), 1,
      aux_sym_keyword_token1,
    ACTIONS(155), 1,
      anon_sym_COLON,
    STATE(26), 1,
      aux_sym_keyword_repeat1,
    ACTIONS(157), 2,
      anon_sym_CARET,
      anon_sym_LPAREN,
  [372] = 3,
    ACTIONS(159), 1,
      aux_sym_keyword_token1,
    STATE(44), 1,
      aux_sym_keyword_repeat1,
    ACTIONS(161), 2,
      anon_sym_CARET,
      anon_sym_LPAREN,
  [383] = 3,
    ACTIONS(163), 1,
      aux_sym_keyword_token1,
    STATE(38), 1,
      aux_sym_keyword_repeat1,
    ACTIONS(161), 2,
      anon_sym_CARET,
      anon_sym_LPAREN,
  [394] = 3,
    ACTIONS(159), 1,
      aux_sym_keyword_token1,
    STATE(44), 1,
      aux_sym_keyword_repeat1,
    ACTIONS(165), 2,
      anon_sym_CARET,
      anon_sym_LPAREN,
  [405] = 3,
    ACTIONS(167), 1,
      aux_sym_keyword_token1,
    STATE(40), 1,
      aux_sym_keyword_repeat1,
    ACTIONS(165), 2,
      anon_sym_CARET,
      anon_sym_LPAREN,
  [416] = 3,
    ACTIONS(159), 1,
      aux_sym_keyword_token1,
    STATE(44), 1,
      aux_sym_keyword_repeat1,
    ACTIONS(169), 2,
      anon_sym_CARET,
      anon_sym_LPAREN,
  [427] = 3,
    ACTIONS(171), 1,
      aux_sym_keyword_token1,
    STATE(42), 1,
      aux_sym_keyword_repeat1,
    ACTIONS(71), 2,
      anon_sym_CARET,
      anon_sym_LPAREN,
  [438] = 3,
    ACTIONS(159), 1,
      aux_sym_keyword_token1,
    STATE(44), 1,
      aux_sym_keyword_repeat1,
    ACTIONS(84), 2,
      anon_sym_CARET,
      anon_sym_LPAREN,
  [449] = 3,
    ACTIONS(173), 1,
      aux_sym_keyword_token1,
    STATE(36), 1,
      aux_sym_keyword_repeat1,
    ACTIONS(175), 2,
      anon_sym_CARET,
      anon_sym_LPAREN,
  [460] = 3,
    ACTIONS(177), 1,
      aux_sym_keyword_token1,
    STATE(44), 1,
      aux_sym_keyword_repeat1,
    ACTIONS(77), 2,
      anon_sym_CARET,
      anon_sym_LPAREN,
  [471] = 4,
    ACTIONS(180), 1,
      anon_sym_CARET,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      aux_sym_vector_repeat1,
    STATE(49), 1,
      sym__metadata,
  [484] = 1,
    ACTIONS(185), 2,
      anon_sym_CARET,
      anon_sym_LPAREN,
  [489] = 1,
    ACTIONS(187), 2,
      anon_sym_CARET,
      anon_sym_LPAREN,
  [494] = 1,
    ACTIONS(189), 2,
      anon_sym_CARET,
      anon_sym_LPAREN,
  [499] = 1,
    ACTIONS(191), 2,
      anon_sym_CARET,
      anon_sym_LPAREN,
  [504] = 1,
    ACTIONS(193), 1,
      aux_sym_keyword_token1,
  [508] = 1,
    ACTIONS(195), 1,
      aux_sym_keyword_token1,
  [512] = 1,
    ACTIONS(197), 1,
      aux_sym_keyword_token1,
  [516] = 1,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
  [520] = 1,
    ACTIONS(201), 1,
      aux_sym_keyword_token1,
  [524] = 1,
    ACTIONS(203), 1,
      aux_sym_keyword_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 23,
  [SMALL_STATE(11)] = 46,
  [SMALL_STATE(12)] = 62,
  [SMALL_STATE(13)] = 78,
  [SMALL_STATE(14)] = 94,
  [SMALL_STATE(15)] = 110,
  [SMALL_STATE(16)] = 126,
  [SMALL_STATE(17)] = 142,
  [SMALL_STATE(18)] = 156,
  [SMALL_STATE(19)] = 166,
  [SMALL_STATE(20)] = 182,
  [SMALL_STATE(21)] = 192,
  [SMALL_STATE(22)] = 202,
  [SMALL_STATE(23)] = 212,
  [SMALL_STATE(24)] = 222,
  [SMALL_STATE(25)] = 238,
  [SMALL_STATE(26)] = 252,
  [SMALL_STATE(27)] = 264,
  [SMALL_STATE(28)] = 276,
  [SMALL_STATE(29)] = 286,
  [SMALL_STATE(30)] = 300,
  [SMALL_STATE(31)] = 310,
  [SMALL_STATE(32)] = 324,
  [SMALL_STATE(33)] = 338,
  [SMALL_STATE(34)] = 348,
  [SMALL_STATE(35)] = 358,
  [SMALL_STATE(36)] = 372,
  [SMALL_STATE(37)] = 383,
  [SMALL_STATE(38)] = 394,
  [SMALL_STATE(39)] = 405,
  [SMALL_STATE(40)] = 416,
  [SMALL_STATE(41)] = 427,
  [SMALL_STATE(42)] = 438,
  [SMALL_STATE(43)] = 449,
  [SMALL_STATE(44)] = 460,
  [SMALL_STATE(45)] = 471,
  [SMALL_STATE(46)] = 484,
  [SMALL_STATE(47)] = 489,
  [SMALL_STATE(48)] = 494,
  [SMALL_STATE(49)] = 499,
  [SMALL_STATE(50)] = 504,
  [SMALL_STATE(51)] = 508,
  [SMALL_STATE(52)] = 512,
  [SMALL_STATE(53)] = 516,
  [SMALL_STATE(54)] = 520,
  [SMALL_STATE(55)] = 524,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(11),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(9),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_list_repeat1, 2, .production_id = 10), SHIFT_REPEAT(8),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__bare_list_repeat1, 2, .production_id = 10), SHIFT_REPEAT(15),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__bare_list_repeat1, 2, .production_id = 10), SHIFT_REPEAT(9),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__bare_list_repeat1, 2, .production_id = 10), SHIFT_REPEAT(5),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__bare_list_repeat1, 2, .production_id = 10),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(12),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(16),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol2, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_list, 2, .production_id = 4),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_list, 2, .production_id = 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bare_list_repeat1, 1, .production_id = 5),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__bare_list_repeat1, 1, .production_id = 5),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, .production_id = 6),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, .production_id = 6),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1, .production_id = 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1, .production_id = 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol1, 2),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(26),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__metadata_repeat1, 2), SHIFT_REPEAT(27),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__metadata_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_list, 3, .production_id = 9),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_list, 3, .production_id = 9),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol1, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol2, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol2, 5),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol3, 6),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol3, 7),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol3, 8),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol3, 5),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(44),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2, .production_id = 7), SHIFT_REPEAT(9),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2, .production_id = 7),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata, 2, .production_id = 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata, 3, .production_id = 8),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 1, .production_id = 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [199] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_piglet(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
