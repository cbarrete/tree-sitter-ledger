#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 103
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
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
  sym_commodity = 38,
  anon_sym_AT = 39,
  anon_sym_AT_AT = 40,
  anon_sym_ = 41,
  anon_sym_TAB = 42,
  anon_sym_2 = 43,
  anon_sym_TAB2 = 44,
  sym_source_file = 45,
  sym_journal_item = 46,
  sym_comment = 47,
  sym_directive = 48,
  sym_word_directive = 49,
  sym_char_directive = 50,
  sym_check_in = 51,
  sym_check_out = 52,
  sym_xact = 53,
  sym_plain_xact = 54,
  sym_date = 55,
  sym_status = 56,
  sym_note = 57,
  sym_posting = 58,
  sym_account = 59,
  sym_values = 60,
  sym_amount = 61,
  sym_quantity = 62,
  sym_price = 63,
  sym_whitespace = 64,
  sym_spacer = 65,
  aux_sym_source_file_repeat1 = 66,
  aux_sym_plain_xact_repeat1 = 67,
  aux_sym_whitespace_repeat1 = 68,
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
  [sym_commodity] = "commodity",
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
  [sym_commodity] = sym_commodity,
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
  [sym_commodity] = {
    .visible = true,
    .named = true,
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
      if (eof) ADVANCE(63);
      if (lookahead == '\t') ADVANCE(118);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead == '!') ADVANCE(92);
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '@') ADVANCE(108);
      if (lookahead == 'A') ADVANCE(80);
      if (lookahead == 'C') ADVANCE(84);
      if (lookahead == 'D') ADVANCE(83);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'N') ADVANCE(82);
      if (lookahead == 'O') ADVANCE(89);
      if (lookahead == 'P') ADVANCE(85);
      if (lookahead == 'Y') ADVANCE(81);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == ']') ADVANCE(101);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(88);
      if (lookahead == 'y') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(118);
      if (lookahead == ' ') ADVANCE(110);
      if (lookahead == '-') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(118);
      if (lookahead == ' ') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(118);
      if (lookahead == ' ') ADVANCE(113);
      if (lookahead == '=') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(124);
      if (lookahead == ' ') ADVANCE(110);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(123);
      if (lookahead == ' ') ADVANCE(117);
      if (lookahead == '!') ADVANCE(92);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(119);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(122);
      if (lookahead == ' ') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(121);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(51);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(75);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 27:
      if (lookahead == 'k') ADVANCE(23);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 39:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(50);
      END_STATE();
    case 40:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(52);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
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
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 60:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 61:
      if (eof) ADVANCE(63);
      if (lookahead == '\t') ADVANCE(118);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == 'A') ADVANCE(80);
      if (lookahead == 'C') ADVANCE(84);
      if (lookahead == 'D') ADVANCE(83);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'N') ADVANCE(82);
      if (lookahead == 'O') ADVANCE(89);
      if (lookahead == 'P') ADVANCE(85);
      if (lookahead == 'Y') ADVANCE(81);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(88);
      if (lookahead == 'y') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 62:
      if (eof) ADVANCE(63);
      if (lookahead == '\t') ADVANCE(118);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(110);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '@') ADVANCE(108);
      if (lookahead == 'A') ADVANCE(80);
      if (lookahead == 'C') ADVANCE(84);
      if (lookahead == 'D') ADVANCE(83);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'N') ADVANCE(82);
      if (lookahead == 'O') ADVANCE(89);
      if (lookahead == 'P') ADVANCE(85);
      if (lookahead == 'Y') ADVANCE(81);
      if (lookahead == ']') ADVANCE(101);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(88);
      if (lookahead == 'y') ADVANCE(22);
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
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_word_directive_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_word_directive_token2);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_word_directive_token3);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_word_directive_token3);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(50);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_bucket);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_single_date);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '\t') ADVANCE(120);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(126);
      if (lookahead == ' ') ADVANCE(125);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(93);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(93);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 126:
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
  [8] = {.lex_state = 61},
  [9] = {.lex_state = 61},
  [10] = {.lex_state = 61},
  [11] = {.lex_state = 62},
  [12] = {.lex_state = 62},
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
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 62},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 62},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 62},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 62},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 62},
  [49] = {.lex_state = 62},
  [50] = {.lex_state = 62},
  [51] = {.lex_state = 62},
  [52] = {.lex_state = 62},
  [53] = {.lex_state = 62},
  [54] = {.lex_state = 62},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 62},
  [57] = {.lex_state = 62},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 62},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 62},
  [63] = {.lex_state = 94},
  [64] = {.lex_state = 62},
  [65] = {.lex_state = 62},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 62},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 62},
  [73] = {.lex_state = 62},
  [74] = {.lex_state = 62},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 62},
  [77] = {.lex_state = 62},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 62},
  [80] = {.lex_state = 62},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 62},
  [87] = {.lex_state = 62},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 62},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 62},
  [95] = {.lex_state = 62},
  [96] = {.lex_state = 62},
  [97] = {.lex_state = 62},
  [98] = {.lex_state = 62},
  [99] = {.lex_state = 62},
  [100] = {.lex_state = 62},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
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
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_TAB] = ACTIONS(5),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_TAB2] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(65),
    [sym_journal_item] = STATE(3),
    [sym_comment] = STATE(18),
    [sym_directive] = STATE(18),
    [sym_word_directive] = STATE(19),
    [sym_char_directive] = STATE(19),
    [sym_check_in] = STATE(20),
    [sym_check_out] = STATE(20),
    [sym_xact] = STATE(18),
    [sym_plain_xact] = STATE(21),
    [sym_date] = STATE(50),
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
  [2] = {
    [sym_journal_item] = STATE(2),
    [sym_comment] = STATE(18),
    [sym_directive] = STATE(18),
    [sym_word_directive] = STATE(19),
    [sym_char_directive] = STATE(19),
    [sym_check_in] = STATE(20),
    [sym_check_out] = STATE(20),
    [sym_xact] = STATE(18),
    [sym_plain_xact] = STATE(21),
    [sym_date] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_LF] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(48),
    [anon_sym_STAR] = ACTIONS(48),
    [anon_sym_include] = ACTIONS(51),
    [anon_sym_account] = ACTIONS(51),
    [anon_sym_end] = ACTIONS(54),
    [anon_sym_alias] = ACTIONS(57),
    [anon_sym_def] = ACTIONS(51),
    [anon_sym_year] = ACTIONS(60),
    [anon_sym_bucket] = ACTIONS(63),
    [anon_sym_A] = ACTIONS(66),
    [anon_sym_Y] = ACTIONS(69),
    [anon_sym_N] = ACTIONS(72),
    [anon_sym_D] = ACTIONS(75),
    [anon_sym_C] = ACTIONS(78),
    [anon_sym_P] = ACTIONS(81),
    [anon_sym_i] = ACTIONS(84),
    [anon_sym_I] = ACTIONS(87),
    [anon_sym_o] = ACTIONS(90),
    [anon_sym_O] = ACTIONS(90),
    [sym_single_date] = ACTIONS(93),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_TAB] = ACTIONS(5),
  },
  [3] = {
    [sym_journal_item] = STATE(2),
    [sym_comment] = STATE(18),
    [sym_directive] = STATE(18),
    [sym_word_directive] = STATE(19),
    [sym_char_directive] = STATE(19),
    [sym_check_in] = STATE(20),
    [sym_check_out] = STATE(20),
    [sym_xact] = STATE(18),
    [sym_plain_xact] = STATE(21),
    [sym_date] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(96),
    [anon_sym_LF] = ACTIONS(98),
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
  [0] = 6,
    ACTIONS(102), 1,
      anon_sym_i,
    STATE(31), 1,
      sym_whitespace,
    STATE(34), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(104), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
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
  [41] = 6,
    ACTIONS(108), 1,
      anon_sym_i,
    STATE(31), 1,
      sym_whitespace,
    STATE(34), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(104), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
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
  [82] = 6,
    ACTIONS(112), 1,
      anon_sym_i,
    STATE(31), 1,
      sym_whitespace,
    STATE(34), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(104), 2,
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
  [123] = 6,
    ACTIONS(116), 1,
      anon_sym_i,
    STATE(31), 1,
      sym_whitespace,
    STATE(34), 1,
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
  [164] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(123), 1,
      anon_sym_i,
    STATE(69), 1,
      sym_spacer,
    ACTIONS(125), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
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
  [202] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(129), 1,
      anon_sym_i,
    ACTIONS(127), 24,
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
  [235] = 3,
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
  [268] = 3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(137), 2,
      anon_sym_i,
      anon_sym_AT,
    ACTIONS(135), 22,
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
  [301] = 3,
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
  [332] = 2,
    ACTIONS(145), 1,
      anon_sym_i,
    ACTIONS(143), 23,
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
  [361] = 3,
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
  [392] = 2,
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
  [421] = 2,
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
  [450] = 3,
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
  [481] = 3,
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
  [512] = 3,
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
  [543] = 3,
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
  [574] = 3,
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
  [605] = 3,
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
  [636] = 3,
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
  [667] = 3,
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
  [698] = 3,
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
  [729] = 3,
    ACTIONS(129), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
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
  [760] = 3,
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
  [791] = 2,
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
  [820] = 3,
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
  [851] = 7,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(203), 1,
      anon_sym_LF,
    ACTIONS(205), 1,
      anon_sym_SEMI,
    STATE(40), 1,
      sym_spacer,
    STATE(48), 1,
      sym_values,
    STATE(73), 1,
      sym_note,
    ACTIONS(207), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [875] = 8,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(205), 1,
      anon_sym_SEMI,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      sym_account_name,
    STATE(30), 1,
      sym_account,
    STATE(64), 1,
      sym_note,
  [900] = 5,
    ACTIONS(217), 1,
      anon_sym_AT,
    ACTIONS(219), 1,
      anon_sym_AT_AT,
    STATE(52), 1,
      sym_price,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(215), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [918] = 5,
    ACTIONS(225), 1,
      anon_sym_,
    ACTIONS(228), 1,
      anon_sym_TAB,
    STATE(33), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(221), 2,
      anon_sym_SEMI,
      sym_account_name,
    ACTIONS(223), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [936] = 5,
    ACTIONS(235), 1,
      anon_sym_,
    ACTIONS(237), 1,
      anon_sym_TAB,
    STATE(33), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(231), 2,
      anon_sym_SEMI,
      sym_account_name,
    ACTIONS(233), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [954] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      sym_account_name,
    STATE(8), 1,
      sym_account,
  [973] = 5,
    ACTIONS(239), 1,
      anon_sym_DASH,
    ACTIONS(241), 1,
      aux_sym_quantity_token1,
    STATE(22), 1,
      sym_amount,
    STATE(82), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [990] = 4,
    STATE(31), 1,
      sym_whitespace,
    STATE(34), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(104), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [1005] = 4,
    ACTIONS(223), 1,
      sym_payee,
    STATE(38), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(221), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(243), 2,
      anon_sym_,
      anon_sym_TAB,
  [1020] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      sym_account_name,
    STATE(25), 1,
      sym_account,
  [1039] = 5,
    ACTIONS(239), 1,
      anon_sym_DASH,
    ACTIONS(241), 1,
      aux_sym_quantity_token1,
    STATE(32), 1,
      sym_amount,
    STATE(82), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1056] = 4,
    STATE(31), 1,
      sym_whitespace,
    STATE(34), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(104), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [1071] = 4,
    ACTIONS(254), 1,
      sym_payee,
    STATE(49), 1,
      sym_status,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(252), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [1086] = 4,
    ACTIONS(233), 1,
      sym_payee,
    STATE(38), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(231), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(256), 2,
      anon_sym_,
      anon_sym_TAB,
  [1101] = 5,
    ACTIONS(239), 1,
      anon_sym_DASH,
    ACTIONS(241), 1,
      aux_sym_quantity_token1,
    STATE(24), 1,
      sym_amount,
    STATE(82), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1118] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      sym_account_name,
    STATE(24), 1,
      sym_account,
  [1137] = 4,
    STATE(31), 1,
      sym_whitespace,
    STATE(34), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(104), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [1152] = 5,
    ACTIONS(239), 1,
      anon_sym_DASH,
    ACTIONS(241), 1,
      aux_sym_quantity_token1,
    STATE(53), 1,
      sym_amount,
    STATE(82), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1169] = 4,
    ACTIONS(205), 1,
      anon_sym_SEMI,
    ACTIONS(258), 1,
      anon_sym_LF,
    STATE(80), 1,
      sym_note,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1183] = 4,
    ACTIONS(260), 1,
      anon_sym_LF,
    STATE(43), 1,
      aux_sym_whitespace_repeat1,
    STATE(67), 1,
      sym_whitespace,
    ACTIONS(262), 2,
      anon_sym_,
      anon_sym_TAB,
  [1197] = 4,
    ACTIONS(264), 1,
      anon_sym_LF,
    STATE(42), 1,
      sym_whitespace,
    STATE(43), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(262), 2,
      anon_sym_,
      anon_sym_TAB,
  [1211] = 2,
    ACTIONS(268), 1,
      anon_sym_EQ,
    ACTIONS(266), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1220] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(270), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1229] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(272), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1238] = 3,
    ACTIONS(274), 1,
      sym_single_date,
    STATE(66), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1249] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(276), 1,
      anon_sym_EQ,
    ACTIONS(278), 1,
      sym_commodity,
  [1262] = 3,
    ACTIONS(280), 1,
      sym_single_date,
    STATE(95), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1273] = 3,
    ACTIONS(280), 1,
      sym_single_date,
    STATE(94), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1284] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(282), 2,
      anon_sym_DASH,
      aux_sym_quantity_token1,
  [1293] = 3,
    ACTIONS(266), 1,
      sym_time,
    ACTIONS(284), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1304] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(286), 1,
      sym_commodity,
  [1314] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(288), 1,
      sym_commodity,
  [1324] = 2,
    ACTIONS(290), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1332] = 2,
    ACTIONS(292), 1,
      aux_sym_note_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1340] = 2,
    ACTIONS(294), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1348] = 2,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1356] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(298), 1,
      sym_commodity,
  [1366] = 2,
    ACTIONS(300), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1374] = 2,
    ACTIONS(302), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1382] = 2,
    ACTIONS(304), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1390] = 2,
    ACTIONS(306), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1398] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(308), 1,
      sym_account_name,
  [1408] = 2,
    ACTIONS(260), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1416] = 2,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1424] = 1,
    ACTIONS(310), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1430] = 2,
    ACTIONS(312), 1,
      aux_sym_quantity_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1438] = 2,
    ACTIONS(314), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1446] = 2,
    ACTIONS(316), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1454] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(318), 1,
      sym_commodity,
  [1464] = 1,
    ACTIONS(320), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1470] = 2,
    ACTIONS(322), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1478] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(324), 1,
      sym_account_name,
  [1488] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(326), 1,
      sym_commodity,
  [1498] = 2,
    ACTIONS(328), 1,
      aux_sym_word_directive_token3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1506] = 2,
    ACTIONS(330), 1,
      aux_sym_comment_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1514] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(332), 1,
      sym_commodity,
  [1524] = 2,
    ACTIONS(334), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1532] = 2,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1540] = 2,
    ACTIONS(336), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1548] = 2,
    ACTIONS(338), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1556] = 2,
    ACTIONS(340), 1,
      aux_sym_word_directive_token3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1564] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(342), 1,
      sym_commodity,
  [1574] = 2,
    ACTIONS(344), 1,
      aux_sym_word_directive_token2,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1582] = 2,
    ACTIONS(346), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1590] = 2,
    ACTIONS(348), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1598] = 2,
    ACTIONS(350), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1606] = 2,
    ACTIONS(320), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1614] = 2,
    ACTIONS(352), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1622] = 2,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1630] = 2,
    ACTIONS(354), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1638] = 2,
    ACTIONS(356), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1646] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(358), 1,
      sym_account_name,
  [1656] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(360), 1,
      sym_account_name,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 41,
  [SMALL_STATE(6)] = 82,
  [SMALL_STATE(7)] = 123,
  [SMALL_STATE(8)] = 164,
  [SMALL_STATE(9)] = 202,
  [SMALL_STATE(10)] = 235,
  [SMALL_STATE(11)] = 268,
  [SMALL_STATE(12)] = 301,
  [SMALL_STATE(13)] = 332,
  [SMALL_STATE(14)] = 361,
  [SMALL_STATE(15)] = 392,
  [SMALL_STATE(16)] = 421,
  [SMALL_STATE(17)] = 450,
  [SMALL_STATE(18)] = 481,
  [SMALL_STATE(19)] = 512,
  [SMALL_STATE(20)] = 543,
  [SMALL_STATE(21)] = 574,
  [SMALL_STATE(22)] = 605,
  [SMALL_STATE(23)] = 636,
  [SMALL_STATE(24)] = 667,
  [SMALL_STATE(25)] = 698,
  [SMALL_STATE(26)] = 729,
  [SMALL_STATE(27)] = 760,
  [SMALL_STATE(28)] = 791,
  [SMALL_STATE(29)] = 820,
  [SMALL_STATE(30)] = 851,
  [SMALL_STATE(31)] = 875,
  [SMALL_STATE(32)] = 900,
  [SMALL_STATE(33)] = 918,
  [SMALL_STATE(34)] = 936,
  [SMALL_STATE(35)] = 954,
  [SMALL_STATE(36)] = 973,
  [SMALL_STATE(37)] = 990,
  [SMALL_STATE(38)] = 1005,
  [SMALL_STATE(39)] = 1020,
  [SMALL_STATE(40)] = 1039,
  [SMALL_STATE(41)] = 1056,
  [SMALL_STATE(42)] = 1071,
  [SMALL_STATE(43)] = 1086,
  [SMALL_STATE(44)] = 1101,
  [SMALL_STATE(45)] = 1118,
  [SMALL_STATE(46)] = 1137,
  [SMALL_STATE(47)] = 1152,
  [SMALL_STATE(48)] = 1169,
  [SMALL_STATE(49)] = 1183,
  [SMALL_STATE(50)] = 1197,
  [SMALL_STATE(51)] = 1211,
  [SMALL_STATE(52)] = 1220,
  [SMALL_STATE(53)] = 1229,
  [SMALL_STATE(54)] = 1238,
  [SMALL_STATE(55)] = 1249,
  [SMALL_STATE(56)] = 1262,
  [SMALL_STATE(57)] = 1273,
  [SMALL_STATE(58)] = 1284,
  [SMALL_STATE(59)] = 1293,
  [SMALL_STATE(60)] = 1304,
  [SMALL_STATE(61)] = 1314,
  [SMALL_STATE(62)] = 1324,
  [SMALL_STATE(63)] = 1332,
  [SMALL_STATE(64)] = 1340,
  [SMALL_STATE(65)] = 1348,
  [SMALL_STATE(66)] = 1356,
  [SMALL_STATE(67)] = 1366,
  [SMALL_STATE(68)] = 1374,
  [SMALL_STATE(69)] = 1382,
  [SMALL_STATE(70)] = 1390,
  [SMALL_STATE(71)] = 1398,
  [SMALL_STATE(72)] = 1408,
  [SMALL_STATE(73)] = 1416,
  [SMALL_STATE(74)] = 1424,
  [SMALL_STATE(75)] = 1430,
  [SMALL_STATE(76)] = 1438,
  [SMALL_STATE(77)] = 1446,
  [SMALL_STATE(78)] = 1454,
  [SMALL_STATE(79)] = 1464,
  [SMALL_STATE(80)] = 1470,
  [SMALL_STATE(81)] = 1478,
  [SMALL_STATE(82)] = 1488,
  [SMALL_STATE(83)] = 1498,
  [SMALL_STATE(84)] = 1506,
  [SMALL_STATE(85)] = 1514,
  [SMALL_STATE(86)] = 1524,
  [SMALL_STATE(87)] = 1532,
  [SMALL_STATE(88)] = 1540,
  [SMALL_STATE(89)] = 1548,
  [SMALL_STATE(90)] = 1556,
  [SMALL_STATE(91)] = 1564,
  [SMALL_STATE(92)] = 1574,
  [SMALL_STATE(93)] = 1582,
  [SMALL_STATE(94)] = 1590,
  [SMALL_STATE(95)] = 1598,
  [SMALL_STATE(96)] = 1606,
  [SMALL_STATE(97)] = 1614,
  [SMALL_STATE(98)] = 1622,
  [SMALL_STATE(99)] = 1630,
  [SMALL_STATE(100)] = 1638,
  [SMALL_STATE(101)] = 1646,
  [SMALL_STATE(102)] = 1656,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(84),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(34),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_in, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_in, 6),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 4),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_out, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 4),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(33),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(33),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whitespace, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_whitespace, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(38),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spacer, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [296] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spacer, 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 3),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
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
