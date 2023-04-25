#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 6

enum {
  sym__ws = 1,
  anon_sym_COLON = 2,
  aux_sym_keyword_lit_token1 = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  sym_source = 6,
  sym__gap = 7,
  sym__form = 8,
  sym_keyword_lit = 9,
  sym_list_lit = 10,
  sym__bare_list_lit = 11,
  aux_sym_source_repeat1 = 12,
  aux_sym_keyword_lit_repeat1 = 13,
  aux_sym__bare_list_lit_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__ws] = "_ws",
  [anon_sym_COLON] = ":",
  [aux_sym_keyword_lit_token1] = "keyword_lit_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_source] = "source",
  [sym__gap] = "_gap",
  [sym__form] = "_form",
  [sym_keyword_lit] = "keyword_lit",
  [sym_list_lit] = "list_lit",
  [sym__bare_list_lit] = "_bare_list_lit",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_keyword_lit_repeat1] = "keyword_lit_repeat1",
  [aux_sym__bare_list_lit_repeat1] = "_bare_list_lit_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__ws] = sym__ws,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_keyword_lit_token1] = aux_sym_keyword_lit_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_source] = sym_source,
  [sym__gap] = sym__gap,
  [sym__form] = sym__form,
  [sym_keyword_lit] = sym_keyword_lit,
  [sym_list_lit] = sym_list_lit,
  [sym__bare_list_lit] = sym__bare_list_lit,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_keyword_lit_repeat1] = aux_sym_keyword_lit_repeat1,
  [aux_sym__bare_list_lit_repeat1] = aux_sym__bare_list_lit_repeat1,
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
  [aux_sym_keyword_lit_token1] = {
    .visible = false,
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
  [sym_keyword_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_list_lit] = {
    .visible = true,
    .named = true,
  },
  [sym__bare_list_lit] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_lit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__bare_list_lit_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_close = 1,
  field_open = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_close] = "close",
  [field_open] = "open",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 2},
  [3] = {.index = 5, .length = 1},
  [4] = {.index = 6, .length = 3},
  [5] = {.index = 9, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_close, 0, .inherited = true},
    {field_open, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [3] =
    {field_close, 1},
    {field_open, 0},
  [5] =
    {field_value, 0},
  [6] =
    {field_close, 2},
    {field_open, 0},
    {field_value, 1, .inherited = true},
  [9] =
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
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 3,
  [9] = 9,
  [10] = 10,
  [11] = 9,
  [12] = 12,
  [13] = 12,
  [14] = 10,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 15,
  [20] = 17,
  [21] = 18,
  [22] = 22,
};

static inline bool sym__ws_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ','
      ? (c < 28
        ? (c >= 11 && c <= '\f')
        : c <= 31)
      : (c <= ',' || c == 5760))
    : (c <= 8198 || (c < 8287
      ? (c < 8232
        ? (c >= 8200 && c <= 8202)
        : c <= 8233)
      : (c <= 8287 || c == 12288))));
}

