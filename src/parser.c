#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 117
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
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
  sym_balance_assertion = 66,
  sym_whitespace = 67,
  sym_spacer = 68,
  aux_sym_source_file_repeat1 = 69,
  aux_sym_plain_xact_repeat1 = 70,
  aux_sym_whitespace_repeat1 = 71,
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
  [sym_balance_assertion] = "balance_assertion",
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
  [sym_balance_assertion] = sym_balance_assertion,
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
  [sym_balance_assertion] = {
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
      if (eof) ADVANCE(63);
      if (lookahead == '\t') ADVANCE(119);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(113);
      if (lookahead == '!') ADVANCE(93);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '@') ADVANCE(110);
      if (lookahead == 'A') ADVANCE(81);
      if (lookahead == 'C') ADVANCE(85);
      if (lookahead == 'D') ADVANCE(84);
      if (lookahead == 'I') ADVANCE(88);
      if (lookahead == 'N') ADVANCE(83);
      if (lookahead == 'O') ADVANCE(90);
      if (lookahead == 'P') ADVANCE(86);
      if (lookahead == 'Y') ADVANCE(82);
      if (lookahead == '[') ADVANCE(101);
      if (lookahead == ']') ADVANCE(103);
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'b') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(89);
      if (lookahead == 'y') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(119);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '@') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(119);
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '=') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(125);
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead == '!') ADVANCE(94);
      if (lookahead == '(') ADVANCE(99);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '[') ADVANCE(102);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(124);
      if (lookahead == ' ') ADVANCE(118);
      if (lookahead == '!') ADVANCE(93);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(120);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(123);
      if (lookahead == ' ') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(74);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(122);
      if (lookahead == ' ') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(52);
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
      if (lookahead == 'd') ADVANCE(72);
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
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(76);
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
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(71);
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
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 41:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(51);
      END_STATE();
    case 42:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(53);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 59:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(104);
      END_STATE();
    case 60:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(105);
      END_STATE();
    case 61:
      if (eof) ADVANCE(63);
      if (lookahead == '\t') ADVANCE(119);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(113);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == 'A') ADVANCE(81);
      if (lookahead == 'C') ADVANCE(85);
      if (lookahead == 'D') ADVANCE(84);
      if (lookahead == 'I') ADVANCE(88);
      if (lookahead == 'N') ADVANCE(83);
      if (lookahead == 'O') ADVANCE(90);
      if (lookahead == 'P') ADVANCE(86);
      if (lookahead == 'Y') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'b') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(89);
      if (lookahead == 'y') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 62:
      if (eof) ADVANCE(63);
      if (lookahead == '\t') ADVANCE(119);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '@') ADVANCE(110);
      if (lookahead == 'A') ADVANCE(81);
      if (lookahead == 'C') ADVANCE(85);
      if (lookahead == 'D') ADVANCE(84);
      if (lookahead == 'I') ADVANCE(88);
      if (lookahead == 'N') ADVANCE(83);
      if (lookahead == 'O') ADVANCE(90);
      if (lookahead == 'P') ADVANCE(86);
      if (lookahead == 'Y') ADVANCE(82);
      if (lookahead == ']') ADVANCE(103);
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'b') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(89);
      if (lookahead == 'y') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(104);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_word_directive_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_word_directive_token2);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_word_directive_token3);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_word_directive_token3);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(51);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_bucket);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_single_date);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(104);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '\t') ADVANCE(121);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(104);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(104);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(127);
      if (lookahead == ' ') ADVANCE(126);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(74);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(95);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(74);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(95);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(104);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 62},
  [2] = {.lex_state = 62},
  [3] = {.lex_state = 62},
  [4] = {.lex_state = 62},
  [5] = {.lex_state = 62},
  [6] = {.lex_state = 62},
  [7] = {.lex_state = 62},
  [8] = {.lex_state = 62},
  [9] = {.lex_state = 62},
  [10] = {.lex_state = 61},
  [11] = {.lex_state = 61},
  [12] = {.lex_state = 61},
  [13] = {.lex_state = 62},
  [14] = {.lex_state = 62},
  [15] = {.lex_state = 62},
  [16] = {.lex_state = 62},
  [17] = {.lex_state = 62},
  [18] = {.lex_state = 62},
  [19] = {.lex_state = 62},
  [20] = {.lex_state = 62},
  [21] = {.lex_state = 62},
  [22] = {.lex_state = 62},
  [23] = {.lex_state = 62},
  [24] = {.lex_state = 62},
  [25] = {.lex_state = 62},
  [26] = {.lex_state = 62},
  [27] = {.lex_state = 62},
  [28] = {.lex_state = 62},
  [29] = {.lex_state = 62},
  [30] = {.lex_state = 62},
  [31] = {.lex_state = 62},
  [32] = {.lex_state = 62},
  [33] = {.lex_state = 62},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 62},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 62},
  [49] = {.lex_state = 62},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 62},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 62},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 62},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 62},
  [66] = {.lex_state = 62},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 62},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 62},
  [74] = {.lex_state = 62},
  [75] = {.lex_state = 62},
  [76] = {.lex_state = 62},
  [77] = {.lex_state = 62},
  [78] = {.lex_state = 62},
  [79] = {.lex_state = 62},
  [80] = {.lex_state = 62},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 62},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 62},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 62},
  [88] = {.lex_state = 62},
  [89] = {.lex_state = 62},
  [90] = {.lex_state = 96},
  [91] = {.lex_state = 62},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 62},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 62},
  [98] = {.lex_state = 62},
  [99] = {.lex_state = 62},
  [100] = {.lex_state = 62},
  [101] = {.lex_state = 62},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 62},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 62},
  [107] = {.lex_state = 62},
  [108] = {.lex_state = 62},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 62},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 62},
  [113] = {.lex_state = 62},
  [114] = {.lex_state = 62},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
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
    [sym_source_file] = STATE(87),
    [sym_journal_item] = STATE(3),
    [sym_comment] = STATE(18),
    [sym_directive] = STATE(18),
    [sym_word_directive] = STATE(13),
    [sym_char_directive] = STATE(13),
    [sym_check_in] = STATE(20),
    [sym_check_out] = STATE(20),
    [sym_xact] = STATE(18),
    [sym_plain_xact] = STATE(21),
    [sym_date] = STATE(63),
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
    STATE(63), 1,
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
    STATE(13), 2,
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
    STATE(63), 1,
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
    STATE(13), 2,
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
  [172] = 6,
    ACTIONS(102), 1,
      anon_sym_i,
    STATE(34), 1,
      sym_whitespace,
    STATE(45), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(104), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(100), 21,
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
  [213] = 6,
    ACTIONS(109), 1,
      anon_sym_i,
    STATE(34), 1,
      sym_whitespace,
    STATE(45), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(111), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(107), 21,
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
  [254] = 6,
    ACTIONS(115), 1,
      anon_sym_i,
    STATE(34), 1,
      sym_whitespace,
    STATE(45), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(111), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(113), 21,
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
  [295] = 6,
    ACTIONS(119), 1,
      anon_sym_i,
    STATE(34), 1,
      sym_whitespace,
    STATE(45), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(111), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(117), 21,
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
  [336] = 3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(123), 2,
      anon_sym_i,
      anon_sym_AT,
    ACTIONS(121), 23,
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
      anon_sym_AT_AT,
  [370] = 3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(127), 2,
      anon_sym_i,
      anon_sym_AT,
    ACTIONS(125), 23,
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
      anon_sym_AT_AT,
  [404] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(131), 1,
      anon_sym_i,
    STATE(83), 1,
      sym_spacer,
    ACTIONS(133), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
    ACTIONS(129), 21,
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
  [442] = 3,
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
  [475] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(141), 1,
      anon_sym_i,
    ACTIONS(139), 24,
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
  [508] = 3,
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
  [539] = 3,
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
  [570] = 3,
    ACTIONS(153), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(151), 21,
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
  [601] = 2,
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
  [630] = 2,
    ACTIONS(161), 1,
      anon_sym_i,
    ACTIONS(159), 23,
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
  [659] = 3,
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
  [690] = 3,
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
  [721] = 3,
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
  [752] = 3,
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
  [783] = 3,
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
  [814] = 3,
    ACTIONS(185), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(183), 21,
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
  [845] = 2,
    ACTIONS(189), 1,
      anon_sym_i,
    ACTIONS(187), 23,
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
  [874] = 3,
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
  [905] = 3,
    ACTIONS(141), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(139), 21,
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
  [936] = 3,
    ACTIONS(197), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(195), 21,
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
  [967] = 2,
    ACTIONS(201), 1,
      anon_sym_i,
    ACTIONS(199), 23,
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
  [996] = 3,
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
  [1027] = 3,
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
  [1058] = 2,
    ACTIONS(209), 1,
      anon_sym_i,
    ACTIONS(207), 23,
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
  [1087] = 3,
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
  [1118] = 3,
    ACTIONS(217), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(215), 21,
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
  [1149] = 10,
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
    STATE(40), 1,
      sym_account,
    STATE(58), 1,
      sym_status,
    STATE(88), 1,
      sym_note,
    ACTIONS(221), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [1181] = 7,
    ACTIONS(231), 1,
      anon_sym_EQ,
    ACTIONS(233), 1,
      anon_sym_AT,
    ACTIONS(235), 1,
      anon_sym_AT_AT,
    STATE(48), 1,
      sym_price,
    STATE(79), 1,
      sym_balance_assertion,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(229), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1205] = 7,
    ACTIONS(237), 1,
      anon_sym_DASH,
    ACTIONS(239), 1,
      aux_sym_quantity_token1,
    STATE(22), 1,
      sym_amount,
    STATE(68), 1,
      sym_commodity,
    STATE(72), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(241), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1229] = 7,
    ACTIONS(237), 1,
      anon_sym_DASH,
    ACTIONS(239), 1,
      aux_sym_quantity_token1,
    STATE(35), 1,
      sym_amount,
    STATE(69), 1,
      sym_commodity,
    STATE(72), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(241), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1253] = 3,
    ACTIONS(185), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(183), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
  [1269] = 7,
    ACTIONS(237), 1,
      anon_sym_DASH,
    ACTIONS(239), 1,
      aux_sym_quantity_token1,
    STATE(30), 1,
      sym_amount,
    STATE(68), 1,
      sym_commodity,
    STATE(72), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(241), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1293] = 7,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(243), 1,
      anon_sym_LF,
    STATE(37), 1,
      sym_spacer,
    STATE(73), 1,
      sym_values,
    STATE(82), 1,
      sym_note,
    ACTIONS(245), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [1317] = 5,
    ACTIONS(251), 1,
      anon_sym_,
    ACTIONS(254), 1,
      anon_sym_TAB,
    STATE(41), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(247), 2,
      anon_sym_SEMI,
      sym_account_name,
    ACTIONS(249), 4,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1337] = 7,
    ACTIONS(237), 1,
      anon_sym_DASH,
    ACTIONS(239), 1,
      aux_sym_quantity_token1,
    STATE(69), 1,
      sym_commodity,
    STATE(72), 1,
      sym_quantity,
    STATE(77), 1,
      sym_amount,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(241), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1361] = 7,
    ACTIONS(237), 1,
      anon_sym_DASH,
    ACTIONS(239), 1,
      aux_sym_quantity_token1,
    STATE(66), 1,
      sym_amount,
    STATE(69), 1,
      sym_commodity,
    STATE(72), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(241), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1385] = 7,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(257), 1,
      anon_sym_LF,
    STATE(37), 1,
      sym_spacer,
    STATE(70), 1,
      sym_values,
    STATE(84), 1,
      sym_note,
    ACTIONS(245), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [1409] = 5,
    ACTIONS(263), 1,
      anon_sym_,
    ACTIONS(265), 1,
      anon_sym_TAB,
    STATE(41), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(259), 2,
      anon_sym_SEMI,
      sym_account_name,
    ACTIONS(261), 4,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1429] = 3,
    ACTIONS(213), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(211), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
  [1445] = 6,
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
    STATE(10), 1,
      sym_account,
  [1464] = 4,
    ACTIONS(231), 1,
      anon_sym_EQ,
    STATE(76), 1,
      sym_balance_assertion,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(267), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1479] = 4,
    STATE(34), 1,
      sym_whitespace,
    STATE(45), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(111), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [1494] = 4,
    ACTIONS(271), 1,
      sym_payee,
    STATE(65), 1,
      sym_status,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(269), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [1509] = 4,
    ACTIONS(261), 1,
      sym_payee,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(273), 2,
      anon_sym_,
      anon_sym_TAB,
  [1524] = 4,
    STATE(34), 1,
      sym_whitespace,
    STATE(45), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(111), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [1539] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(121), 4,
      anon_sym_DASH,
      aux_sym_quantity_token1,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1550] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      sym_account_name,
    STATE(25), 1,
      sym_account,
  [1569] = 3,
    ACTIONS(281), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(283), 3,
      sym_time,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1582] = 4,
    STATE(34), 1,
      sym_whitespace,
    STATE(45), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(111), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [1597] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      sym_account_name,
    STATE(30), 1,
      sym_account,
  [1616] = 6,
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
    STATE(44), 1,
      sym_account,
  [1635] = 4,
    ACTIONS(249), 1,
      sym_payee,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(247), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(285), 2,
      anon_sym_,
      anon_sym_TAB,
  [1650] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(288), 4,
      anon_sym_DASH,
      aux_sym_quantity_token1,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1661] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(290), 3,
      sym_time,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1671] = 4,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(294), 1,
      sym_account_name,
    ACTIONS(292), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1685] = 4,
    ACTIONS(296), 1,
      anon_sym_LF,
    STATE(50), 1,
      sym_whitespace,
    STATE(51), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(298), 2,
      anon_sym_,
      anon_sym_TAB,
  [1699] = 3,
    STATE(30), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(300), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1711] = 4,
    ACTIONS(302), 1,
      anon_sym_LF,
    STATE(51), 1,
      aux_sym_whitespace_repeat1,
    STATE(86), 1,
      sym_whitespace,
    ACTIONS(298), 2,
      anon_sym_,
      anon_sym_TAB,
  [1725] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(304), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
  [1735] = 3,
    STATE(36), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(241), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1747] = 4,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      aux_sym_quantity_token1,
    STATE(9), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1761] = 4,
    ACTIONS(237), 1,
      anon_sym_DASH,
    ACTIONS(239), 1,
      aux_sym_quantity_token1,
    STATE(9), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1775] = 4,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(310), 1,
      anon_sym_LF,
    STATE(89), 1,
      sym_note,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1789] = 3,
    STATE(110), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(300), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1801] = 3,
    STATE(9), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(300), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1813] = 4,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(257), 1,
      anon_sym_LF,
    STATE(84), 1,
      sym_note,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1827] = 3,
    ACTIONS(312), 1,
      sym_single_date,
    STATE(107), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1838] = 3,
    ACTIONS(312), 1,
      sym_single_date,
    STATE(67), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1849] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(314), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1858] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(316), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1867] = 2,
    ACTIONS(318), 1,
      anon_sym_EQ,
    ACTIONS(283), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1876] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(267), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1885] = 3,
    ACTIONS(312), 1,
      sym_single_date,
    STATE(108), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1896] = 2,
    ACTIONS(320), 1,
      aux_sym_comment_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1904] = 2,
    ACTIONS(257), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1912] = 2,
    ACTIONS(322), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1920] = 2,
    ACTIONS(310), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1928] = 2,
    ACTIONS(324), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1936] = 2,
    ACTIONS(326), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1944] = 2,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1952] = 2,
    ACTIONS(330), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1960] = 2,
    ACTIONS(332), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1968] = 2,
    ACTIONS(334), 1,
      aux_sym_note_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1976] = 2,
    ACTIONS(336), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1984] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(338), 1,
      sym_account_name,
  [1994] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(340), 1,
      sym_account_name,
  [2004] = 2,
    ACTIONS(342), 1,
      aux_sym_word_directive_token3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2012] = 2,
    ACTIONS(344), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2020] = 2,
    ACTIONS(346), 1,
      aux_sym_quantity_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2028] = 2,
    ACTIONS(302), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2036] = 2,
    ACTIONS(348), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2044] = 1,
    ACTIONS(294), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [2050] = 1,
    ACTIONS(290), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [2056] = 2,
    ACTIONS(350), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2064] = 2,
    ACTIONS(352), 1,
      aux_sym_word_directive_token3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2072] = 2,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2080] = 2,
    ACTIONS(354), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [2088] = 2,
    ACTIONS(356), 1,
      aux_sym_word_directive_token2,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [2096] = 2,
    ACTIONS(358), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2104] = 2,
    ACTIONS(360), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2112] = 2,
    ACTIONS(362), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2120] = 2,
    ACTIONS(364), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [2128] = 2,
    ACTIONS(366), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2136] = 2,
    ACTIONS(368), 1,
      aux_sym_quantity_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2144] = 2,
    ACTIONS(370), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2152] = 2,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2160] = 2,
    ACTIONS(372), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2168] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(374), 1,
      sym_account_name,
  [2178] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(376), 1,
      sym_account_name,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 86,
  [SMALL_STATE(4)] = 172,
  [SMALL_STATE(5)] = 213,
  [SMALL_STATE(6)] = 254,
  [SMALL_STATE(7)] = 295,
  [SMALL_STATE(8)] = 336,
  [SMALL_STATE(9)] = 370,
  [SMALL_STATE(10)] = 404,
  [SMALL_STATE(11)] = 442,
  [SMALL_STATE(12)] = 475,
  [SMALL_STATE(13)] = 508,
  [SMALL_STATE(14)] = 539,
  [SMALL_STATE(15)] = 570,
  [SMALL_STATE(16)] = 601,
  [SMALL_STATE(17)] = 630,
  [SMALL_STATE(18)] = 659,
  [SMALL_STATE(19)] = 690,
  [SMALL_STATE(20)] = 721,
  [SMALL_STATE(21)] = 752,
  [SMALL_STATE(22)] = 783,
  [SMALL_STATE(23)] = 814,
  [SMALL_STATE(24)] = 845,
  [SMALL_STATE(25)] = 874,
  [SMALL_STATE(26)] = 905,
  [SMALL_STATE(27)] = 936,
  [SMALL_STATE(28)] = 967,
  [SMALL_STATE(29)] = 996,
  [SMALL_STATE(30)] = 1027,
  [SMALL_STATE(31)] = 1058,
  [SMALL_STATE(32)] = 1087,
  [SMALL_STATE(33)] = 1118,
  [SMALL_STATE(34)] = 1149,
  [SMALL_STATE(35)] = 1181,
  [SMALL_STATE(36)] = 1205,
  [SMALL_STATE(37)] = 1229,
  [SMALL_STATE(38)] = 1253,
  [SMALL_STATE(39)] = 1269,
  [SMALL_STATE(40)] = 1293,
  [SMALL_STATE(41)] = 1317,
  [SMALL_STATE(42)] = 1337,
  [SMALL_STATE(43)] = 1361,
  [SMALL_STATE(44)] = 1385,
  [SMALL_STATE(45)] = 1409,
  [SMALL_STATE(46)] = 1429,
  [SMALL_STATE(47)] = 1445,
  [SMALL_STATE(48)] = 1464,
  [SMALL_STATE(49)] = 1479,
  [SMALL_STATE(50)] = 1494,
  [SMALL_STATE(51)] = 1509,
  [SMALL_STATE(52)] = 1524,
  [SMALL_STATE(53)] = 1539,
  [SMALL_STATE(54)] = 1550,
  [SMALL_STATE(55)] = 1569,
  [SMALL_STATE(56)] = 1582,
  [SMALL_STATE(57)] = 1597,
  [SMALL_STATE(58)] = 1616,
  [SMALL_STATE(59)] = 1635,
  [SMALL_STATE(60)] = 1650,
  [SMALL_STATE(61)] = 1661,
  [SMALL_STATE(62)] = 1671,
  [SMALL_STATE(63)] = 1685,
  [SMALL_STATE(64)] = 1699,
  [SMALL_STATE(65)] = 1711,
  [SMALL_STATE(66)] = 1725,
  [SMALL_STATE(67)] = 1735,
  [SMALL_STATE(68)] = 1747,
  [SMALL_STATE(69)] = 1761,
  [SMALL_STATE(70)] = 1775,
  [SMALL_STATE(71)] = 1789,
  [SMALL_STATE(72)] = 1801,
  [SMALL_STATE(73)] = 1813,
  [SMALL_STATE(74)] = 1827,
  [SMALL_STATE(75)] = 1838,
  [SMALL_STATE(76)] = 1849,
  [SMALL_STATE(77)] = 1858,
  [SMALL_STATE(78)] = 1867,
  [SMALL_STATE(79)] = 1876,
  [SMALL_STATE(80)] = 1885,
  [SMALL_STATE(81)] = 1896,
  [SMALL_STATE(82)] = 1904,
  [SMALL_STATE(83)] = 1912,
  [SMALL_STATE(84)] = 1920,
  [SMALL_STATE(85)] = 1928,
  [SMALL_STATE(86)] = 1936,
  [SMALL_STATE(87)] = 1944,
  [SMALL_STATE(88)] = 1952,
  [SMALL_STATE(89)] = 1960,
  [SMALL_STATE(90)] = 1968,
  [SMALL_STATE(91)] = 1976,
  [SMALL_STATE(92)] = 1984,
  [SMALL_STATE(93)] = 1994,
  [SMALL_STATE(94)] = 2004,
  [SMALL_STATE(95)] = 2012,
  [SMALL_STATE(96)] = 2020,
  [SMALL_STATE(97)] = 2028,
  [SMALL_STATE(98)] = 2036,
  [SMALL_STATE(99)] = 2044,
  [SMALL_STATE(100)] = 2050,
  [SMALL_STATE(101)] = 2056,
  [SMALL_STATE(102)] = 2064,
  [SMALL_STATE(103)] = 2072,
  [SMALL_STATE(104)] = 2080,
  [SMALL_STATE(105)] = 2088,
  [SMALL_STATE(106)] = 2096,
  [SMALL_STATE(107)] = 2104,
  [SMALL_STATE(108)] = 2112,
  [SMALL_STATE(109)] = 2120,
  [SMALL_STATE(110)] = 2128,
  [SMALL_STATE(111)] = 2136,
  [SMALL_STATE(112)] = 2144,
  [SMALL_STATE(113)] = 2152,
  [SMALL_STATE(114)] = 2160,
  [SMALL_STATE(115)] = 2168,
  [SMALL_STATE(116)] = 2178,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(109),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(105),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(102),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(45),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_in, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_in, 6),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 4),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 4),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_out, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(41),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(41),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whitespace, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_whitespace, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(59),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spacer, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spacer, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [328] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
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
