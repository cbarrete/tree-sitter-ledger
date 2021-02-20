#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 130
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  anon_sym_LF = 1,
  anon_sym_SEMI = 2,
  anon_sym_STAR = 3,
  aux_sym_comment_token1 = 4,
  aux_sym_indented_line_token1 = 5,
  anon_sym_account = 6,
  anon_sym_commodity = 7,
  anon_sym_include = 8,
  aux_sym_word_directive_token1 = 9,
  anon_sym_end = 10,
  anon_sym_alias = 11,
  aux_sym_word_directive_token2 = 12,
  anon_sym_EQ = 13,
  anon_sym_def = 14,
  anon_sym_year = 15,
  aux_sym_word_directive_token3 = 16,
  anon_sym_bucket = 17,
  anon_sym_A = 18,
  anon_sym_Y = 19,
  anon_sym_N = 20,
  anon_sym_D = 21,
  anon_sym_C = 22,
  anon_sym_P = 23,
  anon_sym_i = 24,
  anon_sym_I = 25,
  anon_sym_o = 26,
  anon_sym_O = 27,
  sym_single_date = 28,
  sym_time = 29,
  anon_sym_BANG = 30,
  sym_payee = 31,
  aux_sym_note_token1 = 32,
  anon_sym_LPAREN = 33,
  anon_sym_RPAREN = 34,
  anon_sym_LBRACK = 35,
  anon_sym_RBRACK = 36,
  sym_account_name = 37,
  anon_sym_DASH = 38,
  aux_sym_quantity_token1 = 39,
  aux_sym_commodity_token1 = 40,
  aux_sym_commodity_token2 = 41,
  anon_sym_AT = 42,
  anon_sym_AT_AT = 43,
  anon_sym_ = 44,
  anon_sym_TAB = 45,
  anon_sym_2 = 46,
  anon_sym_TAB2 = 47,
  sym_source_file = 48,
  sym_journal_item = 49,
  sym_comment = 50,
  sym_directive = 51,
  sym_account_directive = 52,
  sym_commodity_directive = 53,
  sym_word_directive = 54,
  sym_char_directive = 55,
  sym_check_in = 56,
  sym_check_out = 57,
  sym_xact = 58,
  sym_plain_xact = 59,
  sym_date = 60,
  sym_status = 61,
  sym_note = 62,
  sym_posting = 63,
  sym_account = 64,
  sym_values = 65,
  sym_amount = 66,
  sym_quantity = 67,
  sym_commodity = 68,
  sym_price = 69,
  sym_balance_assertion = 70,
  sym_spacer = 71,
  aux_sym_source_file_repeat1 = 72,
  aux_sym_account_directive_repeat1 = 73,
  aux_sym_plain_xact_repeat1 = 74,
  aux_sym_whitespace_repeat1 = 75,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_STAR] = "*",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_indented_line_token1] = "indented_line_token1",
  [anon_sym_account] = "account",
  [anon_sym_commodity] = "commodity",
  [anon_sym_include] = "include",
  [aux_sym_word_directive_token1] = "word_directive_token1",
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
  [sym_account_directive] = "account_directive",
  [sym_commodity_directive] = "commodity_directive",
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
  [aux_sym_account_directive_repeat1] = "account_directive_repeat1",
  [aux_sym_plain_xact_repeat1] = "plain_xact_repeat1",
  [aux_sym_whitespace_repeat1] = "whitespace_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_indented_line_token1] = aux_sym_indented_line_token1,
  [anon_sym_account] = anon_sym_account,
  [anon_sym_commodity] = anon_sym_commodity,
  [anon_sym_include] = anon_sym_include,
  [aux_sym_word_directive_token1] = aux_sym_word_directive_token1,
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
  [sym_account_directive] = sym_account_directive,
  [sym_commodity_directive] = sym_commodity_directive,
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
  [aux_sym_account_directive_repeat1] = aux_sym_account_directive_repeat1,
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
  [aux_sym_indented_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_account] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commodity] = {
    .visible = true,
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
  [sym_account_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity_directive] = {
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
  [aux_sym_account_directive_repeat1] = {
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
      if (eof) ADVANCE(73);
      if (lookahead == '\t') ADVANCE(132);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead == '!') ADVANCE(105);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(76);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == ';') ADVANCE(75);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '@') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'C') ADVANCE(97);
      if (lookahead == 'D') ADVANCE(96);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'N') ADVANCE(95);
      if (lookahead == 'O') ADVANCE(102);
      if (lookahead == 'P') ADVANCE(98);
      if (lookahead == 'Y') ADVANCE(94);
      if (lookahead == '[') ADVANCE(113);
      if (lookahead == ']') ADVANCE(115);
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'b') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == 'y') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(132);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == ';') ADVANCE(75);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '@') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(132);
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '=') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(139);
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead == '!') ADVANCE(106);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == ';') ADVANCE(75);
      if (lookahead == '[') ADVANCE(114);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(138);
      if (lookahead == ' ') ADVANCE(131);
      if (lookahead == '!') ADVANCE(105);
      if (lookahead == '*') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(133);
      if (lookahead == ' ') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(135);
      if (lookahead == ' ') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(137);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(86);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(134);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(62);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(88);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'k') ADVANCE(27);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 49:
      if (lookahead == 'y') ADVANCE(81);
      END_STATE();
    case 50:
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 51:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(61);
      END_STATE();
    case 52:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(63);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 69:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 70:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(117);
      END_STATE();
    case 71:
      if (eof) ADVANCE(73);
      if (lookahead == '\t') ADVANCE(132);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead == '*') ADVANCE(76);
      if (lookahead == ';') ADVANCE(75);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'C') ADVANCE(97);
      if (lookahead == 'D') ADVANCE(96);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'N') ADVANCE(95);
      if (lookahead == 'O') ADVANCE(102);
      if (lookahead == 'P') ADVANCE(98);
      if (lookahead == 'Y') ADVANCE(94);
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'b') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == 'y') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 72:
      if (eof) ADVANCE(73);
      if (lookahead == '\t') ADVANCE(132);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(76);
      if (lookahead == ';') ADVANCE(75);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '@') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'C') ADVANCE(97);
      if (lookahead == 'D') ADVANCE(96);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'N') ADVANCE(95);
      if (lookahead == 'O') ADVANCE(102);
      if (lookahead == 'P') ADVANCE(98);
      if (lookahead == 'Y') ADVANCE(94);
      if (lookahead == ']') ADVANCE(115);
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'b') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == 'y') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_indented_line_token1);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_word_directive_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_word_directive_token2);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_word_directive_token3);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_word_directive_token3);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(61);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_bucket);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_single_date);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '\t') ADVANCE(136);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(141);
      if (lookahead == ' ') ADVANCE(140);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(86);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(107);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(86);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(107);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 72},
  [2] = {.lex_state = 72},
  [3] = {.lex_state = 72},
  [4] = {.lex_state = 72},
  [5] = {.lex_state = 72},
  [6] = {.lex_state = 72},
  [7] = {.lex_state = 72},
  [8] = {.lex_state = 71},
  [9] = {.lex_state = 72},
  [10] = {.lex_state = 72},
  [11] = {.lex_state = 71},
  [12] = {.lex_state = 72},
  [13] = {.lex_state = 71},
  [14] = {.lex_state = 72},
  [15] = {.lex_state = 72},
  [16] = {.lex_state = 72},
  [17] = {.lex_state = 72},
  [18] = {.lex_state = 72},
  [19] = {.lex_state = 72},
  [20] = {.lex_state = 72},
  [21] = {.lex_state = 72},
  [22] = {.lex_state = 72},
  [23] = {.lex_state = 72},
  [24] = {.lex_state = 72},
  [25] = {.lex_state = 72},
  [26] = {.lex_state = 72},
  [27] = {.lex_state = 72},
  [28] = {.lex_state = 72},
  [29] = {.lex_state = 72},
  [30] = {.lex_state = 72},
  [31] = {.lex_state = 72},
  [32] = {.lex_state = 72},
  [33] = {.lex_state = 72},
  [34] = {.lex_state = 72},
  [35] = {.lex_state = 72},
  [36] = {.lex_state = 72},
  [37] = {.lex_state = 72},
  [38] = {.lex_state = 72},
  [39] = {.lex_state = 72},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 72},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 72},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 72},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 72},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 72},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 72},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 72},
  [78] = {.lex_state = 72},
  [79] = {.lex_state = 72},
  [80] = {.lex_state = 72},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 72},
  [83] = {.lex_state = 72},
  [84] = {.lex_state = 72},
  [85] = {.lex_state = 72},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 72},
  [88] = {.lex_state = 72},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 72},
  [91] = {.lex_state = 72},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 72},
  [94] = {.lex_state = 72},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 72},
  [97] = {.lex_state = 72},
  [98] = {.lex_state = 72},
  [99] = {.lex_state = 72},
  [100] = {.lex_state = 72},
  [101] = {.lex_state = 72},
  [102] = {.lex_state = 72},
  [103] = {.lex_state = 72},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 72},
  [109] = {.lex_state = 72},
  [110] = {.lex_state = 72},
  [111] = {.lex_state = 72},
  [112] = {.lex_state = 72},
  [113] = {.lex_state = 72},
  [114] = {.lex_state = 108},
  [115] = {.lex_state = 72},
  [116] = {.lex_state = 72},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 72},
  [122] = {.lex_state = 72},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 72},
  [126] = {.lex_state = 72},
  [127] = {.lex_state = 72},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_account] = ACTIONS(1),
    [anon_sym_commodity] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
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
    [sym_source_file] = STATE(112),
    [sym_journal_item] = STATE(2),
    [sym_comment] = STATE(18),
    [sym_directive] = STATE(18),
    [sym_account_directive] = STATE(21),
    [sym_commodity_directive] = STATE(21),
    [sym_word_directive] = STATE(21),
    [sym_char_directive] = STATE(21),
    [sym_check_in] = STATE(22),
    [sym_check_out] = STATE(22),
    [sym_xact] = STATE(18),
    [sym_plain_xact] = STATE(23),
    [sym_date] = STATE(87),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_account] = ACTIONS(13),
    [anon_sym_commodity] = ACTIONS(15),
    [anon_sym_include] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_alias] = ACTIONS(21),
    [anon_sym_def] = ACTIONS(17),
    [anon_sym_year] = ACTIONS(23),
    [anon_sym_bucket] = ACTIONS(25),
    [anon_sym_A] = ACTIONS(27),
    [anon_sym_Y] = ACTIONS(29),
    [anon_sym_N] = ACTIONS(31),
    [anon_sym_D] = ACTIONS(33),
    [anon_sym_C] = ACTIONS(35),
    [anon_sym_P] = ACTIONS(37),
    [anon_sym_i] = ACTIONS(39),
    [anon_sym_I] = ACTIONS(41),
    [anon_sym_o] = ACTIONS(43),
    [anon_sym_O] = ACTIONS(43),
    [sym_single_date] = ACTIONS(45),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_TAB] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 27,
    ACTIONS(13), 1,
      anon_sym_account,
    ACTIONS(15), 1,
      anon_sym_commodity,
    ACTIONS(19), 1,
      anon_sym_end,
    ACTIONS(21), 1,
      anon_sym_alias,
    ACTIONS(23), 1,
      anon_sym_year,
    ACTIONS(25), 1,
      anon_sym_bucket,
    ACTIONS(27), 1,
      anon_sym_A,
    ACTIONS(29), 1,
      anon_sym_Y,
    ACTIONS(31), 1,
      anon_sym_N,
    ACTIONS(33), 1,
      anon_sym_D,
    ACTIONS(35), 1,
      anon_sym_C,
    ACTIONS(37), 1,
      anon_sym_P,
    ACTIONS(39), 1,
      anon_sym_i,
    ACTIONS(41), 1,
      anon_sym_I,
    ACTIONS(45), 1,
      sym_single_date,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      anon_sym_LF,
    STATE(23), 1,
      sym_plain_xact,
    STATE(87), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(11), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(17), 2,
      anon_sym_include,
      anon_sym_def,
    ACTIONS(43), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(22), 2,
      sym_check_in,
      sym_check_out,
    STATE(18), 3,
      sym_comment,
      sym_directive,
      sym_xact,
    STATE(21), 4,
      sym_account_directive,
      sym_commodity_directive,
      sym_word_directive,
      sym_char_directive,
  [93] = 27,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      anon_sym_LF,
    ACTIONS(59), 1,
      anon_sym_account,
    ACTIONS(62), 1,
      anon_sym_commodity,
    ACTIONS(68), 1,
      anon_sym_end,
    ACTIONS(71), 1,
      anon_sym_alias,
    ACTIONS(74), 1,
      anon_sym_year,
    ACTIONS(77), 1,
      anon_sym_bucket,
    ACTIONS(80), 1,
      anon_sym_A,
    ACTIONS(83), 1,
      anon_sym_Y,
    ACTIONS(86), 1,
      anon_sym_N,
    ACTIONS(89), 1,
      anon_sym_D,
    ACTIONS(92), 1,
      anon_sym_C,
    ACTIONS(95), 1,
      anon_sym_P,
    ACTIONS(98), 1,
      anon_sym_i,
    ACTIONS(101), 1,
      anon_sym_I,
    ACTIONS(107), 1,
      sym_single_date,
    STATE(23), 1,
      sym_plain_xact,
    STATE(87), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(56), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(65), 2,
      anon_sym_include,
      anon_sym_def,
    ACTIONS(104), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(22), 2,
      sym_check_in,
      sym_check_out,
    STATE(18), 3,
      sym_comment,
      sym_directive,
      sym_xact,
    STATE(21), 4,
      sym_account_directive,
      sym_commodity_directive,
      sym_word_directive,
      sym_char_directive,
  [186] = 3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(112), 2,
      anon_sym_i,
      anon_sym_AT,
    ACTIONS(110), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [221] = 3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(116), 2,
      anon_sym_i,
      anon_sym_AT,
    ACTIONS(114), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [256] = 5,
    ACTIONS(120), 1,
      anon_sym_i,
    STATE(40), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(122), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(118), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [295] = 5,
    ACTIONS(126), 1,
      anon_sym_i,
    STATE(40), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(128), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(124), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [334] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(133), 1,
      anon_sym_i,
    STATE(123), 1,
      sym_spacer,
    ACTIONS(135), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
    ACTIONS(131), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [373] = 5,
    ACTIONS(139), 1,
      anon_sym_i,
    STATE(40), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(122), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(137), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [412] = 5,
    ACTIONS(143), 1,
      anon_sym_i,
    STATE(40), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(122), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(141), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [451] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(147), 1,
      anon_sym_i,
    ACTIONS(145), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [485] = 5,
    ACTIONS(151), 1,
      anon_sym_i,
    STATE(12), 1,
      aux_sym_account_directive_repeat1,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(153), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(149), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [523] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(158), 1,
      anon_sym_i,
    ACTIONS(156), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [557] = 5,
    ACTIONS(162), 1,
      anon_sym_i,
    STATE(12), 1,
      aux_sym_account_directive_repeat1,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(164), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(160), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [595] = 5,
    ACTIONS(168), 1,
      anon_sym_i,
    STATE(12), 1,
      aux_sym_account_directive_repeat1,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(164), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(166), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [633] = 5,
    ACTIONS(172), 1,
      anon_sym_i,
    STATE(14), 1,
      aux_sym_account_directive_repeat1,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(164), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(170), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [671] = 5,
    ACTIONS(176), 1,
      anon_sym_i,
    STATE(15), 1,
      aux_sym_account_directive_repeat1,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(164), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(174), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [709] = 3,
    ACTIONS(180), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(178), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [741] = 3,
    ACTIONS(184), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(182), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [773] = 2,
    ACTIONS(188), 1,
      anon_sym_i,
    ACTIONS(186), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [803] = 3,
    ACTIONS(192), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(190), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [835] = 3,
    ACTIONS(196), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(194), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [867] = 3,
    ACTIONS(200), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(198), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [899] = 3,
    ACTIONS(204), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(202), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [931] = 3,
    ACTIONS(208), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(206), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [963] = 3,
    ACTIONS(212), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(210), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [995] = 3,
    ACTIONS(158), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(156), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
    ACTIONS(216), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(214), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [1059] = 2,
    ACTIONS(220), 1,
      anon_sym_i,
    ACTIONS(218), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [1089] = 2,
    ACTIONS(224), 1,
      anon_sym_i,
    ACTIONS(222), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [1119] = 3,
    ACTIONS(228), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(226), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [1151] = 3,
    ACTIONS(232), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(230), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [1183] = 3,
    ACTIONS(147), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(145), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [1215] = 3,
    ACTIONS(236), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(234), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [1247] = 3,
    ACTIONS(240), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(238), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [1279] = 2,
    ACTIONS(244), 1,
      anon_sym_i,
    ACTIONS(242), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [1309] = 2,
    ACTIONS(151), 1,
      anon_sym_i,
    ACTIONS(149), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [1339] = 3,
    ACTIONS(248), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(246), 22,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [1371] = 2,
    ACTIONS(252), 1,
      anon_sym_i,
    ACTIONS(250), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
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
  [1401] = 11,
    ACTIONS(254), 1,
      anon_sym_SEMI,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      sym_account_name,
    ACTIONS(264), 1,
      anon_sym_,
    ACTIONS(266), 1,
      anon_sym_TAB,
    STATE(45), 1,
      sym_account,
    STATE(48), 1,
      aux_sym_whitespace_repeat1,
    STATE(61), 1,
      sym_status,
    STATE(110), 1,
      sym_note,
    ACTIONS(256), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [1436] = 7,
    ACTIONS(268), 1,
      anon_sym_DASH,
    ACTIONS(270), 1,
      aux_sym_quantity_token1,
    STATE(31), 1,
      sym_amount,
    STATE(70), 1,
      sym_quantity,
    STATE(73), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(272), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1460] = 3,
    ACTIONS(232), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(230), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
  [1476] = 7,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(254), 1,
      anon_sym_SEMI,
    ACTIONS(274), 1,
      anon_sym_LF,
    STATE(50), 1,
      sym_spacer,
    STATE(69), 1,
      sym_values,
    STATE(96), 1,
      sym_note,
    ACTIONS(276), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [1500] = 7,
    ACTIONS(280), 1,
      anon_sym_EQ,
    ACTIONS(282), 1,
      anon_sym_AT,
    ACTIONS(284), 1,
      anon_sym_AT_AT,
    STATE(58), 1,
      sym_price,
    STATE(80), 1,
      sym_balance_assertion,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(278), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1524] = 7,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(254), 1,
      anon_sym_SEMI,
    ACTIONS(286), 1,
      anon_sym_LF,
    STATE(50), 1,
      sym_spacer,
    STATE(78), 1,
      sym_values,
    STATE(113), 1,
      sym_note,
    ACTIONS(276), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [1548] = 7,
    ACTIONS(268), 1,
      anon_sym_DASH,
    ACTIONS(270), 1,
      aux_sym_quantity_token1,
    STATE(65), 1,
      sym_commodity,
    STATE(70), 1,
      sym_quantity,
    STATE(90), 1,
      sym_amount,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(272), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1572] = 7,
    ACTIONS(268), 1,
      anon_sym_DASH,
    ACTIONS(270), 1,
      aux_sym_quantity_token1,
    STATE(34), 1,
      sym_amount,
    STATE(70), 1,
      sym_quantity,
    STATE(73), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(272), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1596] = 5,
    ACTIONS(292), 1,
      anon_sym_,
    ACTIONS(295), 1,
      anon_sym_TAB,
    STATE(48), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(288), 2,
      anon_sym_SEMI,
      sym_account_name,
    ACTIONS(290), 4,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1616] = 7,
    ACTIONS(268), 1,
      anon_sym_DASH,
    ACTIONS(270), 1,
      aux_sym_quantity_token1,
    STATE(64), 1,
      sym_amount,
    STATE(65), 1,
      sym_commodity,
    STATE(70), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(272), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1640] = 7,
    ACTIONS(268), 1,
      anon_sym_DASH,
    ACTIONS(270), 1,
      aux_sym_quantity_token1,
    STATE(44), 1,
      sym_amount,
    STATE(65), 1,
      sym_commodity,
    STATE(70), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(272), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1664] = 3,
    ACTIONS(204), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(202), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
  [1680] = 5,
    ACTIONS(300), 1,
      sym_payee,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    STATE(79), 1,
      sym_status,
    ACTIONS(298), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(302), 2,
      anon_sym_,
      anon_sym_TAB,
  [1698] = 7,
    ACTIONS(264), 1,
      anon_sym_,
    ACTIONS(266), 1,
      anon_sym_TAB,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(308), 1,
      sym_account_name,
    STATE(48), 1,
      aux_sym_whitespace_repeat1,
    STATE(98), 1,
      sym_account,
  [1720] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(308), 1,
      sym_account_name,
    STATE(34), 1,
      sym_account,
  [1739] = 4,
    ACTIONS(290), 1,
      sym_payee,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(288), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(310), 2,
      anon_sym_,
      anon_sym_TAB,
  [1754] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(313), 4,
      anon_sym_DASH,
      aux_sym_quantity_token1,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1765] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      sym_account_name,
    STATE(8), 1,
      sym_account,
  [1784] = 4,
    ACTIONS(280), 1,
      anon_sym_EQ,
    STATE(88), 1,
      sym_balance_assertion,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(315), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1799] = 4,
    STATE(68), 1,
      aux_sym_whitespace_repeat1,
    STATE(97), 1,
      sym_commodity,
    ACTIONS(317), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(319), 2,
      anon_sym_,
      anon_sym_TAB,
  [1814] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(308), 1,
      sym_account_name,
    STATE(19), 1,
      sym_account,
  [1833] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      sym_account_name,
    STATE(43), 1,
      sym_account,
  [1852] = 3,
    ACTIONS(321), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(323), 3,
      sym_time,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1865] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(110), 4,
      anon_sym_DASH,
      aux_sym_quantity_token1,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1876] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(325), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
  [1886] = 4,
    ACTIONS(268), 1,
      anon_sym_DASH,
    ACTIONS(270), 1,
      aux_sym_quantity_token1,
    STATE(5), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1900] = 3,
    STATE(103), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(317), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1912] = 3,
    STATE(34), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(317), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1924] = 3,
    STATE(68), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(288), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(327), 2,
      anon_sym_,
      anon_sym_TAB,
  [1936] = 4,
    ACTIONS(254), 1,
      anon_sym_SEMI,
    ACTIONS(330), 1,
      anon_sym_LF,
    STATE(101), 1,
      sym_note,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1950] = 3,
    STATE(5), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(317), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1962] = 3,
    STATE(41), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(272), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1974] = 3,
    STATE(40), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(122), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(9), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [1986] = 4,
    ACTIONS(332), 1,
      anon_sym_DASH,
    ACTIONS(334), 1,
      aux_sym_quantity_token1,
    STATE(5), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2000] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(336), 3,
      sym_time,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [2010] = 3,
    STATE(40), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(122), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(10), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [2022] = 4,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(340), 1,
      sym_account_name,
    ACTIONS(338), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [2036] = 3,
    STATE(40), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(122), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [2048] = 4,
    ACTIONS(254), 1,
      anon_sym_SEMI,
    ACTIONS(274), 1,
      anon_sym_LF,
    STATE(96), 1,
      sym_note,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2062] = 3,
    ACTIONS(342), 1,
      anon_sym_LF,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(344), 2,
      anon_sym_,
      anon_sym_TAB,
  [2073] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(315), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [2082] = 3,
    ACTIONS(288), 1,
      aux_sym_indented_line_token1,
    STATE(81), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(346), 2,
      anon_sym_,
      anon_sym_TAB,
  [2093] = 3,
    ACTIONS(349), 1,
      sym_single_date,
    STATE(71), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2104] = 3,
    ACTIONS(349), 1,
      sym_single_date,
    STATE(102), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2115] = 3,
    ACTIONS(349), 1,
      sym_single_date,
    STATE(100), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2126] = 2,
    ACTIONS(351), 1,
      anon_sym_EQ,
    ACTIONS(323), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [2135] = 3,
    ACTIONS(353), 1,
      sym_payee,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(302), 2,
      anon_sym_,
      anon_sym_TAB,
  [2146] = 3,
    ACTIONS(355), 1,
      anon_sym_LF,
    STATE(52), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(357), 2,
      anon_sym_,
      anon_sym_TAB,
  [2157] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(359), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [2166] = 3,
    ACTIONS(361), 1,
      aux_sym_indented_line_token1,
    STATE(81), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(363), 2,
      anon_sym_,
      anon_sym_TAB,
  [2177] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(365), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [2186] = 1,
    ACTIONS(336), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [2192] = 2,
    ACTIONS(367), 1,
      aux_sym_comment_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [2200] = 2,
    ACTIONS(369), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2208] = 2,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2216] = 2,
    ACTIONS(371), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [2224] = 2,
    ACTIONS(330), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2232] = 2,
    ACTIONS(373), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2240] = 2,
    ACTIONS(375), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2248] = 2,
    ACTIONS(377), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2256] = 2,
    ACTIONS(379), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2264] = 2,
    ACTIONS(381), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2272] = 2,
    ACTIONS(383), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2280] = 2,
    ACTIONS(385), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2288] = 2,
    ACTIONS(387), 1,
      aux_sym_quantity_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2296] = 2,
    ACTIONS(389), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [2304] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(391), 1,
      sym_account_name,
  [2314] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(393), 1,
      sym_account_name,
  [2324] = 2,
    ACTIONS(395), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2332] = 2,
    ACTIONS(397), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2340] = 2,
    ACTIONS(399), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2348] = 1,
    ACTIONS(340), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [2354] = 2,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2362] = 2,
    ACTIONS(274), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2370] = 2,
    ACTIONS(403), 1,
      aux_sym_note_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [2378] = 2,
    ACTIONS(342), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2386] = 2,
    ACTIONS(405), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2394] = 2,
    ACTIONS(407), 1,
      aux_sym_word_directive_token3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2402] = 2,
    ACTIONS(409), 1,
      aux_sym_word_directive_token3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2410] = 2,
    ACTIONS(411), 1,
      aux_sym_word_directive_token2,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [2418] = 2,
    ACTIONS(413), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [2426] = 2,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [2434] = 2,
    STATE(53), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(417), 2,
      anon_sym_,
      anon_sym_TAB,
  [2442] = 2,
    ACTIONS(419), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [2450] = 2,
    ACTIONS(421), 1,
      aux_sym_quantity_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2458] = 2,
    ACTIONS(423), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2466] = 2,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2474] = 2,
    ACTIONS(425), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2482] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(427), 1,
      sym_account_name,
  [2492] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(429), 1,
      sym_account_name,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 93,
  [SMALL_STATE(4)] = 186,
  [SMALL_STATE(5)] = 221,
  [SMALL_STATE(6)] = 256,
  [SMALL_STATE(7)] = 295,
  [SMALL_STATE(8)] = 334,
  [SMALL_STATE(9)] = 373,
  [SMALL_STATE(10)] = 412,
  [SMALL_STATE(11)] = 451,
  [SMALL_STATE(12)] = 485,
  [SMALL_STATE(13)] = 523,
  [SMALL_STATE(14)] = 557,
  [SMALL_STATE(15)] = 595,
  [SMALL_STATE(16)] = 633,
  [SMALL_STATE(17)] = 671,
  [SMALL_STATE(18)] = 709,
  [SMALL_STATE(19)] = 741,
  [SMALL_STATE(20)] = 773,
  [SMALL_STATE(21)] = 803,
  [SMALL_STATE(22)] = 835,
  [SMALL_STATE(23)] = 867,
  [SMALL_STATE(24)] = 899,
  [SMALL_STATE(25)] = 931,
  [SMALL_STATE(26)] = 963,
  [SMALL_STATE(27)] = 995,
  [SMALL_STATE(28)] = 1027,
  [SMALL_STATE(29)] = 1059,
  [SMALL_STATE(30)] = 1089,
  [SMALL_STATE(31)] = 1119,
  [SMALL_STATE(32)] = 1151,
  [SMALL_STATE(33)] = 1183,
  [SMALL_STATE(34)] = 1215,
  [SMALL_STATE(35)] = 1247,
  [SMALL_STATE(36)] = 1279,
  [SMALL_STATE(37)] = 1309,
  [SMALL_STATE(38)] = 1339,
  [SMALL_STATE(39)] = 1371,
  [SMALL_STATE(40)] = 1401,
  [SMALL_STATE(41)] = 1436,
  [SMALL_STATE(42)] = 1460,
  [SMALL_STATE(43)] = 1476,
  [SMALL_STATE(44)] = 1500,
  [SMALL_STATE(45)] = 1524,
  [SMALL_STATE(46)] = 1548,
  [SMALL_STATE(47)] = 1572,
  [SMALL_STATE(48)] = 1596,
  [SMALL_STATE(49)] = 1616,
  [SMALL_STATE(50)] = 1640,
  [SMALL_STATE(51)] = 1664,
  [SMALL_STATE(52)] = 1680,
  [SMALL_STATE(53)] = 1698,
  [SMALL_STATE(54)] = 1720,
  [SMALL_STATE(55)] = 1739,
  [SMALL_STATE(56)] = 1754,
  [SMALL_STATE(57)] = 1765,
  [SMALL_STATE(58)] = 1784,
  [SMALL_STATE(59)] = 1799,
  [SMALL_STATE(60)] = 1814,
  [SMALL_STATE(61)] = 1833,
  [SMALL_STATE(62)] = 1852,
  [SMALL_STATE(63)] = 1865,
  [SMALL_STATE(64)] = 1876,
  [SMALL_STATE(65)] = 1886,
  [SMALL_STATE(66)] = 1900,
  [SMALL_STATE(67)] = 1912,
  [SMALL_STATE(68)] = 1924,
  [SMALL_STATE(69)] = 1936,
  [SMALL_STATE(70)] = 1950,
  [SMALL_STATE(71)] = 1962,
  [SMALL_STATE(72)] = 1974,
  [SMALL_STATE(73)] = 1986,
  [SMALL_STATE(74)] = 2000,
  [SMALL_STATE(75)] = 2010,
  [SMALL_STATE(76)] = 2022,
  [SMALL_STATE(77)] = 2036,
  [SMALL_STATE(78)] = 2048,
  [SMALL_STATE(79)] = 2062,
  [SMALL_STATE(80)] = 2073,
  [SMALL_STATE(81)] = 2082,
  [SMALL_STATE(82)] = 2093,
  [SMALL_STATE(83)] = 2104,
  [SMALL_STATE(84)] = 2115,
  [SMALL_STATE(85)] = 2126,
  [SMALL_STATE(86)] = 2135,
  [SMALL_STATE(87)] = 2146,
  [SMALL_STATE(88)] = 2157,
  [SMALL_STATE(89)] = 2166,
  [SMALL_STATE(90)] = 2177,
  [SMALL_STATE(91)] = 2186,
  [SMALL_STATE(92)] = 2192,
  [SMALL_STATE(93)] = 2200,
  [SMALL_STATE(94)] = 2208,
  [SMALL_STATE(95)] = 2216,
  [SMALL_STATE(96)] = 2224,
  [SMALL_STATE(97)] = 2232,
  [SMALL_STATE(98)] = 2240,
  [SMALL_STATE(99)] = 2248,
  [SMALL_STATE(100)] = 2256,
  [SMALL_STATE(101)] = 2264,
  [SMALL_STATE(102)] = 2272,
  [SMALL_STATE(103)] = 2280,
  [SMALL_STATE(104)] = 2288,
  [SMALL_STATE(105)] = 2296,
  [SMALL_STATE(106)] = 2304,
  [SMALL_STATE(107)] = 2314,
  [SMALL_STATE(108)] = 2324,
  [SMALL_STATE(109)] = 2332,
  [SMALL_STATE(110)] = 2340,
  [SMALL_STATE(111)] = 2348,
  [SMALL_STATE(112)] = 2354,
  [SMALL_STATE(113)] = 2362,
  [SMALL_STATE(114)] = 2370,
  [SMALL_STATE(115)] = 2378,
  [SMALL_STATE(116)] = 2386,
  [SMALL_STATE(117)] = 2394,
  [SMALL_STATE(118)] = 2402,
  [SMALL_STATE(119)] = 2410,
  [SMALL_STATE(120)] = 2418,
  [SMALL_STATE(121)] = 2426,
  [SMALL_STATE(122)] = 2434,
  [SMALL_STATE(123)] = 2442,
  [SMALL_STATE(124)] = 2450,
  [SMALL_STATE(125)] = 2458,
  [SMALL_STATE(126)] = 2466,
  [SMALL_STATE(127)] = 2474,
  [SMALL_STATE(128)] = 2482,
  [SMALL_STATE(129)] = 2492,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(122),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(121),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(119),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(118),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(117),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(84),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(40),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_in, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2), SHIFT_REPEAT(89),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 5),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 5),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 5),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 4),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 4),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_out, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 4),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_in, 6),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(48),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(48),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(55),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spacer, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(68),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(81),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 4),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spacer, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [401] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
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
