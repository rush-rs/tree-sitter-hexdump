#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 11
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_COLON = 2,
  sym_int = 3,
  sym_string = 4,
  sym_line_comment = 5,
  sym_program = 6,
  sym_address = 7,
  aux_sym_program_repeat1 = 8,
  aux_sym_program_repeat2 = 9,
  aux_sym_address_repeat1 = 10,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_COLON] = ":",
  [sym_int] = "int",
  [sym_string] = "string",
  [sym_line_comment] = "line_comment",
  [sym_program] = "program",
  [sym_address] = "address",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_program_repeat2] = "program_repeat2",
  [aux_sym_address_repeat1] = "address_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_int] = sym_int,
  [sym_string] = sym_string,
  [sym_line_comment] = sym_line_comment,
  [sym_program] = sym_program,
  [sym_address] = sym_address,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_program_repeat2] = aux_sym_program_repeat2,
  [aux_sym_address_repeat1] = aux_sym_address_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_program_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_address_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(9);
      if (lookahead == ':') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 1:
      if (eof) ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 2:
      if (eof) ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(8);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(8);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(15),
    [sym_address] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_int] = ACTIONS(7),
    [sym_line_comment] = ACTIONS(3),
  },
  [2] = {
    [aux_sym_address_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [sym_int] = ACTIONS(13),
    [sym_string] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
  },
  [3] = {
    [aux_sym_address_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LF] = ACTIONS(15),
    [sym_int] = ACTIONS(17),
    [sym_string] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(3),
  },
  [4] = {
    [aux_sym_address_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LF] = ACTIONS(15),
    [sym_int] = ACTIONS(19),
    [sym_string] = ACTIONS(19),
    [sym_line_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_address] = STATE(14),
    [aux_sym_program_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_LF] = ACTIONS(23),
    [sym_int] = ACTIONS(7),
    [sym_line_comment] = ACTIONS(3),
  },
  [6] = {
    [aux_sym_address_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(25),
    [sym_int] = ACTIONS(19),
    [sym_string] = ACTIONS(19),
    [sym_line_comment] = ACTIONS(3),
  },
  [7] = {
    [aux_sym_address_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_LF] = ACTIONS(27),
    [sym_int] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_line_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_address] = STATE(14),
    [aux_sym_program_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(32),
    [anon_sym_LF] = ACTIONS(23),
    [sym_int] = ACTIONS(7),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      anon_sym_LF,
    STATE(5), 1,
      aux_sym_program_repeat1,
    STATE(10), 1,
      aux_sym_program_repeat2,
  [16] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      anon_sym_LF,
    STATE(8), 1,
      aux_sym_program_repeat1,
    STATE(12), 1,
      aux_sym_program_repeat2,
  [32] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(42), 1,
      anon_sym_LF,
    STATE(11), 1,
      aux_sym_program_repeat1,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      sym_int,
  [46] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_LF,
    STATE(12), 1,
      aux_sym_program_repeat2,
    STATE(13), 1,
      aux_sym_program_repeat1,
  [62] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_int,
    ACTIONS(23), 1,
      anon_sym_LF,
    STATE(11), 1,
      aux_sym_program_repeat1,
    STATE(14), 1,
      sym_address,
  [78] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [86] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 16,
  [SMALL_STATE(11)] = 32,
  [SMALL_STATE(12)] = 46,
  [SMALL_STATE(13)] = 62,
  [SMALL_STATE(14)] = 78,
  [SMALL_STATE(15)] = 86,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_address_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_address_repeat1, 2), SHIFT_REPEAT(7),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(13),
  [50] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hexdump(void) {
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
