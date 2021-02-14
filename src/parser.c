#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 113
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  anon_sym_LF = 1,
  anon_sym_SEMI = 2,
  anon_sym_STAR = 3,
  aux_sym_comment_token1 = 4,
  anon_sym_include = 5,
  aux_sym_word_directive_token1 = 6,
  anon_sym_account = 7,
  anon_sym_end = 8,
  anon_sym_alias = 9,
  aux_sym_word_directive_token2 = 10,
  anon_sym_EQ = 11,
  anon_sym_def = 12,
  anon_sym_year = 13,
  aux_sym_word_directive_token3 = 14,
  anon_sym_bucket = 15,
  anon_sym_A = 16,
  anon_sym_Y = 17,
  anon_sym_N = 18,
  anon_sym_D = 19,
  anon_sym_C = 20,
  anon_sym_P = 21,
  anon_sym_i = 22,
  anon_sym_I = 23,
  anon_sym_o = 24,
  anon_sym_O = 25,
  sym_single_date = 26,
  sym_time = 27,
  anon_sym_BANG = 28,
  sym_payee = 29,
  aux_sym_note_token1 = 30,
  anon_sym_LPAREN = 31,
  anon_sym_RPAREN = 32,
  anon_sym_LBRACK = 33,
  anon_sym_RBRACK = 34,
  sym_account_name = 35,
  anon_sym_DASH = 36,
  aux_sym_quantity_token1 = 37,
  aux_sym_commodity_token1 = 38,
  aux_sym_commodity_token2 = 39,
  anon_sym_AT = 40,
  anon_sym_AT_AT = 41,
  anon_sym_ = 42,
  anon_sym_TAB = 43,
  anon_sym_2 = 44,
  anon_sym_TAB2 = 45,
  sym_source_file = 46,
  sym_journal_item = 47,
  sym_comment = 48,
  sym_directive = 49,
  sym_word_directive = 50,
  sym_char_directive = 51,
  sym_check_in = 52,
  sym_check_out = 53,
  sym_xact = 54,
  sym_plain_xact = 55,
  sym_date = 56,
  sym_status = 57,
  sym_note = 58,
  sym_posting = 59,
  sym_account = 60,
  sym_values = 61,
  sym_amount = 62,
  sym_quantity = 63,
  sym_commodity = 64,
  sym_price = 65,
  sym_whitespace = 66,
  sym_spacer = 67,
  aux_sym_source_file_repeat1 = 68,
  aux_sym_plain_xact_repeat1 = 69,
  aux_sym_whitespace_repeat1 = 70,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_STAR] = "*",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_include] = "include",
  [aux_sym_word_directive_token1] = "word_directive_token1",
  [anon_sym_account] = "account",
  [anon_sym_end] = "end",
  [anon_sym_alias] = "alias",
  [aux_sym_word_directive_token2] = "word_directive_token2",
  [anon_sym_EQ] = "=",
  [anon_sym_def] = "def",
  [anon_sym_year] = "year",
  [aux_sym_word_directive_token3] = "word_directive_token3",
  [anon_sym_bucket] = "bucket",
  [anon_sym_A] = "A",
  [anon_sym_Y] = "Y",
  [anon_sym_N] = "N",
  [anon_sym_D] = "D",
  [anon_sym_C] = "C",
  [anon_sym_P] = "P",
  [anon_sym_i] = "i",
  [anon_sym_I] = "I",
  [anon_sym_o] = "o",
  [anon_sym_O] = "O",
  [sym_single_date] = "single_date",
  [sym_time] = "time",
  [anon_sym_BANG] = "!",
  [sym_payee] = "payee",
  [aux_sym_note_token1] = "note_token1",
  [anon_sym_LPAREN] = "",
  [anon_sym_RPAREN] = "",
  [anon_sym_LBRACK] = "",
  [anon_sym_RBRACK] = "",
  [sym_account_name] = "",
  [anon_sym_DASH] = "-",
  [aux_sym_quantity_token1] = "quantity_token1",
  [aux_sym_commodity_token1] = "commodity_token1",
  [aux_sym_commodity_token2] = "commodity_token2",
  [anon_sym_AT] = "@",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_] = " ",
  [anon_sym_TAB] = "\t",
  [anon_sym_2] = "  ",
  [anon_sym_TAB2] = " \t",
  [sym_source_file] = "source_file",
  [sym_journal_item] = "journal_item",
  [sym_comment] = "comment",
  [sym_directive] = "directive",
  [sym_word_directive] = "word_directive",
  [sym_char_directive] = "char_directive",
  [sym_check_in] = "check_in",
  [sym_check_out] = "check_out",
  [sym_xact] = "xact",
  [sym_plain_xact] = "plain_xact",
  [sym_date] = "date",
  [sym_status] = "status",
  [sym_note] = "note",
  [sym_posting] = "posting",
  [sym_account] = "account",
  [sym_values] = "values",
  [sym_amount] = "amount",
  [sym_quantity] = "quantity",
  [sym_commodity] = "commodity",
  [sym_price] = "price",
  [sym_whitespace] = "whitespace",
  [sym_spacer] = "spacer",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_plain_xact_repeat1] = "plain_xact_repeat1",
  [aux_sym_whitespace_repeat1] = "whitespace_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_include] = anon_sym_include,
  [aux_sym_word_directive_token1] = aux_sym_word_directive_token1,
  [anon_sym_account] = anon_sym_account,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_alias] = anon_sym_alias,
  [aux_sym_word_directive_token2] = aux_sym_word_directive_token2,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_year] = anon_sym_year,
  [aux_sym_word_directive_token3] = aux_sym_word_directive_token3,
  [anon_sym_bucket] = anon_sym_bucket,
  [anon_sym_A] = anon_sym_A,
  [anon_sym_Y] = anon_sym_Y,
  [anon_sym_N] = anon_sym_N,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_C] = anon_sym_C,
  [anon_sym_P] = anon_sym_P,
  [anon_sym_i] = anon_sym_i,
  [anon_sym_I] = anon_sym_I,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_O] = anon_sym_O,
  [sym_single_date] = sym_single_date,
  [sym_time] = sym_time,
  [anon_sym_BANG] = anon_sym_BANG,
  [sym_payee] = sym_payee,
  [aux_sym_note_token1] = aux_sym_note_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_LPAREN,
  [anon_sym_LBRACK] = anon_sym_LPAREN,
  [anon_sym_RBRACK] = anon_sym_LPAREN,
  [sym_account_name] = anon_sym_LPAREN,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_quantity_token1] = aux_sym_quantity_token1,
  [aux_sym_commodity_token1] = aux_sym_commodity_token1,
  [aux_sym_commodity_token2] = aux_sym_commodity_token2,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym_] = anon_sym_,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_TAB2] = anon_sym_TAB2,
  [sym_source_file] = sym_source_file,
  [sym_journal_item] = sym_journal_item,
  [sym_comment] = sym_comment,
  [sym_directive] = sym_directive,
  [sym_word_directive] = sym_word_directive,
  [sym_char_directive] = sym_char_directive,
  [sym_check_in] = sym_check_in,
  [sym_check_out] = sym_check_out,
  [sym_xact] = sym_xact,
  [sym_plain_xact] = sym_plain_xact,
  [sym_date] = sym_date,
  [sym_status] = sym_status,
  [sym_note] = sym_note,
  [sym_posting] = sym_posting,
  [sym_account] = sym_account,
  [sym_values] = sym_values,
  [sym_amount] = sym_amount,
  [sym_quantity] = sym_quantity,
  [sym_commodity] = sym_commodity,
  [sym_price] = sym_price,
  [sym_whitespace] = sym_whitespace,
  [sym_spacer] = sym_spacer,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_plain_xact_repeat1] = aux_sym_plain_xact_repeat1,
  [aux_sym_whitespace_repeat1] = aux_sym_whitespace_repeat1,
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_word_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_account] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_word_directive_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_year] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_word_directive_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_bucket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_A] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_N] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_C] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_P] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_I] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_O] = {
    .visible = true,
    .named = false,
  },
  [sym_single_date] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_payee] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_note_token1] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_account_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quantity_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commodity_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commodity_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB2] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_journal_item] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_word_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_char_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_check_in] = {
    .visible = true,
    .named = true,
  },
  [sym_check_out] = {
    .visible = true,
    .named = true,
  },
  [sym_xact] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_xact] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_status] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_posting] = {
    .visible = true,
    .named = true,
  },
  [sym_account] = {
    .visible = true,
    .named = true,
  },
  [sym_values] = {
    .visible = true,
    .named = true,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity] = {
    .visible = true,
    .named = true,
  },
  [sym_price] = {
    .visible = true,
    .named = true,
  },
  [sym_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym_spacer] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_plain_xact_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_whitespace_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(65);
      if (lookahead == '\t') ADVANCE(128);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '!') ADVANCE(95);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '@') ADVANCE(119);
      if (lookahead == 'A') ADVANCE(83);
      if (lookahead == 'C') ADVANCE(87);
      if (lookahead == 'D') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(90);
      if (lookahead == 'N') ADVANCE(85);
      if (lookahead == 'O') ADVANCE(92);
      if (lookahead == 'P') ADVANCE(88);
      if (lookahead == 'Y') ADVANCE(84);
      if (lookahead == '[') ADVANCE(103);
      if (lookahead == ']') ADVANCE(105);
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'b') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 'y') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(128);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == '@') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(128);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '=') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(134);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '!') ADVANCE(96);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(133);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '!') ADVANCE(95);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(129);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(132);
      if (lookahead == ' ') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(76);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(131);
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(53);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(78);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 28:
      if (lookahead == 'k') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 40:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(52);
      END_STATE();
    case 41:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(54);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 60:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(106);
      END_STATE();
    case 61:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 62:
      if (eof) ADVANCE(65);
      if (lookahead == '\t') ADVANCE(128);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == 'A') ADVANCE(83);
      if (lookahead == 'C') ADVANCE(87);
      if (lookahead == 'D') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(90);
      if (lookahead == 'N') ADVANCE(85);
      if (lookahead == 'O') ADVANCE(92);
      if (lookahead == 'P') ADVANCE(88);
      if (lookahead == 'Y') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'b') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 'y') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 63:
      if (eof) ADVANCE(65);
      if (lookahead == '\t') ADVANCE(128);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '@') ADVANCE(119);
      if (lookahead == 'A') ADVANCE(83);
      if (lookahead == 'C') ADVANCE(87);
      if (lookahead == 'D') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(90);
      if (lookahead == 'N') ADVANCE(85);
      if (lookahead == 'O') ADVANCE(92);
      if (lookahead == 'P') ADVANCE(88);
      if (lookahead == 'Y') ADVANCE(84);
      if (lookahead == ']') ADVANCE(105);
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'b') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 'y') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 64:
      if (eof) ADVANCE(65);
      if (lookahead == '\t') ADVANCE(128);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '@') ADVANCE(119);
      if (lookahead == 'A') ADVANCE(83);
      if (lookahead == 'C') ADVANCE(87);
      if (lookahead == 'D') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(90);
      if (lookahead == 'N') ADVANCE(85);
      if (lookahead == 'O') ADVANCE(92);
      if (lookahead == 'P') ADVANCE(88);
      if (lookahead == 'Y') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'b') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 'y') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(106);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_word_directive_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_word_directive_token2);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_word_directive_token3);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_word_directive_token3);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(52);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_bucket);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_single_date);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(106);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '\t') ADVANCE(130);
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(106);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(106);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(106);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(50);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(136);
      if (lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(76);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(97);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(76);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(97);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(106);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 63},
  [2] = {.lex_state = 63},
  [3] = {.lex_state = 63},
  [4] = {.lex_state = 64},
  [5] = {.lex_state = 63},
  [6] = {.lex_state = 63},
  [7] = {.lex_state = 63},
  [8] = {.lex_state = 63},
  [9] = {.lex_state = 62},
  [10] = {.lex_state = 62},
  [11] = {.lex_state = 62},
  [12] = {.lex_state = 63},
  [13] = {.lex_state = 63},
  [14] = {.lex_state = 63},
  [15] = {.lex_state = 63},
  [16] = {.lex_state = 63},
  [17] = {.lex_state = 63},
  [18] = {.lex_state = 63},
  [19] = {.lex_state = 63},
  [20] = {.lex_state = 63},
  [21] = {.lex_state = 63},
  [22] = {.lex_state = 63},
  [23] = {.lex_state = 63},
  [24] = {.lex_state = 63},
  [25] = {.lex_state = 63},
  [26] = {.lex_state = 63},
  [27] = {.lex_state = 63},
  [28] = {.lex_state = 63},
  [29] = {.lex_state = 63},
  [30] = {.lex_state = 63},
  [31] = {.lex_state = 63},
  [32] = {.lex_state = 63},
  [33] = {.lex_state = 63},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 63},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 63},
  [50] = {.lex_state = 63},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 63},
  [59] = {.lex_state = 63},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 63},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 63},
  [68] = {.lex_state = 63},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 63},
  [72] = {.lex_state = 63},
  [73] = {.lex_state = 63},
  [74] = {.lex_state = 63},
  [75] = {.lex_state = 63},
  [76] = {.lex_state = 63},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 63},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 63},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 63},
  [84] = {.lex_state = 63},
  [85] = {.lex_state = 63},
  [86] = {.lex_state = 63},
  [87] = {.lex_state = 98},
  [88] = {.lex_state = 63},
  [89] = {.lex_state = 63},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 63},
  [92] = {.lex_state = 63},
  [93] = {.lex_state = 63},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 63},
  [96] = {.lex_state = 63},
  [97] = {.lex_state = 63},
  [98] = {.lex_state = 63},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 63},
  [102] = {.lex_state = 63},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 63},
  [109] = {.lex_state = 63},
  [110] = {.lex_state = 63},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_account] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_year] = ACTIONS(1),
    [aux_sym_word_directive_token3] = ACTIONS(1),
    [anon_sym_bucket] = ACTIONS(1),
    [anon_sym_A] = ACTIONS(1),
    [anon_sym_Y] = ACTIONS(1),
    [anon_sym_N] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_C] = ACTIONS(1),
    [anon_sym_P] = ACTIONS(1),
    [anon_sym_i] = ACTIONS(1),
    [anon_sym_I] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_O] = ACTIONS(1),
    [sym_single_date] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_commodity_token2] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_TAB] = ACTIONS(5),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_TAB2] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(102),
    [sym_journal_item] = STATE(3),
    [sym_comment] = STATE(18),
    [sym_directive] = STATE(18),
    [sym_word_directive] = STATE(19),
    [sym_char_directive] = STATE(19),
    [sym_check_in] = STATE(20),
    [sym_check_out] = STATE(20),
    [sym_xact] = STATE(18),
    [sym_plain_xact] = STATE(21),
    [sym_date] = STATE(59),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(13),
    [anon_sym_account] = ACTIONS(13),
    [anon_sym_end] = ACTIONS(15),
    [anon_sym_alias] = ACTIONS(17),
    [anon_sym_def] = ACTIONS(13),
    [anon_sym_year] = ACTIONS(19),
    [anon_sym_bucket] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_Y] = ACTIONS(25),
    [anon_sym_N] = ACTIONS(27),
    [anon_sym_D] = ACTIONS(29),
    [anon_sym_C] = ACTIONS(31),
    [anon_sym_P] = ACTIONS(33),
    [anon_sym_i] = ACTIONS(35),
    [anon_sym_I] = ACTIONS(37),
    [anon_sym_o] = ACTIONS(39),
    [anon_sym_O] = ACTIONS(39),
    [sym_single_date] = ACTIONS(41),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_TAB] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_LF,
    ACTIONS(54), 1,
      anon_sym_end,
    ACTIONS(57), 1,
      anon_sym_alias,
    ACTIONS(60), 1,
      anon_sym_year,
    ACTIONS(63), 1,
      anon_sym_bucket,
    ACTIONS(66), 1,
      anon_sym_A,
    ACTIONS(69), 1,
      anon_sym_Y,
    ACTIONS(72), 1,
      anon_sym_N,
    ACTIONS(75), 1,
      anon_sym_D,
    ACTIONS(78), 1,
      anon_sym_C,
    ACTIONS(81), 1,
      anon_sym_P,
    ACTIONS(84), 1,
      anon_sym_i,
    ACTIONS(87), 1,
      anon_sym_I,
    ACTIONS(93), 1,
      sym_single_date,
    STATE(21), 1,
      sym_plain_xact,
    STATE(59), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(48), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(90), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(19), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(20), 2,
      sym_check_in,
      sym_check_out,
    ACTIONS(51), 3,
      anon_sym_include,
      anon_sym_account,
      anon_sym_def,
    STATE(18), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [86] = 25,
    ACTIONS(15), 1,
      anon_sym_end,
    ACTIONS(17), 1,
      anon_sym_alias,
    ACTIONS(19), 1,
      anon_sym_year,
    ACTIONS(21), 1,
      anon_sym_bucket,
    ACTIONS(23), 1,
      anon_sym_A,
    ACTIONS(25), 1,
      anon_sym_Y,
    ACTIONS(27), 1,
      anon_sym_N,
    ACTIONS(29), 1,
      anon_sym_D,
    ACTIONS(31), 1,
      anon_sym_C,
    ACTIONS(33), 1,
      anon_sym_P,
    ACTIONS(35), 1,
      anon_sym_i,
    ACTIONS(37), 1,
      anon_sym_I,
    ACTIONS(41), 1,
      sym_single_date,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 1,
      anon_sym_LF,
    STATE(21), 1,
      sym_plain_xact,
    STATE(59), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(11), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(39), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(19), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(20), 2,
      sym_check_in,
      sym_check_out,
    ACTIONS(13), 3,
      anon_sym_include,
      anon_sym_account,
      anon_sym_def,
    STATE(18), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [172] = 3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(102), 3,
      anon_sym_i,
      aux_sym_quantity_token1,
      anon_sym_AT,
    ACTIONS(100), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_EQ,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_DASH,
      anon_sym_AT_AT,
  [208] = 6,
    ACTIONS(106), 1,
      anon_sym_i,
    STATE(34), 1,
      sym_whitespace,
    STATE(36), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(108), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(104), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [249] = 6,
    ACTIONS(112), 1,
      anon_sym_i,
    STATE(34), 1,
      sym_whitespace,
    STATE(36), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(108), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(110), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [290] = 6,
    ACTIONS(116), 1,
      anon_sym_i,
    STATE(34), 1,
      sym_whitespace,
    STATE(36), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(118), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(114), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [331] = 6,
    ACTIONS(123), 1,
      anon_sym_i,
    STATE(34), 1,
      sym_whitespace,
    STATE(36), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(108), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(121), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [372] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(127), 1,
      anon_sym_i,
    STATE(82), 1,
      sym_spacer,
    ACTIONS(129), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
    ACTIONS(125), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [410] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(133), 1,
      anon_sym_i,
    ACTIONS(131), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [443] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(137), 1,
      anon_sym_i,
    ACTIONS(135), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [476] = 3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(141), 2,
      anon_sym_i,
      anon_sym_AT,
    ACTIONS(139), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_AT_AT,
  [509] = 3,
    ACTIONS(145), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(143), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [540] = 3,
    ACTIONS(149), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(147), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [571] = 2,
    ACTIONS(153), 1,
      anon_sym_i,
    ACTIONS(151), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [600] = 2,
    ACTIONS(157), 1,
      anon_sym_i,
    ACTIONS(155), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [629] = 3,
    ACTIONS(161), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(159), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [660] = 3,
    ACTIONS(165), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(163), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [691] = 3,
    ACTIONS(169), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(167), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [722] = 3,
    ACTIONS(173), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(171), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [753] = 3,
    ACTIONS(177), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(175), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [784] = 3,
    ACTIONS(181), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(179), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [815] = 2,
    ACTIONS(185), 1,
      anon_sym_i,
    ACTIONS(183), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [844] = 3,
    ACTIONS(189), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(187), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [875] = 3,
    ACTIONS(193), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(191), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [906] = 2,
    ACTIONS(197), 1,
      anon_sym_i,
    ACTIONS(195), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [935] = 3,
    ACTIONS(137), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(135), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [966] = 3,
    ACTIONS(133), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(131), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [997] = 3,
    ACTIONS(201), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(199), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [1028] = 3,
    ACTIONS(205), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(203), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [1059] = 3,
    ACTIONS(209), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(207), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [1090] = 3,
    ACTIONS(213), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(211), 21,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [1121] = 2,
    ACTIONS(217), 1,
      anon_sym_i,
    ACTIONS(215), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1150] = 10,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym_account_name,
    STATE(38), 1,
      sym_account,
    STATE(47), 1,
      sym_status,
    STATE(85), 1,
      sym_note,
    ACTIONS(221), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [1182] = 7,
    ACTIONS(229), 1,
      anon_sym_DASH,
    ACTIONS(231), 1,
      aux_sym_quantity_token1,
    STATE(29), 1,
      sym_amount,
    STATE(60), 1,
      sym_quantity,
    STATE(66), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(233), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1206] = 5,
    ACTIONS(239), 1,
      anon_sym_,
    ACTIONS(241), 1,
      anon_sym_TAB,
    STATE(41), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(235), 2,
      anon_sym_SEMI,
      sym_account_name,
    ACTIONS(237), 4,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1226] = 7,
    ACTIONS(229), 1,
      anon_sym_DASH,
    ACTIONS(231), 1,
      aux_sym_quantity_token1,
    STATE(60), 1,
      sym_quantity,
    STATE(61), 1,
      sym_commodity,
    STATE(74), 1,
      sym_amount,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(233), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1250] = 7,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(243), 1,
      anon_sym_LF,
    STATE(40), 1,
      sym_spacer,
    STATE(63), 1,
      sym_values,
    STATE(88), 1,
      sym_note,
    ACTIONS(245), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [1274] = 7,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(247), 1,
      anon_sym_LF,
    STATE(40), 1,
      sym_spacer,
    STATE(68), 1,
      sym_values,
    STATE(84), 1,
      sym_note,
    ACTIONS(245), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [1298] = 7,
    ACTIONS(229), 1,
      anon_sym_DASH,
    ACTIONS(231), 1,
      aux_sym_quantity_token1,
    STATE(45), 1,
      sym_amount,
    STATE(60), 1,
      sym_quantity,
    STATE(61), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(233), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1322] = 5,
    ACTIONS(253), 1,
      anon_sym_,
    ACTIONS(256), 1,
      anon_sym_TAB,
    STATE(41), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(249), 2,
      anon_sym_SEMI,
      sym_account_name,
    ACTIONS(251), 4,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1342] = 7,
    ACTIONS(229), 1,
      anon_sym_DASH,
    ACTIONS(231), 1,
      aux_sym_quantity_token1,
    STATE(13), 1,
      sym_amount,
    STATE(60), 1,
      sym_quantity,
    STATE(66), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(233), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1366] = 3,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(207), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
  [1381] = 3,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(159), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
  [1396] = 5,
    ACTIONS(261), 1,
      anon_sym_AT,
    ACTIONS(263), 1,
      anon_sym_AT_AT,
    STATE(71), 1,
      sym_price,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(259), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1414] = 3,
    ACTIONS(265), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(267), 3,
      sym_time,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1427] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym_account_name,
    STATE(39), 1,
      sym_account,
  [1446] = 4,
    ACTIONS(237), 1,
      sym_payee,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(235), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(269), 2,
      anon_sym_,
      anon_sym_TAB,
  [1461] = 4,
    STATE(34), 1,
      sym_whitespace,
    STATE(36), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(108), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [1476] = 4,
    STATE(34), 1,
      sym_whitespace,
    STATE(36), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(108), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [1491] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym_account_name,
    STATE(9), 1,
      sym_account,
  [1510] = 4,
    ACTIONS(273), 1,
      sym_payee,
    STATE(67), 1,
      sym_status,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(271), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [1525] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(275), 4,
      anon_sym_DASH,
      aux_sym_quantity_token1,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1536] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      sym_account_name,
    STATE(25), 1,
      sym_account,
  [1555] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(100), 4,
      anon_sym_DASH,
      aux_sym_quantity_token1,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1566] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      sym_account_name,
    STATE(29), 1,
      sym_account,
  [1585] = 4,
    ACTIONS(251), 1,
      sym_payee,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(249), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(283), 2,
      anon_sym_,
      anon_sym_TAB,
  [1600] = 4,
    STATE(34), 1,
      sym_whitespace,
    STATE(36), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(108), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(8), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [1615] = 4,
    ACTIONS(286), 1,
      anon_sym_LF,
    STATE(48), 1,
      aux_sym_whitespace_repeat1,
    STATE(52), 1,
      sym_whitespace,
    ACTIONS(288), 2,
      anon_sym_,
      anon_sym_TAB,
  [1629] = 3,
    STATE(12), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(233), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1641] = 4,
    ACTIONS(229), 1,
      anon_sym_DASH,
    ACTIONS(231), 1,
      aux_sym_quantity_token1,
    STATE(12), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1655] = 3,
    STATE(98), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(233), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1667] = 4,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(247), 1,
      anon_sym_LF,
    STATE(84), 1,
      sym_note,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1681] = 3,
    STATE(29), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(233), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1693] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(290), 3,
      sym_time,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1703] = 4,
    ACTIONS(292), 1,
      anon_sym_DASH,
    ACTIONS(294), 1,
      aux_sym_quantity_token1,
    STATE(12), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1717] = 4,
    ACTIONS(296), 1,
      anon_sym_LF,
    STATE(48), 1,
      aux_sym_whitespace_repeat1,
    STATE(79), 1,
      sym_whitespace,
    ACTIONS(288), 2,
      anon_sym_,
      anon_sym_TAB,
  [1731] = 4,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(298), 1,
      anon_sym_LF,
    STATE(89), 1,
      sym_note,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1745] = 4,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(302), 1,
      sym_account_name,
    ACTIONS(300), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1759] = 3,
    STATE(42), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(304), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1771] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(306), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1780] = 2,
    ACTIONS(308), 1,
      anon_sym_EQ,
    ACTIONS(267), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1789] = 3,
    ACTIONS(310), 1,
      sym_single_date,
    STATE(96), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1800] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(312), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1809] = 3,
    ACTIONS(310), 1,
      sym_single_date,
    STATE(97), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1820] = 3,
    ACTIONS(310), 1,
      sym_single_date,
    STATE(70), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1831] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(314), 1,
      sym_account_name,
  [1841] = 1,
    ACTIONS(302), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1847] = 2,
    ACTIONS(316), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1855] = 2,
    ACTIONS(318), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1863] = 2,
    ACTIONS(320), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1871] = 2,
    ACTIONS(322), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1879] = 2,
    ACTIONS(324), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1887] = 2,
    ACTIONS(298), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1895] = 2,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1903] = 2,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1911] = 2,
    ACTIONS(328), 1,
      aux_sym_note_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1919] = 2,
    ACTIONS(247), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1927] = 2,
    ACTIONS(330), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1935] = 2,
    ACTIONS(332), 1,
      aux_sym_comment_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1943] = 1,
    ACTIONS(290), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1949] = 2,
    ACTIONS(334), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1957] = 2,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1965] = 2,
    ACTIONS(336), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1973] = 2,
    ACTIONS(338), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1981] = 2,
    ACTIONS(340), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1989] = 2,
    ACTIONS(342), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1997] = 2,
    ACTIONS(344), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2005] = 2,
    ACTIONS(346), 1,
      aux_sym_quantity_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2013] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(348), 1,
      sym_account_name,
  [2023] = 2,
    ACTIONS(350), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2031] = 2,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2039] = 2,
    ACTIONS(354), 1,
      aux_sym_word_directive_token3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2047] = 2,
    ACTIONS(356), 1,
      aux_sym_word_directive_token3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2055] = 2,
    ACTIONS(358), 1,
      aux_sym_word_directive_token2,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [2063] = 2,
    ACTIONS(360), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [2071] = 2,
    ACTIONS(362), 1,
      aux_sym_quantity_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2079] = 2,
    ACTIONS(364), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2087] = 2,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2095] = 2,
    ACTIONS(366), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2103] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(368), 1,
      sym_account_name,
  [2113] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(370), 1,
      sym_account_name,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 86,
  [SMALL_STATE(4)] = 172,
  [SMALL_STATE(5)] = 208,
  [SMALL_STATE(6)] = 249,
  [SMALL_STATE(7)] = 290,
  [SMALL_STATE(8)] = 331,
  [SMALL_STATE(9)] = 372,
  [SMALL_STATE(10)] = 410,
  [SMALL_STATE(11)] = 443,
  [SMALL_STATE(12)] = 476,
  [SMALL_STATE(13)] = 509,
  [SMALL_STATE(14)] = 540,
  [SMALL_STATE(15)] = 571,
  [SMALL_STATE(16)] = 600,
  [SMALL_STATE(17)] = 629,
  [SMALL_STATE(18)] = 660,
  [SMALL_STATE(19)] = 691,
  [SMALL_STATE(20)] = 722,
  [SMALL_STATE(21)] = 753,
  [SMALL_STATE(22)] = 784,
  [SMALL_STATE(23)] = 815,
  [SMALL_STATE(24)] = 844,
  [SMALL_STATE(25)] = 875,
  [SMALL_STATE(26)] = 906,
  [SMALL_STATE(27)] = 935,
  [SMALL_STATE(28)] = 966,
  [SMALL_STATE(29)] = 997,
  [SMALL_STATE(30)] = 1028,
  [SMALL_STATE(31)] = 1059,
  [SMALL_STATE(32)] = 1090,
  [SMALL_STATE(33)] = 1121,
  [SMALL_STATE(34)] = 1150,
  [SMALL_STATE(35)] = 1182,
  [SMALL_STATE(36)] = 1206,
  [SMALL_STATE(37)] = 1226,
  [SMALL_STATE(38)] = 1250,
  [SMALL_STATE(39)] = 1274,
  [SMALL_STATE(40)] = 1298,
  [SMALL_STATE(41)] = 1322,
  [SMALL_STATE(42)] = 1342,
  [SMALL_STATE(43)] = 1366,
  [SMALL_STATE(44)] = 1381,
  [SMALL_STATE(45)] = 1396,
  [SMALL_STATE(46)] = 1414,
  [SMALL_STATE(47)] = 1427,
  [SMALL_STATE(48)] = 1446,
  [SMALL_STATE(49)] = 1461,
  [SMALL_STATE(50)] = 1476,
  [SMALL_STATE(51)] = 1491,
  [SMALL_STATE(52)] = 1510,
  [SMALL_STATE(53)] = 1525,
  [SMALL_STATE(54)] = 1536,
  [SMALL_STATE(55)] = 1555,
  [SMALL_STATE(56)] = 1566,
  [SMALL_STATE(57)] = 1585,
  [SMALL_STATE(58)] = 1600,
  [SMALL_STATE(59)] = 1615,
  [SMALL_STATE(60)] = 1629,
  [SMALL_STATE(61)] = 1641,
  [SMALL_STATE(62)] = 1655,
  [SMALL_STATE(63)] = 1667,
  [SMALL_STATE(64)] = 1681,
  [SMALL_STATE(65)] = 1693,
  [SMALL_STATE(66)] = 1703,
  [SMALL_STATE(67)] = 1717,
  [SMALL_STATE(68)] = 1731,
  [SMALL_STATE(69)] = 1745,
  [SMALL_STATE(70)] = 1759,
  [SMALL_STATE(71)] = 1771,
  [SMALL_STATE(72)] = 1780,
  [SMALL_STATE(73)] = 1789,
  [SMALL_STATE(74)] = 1800,
  [SMALL_STATE(75)] = 1809,
  [SMALL_STATE(76)] = 1820,
  [SMALL_STATE(77)] = 1831,
  [SMALL_STATE(78)] = 1841,
  [SMALL_STATE(79)] = 1847,
  [SMALL_STATE(80)] = 1855,
  [SMALL_STATE(81)] = 1863,
  [SMALL_STATE(82)] = 1871,
  [SMALL_STATE(83)] = 1879,
  [SMALL_STATE(84)] = 1887,
  [SMALL_STATE(85)] = 1895,
  [SMALL_STATE(86)] = 1903,
  [SMALL_STATE(87)] = 1911,
  [SMALL_STATE(88)] = 1919,
  [SMALL_STATE(89)] = 1927,
  [SMALL_STATE(90)] = 1935,
  [SMALL_STATE(91)] = 1943,
  [SMALL_STATE(92)] = 1949,
  [SMALL_STATE(93)] = 1957,
  [SMALL_STATE(94)] = 1965,
  [SMALL_STATE(95)] = 1973,
  [SMALL_STATE(96)] = 1981,
  [SMALL_STATE(97)] = 1989,
  [SMALL_STATE(98)] = 1997,
  [SMALL_STATE(99)] = 2005,
  [SMALL_STATE(100)] = 2013,
  [SMALL_STATE(101)] = 2023,
  [SMALL_STATE(102)] = 2031,
  [SMALL_STATE(103)] = 2039,
  [SMALL_STATE(104)] = 2047,
  [SMALL_STATE(105)] = 2055,
  [SMALL_STATE(106)] = 2063,
  [SMALL_STATE(107)] = 2071,
  [SMALL_STATE(108)] = 2079,
  [SMALL_STATE(109)] = 2087,
  [SMALL_STATE(110)] = 2095,
  [SMALL_STATE(111)] = 2103,
  [SMALL_STATE(112)] = 2113,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(106),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(105),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(36),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_in, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_in, 6),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_out, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 4),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 4),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whitespace, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_whitespace, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(41),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(41),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spacer, 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(57),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spacer, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [352] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ledger(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
