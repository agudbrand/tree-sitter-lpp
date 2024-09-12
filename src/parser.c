#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 14
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_document = 1,
  anon_sym_DOLLAR = 2,
  aux_sym_lua_line_token1 = 3,
  anon_sym_DOLLAR_DOLLAR_DOLLAR = 4,
  aux_sym_lua_block_token1 = 5,
  anon_sym_AT = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_COMMA = 9,
  sym_id = 10,
  sym_source_file = 11,
  sym_lua_line = 12,
  sym_lua_block = 13,
  sym_macro = 14,
  sym_left_paren = 15,
  aux_sym_source_file_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_document] = "document",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_lua_line_token1] = "lua_line_token1",
  [anon_sym_DOLLAR_DOLLAR_DOLLAR] = "$$$",
  [aux_sym_lua_block_token1] = "lua_block_token1",
  [anon_sym_AT] = "@",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [sym_id] = "id",
  [sym_source_file] = "source_file",
  [sym_lua_line] = "lua_line",
  [sym_lua_block] = "lua_block",
  [sym_macro] = "macro",
  [sym_left_paren] = "left_paren",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_document] = sym_document,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_lua_line_token1] = aux_sym_lua_line_token1,
  [anon_sym_DOLLAR_DOLLAR_DOLLAR] = anon_sym_DOLLAR_DOLLAR_DOLLAR,
  [aux_sym_lua_block_token1] = aux_sym_lua_block_token1,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_id] = sym_id,
  [sym_source_file] = sym_source_file,
  [sym_lua_line] = sym_lua_line,
  [sym_lua_block] = sym_lua_block,
  [sym_macro] = sym_macro,
  [sym_left_paren] = sym_left_paren,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_lua_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR_DOLLAR_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_lua_block_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_lua_line] = {
    .visible = true,
    .named = true,
  },
  [sym_lua_block] = {
    .visible = true,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_left_paren] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_contents = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_contents] = "contents",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_contents, 1},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(17);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '@') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '$') ADVANCE(11);
      END_STATE();
    case 2:
      if (eof) ADVANCE(4);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == '@') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '@') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_document);
      if (lookahead == '(') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(7);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_document);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_document);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(1);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_lua_line_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_lua_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR_DOLLAR);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_lua_block_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_lua_block_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(7);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR_DOLLAR] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_id] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(12),
    [sym_lua_line] = STATE(2),
    [sym_lua_block] = STATE(2),
    [sym_macro] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_document] = ACTIONS(5),
    [anon_sym_DOLLAR] = ACTIONS(7),
    [anon_sym_DOLLAR_DOLLAR_DOLLAR] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
  },
  [2] = {
    [sym_lua_line] = STATE(3),
    [sym_lua_block] = STATE(3),
    [sym_macro] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_document] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(7),
    [anon_sym_DOLLAR_DOLLAR_DOLLAR] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
  },
  [3] = {
    [sym_lua_line] = STATE(3),
    [sym_lua_block] = STATE(3),
    [sym_macro] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_document] = ACTIONS(19),
    [anon_sym_DOLLAR] = ACTIONS(22),
    [anon_sym_DOLLAR_DOLLAR_DOLLAR] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(28),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym_left_paren,
    ACTIONS(33), 4,
      sym_document,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR_DOLLAR,
      anon_sym_AT,
  [16] = 2,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      sym_document,
    ACTIONS(39), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR_DOLLAR,
      anon_sym_AT,
  [26] = 2,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      sym_document,
    ACTIONS(43), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR_DOLLAR,
      anon_sym_AT,
  [36] = 2,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      sym_document,
    ACTIONS(47), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR_DOLLAR,
      anon_sym_AT,
  [46] = 2,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      sym_document,
    ACTIONS(51), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_DOLLAR_DOLLAR,
      anon_sym_AT,
  [56] = 1,
    ACTIONS(53), 1,
      aux_sym_lua_line_token1,
  [60] = 1,
    ACTIONS(55), 1,
      aux_sym_lua_block_token1,
  [64] = 1,
    ACTIONS(57), 1,
      sym_id,
  [68] = 1,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
  [72] = 1,
    ACTIONS(61), 1,
      anon_sym_DOLLAR_DOLLAR_DOLLAR,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 16,
  [SMALL_STATE(6)] = 26,
  [SMALL_STATE(7)] = 36,
  [SMALL_STATE(8)] = 46,
  [SMALL_STATE(9)] = 56,
  [SMALL_STATE(10)] = 60,
  [SMALL_STATE(11)] = 64,
  [SMALL_STATE(12)] = 68,
  [SMALL_STATE(13)] = 72,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lua_line, 2, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lua_line, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lua_block, 3, 0, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lua_block, 3, 0, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left_paren, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left_paren, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [59] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_lpp(void) {
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
