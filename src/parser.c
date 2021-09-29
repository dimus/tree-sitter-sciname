#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_LF = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  sym__rank_var = 4,
  sym__rank_forma = 5,
  sym__rank_ssp = 6,
  anon_sym_COMMA = 7,
  anon_sym_AMP = 8,
  anon_sym_DOT = 9,
  sym__author = 10,
  sym__uninomial = 11,
  sym__sp_epithet = 12,
  sym_year = 13,
  sym_tail = 14,
  sym_source_file = 15,
  sym__sci_name = 16,
  sym_uninomial = 17,
  sym_binomial = 18,
  sym__binomial = 19,
  sym_multinomial = 20,
  sym_genus = 21,
  sym_subgenus = 22,
  sym_species = 23,
  sym__infraspecies = 24,
  sym_infraspecies = 25,
  sym_rank = 26,
  sym_authorship = 27,
  sym_authors_paren = 28,
  sym_authors = 29,
  sym_au_delimiter = 30,
  sym_author = 31,
  sym_au_initial = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_multinomial_repeat1 = 34,
  aux_sym_authors_repeat1 = 35,
  aux_sym_author_repeat1 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym__rank_var] = "_rank_var",
  [sym__rank_forma] = "_rank_forma",
  [sym__rank_ssp] = "_rank_ssp",
  [anon_sym_COMMA] = ",",
  [anon_sym_AMP] = "&",
  [anon_sym_DOT] = ".",
  [sym__author] = "_author",
  [sym__uninomial] = "_uninomial",
  [sym__sp_epithet] = "_sp_epithet",
  [sym_year] = "year",
  [sym_tail] = "tail",
  [sym_source_file] = "source_file",
  [sym__sci_name] = "_sci_name",
  [sym_uninomial] = "uninomial",
  [sym_binomial] = "binomial",
  [sym__binomial] = "_binomial",
  [sym_multinomial] = "multinomial",
  [sym_genus] = "genus",
  [sym_subgenus] = "subgenus",
  [sym_species] = "species",
  [sym__infraspecies] = "_infraspecies",
  [sym_infraspecies] = "infraspecies",
  [sym_rank] = "rank",
  [sym_authorship] = "authorship",
  [sym_authors_paren] = "authors_paren",
  [sym_authors] = "authors",
  [sym_au_delimiter] = "au_delimiter",
  [sym_author] = "author",
  [sym_au_initial] = "au_initial",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_multinomial_repeat1] = "multinomial_repeat1",
  [aux_sym_authors_repeat1] = "authors_repeat1",
  [aux_sym_author_repeat1] = "author_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym__rank_var] = sym__rank_var,
  [sym__rank_forma] = sym__rank_forma,
  [sym__rank_ssp] = sym__rank_ssp,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym__author] = sym__author,
  [sym__uninomial] = sym__uninomial,
  [sym__sp_epithet] = sym__sp_epithet,
  [sym_year] = sym_year,
  [sym_tail] = sym_tail,
  [sym_source_file] = sym_source_file,
  [sym__sci_name] = sym__sci_name,
  [sym_uninomial] = sym_uninomial,
  [sym_binomial] = sym_binomial,
  [sym__binomial] = sym__binomial,
  [sym_multinomial] = sym_multinomial,
  [sym_genus] = sym_genus,
  [sym_subgenus] = sym_subgenus,
  [sym_species] = sym_species,
  [sym__infraspecies] = sym__infraspecies,
  [sym_infraspecies] = sym_infraspecies,
  [sym_rank] = sym_rank,
  [sym_authorship] = sym_authorship,
  [sym_authors_paren] = sym_authors_paren,
  [sym_authors] = sym_authors,
  [sym_au_delimiter] = sym_au_delimiter,
  [sym_author] = sym_author,
  [sym_au_initial] = sym_au_initial,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_multinomial_repeat1] = aux_sym_multinomial_repeat1,
  [aux_sym_authors_repeat1] = aux_sym_authors_repeat1,
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
  [sym__rank_var] = {
    .visible = false,
    .named = true,
  },
  [sym__rank_forma] = {
    .visible = false,
    .named = true,
  },
  [sym__rank_ssp] = {
    .visible = false,
    .named = true,
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
  [sym__sp_epithet] = {
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
  [sym__binomial] = {
    .visible = false,
    .named = true,
  },
  [sym_multinomial] = {
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
  [sym__infraspecies] = {
    .visible = false,
    .named = true,
  },
  [sym_infraspecies] = {
    .visible = true,
    .named = true,
  },
  [sym_rank] = {
    .visible = true,
    .named = true,
  },
  [sym_authorship] = {
    .visible = true,
    .named = true,
  },
  [sym_authors_paren] = {
    .visible = true,
    .named = true,
  },
  [sym_authors] = {
    .visible = true,
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
  [aux_sym_multinomial_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_authors_repeat1] = {
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
  field_sp = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_orig] = "orig",
  [field_revision] = "revision",
  [field_sp] = "sp",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_sp, 0},
  [1] =
    {field_orig, 0},
  [2] =
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
      if (eof) ADVANCE(21);
      if (lookahead == '&') ADVANCE(45);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 'v') ADVANCE(50);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 'v') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 'v') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 'v') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 8:
      if (lookahead == '&') ADVANCE(45);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == ']') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 'v') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == '0' ||
          ('7' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 17:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 18:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 19:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__rank_var);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__rank_var);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__rank_var);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__rank_forma);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__rank_forma);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == 'a') ADVANCE(39);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__rank_forma);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == 'a') ADVANCE(40);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__rank_forma);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__rank_forma);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(54);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__rank_forma);
      if (lookahead == '.') ADVANCE(34);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__rank_forma);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__rank_ssp);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__rank_ssp);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__rank_ssp);
      if (lookahead == '.') ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__author);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__author);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__uninomial);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__sp_epithet);
      if (lookahead == 'a') ADVANCE(57);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__sp_epithet);
      if (lookahead == 'b') ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__sp_epithet);
      if (lookahead == 'c') ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__sp_epithet);
      if (lookahead == 'e') ADVANCE(60);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__sp_epithet);
      if (lookahead == 'm') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__sp_epithet);
      if (lookahead == 'p') ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__sp_epithet);
      if (lookahead == 'p') ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__sp_epithet);
      if (lookahead == 'r') ADVANCE(32);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__sp_epithet);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(51);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__sp_epithet);
      if (lookahead == 's') ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__sp_epithet);
      if (lookahead == 't') ADVANCE(61);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__sp_epithet);
      if (lookahead == 'y') ADVANCE(33);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__sp_epithet);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_year);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_year);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tail);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 'v') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tail);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 'v') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tail);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 'v') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tail);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tail);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_tail);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_tail);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_tail);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_tail);
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_tail);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_tail);
      if (lookahead == 'v') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_tail);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_tail);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 20},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 20},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 20},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 20},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 20},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 20},
  [64] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__rank_var] = ACTIONS(1),
    [sym__rank_forma] = ACTIONS(1),
    [sym__rank_ssp] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym__author] = ACTIONS(1),
    [sym__uninomial] = ACTIONS(1),
    [sym__sp_epithet] = ACTIONS(1),
    [sym_year] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(64),
    [sym__sci_name] = STATE(9),
    [sym_uninomial] = STATE(45),
    [sym_binomial] = STATE(45),
    [sym__binomial] = STATE(7),
    [sym_multinomial] = STATE(45),
    [sym_genus] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(9),
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
    STATE(5), 1,
      sym_authors_paren,
    STATE(19), 1,
      sym_authorship,
    STATE(21), 1,
      sym_authors,
    STATE(30), 1,
      sym_author,
    STATE(37), 2,
      sym_au_initial,
      aux_sym_author_repeat1,
    ACTIONS(7), 6,
      anon_sym_LF,
      sym__rank_var,
      sym__rank_forma,
      sym__rank_ssp,
      sym__sp_epithet,
      sym_tail,
  [31] = 8,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym__author,
    STATE(5), 1,
      sym_authors_paren,
    STATE(16), 1,
      sym_authorship,
    STATE(21), 1,
      sym_authors,
    STATE(30), 1,
      sym_author,
    STATE(37), 2,
      sym_au_initial,
      aux_sym_author_repeat1,
    ACTIONS(13), 6,
      anon_sym_LF,
      sym__rank_var,
      sym__rank_forma,
      sym__rank_ssp,
      sym__sp_epithet,
      sym_tail,
  [62] = 8,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym__author,
    STATE(5), 1,
      sym_authors_paren,
    STATE(21), 1,
      sym_authors,
    STATE(24), 1,
      sym_authorship,
    STATE(30), 1,
      sym_author,
    STATE(37), 2,
      sym_au_initial,
      aux_sym_author_repeat1,
    ACTIONS(15), 6,
      anon_sym_LF,
      sym__rank_var,
      sym__rank_forma,
      sym__rank_ssp,
      sym__sp_epithet,
      sym_tail,
  [93] = 5,
    ACTIONS(11), 1,
      sym__author,
    STATE(20), 1,
      sym_authors,
    STATE(30), 1,
      sym_author,
    STATE(37), 2,
      sym_au_initial,
      aux_sym_author_repeat1,
    ACTIONS(17), 6,
      anon_sym_LF,
      sym__rank_var,
      sym__rank_forma,
      sym__rank_ssp,
      sym__sp_epithet,
      sym_tail,
  [115] = 6,
    ACTIONS(24), 1,
      sym__sp_epithet,
    STATE(2), 1,
      sym_infraspecies,
    STATE(46), 1,
      sym_rank,
    ACTIONS(19), 2,
      anon_sym_LF,
      sym_tail,
    STATE(6), 2,
      sym__infraspecies,
      aux_sym_multinomial_repeat1,
    ACTIONS(21), 3,
      sym__rank_var,
      sym__rank_forma,
      sym__rank_ssp,
  [138] = 6,
    ACTIONS(31), 1,
      sym__sp_epithet,
    STATE(2), 1,
      sym_infraspecies,
    STATE(46), 1,
      sym_rank,
    ACTIONS(27), 2,
      anon_sym_LF,
      sym_tail,
    STATE(8), 2,
      sym__infraspecies,
      aux_sym_multinomial_repeat1,
    ACTIONS(29), 3,
      sym__rank_var,
      sym__rank_forma,
      sym__rank_ssp,
  [161] = 6,
    ACTIONS(31), 1,
      sym__sp_epithet,
    STATE(2), 1,
      sym_infraspecies,
    STATE(46), 1,
      sym_rank,
    ACTIONS(33), 2,
      anon_sym_LF,
      sym_tail,
    STATE(6), 2,
      sym__infraspecies,
      aux_sym_multinomial_repeat1,
    ACTIONS(29), 3,
      sym__rank_var,
      sym__rank_forma,
      sym__rank_ssp,
  [184] = 6,
    ACTIONS(5), 1,
      sym__uninomial,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym__binomial,
    STATE(34), 1,
      sym_genus,
    STATE(10), 2,
      sym__sci_name,
      aux_sym_source_file_repeat1,
    STATE(45), 3,
      sym_uninomial,
      sym_binomial,
      sym_multinomial,
  [206] = 6,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      sym__uninomial,
    STATE(7), 1,
      sym__binomial,
    STATE(34), 1,
      sym_genus,
    STATE(10), 2,
      sym__sci_name,
      aux_sym_source_file_repeat1,
    STATE(45), 3,
      sym_uninomial,
      sym_binomial,
      sym_multinomial,
  [228] = 7,
    ACTIONS(42), 1,
      anon_sym_LPAREN,
    ACTIONS(44), 1,
      sym__author,
    STATE(17), 1,
      sym_authors_paren,
    STATE(26), 1,
      sym_author,
    STATE(53), 1,
      sym_authors,
    STATE(60), 1,
      sym_authorship,
    STATE(37), 2,
      sym_au_initial,
      aux_sym_author_repeat1,
  [251] = 7,
    ACTIONS(42), 1,
      anon_sym_LPAREN,
    ACTIONS(44), 1,
      sym__author,
    STATE(17), 1,
      sym_authors_paren,
    STATE(26), 1,
      sym_author,
    STATE(51), 1,
      sym_authorship,
    STATE(53), 1,
      sym_authors,
    STATE(37), 2,
      sym_au_initial,
      aux_sym_author_repeat1,
  [274] = 1,
    ACTIONS(46), 8,
      anon_sym_LF,
      anon_sym_LPAREN,
      sym__rank_var,
      sym__rank_forma,
      sym__rank_ssp,
      sym__author,
      sym__sp_epithet,
      sym_tail,
  [285] = 1,
    ACTIONS(48), 7,
      anon_sym_LF,
      sym__rank_var,
      sym__rank_forma,
      sym__rank_ssp,
      sym__author,
      sym__sp_epithet,
      sym_tail,
  [295] = 1,
    ACTIONS(50), 6,
      anon_sym_LF,
      sym__rank_var,
      sym__rank_forma,
      sym__rank_ssp,
      sym__sp_epithet,
      sym_tail,
  [304] = 1,
    ACTIONS(52), 6,
      anon_sym_LF,
      sym__rank_var,
      sym__rank_forma,
      sym__rank_ssp,
      sym__sp_epithet,
      sym_tail,
  [313] = 5,
    ACTIONS(44), 1,
      sym__author,
    ACTIONS(54), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      sym_author,
    STATE(54), 1,
      sym_authors,
    STATE(37), 2,
      sym_au_initial,
      aux_sym_author_repeat1,
  [330] = 1,
    ACTIONS(56), 6,
      anon_sym_LF,
      sym__rank_var,
      sym__rank_forma,
      sym__rank_ssp,
      sym__sp_epithet,
      sym_tail,
  [339] = 1,
    ACTIONS(13), 6,
      anon_sym_LF,
      sym__rank_var,
      sym__rank_forma,
      sym__rank_ssp,
      sym__sp_epithet,
      sym_tail,
  [348] = 1,
    ACTIONS(58), 6,
      anon_sym_LF,
      sym__rank_var,
      sym__rank_forma,
      sym__rank_ssp,
      sym__sp_epithet,
      sym_tail,
  [357] = 1,
    ACTIONS(17), 6,
      anon_sym_LF,
      sym__rank_var,
      sym__rank_forma,
      sym__rank_ssp,
      sym__sp_epithet,
      sym_tail,
  [366] = 1,
    ACTIONS(60), 6,
      anon_sym_LF,
      sym__rank_var,
      sym__rank_forma,
      sym__rank_ssp,
      sym__sp_epithet,
      sym_tail,
  [375] = 1,
    ACTIONS(62), 6,
      anon_sym_LF,
      sym__rank_var,
      sym__rank_forma,
      sym__rank_ssp,
      sym__sp_epithet,
      sym_tail,
  [384] = 1,
    ACTIONS(64), 6,
      anon_sym_LF,
      sym__rank_var,
      sym__rank_forma,
      sym__rank_ssp,
      sym__sp_epithet,
      sym_tail,
  [393] = 1,
    ACTIONS(66), 6,
      anon_sym_LF,
      sym__rank_var,
      sym__rank_forma,
      sym__rank_ssp,
      sym__sp_epithet,
      sym_tail,
  [402] = 5,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    ACTIONS(70), 1,
      anon_sym_AMP,
    ACTIONS(72), 1,
      sym_year,
    STATE(32), 1,
      aux_sym_authors_repeat1,
    STATE(36), 1,
      sym_au_delimiter,
  [418] = 3,
    ACTIONS(76), 1,
      anon_sym_DOT,
    ACTIONS(78), 1,
      sym__author,
    ACTIONS(74), 3,
      anon_sym_COMMA,
      anon_sym_AMP,
      sym_year,
  [430] = 4,
    ACTIONS(83), 1,
      sym_year,
    STATE(28), 1,
      aux_sym_authors_repeat1,
    STATE(36), 1,
      sym_au_delimiter,
    ACTIONS(80), 2,
      anon_sym_COMMA,
      anon_sym_AMP,
  [444] = 3,
    ACTIONS(76), 1,
      anon_sym_DOT,
    ACTIONS(78), 1,
      sym__author,
    ACTIONS(85), 3,
      anon_sym_COMMA,
      anon_sym_AMP,
      sym_year,
  [456] = 5,
    ACTIONS(70), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(89), 1,
      sym_year,
    STATE(31), 1,
      aux_sym_authors_repeat1,
    STATE(36), 1,
      sym_au_delimiter,
  [472] = 5,
    ACTIONS(70), 1,
      anon_sym_AMP,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(93), 1,
      sym_year,
    STATE(28), 1,
      aux_sym_authors_repeat1,
    STATE(36), 1,
      sym_au_delimiter,
  [488] = 5,
    ACTIONS(70), 1,
      anon_sym_AMP,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(97), 1,
      sym_year,
    STATE(28), 1,
      aux_sym_authors_repeat1,
    STATE(36), 1,
      sym_au_delimiter,
  [504] = 3,
    ACTIONS(101), 1,
      sym__sp_epithet,
    STATE(25), 1,
      sym_species,
    ACTIONS(99), 2,
      anon_sym_LF,
      sym_tail,
  [515] = 4,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      sym__sp_epithet,
    STATE(15), 1,
      sym_species,
    STATE(33), 1,
      sym_subgenus,
  [528] = 2,
    ACTIONS(107), 2,
      anon_sym_LF,
      sym_tail,
    ACTIONS(109), 2,
      anon_sym_LPAREN,
      sym__sp_epithet,
  [537] = 3,
    ACTIONS(44), 1,
      sym__author,
    STATE(38), 1,
      sym_author,
    STATE(37), 2,
      sym_au_initial,
      aux_sym_author_repeat1,
  [548] = 2,
    ACTIONS(111), 1,
      sym__author,
    STATE(39), 2,
      sym_au_initial,
      aux_sym_author_repeat1,
  [556] = 1,
    ACTIONS(83), 3,
      anon_sym_COMMA,
      anon_sym_AMP,
      sym_year,
  [562] = 2,
    ACTIONS(113), 1,
      sym__author,
    STATE(39), 2,
      sym_au_initial,
      aux_sym_author_repeat1,
  [570] = 1,
    ACTIONS(116), 3,
      anon_sym_LF,
      sym__sp_epithet,
      sym_tail,
  [576] = 2,
    ACTIONS(118), 1,
      sym__author,
    ACTIONS(120), 1,
      sym_year,
  [583] = 1,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      sym__uninomial,
  [588] = 2,
    ACTIONS(118), 1,
      sym__author,
    ACTIONS(124), 1,
      sym_year,
  [595] = 1,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      sym__uninomial,
  [600] = 2,
    ACTIONS(128), 1,
      anon_sym_LF,
    ACTIONS(130), 1,
      sym_tail,
  [607] = 2,
    ACTIONS(132), 1,
      sym__sp_epithet,
    STATE(3), 1,
      sym_infraspecies,
  [614] = 2,
    ACTIONS(97), 1,
      sym_year,
    ACTIONS(118), 1,
      sym__author,
  [621] = 2,
    ACTIONS(93), 1,
      sym_year,
    ACTIONS(118), 1,
      sym__author,
  [628] = 1,
    ACTIONS(134), 2,
      anon_sym_RPAREN,
      sym__author,
  [633] = 2,
    ACTIONS(76), 1,
      anon_sym_DOT,
    ACTIONS(78), 1,
      sym__author,
  [640] = 1,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
  [644] = 1,
    ACTIONS(138), 1,
      anon_sym_LF,
  [648] = 1,
    ACTIONS(54), 1,
      anon_sym_RPAREN,
  [652] = 1,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
  [656] = 1,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
  [660] = 1,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
  [664] = 1,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
  [668] = 1,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
  [672] = 1,
    ACTIONS(150), 1,
      sym__sp_epithet,
  [676] = 1,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
  [680] = 1,
    ACTIONS(154), 1,
      sym__author,
  [684] = 1,
    ACTIONS(118), 1,
      sym__author,
  [688] = 1,
    ACTIONS(156), 1,
      sym__uninomial,
  [692] = 1,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 115,
  [SMALL_STATE(7)] = 138,
  [SMALL_STATE(8)] = 161,
  [SMALL_STATE(9)] = 184,
  [SMALL_STATE(10)] = 206,
  [SMALL_STATE(11)] = 228,
  [SMALL_STATE(12)] = 251,
  [SMALL_STATE(13)] = 274,
  [SMALL_STATE(14)] = 285,
  [SMALL_STATE(15)] = 295,
  [SMALL_STATE(16)] = 304,
  [SMALL_STATE(17)] = 313,
  [SMALL_STATE(18)] = 330,
  [SMALL_STATE(19)] = 339,
  [SMALL_STATE(20)] = 348,
  [SMALL_STATE(21)] = 357,
  [SMALL_STATE(22)] = 366,
  [SMALL_STATE(23)] = 375,
  [SMALL_STATE(24)] = 384,
  [SMALL_STATE(25)] = 393,
  [SMALL_STATE(26)] = 402,
  [SMALL_STATE(27)] = 418,
  [SMALL_STATE(28)] = 430,
  [SMALL_STATE(29)] = 444,
  [SMALL_STATE(30)] = 456,
  [SMALL_STATE(31)] = 472,
  [SMALL_STATE(32)] = 488,
  [SMALL_STATE(33)] = 504,
  [SMALL_STATE(34)] = 515,
  [SMALL_STATE(35)] = 528,
  [SMALL_STATE(36)] = 537,
  [SMALL_STATE(37)] = 548,
  [SMALL_STATE(38)] = 556,
  [SMALL_STATE(39)] = 562,
  [SMALL_STATE(40)] = 570,
  [SMALL_STATE(41)] = 576,
  [SMALL_STATE(42)] = 583,
  [SMALL_STATE(43)] = 588,
  [SMALL_STATE(44)] = 595,
  [SMALL_STATE(45)] = 600,
  [SMALL_STATE(46)] = 607,
  [SMALL_STATE(47)] = 614,
  [SMALL_STATE(48)] = 621,
  [SMALL_STATE(49)] = 628,
  [SMALL_STATE(50)] = 633,
  [SMALL_STATE(51)] = 640,
  [SMALL_STATE(52)] = 644,
  [SMALL_STATE(53)] = 648,
  [SMALL_STATE(54)] = 652,
  [SMALL_STATE(55)] = 656,
  [SMALL_STATE(56)] = 660,
  [SMALL_STATE(57)] = 664,
  [SMALL_STATE(58)] = 668,
  [SMALL_STATE(59)] = 672,
  [SMALL_STATE(60)] = 676,
  [SMALL_STATE(61)] = 680,
  [SMALL_STATE(62)] = 684,
  [SMALL_STATE(63)] = 688,
  [SMALL_STATE(64)] = 692,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__infraspecies, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__infraspecies, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_species, 1, .production_id = 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authorship, 1, .production_id = 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multinomial_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multinomial_repeat1, 2), SHIFT_REPEAT(59),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multinomial_repeat1, 2), SHIFT_REPEAT(13),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binomial, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multinomial, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infraspecies, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authors_paren, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binomial, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__infraspecies, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authorship, 1, .production_id = 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authors, 3),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authorship, 2, .production_id = 3),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authors, 4),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authors, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_species, 2, .production_id = 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binomial, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_au_initial, 1),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_authors_repeat1, 2), SHIFT_REPEAT(62),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_authors_repeat1, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uninomial, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uninomial, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_genus, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_author_repeat1, 2), SHIFT_REPEAT(50),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subgenus, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_au_delimiter, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sci_name, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sci_name, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authors_paren, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authorship, 2, .production_id = 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authors, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authors, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authors, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rank, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_au_initial, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [158] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
