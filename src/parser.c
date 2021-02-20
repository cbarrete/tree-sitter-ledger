#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 115
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
  sym_balance_assertion = 66,
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
  [sym_balance_assertion] = "balance_assertion",
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
  [6] = {.lex_state = 61},
  [7] = {.lex_state = 62},
  [8] = {.lex_state = 62},
  [9] = {.lex_state = 62},
  [10] = {.lex_state = 62},
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
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 62},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 62},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 62},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 62},
  [65] = {.lex_state = 62},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 62},
  [68] = {.lex_state = 62},
  [69] = {.lex_state = 62},
  [70] = {.lex_state = 62},
  [71] = {.lex_state = 62},
  [72] = {.lex_state = 62},
  [73] = {.lex_state = 62},
  [74] = {.lex_state = 62},
  [75] = {.lex_state = 62},
  [76] = {.lex_state = 62},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 62},
  [79] = {.lex_state = 62},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 62},
  [82] = {.lex_state = 62},
  [83] = {.lex_state = 62},
  [84] = {.lex_state = 62},
  [85] = {.lex_state = 96},
  [86] = {.lex_state = 62},
  [87] = {.lex_state = 62},
  [88] = {.lex_state = 62},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 62},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 62},
  [94] = {.lex_state = 62},
  [95] = {.lex_state = 62},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 62},
  [98] = {.lex_state = 62},
  [99] = {.lex_state = 62},
  [100] = {.lex_state = 62},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 62},
  [104] = {.lex_state = 62},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 62},
  [111] = {.lex_state = 62},
  [112] = {.lex_state = 62},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
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
    [sym_source_file] = STATE(104),
    [sym_journal_item] = STATE(3),
    [sym_comment] = STATE(22),
    [sym_directive] = STATE(22),
    [sym_word_directive] = STATE(23),
    [sym_char_directive] = STATE(23),
    [sym_check_in] = STATE(13),
    [sym_check_out] = STATE(13),
    [sym_xact] = STATE(22),
    [sym_plain_xact] = STATE(25),
    [sym_date] = STATE(74),
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
    STATE(25), 1,
      sym_plain_xact,
    STATE(74), 1,
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
      sym_check_in,
      sym_check_out,
    STATE(23), 2,
      sym_word_directive,
      sym_char_directive,
    ACTIONS(51), 3,
      anon_sym_include,
      anon_sym_account,
      anon_sym_def,
    STATE(22), 3,
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
    STATE(25), 1,
      sym_plain_xact,
    STATE(74), 1,
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
      sym_check_in,
      sym_check_out,
    STATE(23), 2,
      sym_word_directive,
      sym_char_directive,
    ACTIONS(13), 3,
      anon_sym_include,
      anon_sym_account,
      anon_sym_def,
    STATE(22), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [172] = 5,
    ACTIONS(102), 1,
      anon_sym_i,
    STATE(34), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(104), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
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
  [210] = 5,
    ACTIONS(108), 1,
      anon_sym_i,
    STATE(34), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(110), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(106), 21,
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
  [248] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(115), 1,
      anon_sym_i,
    STATE(90), 1,
      sym_spacer,
    ACTIONS(117), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
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
  [286] = 5,
    ACTIONS(121), 1,
      anon_sym_i,
    STATE(34), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(104), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(119), 21,
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
  [324] = 3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(125), 2,
      anon_sym_i,
      anon_sym_AT,
    ACTIONS(123), 23,
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
  [358] = 5,
    ACTIONS(129), 1,
      anon_sym_i,
    STATE(34), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(104), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(127), 21,
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
  [396] = 3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(133), 2,
      anon_sym_i,
      anon_sym_AT,
    ACTIONS(131), 23,
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
  [430] = 3,
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
  [463] = 3,
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
  [496] = 3,
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
  [527] = 3,
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
  [558] = 2,
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
  [587] = 2,
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
  [616] = 3,
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
  [647] = 3,
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
  [678] = 2,
    ACTIONS(169), 1,
      anon_sym_i,
    ACTIONS(167), 23,
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
  [707] = 2,
    ACTIONS(173), 1,
      anon_sym_i,
    ACTIONS(171), 23,
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
  [736] = 3,
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
  [767] = 3,
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
  [798] = 3,
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
  [829] = 2,
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
  [858] = 3,
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
  [889] = 3,
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
  [920] = 3,
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
  [951] = 3,
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
  [982] = 3,
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
  [1013] = 3,
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
  [1044] = 3,
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
  [1075] = 3,
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
  [1106] = 3,
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
  [1137] = 11,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym_account_name,
    ACTIONS(229), 1,
      anon_sym_,
    ACTIONS(231), 1,
      anon_sym_TAB,
    STATE(41), 1,
      sym_account,
    STATE(44), 1,
      aux_sym_whitespace_repeat1,
    STATE(51), 1,
      sym_status,
    STATE(82), 1,
      sym_note,
    ACTIONS(221), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [1172] = 3,
    ACTIONS(177), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(175), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
  [1188] = 7,
    ACTIONS(233), 1,
      anon_sym_DASH,
    ACTIONS(235), 1,
      aux_sym_quantity_token1,
    STATE(56), 1,
      sym_commodity,
    STATE(58), 1,
      sym_quantity,
    STATE(67), 1,
      sym_amount,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(237), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1212] = 7,
    ACTIONS(233), 1,
      anon_sym_DASH,
    ACTIONS(235), 1,
      aux_sym_quantity_token1,
    STATE(56), 1,
      sym_commodity,
    STATE(58), 1,
      sym_quantity,
    STATE(70), 1,
      sym_amount,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(237), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1236] = 7,
    ACTIONS(241), 1,
      anon_sym_EQ,
    ACTIONS(243), 1,
      anon_sym_AT,
    ACTIONS(245), 1,
      anon_sym_AT_AT,
    STATE(49), 1,
      sym_price,
    STATE(79), 1,
      sym_balance_assertion,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(239), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1260] = 7,
    ACTIONS(233), 1,
      anon_sym_DASH,
    ACTIONS(235), 1,
      aux_sym_quantity_token1,
    STATE(38), 1,
      sym_amount,
    STATE(56), 1,
      sym_commodity,
    STATE(58), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(237), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1284] = 7,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(247), 1,
      anon_sym_LF,
    STATE(39), 1,
      sym_spacer,
    STATE(68), 1,
      sym_values,
    STATE(83), 1,
      sym_note,
    ACTIONS(249), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [1308] = 7,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(251), 1,
      anon_sym_LF,
    STATE(39), 1,
      sym_spacer,
    STATE(69), 1,
      sym_values,
    STATE(86), 1,
      sym_note,
    ACTIONS(249), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [1332] = 7,
    ACTIONS(233), 1,
      anon_sym_DASH,
    ACTIONS(235), 1,
      aux_sym_quantity_token1,
    STATE(14), 1,
      sym_amount,
    STATE(58), 1,
      sym_quantity,
    STATE(61), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(237), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1356] = 7,
    ACTIONS(233), 1,
      anon_sym_DASH,
    ACTIONS(235), 1,
      aux_sym_quantity_token1,
    STATE(32), 1,
      sym_amount,
    STATE(58), 1,
      sym_quantity,
    STATE(61), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(237), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1380] = 5,
    ACTIONS(257), 1,
      anon_sym_,
    ACTIONS(260), 1,
      anon_sym_TAB,
    STATE(44), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(253), 2,
      anon_sym_SEMI,
      sym_account_name,
    ACTIONS(255), 4,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1400] = 3,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(207), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
  [1416] = 5,
    ACTIONS(265), 1,
      sym_payee,
    STATE(47), 1,
      aux_sym_whitespace_repeat1,
    STATE(76), 1,
      sym_status,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(267), 2,
      anon_sym_,
      anon_sym_TAB,
  [1434] = 4,
    ACTIONS(255), 1,
      sym_payee,
    STATE(47), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(253), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(269), 2,
      anon_sym_,
      anon_sym_TAB,
  [1449] = 3,
    ACTIONS(272), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(274), 3,
      sym_time,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1462] = 4,
    ACTIONS(241), 1,
      anon_sym_EQ,
    STATE(78), 1,
      sym_balance_assertion,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(276), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1477] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(278), 4,
      anon_sym_DASH,
      aux_sym_quantity_token1,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1488] = 6,
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
    STATE(40), 1,
      sym_account,
  [1507] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 1,
      anon_sym_LBRACK,
    ACTIONS(284), 1,
      sym_account_name,
    STATE(32), 1,
      sym_account,
  [1526] = 6,
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
    STATE(6), 1,
      sym_account,
  [1545] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 1,
      anon_sym_LBRACK,
    ACTIONS(284), 1,
      sym_account_name,
    STATE(28), 1,
      sym_account,
  [1564] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(131), 4,
      anon_sym_DASH,
      aux_sym_quantity_token1,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1575] = 4,
    ACTIONS(233), 1,
      anon_sym_DASH,
    ACTIONS(235), 1,
      aux_sym_quantity_token1,
    STATE(8), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1589] = 3,
    STATE(34), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(104), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [1601] = 3,
    STATE(8), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(286), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1613] = 3,
    STATE(42), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(237), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1625] = 4,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(290), 1,
      sym_account_name,
    ACTIONS(288), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1639] = 4,
    ACTIONS(292), 1,
      anon_sym_DASH,
    ACTIONS(294), 1,
      aux_sym_quantity_token1,
    STATE(8), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1653] = 3,
    STATE(100), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(286), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1665] = 3,
    STATE(32), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(286), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1677] = 3,
    STATE(34), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(104), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [1689] = 3,
    STATE(34), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(104), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(9), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [1701] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(296), 3,
      sym_time,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1711] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(298), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
  [1721] = 4,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(300), 1,
      anon_sym_LF,
    STATE(88), 1,
      sym_note,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1735] = 4,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(247), 1,
      anon_sym_LF,
    STATE(83), 1,
      sym_note,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1749] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(302), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1758] = 3,
    ACTIONS(304), 1,
      sym_single_date,
    STATE(98), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1769] = 3,
    ACTIONS(304), 1,
      sym_single_date,
    STATE(99), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1780] = 3,
    ACTIONS(304), 1,
      sym_single_date,
    STATE(59), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1791] = 3,
    ACTIONS(306), 1,
      anon_sym_LF,
    STATE(46), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(308), 2,
      anon_sym_,
      anon_sym_TAB,
  [1802] = 2,
    ACTIONS(310), 1,
      anon_sym_EQ,
    ACTIONS(274), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1811] = 3,
    ACTIONS(312), 1,
      anon_sym_LF,
    STATE(77), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(314), 2,
      anon_sym_,
      anon_sym_TAB,
  [1822] = 3,
    ACTIONS(316), 1,
      sym_payee,
    STATE(47), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(267), 2,
      anon_sym_,
      anon_sym_TAB,
  [1833] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(318), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1842] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(276), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1851] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(320), 1,
      sym_account_name,
  [1861] = 2,
    ACTIONS(322), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1869] = 2,
    ACTIONS(324), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1877] = 2,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1885] = 1,
    ACTIONS(290), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1891] = 2,
    ACTIONS(326), 1,
      aux_sym_note_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1899] = 2,
    ACTIONS(247), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1907] = 2,
    ACTIONS(312), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1915] = 2,
    ACTIONS(328), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1923] = 2,
    ACTIONS(330), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1931] = 2,
    ACTIONS(332), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1939] = 2,
    ACTIONS(334), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1947] = 2,
    ACTIONS(336), 1,
      aux_sym_comment_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1955] = 1,
    ACTIONS(296), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1961] = 2,
    ACTIONS(338), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1969] = 2,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1977] = 2,
    ACTIONS(340), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1985] = 2,
    ACTIONS(342), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1993] = 2,
    ACTIONS(344), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2001] = 2,
    ACTIONS(346), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2009] = 2,
    ACTIONS(348), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2017] = 2,
    ACTIONS(350), 1,
      aux_sym_quantity_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2025] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(352), 1,
      sym_account_name,
  [2035] = 2,
    ACTIONS(354), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2043] = 2,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2051] = 2,
    ACTIONS(358), 1,
      aux_sym_word_directive_token3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2059] = 2,
    ACTIONS(360), 1,
      aux_sym_word_directive_token3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2067] = 2,
    ACTIONS(362), 1,
      aux_sym_word_directive_token2,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [2075] = 2,
    ACTIONS(364), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [2083] = 2,
    ACTIONS(366), 1,
      aux_sym_quantity_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2091] = 2,
    ACTIONS(368), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2099] = 2,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2107] = 2,
    ACTIONS(370), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2115] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(372), 1,
      sym_account_name,
  [2125] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(374), 1,
      sym_account_name,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 86,
  [SMALL_STATE(4)] = 172,
  [SMALL_STATE(5)] = 210,
  [SMALL_STATE(6)] = 248,
  [SMALL_STATE(7)] = 286,
  [SMALL_STATE(8)] = 324,
  [SMALL_STATE(9)] = 358,
  [SMALL_STATE(10)] = 396,
  [SMALL_STATE(11)] = 430,
  [SMALL_STATE(12)] = 463,
  [SMALL_STATE(13)] = 496,
  [SMALL_STATE(14)] = 527,
  [SMALL_STATE(15)] = 558,
  [SMALL_STATE(16)] = 587,
  [SMALL_STATE(17)] = 616,
  [SMALL_STATE(18)] = 647,
  [SMALL_STATE(19)] = 678,
  [SMALL_STATE(20)] = 707,
  [SMALL_STATE(21)] = 736,
  [SMALL_STATE(22)] = 767,
  [SMALL_STATE(23)] = 798,
  [SMALL_STATE(24)] = 829,
  [SMALL_STATE(25)] = 858,
  [SMALL_STATE(26)] = 889,
  [SMALL_STATE(27)] = 920,
  [SMALL_STATE(28)] = 951,
  [SMALL_STATE(29)] = 982,
  [SMALL_STATE(30)] = 1013,
  [SMALL_STATE(31)] = 1044,
  [SMALL_STATE(32)] = 1075,
  [SMALL_STATE(33)] = 1106,
  [SMALL_STATE(34)] = 1137,
  [SMALL_STATE(35)] = 1172,
  [SMALL_STATE(36)] = 1188,
  [SMALL_STATE(37)] = 1212,
  [SMALL_STATE(38)] = 1236,
  [SMALL_STATE(39)] = 1260,
  [SMALL_STATE(40)] = 1284,
  [SMALL_STATE(41)] = 1308,
  [SMALL_STATE(42)] = 1332,
  [SMALL_STATE(43)] = 1356,
  [SMALL_STATE(44)] = 1380,
  [SMALL_STATE(45)] = 1400,
  [SMALL_STATE(46)] = 1416,
  [SMALL_STATE(47)] = 1434,
  [SMALL_STATE(48)] = 1449,
  [SMALL_STATE(49)] = 1462,
  [SMALL_STATE(50)] = 1477,
  [SMALL_STATE(51)] = 1488,
  [SMALL_STATE(52)] = 1507,
  [SMALL_STATE(53)] = 1526,
  [SMALL_STATE(54)] = 1545,
  [SMALL_STATE(55)] = 1564,
  [SMALL_STATE(56)] = 1575,
  [SMALL_STATE(57)] = 1589,
  [SMALL_STATE(58)] = 1601,
  [SMALL_STATE(59)] = 1613,
  [SMALL_STATE(60)] = 1625,
  [SMALL_STATE(61)] = 1639,
  [SMALL_STATE(62)] = 1653,
  [SMALL_STATE(63)] = 1665,
  [SMALL_STATE(64)] = 1677,
  [SMALL_STATE(65)] = 1689,
  [SMALL_STATE(66)] = 1701,
  [SMALL_STATE(67)] = 1711,
  [SMALL_STATE(68)] = 1721,
  [SMALL_STATE(69)] = 1735,
  [SMALL_STATE(70)] = 1749,
  [SMALL_STATE(71)] = 1758,
  [SMALL_STATE(72)] = 1769,
  [SMALL_STATE(73)] = 1780,
  [SMALL_STATE(74)] = 1791,
  [SMALL_STATE(75)] = 1802,
  [SMALL_STATE(76)] = 1811,
  [SMALL_STATE(77)] = 1822,
  [SMALL_STATE(78)] = 1833,
  [SMALL_STATE(79)] = 1842,
  [SMALL_STATE(80)] = 1851,
  [SMALL_STATE(81)] = 1861,
  [SMALL_STATE(82)] = 1869,
  [SMALL_STATE(83)] = 1877,
  [SMALL_STATE(84)] = 1885,
  [SMALL_STATE(85)] = 1891,
  [SMALL_STATE(86)] = 1899,
  [SMALL_STATE(87)] = 1907,
  [SMALL_STATE(88)] = 1915,
  [SMALL_STATE(89)] = 1923,
  [SMALL_STATE(90)] = 1931,
  [SMALL_STATE(91)] = 1939,
  [SMALL_STATE(92)] = 1947,
  [SMALL_STATE(93)] = 1955,
  [SMALL_STATE(94)] = 1961,
  [SMALL_STATE(95)] = 1969,
  [SMALL_STATE(96)] = 1977,
  [SMALL_STATE(97)] = 1985,
  [SMALL_STATE(98)] = 1993,
  [SMALL_STATE(99)] = 2001,
  [SMALL_STATE(100)] = 2009,
  [SMALL_STATE(101)] = 2017,
  [SMALL_STATE(102)] = 2025,
  [SMALL_STATE(103)] = 2035,
  [SMALL_STATE(104)] = 2043,
  [SMALL_STATE(105)] = 2051,
  [SMALL_STATE(106)] = 2059,
  [SMALL_STATE(107)] = 2067,
  [SMALL_STATE(108)] = 2075,
  [SMALL_STATE(109)] = 2083,
  [SMALL_STATE(110)] = 2091,
  [SMALL_STATE(111)] = 2099,
  [SMALL_STATE(112)] = 2107,
  [SMALL_STATE(113)] = 2115,
  [SMALL_STATE(114)] = 2125,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(107),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(106),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(105),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(34),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_in, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_in, 6),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 4),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_out, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(44),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(44),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(47),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spacer, 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 4),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spacer, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [356] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
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
