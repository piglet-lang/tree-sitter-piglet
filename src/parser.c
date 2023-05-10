#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 9

enum {
  sym__ws = 1,
  sym_keyword = 2,
  sym__symbol1 = 3,
  sym__symbol2 = 4,
  sym__symbol3 = 5,
  sym_prefix_name = 6,
  anon_sym_CARET = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_LBRACK = 10,
  anon_sym_RBRACK = 11,
  sym_source = 12,
  sym__gap = 13,
  sym__form = 14,
  sym_symbol = 15,
  sym__metadata = 16,
  sym_vector = 17,
  sym_list = 18,
  sym__bare_list = 19,
  sym__bare_vector = 20,
  aux_sym_source_repeat1 = 21,
  aux_sym__metadata_repeat1 = 22,
  aux_sym_vector_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__ws] = "_ws",
  [sym_keyword] = "keyword",
  [sym__symbol1] = "_symbol1",
  [sym__symbol2] = "_symbol2",
  [sym__symbol3] = "_symbol3",
  [sym_prefix_name] = "prefix_name",
  [anon_sym_CARET] = "^",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_source] = "source",
  [sym__gap] = "_gap",
  [sym__form] = "_form",
  [sym_symbol] = "symbol",
  [sym__metadata] = "_metadata",
  [sym_vector] = "vector",
  [sym_list] = "list",
  [sym__bare_list] = "_bare_list",
  [sym__bare_vector] = "_bare_vector",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym__metadata_repeat1] = "_metadata_repeat1",
  [aux_sym_vector_repeat1] = "vector_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__ws] = sym__ws,
  [sym_keyword] = sym_keyword,
  [sym__symbol1] = sym__symbol1,
  [sym__symbol2] = sym__symbol2,
  [sym__symbol3] = sym__symbol3,
  [sym_prefix_name] = sym_prefix_name,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_source] = sym_source,
  [sym__gap] = sym__gap,
  [sym__form] = sym__form,
  [sym_symbol] = sym_symbol,
  [sym__metadata] = sym__metadata,
  [sym_vector] = sym_vector,
  [sym_list] = sym_list,
  [sym__bare_list] = sym__bare_list,
  [sym__bare_vector] = sym__bare_vector,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym__metadata_repeat1] = aux_sym__metadata_repeat1,
  [aux_sym_vector_repeat1] = aux_sym_vector_repeat1,
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
  [sym_keyword] = {
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
  [sym_prefix_name] = {
    .visible = true,
    .named = true,
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
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym__metadata] = {
    .visible = false,
    .named = true,
  },
  [sym_vector] = {
    .visible = true,
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
  [sym__bare_vector] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
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
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 4},
  [6] = {.index = 12, .length = 4},
  [7] = {.index = 16, .length = 2},
  [8] = {.index = 18, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_marker, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [2] =
    {field_close, 0, .inherited = true},
    {field_open, 0, .inherited = true},
  [4] =
    {field_marker, 0},
    {field_value, 1},
  [6] =
    {field_close, 1},
    {field_open, 0},
  [8] =
    {field_close, 1, .inherited = true},
    {field_marker, 0, .inherited = true},
    {field_open, 1, .inherited = true},
    {field_value, 0, .inherited = true},
  [12] =
    {field_marker, 0, .inherited = true},
    {field_marker, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [16] =
    {field_marker, 0},
    {field_value, 2},
  [18] =
    {field_close, 2},
    {field_open, 0},
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 7,
  [9] = 6,
  [10] = 10,
  [11] = 4,
  [12] = 5,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 16,
  [23] = 14,
  [24] = 17,
  [25] = 18,
  [26] = 15,
  [27] = 20,
  [28] = 13,
  [29] = 19,
  [30] = 21,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 34,
  [36] = 36,
  [37] = 37,
  [38] = 15,
  [39] = 39,
  [40] = 40,
  [41] = 41,
};

static inline bool sym__symbol1_character_set_1(int32_t c) {
  return (c < 6512
    ? (c < 2962
      ? (c < 2112
        ? (c < 931
          ? (c < 216
            ? (c < '_'
              ? (c < '-'
                ? (c < '$'
                  ? c == '!'
                  : (c <= '&' || (c >= '*' && c <= '+')))
                : (c <= '9' || (c < 'A'
                  ? (c >= '<' && c <= '?')
                  : c <= 'Z')))
              : (c <= '_' || (c < 181
                ? (c < '|'
                  ? (c >= 'a' && c <= 'z')
                  : (c <= '|' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))))
            : (c <= 246 || (c < 886
              ? (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))
              : (c <= 887 || (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))))))
          : (c <= 1013 || (c < 1786
            ? (c < 1519
              ? (c < 1369
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))
                : (c <= 1369 || (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : c <= 1514)))
              : (c <= 1522 || (c < 1749
                ? (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))
                : (c <= 1749 || (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : c <= 1775)))))
            : (c <= 1788 || (c < 2036
              ? (c < 1869
                ? (c < 1808
                  ? c == 1791
                  : (c <= 1808 || (c >= 1810 && c <= 1839)))
                : (c <= 1957 || (c < 1994
                  ? c == 1969
                  : c <= 2026)))
              : (c <= 2037 || (c < 2074
                ? (c < 2048
                  ? c == 2042
                  : c <= 2069)
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))))))))
        : (c <= 2136 || (c < 2616
          ? (c < 2482
            ? (c < 2384
              ? (c < 2208
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))
                : (c <= 2249 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))
              : (c <= 2384 || (c < 2447
                ? (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))))
            : (c <= 2482 || (c < 2556
              ? (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))
              : (c <= 2556 || (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))))))
          : (c <= 2617 || (c < 2821
            ? (c < 2730
              ? (c < 2693
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2674 && c <= 2676)))
                : (c <= 2701 || (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : c <= 2728)))
              : (c <= 2736 || (c < 2768
                ? (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || c == 2749))
                : (c <= 2768 || (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : c <= 2809)))))
            : (c <= 2828 || (c < 2908
              ? (c < 2866
                ? (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : c <= 2877)))
              : (c <= 2909 || (c < 2947
                ? (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))))))))))
      : (c <= 2965 || (c < 3913
        ? (c < 3346
          ? (c < 3165
            ? (c < 3024
              ? (c < 2979
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : c <= 3001)))
              : (c <= 3024 || (c < 3114
                ? (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3160
                  ? c == 3133
                  : c <= 3162)))))
            : (c <= 3165 || (c < 3253
              ? (c < 3214
                ? (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))
              : (c <= 3257 || (c < 3313
                ? (c < 3293
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3314 || (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)))))))
          : (c <= 3386 || (c < 3713
            ? (c < 3482
              ? (c < 3423
                ? (c < 3406
                  ? c == 3389
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3425 || (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : c <= 3478)))
              : (c <= 3505 || (c < 3585
                ? (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3714 || (c < 3773
              ? (c < 3749
                ? (c < 3718
                  ? c == 3716
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : c <= 3763)))
              : (c <= 3773 || (c < 3804
                ? (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)
                : (c <= 3807 || (c < 3904
                  ? c == 3840
                  : c <= 3911)))))))))
        : (c <= 3948 || (c < 4808
          ? (c < 4304
            ? (c < 4197
              ? (c < 4176
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : (c <= 4138 || c == 4159))
                : (c <= 4181 || (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : c <= 4193)))
              : (c <= 4198 || (c < 4256
                ? (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : (c <= 4225 || c == 4238))
                : (c <= 4293 || (c < 4301
                  ? c == 4295
                  : c <= 4301)))))
            : (c <= 4346 || (c < 4746
              ? (c < 4696
                ? (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : c <= 4744)))
              : (c <= 4749 || (c < 4792
                ? (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))))))
          : (c <= 4822 || (c < 5952
            ? (c < 5121
              ? (c < 4992
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 5007 || (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : c <= 5117)))
              : (c <= 5740 || (c < 5873
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : c <= 5937)))))
            : (c <= 5969 || (c < 6272
              ? (c < 6103
                ? (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : (c <= 6000 || (c >= 6016 && c <= 6067)))
                : (c <= 6103 || (c < 6176
                  ? c == 6108
                  : c <= 6264)))
              : (c <= 6276 || (c < 6320
                ? (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)
                : (c <= 6389 || (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)))))))))))))
    : (c <= 6516 || (c < 43250
      ? (c < 8517
        ? (c < 8027
          ? (c < 7296
            ? (c < 6981
              ? (c < 6688
                ? (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : (c <= 6601 || (c >= 6656 && c <= 6678)))
                : (c <= 6740 || (c < 6917
                  ? c == 6823
                  : c <= 6963)))
              : (c <= 6988 || (c < 7168
                ? (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : (c <= 7087 || (c >= 7098 && c <= 7141)))
                : (c <= 7203 || (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : c <= 7293)))))
            : (c <= 7304 || (c < 7424
              ? (c < 7406
                ? (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : (c <= 7359 || (c >= 7401 && c <= 7404)))
                : (c <= 7411 || (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : c <= 7418)))
              : (c <= 7615 || (c < 8008
                ? (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))
                : (c <= 8013 || (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)))))))
          : (c <= 8027 || (c < 8319
            ? (c < 8134
              ? (c < 8118
                ? (c < 8031
                  ? c == 8029
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))
                : (c <= 8124 || (c < 8130
                  ? c == 8126
                  : c <= 8132)))
              : (c <= 8140 || (c < 8178
                ? (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))
                : (c <= 8180 || (c < 8305
                  ? (c >= 8182 && c <= 8188)
                  : c <= 8305)))))
            : (c <= 8319 || (c < 8484
              ? (c < 8458
                ? (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : (c <= 8450 || c == 8455))
                : (c <= 8467 || (c < 8473
                  ? c == 8469
                  : c <= 8477)))
              : (c <= 8484 || (c < 8490
                ? (c < 8488
                  ? c == 8486
                  : c <= 8488)
                : (c <= 8493 || (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)))))))))
        : (c <= 8521 || (c < 12549
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 8579
                  ? c == 8526
                  : (c <= 8580 || (c >= 11264 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12445
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42656
            ? (c < 40959
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 42124 || (c < 42538
                ? (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42527)))
                : (c <= 42539 || (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : c <= 42653)))))
            : (c <= 42725 || (c < 42994
              ? (c < 42960
                ? (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65313
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '\f') ADVANCE(10);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == '^') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (sym__symbol1_character_set_1(lookahead)) ADVANCE(13);
      END_STATE();
    case 1:
      if (lookahead == '\f') ADVANCE(10);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (sym__symbol1_character_set_1(lookahead)) ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == '^') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(4);
      if (sym__symbol1_character_set_1(lookahead)) ADVANCE(11);
      END_STATE();
    case 4:
      if (sym__symbol1_character_set_1(lookahead)) ADVANCE(16);
      END_STATE();
    case 5:
      if (sym__symbol1_character_set_1(lookahead)) ADVANCE(14);
      END_STATE();
    case 6:
      if (sym__symbol1_character_set_1(lookahead)) ADVANCE(15);
      END_STATE();
    case 7:
      if (sym__symbol1_character_set_1(lookahead)) ADVANCE(12);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '\f') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ':') ADVANCE(4);
      if (sym__symbol1_character_set_1(lookahead)) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_keyword);
      if (sym__symbol1_character_set_1(lookahead)) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__symbol1);
      if (lookahead == ':') ADVANCE(5);
      if (sym__symbol1_character_set_1(lookahead)) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__symbol2);
      if (lookahead == ':') ADVANCE(6);
      if (sym__symbol1_character_set_1(lookahead)) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__symbol3);
      if (sym__symbol1_character_set_1(lookahead)) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_prefix_name);
      if (sym__symbol1_character_set_1(lookahead)) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACK);
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
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__ws] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [sym__symbol1] = ACTIONS(1),
    [sym__symbol2] = ACTIONS(1),
    [sym__symbol3] = ACTIONS(1),
    [sym_prefix_name] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(41),
    [sym__gap] = STATE(10),
    [sym__form] = STATE(10),
    [sym_symbol] = STATE(10),
    [sym__metadata] = STATE(40),
    [sym_vector] = STATE(10),
    [sym_list] = STATE(10),
    [sym__bare_list] = STATE(30),
    [sym__bare_vector] = STATE(27),
    [aux_sym_source_repeat1] = STATE(10),
    [aux_sym_vector_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__ws] = ACTIONS(5),
    [sym_keyword] = ACTIONS(7),
    [sym__symbol1] = ACTIONS(9),
    [sym__symbol2] = ACTIONS(9),
    [sym__symbol3] = ACTIONS(9),
    [sym_prefix_name] = ACTIONS(7),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [2] = {
    [sym__gap] = STATE(2),
    [sym__form] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__metadata] = STATE(40),
    [sym_vector] = STATE(2),
    [sym_list] = STATE(2),
    [sym__bare_list] = STATE(21),
    [sym__bare_vector] = STATE(20),
    [aux_sym_source_repeat1] = STATE(2),
    [aux_sym_vector_repeat1] = STATE(35),
    [sym__ws] = ACTIONS(17),
    [sym_keyword] = ACTIONS(20),
    [sym__symbol1] = ACTIONS(23),
    [sym__symbol2] = ACTIONS(23),
    [sym__symbol3] = ACTIONS(23),
    [sym_prefix_name] = ACTIONS(20),
    [anon_sym_CARET] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(34),
    [anon_sym_RBRACK] = ACTIONS(32),
  },
  [3] = {
    [sym__gap] = STATE(3),
    [sym__form] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym__metadata] = STATE(40),
    [sym_vector] = STATE(3),
    [sym_list] = STATE(3),
    [sym__bare_list] = STATE(30),
    [sym__bare_vector] = STATE(27),
    [aux_sym_source_repeat1] = STATE(3),
    [aux_sym_vector_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym__ws] = ACTIONS(39),
    [sym_keyword] = ACTIONS(42),
    [sym__symbol1] = ACTIONS(45),
    [sym__symbol2] = ACTIONS(45),
    [sym__symbol3] = ACTIONS(45),
    [sym_prefix_name] = ACTIONS(42),
    [anon_sym_CARET] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_LBRACK] = ACTIONS(51),
  },
  [4] = {
    [sym__gap] = STATE(2),
    [sym__form] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__metadata] = STATE(40),
    [sym_vector] = STATE(2),
    [sym_list] = STATE(2),
    [sym__bare_list] = STATE(21),
    [sym__bare_vector] = STATE(20),
    [aux_sym_source_repeat1] = STATE(2),
    [aux_sym_vector_repeat1] = STATE(35),
    [sym__ws] = ACTIONS(54),
    [sym_keyword] = ACTIONS(56),
    [sym__symbol1] = ACTIONS(58),
    [sym__symbol2] = ACTIONS(58),
    [sym__symbol3] = ACTIONS(58),
    [sym_prefix_name] = ACTIONS(56),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_LBRACK] = ACTIONS(62),
    [anon_sym_RBRACK] = ACTIONS(64),
  },
  [5] = {
    [sym__gap] = STATE(2),
    [sym__form] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__metadata] = STATE(40),
    [sym_vector] = STATE(2),
    [sym_list] = STATE(2),
    [sym__bare_list] = STATE(21),
    [sym__bare_vector] = STATE(20),
    [aux_sym_source_repeat1] = STATE(2),
    [aux_sym_vector_repeat1] = STATE(35),
    [sym__ws] = ACTIONS(54),
    [sym_keyword] = ACTIONS(56),
    [sym__symbol1] = ACTIONS(58),
    [sym__symbol2] = ACTIONS(58),
    [sym__symbol3] = ACTIONS(58),
    [sym_prefix_name] = ACTIONS(56),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(66),
    [anon_sym_LBRACK] = ACTIONS(62),
  },
  [6] = {
    [sym__gap] = STATE(12),
    [sym__form] = STATE(12),
    [sym_symbol] = STATE(12),
    [sym__metadata] = STATE(40),
    [sym_vector] = STATE(12),
    [sym_list] = STATE(12),
    [sym__bare_list] = STATE(21),
    [sym__bare_vector] = STATE(20),
    [aux_sym_source_repeat1] = STATE(12),
    [aux_sym_vector_repeat1] = STATE(35),
    [sym__ws] = ACTIONS(68),
    [sym_keyword] = ACTIONS(70),
    [sym__symbol1] = ACTIONS(58),
    [sym__symbol2] = ACTIONS(58),
    [sym__symbol3] = ACTIONS(58),
    [sym_prefix_name] = ACTIONS(70),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(62),
  },
  [7] = {
    [sym__gap] = STATE(11),
    [sym__form] = STATE(11),
    [sym_symbol] = STATE(11),
    [sym__metadata] = STATE(40),
    [sym_vector] = STATE(11),
    [sym_list] = STATE(11),
    [sym__bare_list] = STATE(21),
    [sym__bare_vector] = STATE(20),
    [aux_sym_source_repeat1] = STATE(11),
    [aux_sym_vector_repeat1] = STATE(35),
    [sym__ws] = ACTIONS(74),
    [sym_keyword] = ACTIONS(76),
    [sym__symbol1] = ACTIONS(58),
    [sym__symbol2] = ACTIONS(58),
    [sym__symbol3] = ACTIONS(58),
    [sym_prefix_name] = ACTIONS(76),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_LBRACK] = ACTIONS(62),
    [anon_sym_RBRACK] = ACTIONS(78),
  },
  [8] = {
    [sym__gap] = STATE(4),
    [sym__form] = STATE(4),
    [sym_symbol] = STATE(4),
    [sym__metadata] = STATE(40),
    [sym_vector] = STATE(4),
    [sym_list] = STATE(4),
    [sym__bare_list] = STATE(21),
    [sym__bare_vector] = STATE(20),
    [aux_sym_source_repeat1] = STATE(4),
    [aux_sym_vector_repeat1] = STATE(35),
    [sym__ws] = ACTIONS(80),
    [sym_keyword] = ACTIONS(82),
    [sym__symbol1] = ACTIONS(58),
    [sym__symbol2] = ACTIONS(58),
    [sym__symbol3] = ACTIONS(58),
    [sym_prefix_name] = ACTIONS(82),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_LBRACK] = ACTIONS(62),
    [anon_sym_RBRACK] = ACTIONS(84),
  },
  [9] = {
    [sym__gap] = STATE(5),
    [sym__form] = STATE(5),
    [sym_symbol] = STATE(5),
    [sym__metadata] = STATE(40),
    [sym_vector] = STATE(5),
    [sym_list] = STATE(5),
    [sym__bare_list] = STATE(21),
    [sym__bare_vector] = STATE(20),
    [aux_sym_source_repeat1] = STATE(5),
    [aux_sym_vector_repeat1] = STATE(35),
    [sym__ws] = ACTIONS(86),
    [sym_keyword] = ACTIONS(88),
    [sym__symbol1] = ACTIONS(58),
    [sym__symbol2] = ACTIONS(58),
    [sym__symbol3] = ACTIONS(58),
    [sym_prefix_name] = ACTIONS(88),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(62),
  },
  [10] = {
    [sym__gap] = STATE(3),
    [sym__form] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym__metadata] = STATE(40),
    [sym_vector] = STATE(3),
    [sym_list] = STATE(3),
    [sym__bare_list] = STATE(30),
    [sym__bare_vector] = STATE(27),
    [aux_sym_source_repeat1] = STATE(3),
    [aux_sym_vector_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(92),
    [sym__ws] = ACTIONS(94),
    [sym_keyword] = ACTIONS(96),
    [sym__symbol1] = ACTIONS(9),
    [sym__symbol2] = ACTIONS(9),
    [sym__symbol3] = ACTIONS(9),
    [sym_prefix_name] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [11] = {
    [sym__gap] = STATE(2),
    [sym__form] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__metadata] = STATE(40),
    [sym_vector] = STATE(2),
    [sym_list] = STATE(2),
    [sym__bare_list] = STATE(21),
    [sym__bare_vector] = STATE(20),
    [aux_sym_source_repeat1] = STATE(2),
    [aux_sym_vector_repeat1] = STATE(35),
    [sym__ws] = ACTIONS(54),
    [sym_keyword] = ACTIONS(56),
    [sym__symbol1] = ACTIONS(58),
    [sym__symbol2] = ACTIONS(58),
    [sym__symbol3] = ACTIONS(58),
    [sym_prefix_name] = ACTIONS(56),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_LBRACK] = ACTIONS(62),
    [anon_sym_RBRACK] = ACTIONS(98),
  },
  [12] = {
    [sym__gap] = STATE(2),
    [sym__form] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__metadata] = STATE(40),
    [sym_vector] = STATE(2),
    [sym_list] = STATE(2),
    [sym__bare_list] = STATE(21),
    [sym__bare_vector] = STATE(20),
    [aux_sym_source_repeat1] = STATE(2),
    [aux_sym_vector_repeat1] = STATE(35),
    [sym__ws] = ACTIONS(54),
    [sym_keyword] = ACTIONS(56),
    [sym__symbol1] = ACTIONS(58),
    [sym__symbol2] = ACTIONS(58),
    [sym__symbol3] = ACTIONS(58),
    [sym_prefix_name] = ACTIONS(56),
    [anon_sym_CARET] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(100),
    [anon_sym_LBRACK] = ACTIONS(62),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(102), 1,
      sym__ws,
    ACTIONS(104), 10,
      sym_keyword,
      sym__symbol1,
      sym__symbol2,
      sym__symbol3,
      sym_prefix_name,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [16] = 2,
    ACTIONS(106), 1,
      sym__ws,
    ACTIONS(108), 10,
      sym_keyword,
      sym__symbol1,
      sym__symbol2,
      sym__symbol3,
      sym_prefix_name,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [32] = 2,
    ACTIONS(110), 1,
      sym__ws,
    ACTIONS(112), 10,
      sym_keyword,
      sym__symbol1,
      sym__symbol2,
      sym__symbol3,
      sym_prefix_name,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [48] = 2,
    ACTIONS(114), 1,
      sym__ws,
    ACTIONS(116), 10,
      sym_keyword,
      sym__symbol1,
      sym__symbol2,
      sym__symbol3,
      sym_prefix_name,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [64] = 2,
    ACTIONS(118), 1,
      sym__ws,
    ACTIONS(120), 10,
      sym_keyword,
      sym__symbol1,
      sym__symbol2,
      sym__symbol3,
      sym_prefix_name,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [80] = 2,
    ACTIONS(122), 1,
      sym__ws,
    ACTIONS(124), 10,
      sym_keyword,
      sym__symbol1,
      sym__symbol2,
      sym__symbol3,
      sym_prefix_name,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [96] = 2,
    ACTIONS(126), 1,
      sym__ws,
    ACTIONS(128), 10,
      sym_keyword,
      sym__symbol1,
      sym__symbol2,
      sym__symbol3,
      sym_prefix_name,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [112] = 2,
    ACTIONS(130), 1,
      sym__ws,
    ACTIONS(132), 10,
      sym_keyword,
      sym__symbol1,
      sym__symbol2,
      sym__symbol3,
      sym_prefix_name,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [128] = 2,
    ACTIONS(134), 1,
      sym__ws,
    ACTIONS(136), 10,
      sym_keyword,
      sym__symbol1,
      sym__symbol2,
      sym__symbol3,
      sym_prefix_name,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [144] = 2,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(116), 8,
      sym_keyword,
      sym__symbol1,
      sym__symbol2,
      sym__symbol3,
      sym_prefix_name,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [159] = 2,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(108), 8,
      sym_keyword,
      sym__symbol1,
      sym__symbol2,
      sym__symbol3,
      sym_prefix_name,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [174] = 2,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(120), 8,
      sym_keyword,
      sym__symbol1,
      sym__symbol2,
      sym__symbol3,
      sym_prefix_name,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [189] = 2,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(124), 8,
      sym_keyword,
      sym__symbol1,
      sym__symbol2,
      sym__symbol3,
      sym_prefix_name,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [204] = 2,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(112), 8,
      sym_keyword,
      sym__symbol1,
      sym__symbol2,
      sym__symbol3,
      sym_prefix_name,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [219] = 2,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(132), 8,
      sym_keyword,
      sym__symbol1,
      sym__symbol2,
      sym__symbol3,
      sym_prefix_name,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [234] = 2,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(104), 8,
      sym_keyword,
      sym__symbol1,
      sym__symbol2,
      sym__symbol3,
      sym_prefix_name,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [249] = 2,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(128), 8,
      sym_keyword,
      sym__symbol1,
      sym__symbol2,
      sym__symbol3,
      sym_prefix_name,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [264] = 2,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      sym__ws,
    ACTIONS(136), 8,
      sym_keyword,
      sym__symbol1,
      sym__symbol2,
      sym__symbol3,
      sym_prefix_name,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [279] = 5,
    ACTIONS(138), 1,
      sym__ws,
    ACTIONS(140), 1,
      sym_keyword,
    STATE(37), 1,
      sym_symbol,
    STATE(33), 2,
      sym__gap,
      aux_sym__metadata_repeat1,
    ACTIONS(142), 3,
      sym__symbol1,
      sym__symbol2,
      sym__symbol3,
  [298] = 5,
    ACTIONS(144), 1,
      sym__ws,
    ACTIONS(146), 1,
      sym_keyword,
    STATE(39), 1,
      sym_symbol,
    STATE(31), 2,
      sym__gap,
      aux_sym__metadata_repeat1,
    ACTIONS(142), 3,
      sym__symbol1,
      sym__symbol2,
      sym__symbol3,
  [317] = 3,
    ACTIONS(148), 1,
      sym__ws,
    STATE(33), 2,
      sym__gap,
      aux_sym__metadata_repeat1,
    ACTIONS(151), 4,
      sym_keyword,
      sym__symbol1,
      sym__symbol2,
      sym__symbol3,
  [331] = 7,
    ACTIONS(153), 1,
      anon_sym_CARET,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym__bare_vector,
    STATE(25), 1,
      sym__bare_list,
    STATE(36), 1,
      aux_sym_vector_repeat1,
    STATE(40), 1,
      sym__metadata,
  [353] = 7,
    ACTIONS(153), 1,
      anon_sym_CARET,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      sym__bare_vector,
    STATE(18), 1,
      sym__bare_list,
    STATE(36), 1,
      aux_sym_vector_repeat1,
    STATE(40), 1,
      sym__metadata,
  [375] = 4,
    ACTIONS(163), 1,
      anon_sym_CARET,
    STATE(36), 1,
      aux_sym_vector_repeat1,
    STATE(40), 1,
      sym__metadata,
    ACTIONS(166), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [389] = 1,
    ACTIONS(168), 3,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [395] = 1,
    ACTIONS(110), 3,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [401] = 1,
    ACTIONS(170), 3,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [407] = 1,
    ACTIONS(172), 3,
      anon_sym_CARET,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [413] = 1,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 16,
  [SMALL_STATE(15)] = 32,
  [SMALL_STATE(16)] = 48,
  [SMALL_STATE(17)] = 64,
  [SMALL_STATE(18)] = 80,
  [SMALL_STATE(19)] = 96,
  [SMALL_STATE(20)] = 112,
  [SMALL_STATE(21)] = 128,
  [SMALL_STATE(22)] = 144,
  [SMALL_STATE(23)] = 159,
  [SMALL_STATE(24)] = 174,
  [SMALL_STATE(25)] = 189,
  [SMALL_STATE(26)] = 204,
  [SMALL_STATE(27)] = 219,
  [SMALL_STATE(28)] = 234,
  [SMALL_STATE(29)] = 249,
  [SMALL_STATE(30)] = 264,
  [SMALL_STATE(31)] = 279,
  [SMALL_STATE(32)] = 298,
  [SMALL_STATE(33)] = 317,
  [SMALL_STATE(34)] = 331,
  [SMALL_STATE(35)] = 353,
  [SMALL_STATE(36)] = 375,
  [SMALL_STATE(37)] = 389,
  [SMALL_STATE(38)] = 395,
  [SMALL_STATE(39)] = 401,
  [SMALL_STATE(40)] = 407,
  [SMALL_STATE(41)] = 413,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(15),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(32),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(9),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(26),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(6),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_vector, 2, .production_id = 4),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_vector, 2, .production_id = 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_vector, 3, .production_id = 8),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_vector, 3, .production_id = 8),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_list, 3, .production_id = 8),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_list, 3, .production_id = 8),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2, .production_id = 5),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2, .production_id = 5),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, .production_id = 5),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, .production_id = 5),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_list, 2, .production_id = 4),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_list, 2, .production_id = 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 1, .production_id = 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 1, .production_id = 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1, .production_id = 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1, .production_id = 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__metadata_repeat1, 2), SHIFT_REPEAT(33),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__metadata_repeat1, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2, .production_id = 6), SHIFT_REPEAT(32),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2, .production_id = 6),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata, 3, .production_id = 7),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata, 2, .production_id = 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 1, .production_id = 1),
  [174] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