static inline bool sym__ws_character_set_2(int32_t c) {
  return (c < 8192
    ? (c < ','
      ? (c < 28
        ? (c >= '\t' && c <= '\r')
        : c <= ' ')
      : (c <= ',' || c == 5760))
    : (c <= 8198 || (c < 8287
      ? (c < 8232
        ? (c >= 8200 && c <= 8202)
        : c <= 8233)
      : (c <= 8287 || c == 12288))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ')') ADVANCE(7);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(3);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym__ws);
      if (sym__ws_character_set_2(lookahead)) ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_keyword_lit_token1);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__ws] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_keyword_lit_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(22),
    [sym__gap] = STATE(6),
    [sym__form] = STATE(6),
    [sym_keyword_lit] = STATE(6),
    [sym_list_lit] = STATE(6),
    [sym__bare_list_lit] = STATE(21),
    [aux_sym_source_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__ws] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
  },
  [2] = {
    [sym__gap] = STATE(2),
    [sym__form] = STATE(2),
    [sym_keyword_lit] = STATE(2),
    [sym_list_lit] = STATE(2),
    [sym__bare_list_lit] = STATE(21),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym__ws] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_LPAREN] = ACTIONS(19),
  },
  [3] = {
    [sym__gap] = STATE(7),
    [sym__form] = STATE(16),
    [sym_keyword_lit] = STATE(16),
    [sym_list_lit] = STATE(16),
    [sym__bare_list_lit] = STATE(18),
    [aux_sym__bare_list_lit_repeat1] = STATE(7),
    [sym__ws] = ACTIONS(22),
    [anon_sym_COLON] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_RPAREN] = ACTIONS(28),
  },
  [4] = {
    [sym__gap] = STATE(8),
    [sym__form] = STATE(16),
    [sym_keyword_lit] = STATE(16),
    [sym_list_lit] = STATE(16),
    [sym__bare_list_lit] = STATE(18),
    [aux_sym__bare_list_lit_repeat1] = STATE(8),
    [sym__ws] = ACTIONS(30),
    [anon_sym_COLON] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_RPAREN] = ACTIONS(32),
  },
  [5] = {
    [sym__gap] = STATE(3),
    [sym__form] = STATE(16),
    [sym_keyword_lit] = STATE(16),
    [sym_list_lit] = STATE(16),
    [sym__bare_list_lit] = STATE(18),
    [aux_sym__bare_list_lit_repeat1] = STATE(3),
    [sym__ws] = ACTIONS(34),
    [anon_sym_COLON] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_RPAREN] = ACTIONS(36),
  },
  [6] = {
    [sym__gap] = STATE(2),
    [sym__form] = STATE(2),
    [sym_keyword_lit] = STATE(2),
    [sym_list_lit] = STATE(2),
    [sym__bare_list_lit] = STATE(21),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(38),
    [sym__ws] = ACTIONS(40),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
  },
  [7] = {
    [sym__gap] = STATE(7),
    [sym__form] = STATE(16),
    [sym_keyword_lit] = STATE(16),
    [sym_list_lit] = STATE(16),
    [sym__bare_list_lit] = STATE(18),
    [aux_sym__bare_list_lit_repeat1] = STATE(7),
    [sym__ws] = ACTIONS(42),
    [anon_sym_COLON] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(51),
  },
  [8] = {
    [sym__gap] = STATE(7),
    [sym__form] = STATE(16),
    [sym_keyword_lit] = STATE(16),
    [sym_list_lit] = STATE(16),
    [sym__bare_list_lit] = STATE(18),
    [aux_sym__bare_list_lit_repeat1] = STATE(7),
    [sym__ws] = ACTIONS(22),
    [anon_sym_COLON] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_RPAREN] = ACTIONS(53),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(55), 1,
      sym__ws,
    ACTIONS(59), 1,
      aux_sym_keyword_lit_token1,
    STATE(13), 1,
      aux_sym_keyword_lit_repeat1,
    ACTIONS(57), 3,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [15] = 4,
    ACTIONS(65), 1,
      aux_sym_keyword_lit_token1,
    STATE(10), 1,
      aux_sym_keyword_lit_repeat1,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(63), 2,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [30] = 4,
    ACTIONS(68), 1,
      aux_sym_keyword_lit_token1,
    STATE(12), 1,
      aux_sym_keyword_lit_repeat1,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(57), 2,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [45] = 4,
    ACTIONS(74), 1,
      aux_sym_keyword_lit_token1,
    STATE(10), 1,
      aux_sym_keyword_lit_repeat1,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(72), 2,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [60] = 4,
    ACTIONS(70), 1,
      sym__ws,
    ACTIONS(76), 1,
      aux_sym_keyword_lit_token1,
    STATE(14), 1,
      aux_sym_keyword_lit_repeat1,
    ACTIONS(72), 3,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [75] = 4,
    ACTIONS(61), 1,
      sym__ws,
    ACTIONS(78), 1,
      aux_sym_keyword_lit_token1,
    STATE(14), 1,
      aux_sym_keyword_lit_repeat1,
    ACTIONS(63), 3,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [90] = 2,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(83), 2,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [99] = 2,
    ACTIONS(85), 1,
      sym__ws,
    ACTIONS(87), 3,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [108] = 2,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(91), 2,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [117] = 2,
    ACTIONS(93), 1,
      sym__ws,
    ACTIONS(95), 3,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [126] = 2,
    ACTIONS(81), 1,
      sym__ws,
    ACTIONS(83), 3,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [135] = 2,
    ACTIONS(89), 1,
      sym__ws,
    ACTIONS(91), 3,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [144] = 2,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(95), 2,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [153] = 1,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 15,
  [SMALL_STATE(11)] = 30,
  [SMALL_STATE(12)] = 45,
  [SMALL_STATE(13)] = 60,
  [SMALL_STATE(14)] = 75,
  [SMALL_STATE(15)] = 90,
  [SMALL_STATE(16)] = 99,
  [SMALL_STATE(17)] = 108,
  [SMALL_STATE(18)] = 117,
  [SMALL_STATE(19)] = 126,
  [SMALL_STATE(20)] = 135,
  [SMALL_STATE(21)] = 144,
  [SMALL_STATE(22)] = 153,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(11),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(4),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 5), SHIFT_REPEAT(7),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 5), SHIFT_REPEAT(9),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 5), SHIFT_REPEAT(5),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__bare_list_lit_repeat1, 2, .production_id = 5),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_lit, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_lit, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_lit_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_lit_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_lit_repeat1, 2), SHIFT_REPEAT(10),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_lit, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_lit, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_lit_repeat1, 2), SHIFT_REPEAT(14),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_list_lit, 2, .production_id = 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_list_lit, 2, .production_id = 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bare_list_lit_repeat1, 1, .production_id = 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__bare_list_lit_repeat1, 1, .production_id = 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_list_lit, 3, .production_id = 4),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_list_lit, 3, .production_id = 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit, 1, .production_id = 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit, 1, .production_id = 1),
  [97] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
