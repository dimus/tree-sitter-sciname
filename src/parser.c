#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LF = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_AMP = 5,
  anon_sym_DOT = 6,
  sym__author = 7,
  sym__uninomial = 8,
  sym__species = 9,
  sym_year = 10,
  sym_tail = 11,
  sym_source_file = 12,
  sym__sci_name = 13,
  sym_uninomial = 14,
  sym_binomial = 15,
  sym_genus = 16,
  sym_subgenus = 17,
  sym_species = 18,
  sym_authorship = 19,
  sym__au_paren = 20,
  sym__au = 21,
  sym_au_delimiter = 22,
  sym_author = 23,
  sym_au_initial = 24,
  aux_sym_source_file_repeat1 = 25,
  aux_sym__au_repeat1 = 26,
  aux_sym_author_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_AMP] = "&",
  [anon_sym_DOT] = ".",
  [sym__author] = "_author",
  [sym__uninomial] = "_uninomial",
  [sym__species] = "_species",
  [sym_year] = "year",
  [sym_tail] = "tail",
  [sym_source_file] = "source_file",
  [sym__sci_name] = "_sci_name",
  [sym_uninomial] = "uninomial",
  [sym_binomial] = "binomial",
  [sym_genus] = "genus",
  [sym_subgenus] = "subgenus",
  [sym_species] = "species",
  [sym_authorship] = "authorship",
  [sym__au_paren] = "_au_paren",
  [sym__au] = "_au",
  [sym_au_delimiter] = "au_delimiter",
  [sym_author] = "author",
  [sym_au_initial] = "au_initial",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__au_repeat1] = "_au_repeat1",
  [aux_sym_author_repeat1] = "author_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym__author] = sym__author,
  [sym__uninomial] = sym__uninomial,
  [sym__species] = sym__species,
  [sym_year] = sym_year,
  [sym_tail] = sym_tail,
  [sym_source_file] = sym_source_file,
  [sym__sci_name] = sym__sci_name,
  [sym_uninomial] = sym_uninomial,
  [sym_binomial] = sym_binomial,
  [sym_genus] = sym_genus,
  [sym_subgenus] = sym_subgenus,
  [sym_species] = sym_species,
  [sym_authorship] = sym_authorship,
  [sym__au_paren] = sym__au_paren,
  [sym__au] = sym__au,
  [sym_au_delimiter] = sym_au_delimiter,
  [sym_author] = sym_author,
  [sym_au_initial] = sym_au_initial,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__au_repeat1] = aux_sym__au_repeat1,
  [aux_sym_author_repeat1] = aux_sym_author_repeat1,
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
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__author] = {
    .visible = false,
    .named = true,
  },
  [sym__uninomial] = {
    .visible = false,
    .named = true,
  },
  [sym__species] = {
    .visible = false,
    .named = true,
  },
  [sym_year] = {
    .visible = true,
    .named = true,
  },
  [sym_tail] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__sci_name] = {
    .visible = false,
    .named = true,
  },
  [sym_uninomial] = {
    .visible = true,
    .named = true,
  },
  [sym_binomial] = {
    .visible = true,
    .named = true,
  },
  [sym_genus] = {
    .visible = true,
    .named = true,
  },
  [sym_subgenus] = {
    .visible = true,
    .named = true,
  },
  [sym_species] = {
    .visible = true,
    .named = true,
  },
  [sym_authorship] = {
    .visible = true,
    .named = true,
  },
  [sym__au_paren] = {
    .visible = false,
    .named = true,
  },
  [sym__au] = {
    .visible = false,
    .named = true,
  },
  [sym_au_delimiter] = {
    .visible = true,
    .named = true,
  },
  [sym_author] = {
    .visible = true,
    .named = true,
  },
  [sym_au_initial] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__au_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_author_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_orig = 1,
  field_revision = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_orig] = "orig",
  [field_revision] = "revision",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_orig, 0},
  [1] =
    {field_orig, 0},
    {field_revision, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == '0' ||
          ('7' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 11:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__author);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__author);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__uninomial);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__species);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_year);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_year);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_tail);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_tail);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_tail);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_tail);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_tail);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_tail);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 12},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 7},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym__author] = ACTIONS(1),
    [sym__uninomial] = ACTIONS(1),
    [sym__species] = ACTIONS(1),
    [sym_year] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(53),
    [sym__sci_name] = STATE(5),
    [sym_uninomial] = STATE(29),
    [sym_binomial] = STATE(29),
    [sym_genus] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__uninomial] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym__author,
    STATE(7), 1,
      sym__au_paren,
    STATE(14), 1,
      sym_author,
    STATE(34), 1,
      sym__au,
    STATE(35), 1,
      sym_authorship,
    ACTIONS(7), 2,
      anon_sym_LF,
      sym_tail,
    STATE(23), 2,
      sym_au_initial,
      aux_sym_author_repeat1,
  [27] = 7,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym__author,
    STATE(8), 1,
      sym__au_paren,
    STATE(9), 1,
      sym_author,
    STATE(43), 1,
      sym__au,
    STATE(52), 1,
      sym_authorship,
    STATE(23), 2,
      sym_au_initial,
      aux_sym_author_repeat1,
  [50] = 7,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym__author,
    STATE(8), 1,
      sym__au_paren,
    STATE(9), 1,
      sym_author,
    STATE(43), 1,
      sym__au,
    STATE(50), 1,
      sym_authorship,
    STATE(23), 2,
      sym_au_initial,
      aux_sym_author_repeat1,
  [73] = 5,
    ACTIONS(5), 1,
      sym__uninomial,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      sym_genus,
    STATE(6), 2,
      sym__sci_name,
      aux_sym_source_file_repeat1,
    STATE(29), 2,
      sym_uninomial,
      sym_binomial,
  [91] = 5,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym__uninomial,
    STATE(19), 1,
      sym_genus,
    STATE(6), 2,
      sym__sci_name,
      aux_sym_source_file_repeat1,
    STATE(29), 2,
      sym_uninomial,
      sym_binomial,
  [109] = 5,
    ACTIONS(11), 1,
      sym__author,
    STATE(14), 1,
      sym_author,
    STATE(27), 1,
      sym__au,
    ACTIONS(24), 2,
      anon_sym_LF,
      sym_tail,
    STATE(23), 2,
      sym_au_initial,
      aux_sym_author_repeat1,
  [127] = 5,
    ACTIONS(15), 1,
      sym__author,
    ACTIONS(26), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym_author,
    STATE(44), 1,
      sym__au,
    STATE(23), 2,
      sym_au_initial,
      aux_sym_author_repeat1,
  [144] = 5,
    ACTIONS(28), 1,
      anon_sym_COMMA,
    ACTIONS(30), 1,
      anon_sym_AMP,
    ACTIONS(32), 1,
      sym_year,
    STATE(11), 1,
      aux_sym__au_repeat1,
    STATE(16), 1,
      sym_au_delimiter,
  [160] = 4,
    ACTIONS(37), 1,
      sym_year,
    STATE(10), 1,
      aux_sym__au_repeat1,
    STATE(16), 1,
      sym_au_delimiter,
    ACTIONS(34), 2,
      anon_sym_COMMA,
      anon_sym_AMP,
  [174] = 5,
    ACTIONS(30), 1,
      anon_sym_AMP,
    ACTIONS(39), 1,
      anon_sym_COMMA,
    ACTIONS(41), 1,
      sym_year,
    STATE(10), 1,
      aux_sym__au_repeat1,
    STATE(16), 1,
      sym_au_delimiter,
  [190] = 3,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym__author,
    ACTIONS(43), 3,
      anon_sym_COMMA,
      anon_sym_AMP,
      sym_year,
  [202] = 3,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym__author,
    ACTIONS(49), 3,
      anon_sym_COMMA,
      anon_sym_AMP,
      sym_year,
  [214] = 5,
    ACTIONS(30), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    ACTIONS(53), 1,
      sym_year,
    STATE(15), 1,
      aux_sym__au_repeat1,
    STATE(16), 1,
      sym_au_delimiter,
  [230] = 5,
    ACTIONS(30), 1,
      anon_sym_AMP,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    ACTIONS(57), 1,
      sym_year,
    STATE(10), 1,
      aux_sym__au_repeat1,
    STATE(16), 1,
      sym_au_delimiter,
  [246] = 3,
    ACTIONS(15), 1,
      sym__author,
    STATE(20), 1,
      sym_author,
    STATE(23), 2,
      sym_au_initial,
      aux_sym_author_repeat1,
  [257] = 2,
    ACTIONS(59), 2,
      anon_sym_LF,
      sym_tail,
    ACTIONS(61), 2,
      anon_sym_LPAREN,
      sym__species,
  [266] = 3,
    ACTIONS(65), 1,
      sym__species,
    STATE(33), 1,
      sym_species,
    ACTIONS(63), 2,
      anon_sym_LF,
      sym_tail,
  [277] = 4,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      sym__species,
    STATE(18), 1,
      sym_subgenus,
    STATE(39), 1,
      sym_species,
  [290] = 1,
    ACTIONS(37), 3,
      anon_sym_COMMA,
      anon_sym_AMP,
      sym_year,
  [296] = 1,
    ACTIONS(71), 3,
      anon_sym_LF,
      sym__author,
      sym_tail,
  [302] = 2,
    ACTIONS(73), 1,
      sym__author,
    STATE(22), 2,
      sym_au_initial,
      aux_sym_author_repeat1,
  [310] = 2,
    ACTIONS(76), 1,
      sym__author,
    STATE(22), 2,
      sym_au_initial,
      aux_sym_author_repeat1,
  [318] = 1,
    ACTIONS(78), 3,
      anon_sym_LF,
      sym__species,
      sym_tail,
  [324] = 2,
    ACTIONS(80), 1,
      sym__author,
    ACTIONS(82), 1,
      sym_year,
  [331] = 2,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym__author,
  [338] = 1,
    ACTIONS(84), 2,
      anon_sym_LF,
      sym_tail,
  [343] = 2,
    ACTIONS(57), 1,
      sym_year,
    ACTIONS(80), 1,
      sym__author,
  [350] = 2,
    ACTIONS(86), 1,
      anon_sym_LF,
    ACTIONS(88), 1,
      sym_tail,
  [357] = 1,
    ACTIONS(90), 2,
      anon_sym_LF,
      sym_tail,
  [362] = 2,
    ACTIONS(80), 1,
      sym__author,
    ACTIONS(92), 1,
      sym_year,
  [369] = 1,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      sym__uninomial,
  [374] = 1,
    ACTIONS(96), 2,
      anon_sym_LF,
      sym_tail,
  [379] = 1,
    ACTIONS(24), 2,
      anon_sym_LF,
      sym_tail,
  [384] = 1,
    ACTIONS(98), 2,
      anon_sym_LF,
      sym_tail,
  [389] = 1,
    ACTIONS(100), 2,
      anon_sym_LF,
      sym_tail,
  [394] = 2,
    ACTIONS(41), 1,
      sym_year,
    ACTIONS(80), 1,
      sym__author,
  [401] = 1,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      sym__uninomial,
  [406] = 1,
    ACTIONS(104), 2,
      anon_sym_LF,
      sym_tail,
  [411] = 1,
    ACTIONS(106), 2,
      anon_sym_RPAREN,
      sym__author,
  [416] = 1,
    ACTIONS(108), 2,
      anon_sym_LF,
      sym_tail,
  [421] = 1,
    ACTIONS(110), 1,
      sym__uninomial,
  [425] = 1,
    ACTIONS(26), 1,
      anon_sym_RPAREN,
  [429] = 1,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
  [433] = 1,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
  [437] = 1,
    ACTIONS(116), 1,
      sym__author,
  [441] = 1,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
  [445] = 1,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
  [449] = 1,
    ACTIONS(122), 1,
      anon_sym_LF,
  [453] = 1,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
  [457] = 1,
    ACTIONS(126), 1,
      anon_sym_RPAREN,
  [461] = 1,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
  [465] = 1,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
  [469] = 1,
    ACTIONS(80), 1,
      sym__author,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 73,
  [SMALL_STATE(6)] = 91,
  [SMALL_STATE(7)] = 109,
  [SMALL_STATE(8)] = 127,
  [SMALL_STATE(9)] = 144,
  [SMALL_STATE(10)] = 160,
  [SMALL_STATE(11)] = 174,
  [SMALL_STATE(12)] = 190,
  [SMALL_STATE(13)] = 202,
  [SMALL_STATE(14)] = 214,
  [SMALL_STATE(15)] = 230,
  [SMALL_STATE(16)] = 246,
  [SMALL_STATE(17)] = 257,
  [SMALL_STATE(18)] = 266,
  [SMALL_STATE(19)] = 277,
  [SMALL_STATE(20)] = 290,
  [SMALL_STATE(21)] = 296,
  [SMALL_STATE(22)] = 302,
  [SMALL_STATE(23)] = 310,
  [SMALL_STATE(24)] = 318,
  [SMALL_STATE(25)] = 324,
  [SMALL_STATE(26)] = 331,
  [SMALL_STATE(27)] = 338,
  [SMALL_STATE(28)] = 343,
  [SMALL_STATE(29)] = 350,
  [SMALL_STATE(30)] = 357,
  [SMALL_STATE(31)] = 362,
  [SMALL_STATE(32)] = 369,
  [SMALL_STATE(33)] = 374,
  [SMALL_STATE(34)] = 379,
  [SMALL_STATE(35)] = 384,
  [SMALL_STATE(36)] = 389,
  [SMALL_STATE(37)] = 394,
  [SMALL_STATE(38)] = 401,
  [SMALL_STATE(39)] = 406,
  [SMALL_STATE(40)] = 411,
  [SMALL_STATE(41)] = 416,
  [SMALL_STATE(42)] = 421,
  [SMALL_STATE(43)] = 425,
  [SMALL_STATE(44)] = 429,
  [SMALL_STATE(45)] = 433,
  [SMALL_STATE(46)] = 437,
  [SMALL_STATE(47)] = 441,
  [SMALL_STATE(48)] = 445,
  [SMALL_STATE(49)] = 449,
  [SMALL_STATE(50)] = 453,
  [SMALL_STATE(51)] = 457,
  [SMALL_STATE(52)] = 461,
  [SMALL_STATE(53)] = 465,
  [SMALL_STATE(54)] = 469,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_species, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authorship, 1, .production_id = 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authorship, 1, .production_id = 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__au_repeat1, 2), SHIFT_REPEAT(54),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__au_repeat1, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_au_initial, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uninomial, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_genus, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uninomial, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__au_paren, 3),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_author_repeat1, 2), SHIFT_REPEAT(26),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subgenus, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_au_delimiter, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authorship, 2, .production_id = 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__au, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sci_name, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binomial, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_species, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__au, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sci_name, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binomial, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__au_paren, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__au, 4),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authorship, 2, .production_id = 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__au, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_au_initial, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__au, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__au, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [130] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sciname(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
