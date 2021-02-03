#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 98
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 44
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
  anon_sym_i = 21,
  anon_sym_I = 22,
  anon_sym_o = 23,
  anon_sym_O = 24,
  sym_single_date = 25,
  sym_time = 26,
  anon_sym_BANG = 27,
  sym_payee = 28,
  aux_sym_note_token1 = 29,
  anon_sym_LPAREN = 30,
  anon_sym_RPAREN = 31,
  anon_sym_LBRACK = 32,
  anon_sym_RBRACK = 33,
  sym_account_name = 34,
  anon_sym_DASH = 35,
  aux_sym_quantity_token1 = 36,
  sym_commodity = 37,
  anon_sym_AT = 38,
  anon_sym_AT_AT = 39,
  anon_sym_ = 40,
  anon_sym_TAB = 41,
  anon_sym_2 = 42,
  anon_sym_TAB2 = 43,
  sym_source_file = 44,
  sym_journal_item = 45,
  sym_comment = 46,
  sym_directive = 47,
  sym_word_directive = 48,
  sym_char_directive = 49,
  sym_check_in = 50,
  sym_check_out = 51,
  sym_xact = 52,
  sym_plain_xact = 53,
  sym_date = 54,
  sym_status = 55,
  sym_note = 56,
  sym_posting = 57,
  sym_account = 58,
  sym_values = 59,
  sym_amount = 60,
  sym_quantity = 61,
  sym_price = 62,
  sym_whitespace = 63,
  sym_spacer = 64,
  aux_sym_source_file_repeat1 = 65,
  aux_sym_plain_xact_repeat1 = 66,
  aux_sym_whitespace_repeat1 = 67,
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
      if (lookahead == '\t') ADVANCE(117);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(110);
      if (lookahead == '!') ADVANCE(91);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '@') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(80);
      if (lookahead == 'C') ADVANCE(84);
      if (lookahead == 'D') ADVANCE(83);
      if (lookahead == 'I') ADVANCE(86);
      if (lookahead == 'N') ADVANCE(82);
      if (lookahead == 'O') ADVANCE(88);
      if (lookahead == 'Y') ADVANCE(81);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead == 'y') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(109);
      if (lookahead == '-') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(123);
      if (lookahead == ' ') ADVANCE(109);
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(122);
      if (lookahead == ' ') ADVANCE(116);
      if (lookahead == '!') ADVANCE(91);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(118);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(121);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(120);
      if (lookahead == ' ') ADVANCE(114);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
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
          lookahead != ' ') ADVANCE(101);
      END_STATE();
    case 60:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 61:
      if (eof) ADVANCE(63);
      if (lookahead == '\t') ADVANCE(117);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(110);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == 'A') ADVANCE(80);
      if (lookahead == 'C') ADVANCE(84);
      if (lookahead == 'D') ADVANCE(83);
      if (lookahead == 'I') ADVANCE(86);
      if (lookahead == 'N') ADVANCE(82);
      if (lookahead == 'O') ADVANCE(88);
      if (lookahead == 'Y') ADVANCE(81);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead == 'y') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 62:
      if (eof) ADVANCE(63);
      if (lookahead == '\t') ADVANCE(117);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(109);
      if (lookahead == ')') ADVANCE(97);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '@') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(80);
      if (lookahead == 'C') ADVANCE(84);
      if (lookahead == 'D') ADVANCE(83);
      if (lookahead == 'I') ADVANCE(86);
      if (lookahead == 'N') ADVANCE(82);
      if (lookahead == 'O') ADVANCE(88);
      if (lookahead == 'Y') ADVANCE(81);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(87);
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
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_single_date);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '\t') ADVANCE(119);
      if (lookahead == ' ') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(101);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(101);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(125);
      if (lookahead == ' ') ADVANCE(124);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(92);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(92);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(101);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 125:
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
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 62},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 62},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 62},
  [49] = {.lex_state = 62},
  [50] = {.lex_state = 62},
  [51] = {.lex_state = 62},
  [52] = {.lex_state = 62},
  [53] = {.lex_state = 62},
  [54] = {.lex_state = 62},
  [55] = {.lex_state = 62},
  [56] = {.lex_state = 62},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 62},
  [62] = {.lex_state = 93},
  [63] = {.lex_state = 62},
  [64] = {.lex_state = 62},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 62},
  [69] = {.lex_state = 62},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 62},
  [72] = {.lex_state = 62},
  [73] = {.lex_state = 62},
  [74] = {.lex_state = 62},
  [75] = {.lex_state = 62},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 62},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 62},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 62},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 62},
  [86] = {.lex_state = 62},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 62},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 62},
  [93] = {.lex_state = 62},
  [94] = {.lex_state = 62},
  [95] = {.lex_state = 62},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
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
    [sym_source_file] = STATE(64),
    [sym_journal_item] = STATE(3),
    [sym_comment] = STATE(17),
    [sym_directive] = STATE(17),
    [sym_word_directive] = STATE(18),
    [sym_char_directive] = STATE(18),
    [sym_check_in] = STATE(19),
    [sym_check_out] = STATE(19),
    [sym_xact] = STATE(17),
    [sym_plain_xact] = STATE(20),
    [sym_date] = STATE(48),
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
    [anon_sym_i] = ACTIONS(33),
    [anon_sym_I] = ACTIONS(35),
    [anon_sym_o] = ACTIONS(37),
    [anon_sym_O] = ACTIONS(37),
    [sym_single_date] = ACTIONS(39),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_TAB] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_LF,
    ACTIONS(52), 1,
      anon_sym_end,
    ACTIONS(55), 1,
      anon_sym_alias,
    ACTIONS(58), 1,
      anon_sym_year,
    ACTIONS(61), 1,
      anon_sym_bucket,
    ACTIONS(64), 1,
      anon_sym_A,
    ACTIONS(67), 1,
      anon_sym_Y,
    ACTIONS(70), 1,
      anon_sym_N,
    ACTIONS(73), 1,
      anon_sym_D,
    ACTIONS(76), 1,
      anon_sym_C,
    ACTIONS(79), 1,
      anon_sym_i,
    ACTIONS(82), 1,
      anon_sym_I,
    ACTIONS(88), 1,
      sym_single_date,
    STATE(20), 1,
      sym_plain_xact,
    STATE(48), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(46), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(85), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(18), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(19), 2,
      sym_check_in,
      sym_check_out,
    ACTIONS(49), 3,
      anon_sym_include,
      anon_sym_account,
      anon_sym_def,
    STATE(17), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [83] = 24,
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
      anon_sym_i,
    ACTIONS(35), 1,
      anon_sym_I,
    ACTIONS(39), 1,
      sym_single_date,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      anon_sym_LF,
    STATE(20), 1,
      sym_plain_xact,
    STATE(48), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(11), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(37), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(18), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(19), 2,
      sym_check_in,
      sym_check_out,
    ACTIONS(13), 3,
      anon_sym_include,
      anon_sym_account,
      anon_sym_def,
    STATE(17), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [166] = 6,
    ACTIONS(97), 1,
      anon_sym_i,
    STATE(31), 1,
      sym_whitespace,
    STATE(34), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(99), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(95), 20,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [206] = 6,
    ACTIONS(103), 1,
      anon_sym_i,
    STATE(31), 1,
      sym_whitespace,
    STATE(34), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(99), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(101), 20,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [246] = 6,
    ACTIONS(107), 1,
      anon_sym_i,
    STATE(31), 1,
      sym_whitespace,
    STATE(34), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(99), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(105), 20,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [286] = 6,
    ACTIONS(111), 1,
      anon_sym_i,
    STATE(31), 1,
      sym_whitespace,
    STATE(34), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(113), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(109), 20,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [326] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(118), 1,
      anon_sym_i,
    STATE(67), 1,
      sym_spacer,
    ACTIONS(120), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
    ACTIONS(116), 20,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [363] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(124), 1,
      anon_sym_i,
    ACTIONS(122), 23,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [395] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(128), 1,
      anon_sym_i,
    ACTIONS(126), 23,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [427] = 3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(132), 2,
      anon_sym_i,
      anon_sym_AT,
    ACTIONS(130), 21,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_AT_AT,
  [459] = 3,
    ACTIONS(136), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(134), 20,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [489] = 3,
    ACTIONS(140), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(138), 20,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [519] = 2,
    ACTIONS(144), 1,
      anon_sym_i,
    ACTIONS(142), 22,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [547] = 2,
    ACTIONS(148), 1,
      anon_sym_i,
    ACTIONS(146), 22,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [575] = 3,
    ACTIONS(152), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(150), 20,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [605] = 3,
    ACTIONS(156), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(154), 20,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [635] = 3,
    ACTIONS(160), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(158), 20,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [665] = 3,
    ACTIONS(164), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(162), 20,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [695] = 3,
    ACTIONS(168), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(166), 20,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [725] = 3,
    ACTIONS(172), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(170), 20,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [755] = 2,
    ACTIONS(176), 1,
      anon_sym_i,
    ACTIONS(174), 22,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [783] = 3,
    ACTIONS(180), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(178), 20,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [813] = 2,
    ACTIONS(184), 1,
      anon_sym_i,
    ACTIONS(182), 22,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [841] = 3,
    ACTIONS(188), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(186), 20,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [871] = 3,
    ACTIONS(124), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(122), 20,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [901] = 3,
    ACTIONS(192), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(190), 20,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [931] = 3,
    ACTIONS(128), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(126), 20,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [961] = 3,
    ACTIONS(196), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(194), 20,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [991] = 7,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(198), 1,
      anon_sym_LF,
    ACTIONS(200), 1,
      anon_sym_SEMI,
    STATE(43), 1,
      sym_spacer,
    STATE(49), 1,
      sym_values,
    STATE(71), 1,
      sym_note,
    ACTIONS(202), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [1015] = 8,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(200), 1,
      anon_sym_SEMI,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACK,
    ACTIONS(208), 1,
      sym_account_name,
    STATE(30), 1,
      sym_account,
    STATE(63), 1,
      sym_note,
  [1040] = 5,
    ACTIONS(212), 1,
      anon_sym_AT,
    ACTIONS(214), 1,
      anon_sym_AT_AT,
    STATE(51), 1,
      sym_price,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(210), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1058] = 5,
    ACTIONS(220), 1,
      anon_sym_,
    ACTIONS(223), 1,
      anon_sym_TAB,
    STATE(33), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SEMI,
      sym_account_name,
    ACTIONS(218), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1076] = 5,
    ACTIONS(230), 1,
      anon_sym_,
    ACTIONS(232), 1,
      anon_sym_TAB,
    STATE(33), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(226), 2,
      anon_sym_SEMI,
      sym_account_name,
    ACTIONS(228), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1094] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_LBRACK,
    ACTIONS(208), 1,
      sym_account_name,
    STATE(8), 1,
      sym_account,
  [1113] = 5,
    ACTIONS(234), 1,
      anon_sym_DASH,
    ACTIONS(236), 1,
      aux_sym_quantity_token1,
    STATE(25), 1,
      sym_amount,
    STATE(59), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1130] = 4,
    STATE(31), 1,
      sym_whitespace,
    STATE(34), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(99), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [1145] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      sym_account_name,
    STATE(12), 1,
      sym_account,
  [1164] = 4,
    STATE(31), 1,
      sym_whitespace,
    STATE(34), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(99), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [1179] = 4,
    ACTIONS(246), 1,
      sym_payee,
    STATE(50), 1,
      sym_status,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(244), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [1194] = 4,
    ACTIONS(228), 1,
      sym_payee,
    STATE(42), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(226), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(248), 2,
      anon_sym_,
      anon_sym_TAB,
  [1209] = 4,
    ACTIONS(218), 1,
      sym_payee,
    STATE(42), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(250), 2,
      anon_sym_,
      anon_sym_TAB,
  [1224] = 5,
    ACTIONS(234), 1,
      anon_sym_DASH,
    ACTIONS(236), 1,
      aux_sym_quantity_token1,
    STATE(32), 1,
      sym_amount,
    STATE(59), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1241] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      sym_account_name,
    STATE(29), 1,
      sym_account,
  [1260] = 5,
    ACTIONS(234), 1,
      anon_sym_DASH,
    ACTIONS(236), 1,
      aux_sym_quantity_token1,
    STATE(29), 1,
      sym_amount,
    STATE(59), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1277] = 4,
    STATE(31), 1,
      sym_whitespace,
    STATE(34), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(99), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [1292] = 5,
    ACTIONS(234), 1,
      anon_sym_DASH,
    ACTIONS(236), 1,
      aux_sym_quantity_token1,
    STATE(53), 1,
      sym_amount,
    STATE(59), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1309] = 4,
    ACTIONS(253), 1,
      anon_sym_LF,
    STATE(40), 1,
      sym_whitespace,
    STATE(41), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(255), 2,
      anon_sym_,
      anon_sym_TAB,
  [1323] = 4,
    ACTIONS(200), 1,
      anon_sym_SEMI,
    ACTIONS(257), 1,
      anon_sym_LF,
    STATE(78), 1,
      sym_note,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1337] = 4,
    ACTIONS(259), 1,
      anon_sym_LF,
    STATE(41), 1,
      aux_sym_whitespace_repeat1,
    STATE(65), 1,
      sym_whitespace,
    ACTIONS(255), 2,
      anon_sym_,
      anon_sym_TAB,
  [1351] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(261), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1360] = 3,
    ACTIONS(263), 1,
      sym_single_date,
    STATE(74), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1371] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(265), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1380] = 3,
    ACTIONS(263), 1,
      sym_single_date,
    STATE(69), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1391] = 3,
    ACTIONS(267), 1,
      anon_sym_EQ,
    ACTIONS(269), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1402] = 2,
    ACTIONS(271), 1,
      anon_sym_EQ,
    ACTIONS(269), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1411] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(273), 2,
      anon_sym_DASH,
      aux_sym_quantity_token1,
  [1420] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(275), 1,
      sym_commodity,
  [1430] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(277), 1,
      sym_commodity,
  [1440] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(279), 1,
      sym_account_name,
  [1450] = 2,
    ACTIONS(281), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1458] = 2,
    ACTIONS(283), 1,
      aux_sym_note_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1466] = 2,
    ACTIONS(285), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1474] = 2,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1482] = 2,
    ACTIONS(289), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1490] = 2,
    ACTIONS(291), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1498] = 2,
    ACTIONS(293), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1506] = 2,
    ACTIONS(295), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1514] = 2,
    ACTIONS(297), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1522] = 2,
    ACTIONS(299), 1,
      aux_sym_quantity_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1530] = 2,
    ACTIONS(257), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1538] = 2,
    ACTIONS(259), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1546] = 1,
    ACTIONS(301), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1552] = 2,
    ACTIONS(303), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1560] = 2,
    ACTIONS(305), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1568] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(307), 1,
      sym_commodity,
  [1578] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(309), 1,
      sym_account_name,
  [1588] = 2,
    ACTIONS(311), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1596] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(313), 1,
      sym_commodity,
  [1606] = 1,
    ACTIONS(315), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1612] = 2,
    ACTIONS(317), 1,
      aux_sym_word_directive_token3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1620] = 2,
    ACTIONS(319), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1628] = 2,
    ACTIONS(321), 1,
      aux_sym_comment_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1636] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(323), 1,
      sym_commodity,
  [1646] = 2,
    ACTIONS(325), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1654] = 2,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1662] = 2,
    ACTIONS(327), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1670] = 2,
    ACTIONS(329), 1,
      aux_sym_word_directive_token3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1678] = 2,
    ACTIONS(315), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1686] = 2,
    ACTIONS(331), 1,
      aux_sym_word_directive_token2,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1694] = 2,
    ACTIONS(333), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1702] = 2,
    ACTIONS(335), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1710] = 2,
    ACTIONS(337), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1718] = 2,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1726] = 2,
    ACTIONS(339), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1734] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(341), 1,
      sym_account_name,
  [1744] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(343), 1,
      sym_account_name,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 83,
  [SMALL_STATE(4)] = 166,
  [SMALL_STATE(5)] = 206,
  [SMALL_STATE(6)] = 246,
  [SMALL_STATE(7)] = 286,
  [SMALL_STATE(8)] = 326,
  [SMALL_STATE(9)] = 363,
  [SMALL_STATE(10)] = 395,
  [SMALL_STATE(11)] = 427,
  [SMALL_STATE(12)] = 459,
  [SMALL_STATE(13)] = 489,
  [SMALL_STATE(14)] = 519,
  [SMALL_STATE(15)] = 547,
  [SMALL_STATE(16)] = 575,
  [SMALL_STATE(17)] = 605,
  [SMALL_STATE(18)] = 635,
  [SMALL_STATE(19)] = 665,
  [SMALL_STATE(20)] = 695,
  [SMALL_STATE(21)] = 725,
  [SMALL_STATE(22)] = 755,
  [SMALL_STATE(23)] = 783,
  [SMALL_STATE(24)] = 813,
  [SMALL_STATE(25)] = 841,
  [SMALL_STATE(26)] = 871,
  [SMALL_STATE(27)] = 901,
  [SMALL_STATE(28)] = 931,
  [SMALL_STATE(29)] = 961,
  [SMALL_STATE(30)] = 991,
  [SMALL_STATE(31)] = 1015,
  [SMALL_STATE(32)] = 1040,
  [SMALL_STATE(33)] = 1058,
  [SMALL_STATE(34)] = 1076,
  [SMALL_STATE(35)] = 1094,
  [SMALL_STATE(36)] = 1113,
  [SMALL_STATE(37)] = 1130,
  [SMALL_STATE(38)] = 1145,
  [SMALL_STATE(39)] = 1164,
  [SMALL_STATE(40)] = 1179,
  [SMALL_STATE(41)] = 1194,
  [SMALL_STATE(42)] = 1209,
  [SMALL_STATE(43)] = 1224,
  [SMALL_STATE(44)] = 1241,
  [SMALL_STATE(45)] = 1260,
  [SMALL_STATE(46)] = 1277,
  [SMALL_STATE(47)] = 1292,
  [SMALL_STATE(48)] = 1309,
  [SMALL_STATE(49)] = 1323,
  [SMALL_STATE(50)] = 1337,
  [SMALL_STATE(51)] = 1351,
  [SMALL_STATE(52)] = 1360,
  [SMALL_STATE(53)] = 1371,
  [SMALL_STATE(54)] = 1380,
  [SMALL_STATE(55)] = 1391,
  [SMALL_STATE(56)] = 1402,
  [SMALL_STATE(57)] = 1411,
  [SMALL_STATE(58)] = 1420,
  [SMALL_STATE(59)] = 1430,
  [SMALL_STATE(60)] = 1440,
  [SMALL_STATE(61)] = 1450,
  [SMALL_STATE(62)] = 1458,
  [SMALL_STATE(63)] = 1466,
  [SMALL_STATE(64)] = 1474,
  [SMALL_STATE(65)] = 1482,
  [SMALL_STATE(66)] = 1490,
  [SMALL_STATE(67)] = 1498,
  [SMALL_STATE(68)] = 1506,
  [SMALL_STATE(69)] = 1514,
  [SMALL_STATE(70)] = 1522,
  [SMALL_STATE(71)] = 1530,
  [SMALL_STATE(72)] = 1538,
  [SMALL_STATE(73)] = 1546,
  [SMALL_STATE(74)] = 1552,
  [SMALL_STATE(75)] = 1560,
  [SMALL_STATE(76)] = 1568,
  [SMALL_STATE(77)] = 1578,
  [SMALL_STATE(78)] = 1588,
  [SMALL_STATE(79)] = 1596,
  [SMALL_STATE(80)] = 1606,
  [SMALL_STATE(81)] = 1612,
  [SMALL_STATE(82)] = 1620,
  [SMALL_STATE(83)] = 1628,
  [SMALL_STATE(84)] = 1636,
  [SMALL_STATE(85)] = 1646,
  [SMALL_STATE(86)] = 1654,
  [SMALL_STATE(87)] = 1662,
  [SMALL_STATE(88)] = 1670,
  [SMALL_STATE(89)] = 1678,
  [SMALL_STATE(90)] = 1686,
  [SMALL_STATE(91)] = 1694,
  [SMALL_STATE(92)] = 1702,
  [SMALL_STATE(93)] = 1710,
  [SMALL_STATE(94)] = 1718,
  [SMALL_STATE(95)] = 1726,
  [SMALL_STATE(96)] = 1734,
  [SMALL_STATE(97)] = 1744,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(91),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(88),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(34),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_in, 4),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_out, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_in, 6),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 4),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 4),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 4),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 4),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(33),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(33),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whitespace, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_whitespace, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(42),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spacer, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [287] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spacer, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
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
