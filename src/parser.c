#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
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
  anon_sym_D = 18,
  anon_sym_i = 19,
  anon_sym_I = 20,
  anon_sym_o = 21,
  anon_sym_O = 22,
  sym_single_date = 23,
  sym_time = 24,
  anon_sym_BANG = 25,
  sym_payee = 26,
  aux_sym_note_token1 = 27,
  anon_sym_LPAREN = 28,
  anon_sym_RPAREN = 29,
  anon_sym_LBRACK = 30,
  anon_sym_RBRACK = 31,
  sym_account_name = 32,
  anon_sym_DASH = 33,
  aux_sym_quantity_token1 = 34,
  sym_commodity = 35,
  anon_sym_AT = 36,
  anon_sym_AT_AT = 37,
  anon_sym_ = 38,
  anon_sym_TAB = 39,
  anon_sym_2 = 40,
  anon_sym_TAB2 = 41,
  sym_source_file = 42,
  sym_journal_item = 43,
  sym_comment = 44,
  sym_directive = 45,
  sym_word_directive = 46,
  sym_char_directive = 47,
  sym_check_in = 48,
  sym_check_out = 49,
  sym_xact = 50,
  sym_plain_xact = 51,
  sym_date = 52,
  sym_status = 53,
  sym_note = 54,
  sym_posting = 55,
  sym_account = 56,
  sym_values = 57,
  sym_amount = 58,
  sym_quantity = 59,
  sym_price = 60,
  sym_whitespace = 61,
  sym_spacer = 62,
  aux_sym_source_file_repeat1 = 63,
  aux_sym_plain_xact_repeat1 = 64,
  aux_sym_whitespace_repeat1 = 65,
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
  [anon_sym_D] = "D",
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
  [anon_sym_D] = anon_sym_D,
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
  [anon_sym_D] = {
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
      if (lookahead == '\t') ADVANCE(115);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(108);
      if (lookahead == '!') ADVANCE(89);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == ')') ADVANCE(95);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '@') ADVANCE(105);
      if (lookahead == 'A') ADVANCE(80);
      if (lookahead == 'D') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(84);
      if (lookahead == 'O') ADVANCE(86);
      if (lookahead == 'Y') ADVANCE(81);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == ']') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(85);
      if (lookahead == 'y') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(115);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '-') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(115);
      if (lookahead == ' ') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(115);
      if (lookahead == ' ') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(121);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '(') ADVANCE(94);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(120);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == '!') ADVANCE(89);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(116);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == ' ') ADVANCE(109);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(119);
      if (lookahead == ' ') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(73);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
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
          lookahead != ' ') ADVANCE(99);
      END_STATE();
    case 60:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(100);
      END_STATE();
    case 61:
      if (eof) ADVANCE(63);
      if (lookahead == '\t') ADVANCE(115);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(108);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == 'A') ADVANCE(80);
      if (lookahead == 'D') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(84);
      if (lookahead == 'O') ADVANCE(86);
      if (lookahead == 'Y') ADVANCE(81);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(85);
      if (lookahead == 'y') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 62:
      if (eof) ADVANCE(63);
      if (lookahead == '\t') ADVANCE(115);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == ')') ADVANCE(95);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '@') ADVANCE(105);
      if (lookahead == 'A') ADVANCE(80);
      if (lookahead == 'D') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(84);
      if (lookahead == 'O') ADVANCE(86);
      if (lookahead == 'Y') ADVANCE(81);
      if (lookahead == ']') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(85);
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
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_single_date);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '\t') ADVANCE(118);
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(99);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(99);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(123);
      if (lookahead == ' ') ADVANCE(122);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(90);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(90);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(99);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 123:
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
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 62},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 62},
  [36] = {.lex_state = 62},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 62},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 62},
  [47] = {.lex_state = 62},
  [48] = {.lex_state = 62},
  [49] = {.lex_state = 62},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 62},
  [52] = {.lex_state = 62},
  [53] = {.lex_state = 62},
  [54] = {.lex_state = 62},
  [55] = {.lex_state = 62},
  [56] = {.lex_state = 62},
  [57] = {.lex_state = 62},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 62},
  [64] = {.lex_state = 62},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 62},
  [67] = {.lex_state = 91},
  [68] = {.lex_state = 62},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 62},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 62},
  [74] = {.lex_state = 62},
  [75] = {.lex_state = 62},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 62},
  [78] = {.lex_state = 62},
  [79] = {.lex_state = 62},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 62},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 62},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 62},
  [88] = {.lex_state = 62},
  [89] = {.lex_state = 62},
  [90] = {.lex_state = 62},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
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
    [anon_sym_D] = ACTIONS(1),
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
    [sym_source_file] = STATE(68),
    [sym_journal_item] = STATE(3),
    [sym_comment] = STATE(16),
    [sym_directive] = STATE(16),
    [sym_word_directive] = STATE(12),
    [sym_char_directive] = STATE(12),
    [sym_check_in] = STATE(17),
    [sym_check_out] = STATE(17),
    [sym_xact] = STATE(16),
    [sym_plain_xact] = STATE(18),
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
    [anon_sym_D] = ACTIONS(27),
    [anon_sym_i] = ACTIONS(29),
    [anon_sym_I] = ACTIONS(31),
    [anon_sym_o] = ACTIONS(33),
    [anon_sym_O] = ACTIONS(33),
    [sym_single_date] = ACTIONS(35),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_TAB] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_LF,
    ACTIONS(48), 1,
      anon_sym_end,
    ACTIONS(51), 1,
      anon_sym_alias,
    ACTIONS(54), 1,
      anon_sym_year,
    ACTIONS(57), 1,
      anon_sym_bucket,
    ACTIONS(60), 1,
      anon_sym_A,
    ACTIONS(63), 1,
      anon_sym_Y,
    ACTIONS(66), 1,
      anon_sym_D,
    ACTIONS(69), 1,
      anon_sym_i,
    ACTIONS(72), 1,
      anon_sym_I,
    ACTIONS(78), 1,
      sym_single_date,
    STATE(18), 1,
      sym_plain_xact,
    STATE(48), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(42), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(75), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(12), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(17), 2,
      sym_check_in,
      sym_check_out,
    ACTIONS(45), 3,
      anon_sym_include,
      anon_sym_account,
      anon_sym_def,
    STATE(16), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [77] = 22,
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
      anon_sym_D,
    ACTIONS(29), 1,
      anon_sym_i,
    ACTIONS(31), 1,
      anon_sym_I,
    ACTIONS(35), 1,
      sym_single_date,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      anon_sym_LF,
    STATE(18), 1,
      sym_plain_xact,
    STATE(48), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(11), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(33), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(12), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(17), 2,
      sym_check_in,
      sym_check_out,
    ACTIONS(13), 3,
      anon_sym_include,
      anon_sym_account,
      anon_sym_def,
    STATE(16), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [154] = 6,
    ACTIONS(87), 1,
      anon_sym_i,
    STATE(30), 1,
      sym_whitespace,
    STATE(31), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(89), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(85), 18,
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
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [192] = 6,
    ACTIONS(93), 1,
      anon_sym_i,
    STATE(30), 1,
      sym_whitespace,
    STATE(31), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(89), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(91), 18,
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
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [230] = 6,
    ACTIONS(97), 1,
      anon_sym_i,
    STATE(30), 1,
      sym_whitespace,
    STATE(31), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(89), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(95), 18,
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
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [268] = 6,
    ACTIONS(101), 1,
      anon_sym_i,
    STATE(30), 1,
      sym_whitespace,
    STATE(31), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(103), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(99), 18,
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
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [306] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(108), 1,
      anon_sym_i,
    STATE(62), 1,
      sym_spacer,
    ACTIONS(110), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
    ACTIONS(106), 18,
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
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [341] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(114), 1,
      anon_sym_i,
    ACTIONS(112), 21,
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
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [371] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(118), 1,
      anon_sym_i,
    ACTIONS(116), 21,
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
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [401] = 3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(122), 2,
      anon_sym_i,
      anon_sym_AT,
    ACTIONS(120), 19,
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
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_AT_AT,
  [431] = 3,
    ACTIONS(126), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(124), 18,
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
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [459] = 3,
    ACTIONS(114), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(112), 18,
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
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [487] = 3,
    ACTIONS(130), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(128), 18,
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
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [515] = 2,
    ACTIONS(134), 1,
      anon_sym_i,
    ACTIONS(132), 20,
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
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [541] = 3,
    ACTIONS(138), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(136), 18,
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
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [569] = 3,
    ACTIONS(142), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(140), 18,
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
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [597] = 3,
    ACTIONS(146), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(144), 18,
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
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [625] = 2,
    ACTIONS(150), 1,
      anon_sym_i,
    ACTIONS(148), 20,
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
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [651] = 3,
    ACTIONS(154), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(152), 18,
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
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [679] = 3,
    ACTIONS(158), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(156), 18,
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
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [707] = 3,
    ACTIONS(162), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(160), 18,
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
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [735] = 3,
    ACTIONS(166), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(164), 18,
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
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [763] = 3,
    ACTIONS(170), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(168), 18,
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
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [791] = 2,
    ACTIONS(174), 1,
      anon_sym_i,
    ACTIONS(172), 20,
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
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [817] = 3,
    ACTIONS(118), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(116), 18,
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
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [845] = 3,
    ACTIONS(178), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(176), 18,
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
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [873] = 2,
    ACTIONS(182), 1,
      anon_sym_i,
    ACTIONS(180), 20,
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
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [899] = 7,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(184), 1,
      anon_sym_LF,
    ACTIONS(186), 1,
      anon_sym_SEMI,
    STATE(34), 1,
      sym_spacer,
    STATE(47), 1,
      sym_values,
    STATE(66), 1,
      sym_note,
    ACTIONS(188), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [923] = 8,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(186), 1,
      anon_sym_SEMI,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(194), 1,
      sym_account_name,
    STATE(29), 1,
      sym_account,
    STATE(75), 1,
      sym_note,
  [948] = 5,
    ACTIONS(200), 1,
      anon_sym_,
    ACTIONS(202), 1,
      anon_sym_TAB,
    STATE(33), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(196), 2,
      anon_sym_SEMI,
      sym_account_name,
    ACTIONS(198), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [966] = 5,
    ACTIONS(206), 1,
      anon_sym_AT,
    ACTIONS(208), 1,
      anon_sym_AT_AT,
    STATE(49), 1,
      sym_price,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(204), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [984] = 5,
    ACTIONS(214), 1,
      anon_sym_,
    ACTIONS(217), 1,
      anon_sym_TAB,
    STATE(33), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(210), 2,
      anon_sym_SEMI,
      sym_account_name,
    ACTIONS(212), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1002] = 5,
    ACTIONS(220), 1,
      anon_sym_DASH,
    ACTIONS(222), 1,
      aux_sym_quantity_token1,
    STATE(32), 1,
      sym_amount,
    STATE(72), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1019] = 4,
    STATE(30), 1,
      sym_whitespace,
    STATE(31), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(89), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [1034] = 4,
    STATE(30), 1,
      sym_whitespace,
    STATE(31), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(89), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [1049] = 4,
    ACTIONS(226), 1,
      sym_payee,
    STATE(46), 1,
      sym_status,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(224), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [1064] = 4,
    ACTIONS(198), 1,
      sym_payee,
    STATE(39), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(196), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(228), 2,
      anon_sym_,
      anon_sym_TAB,
  [1079] = 4,
    ACTIONS(212), 1,
      sym_payee,
    STATE(39), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(210), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(230), 2,
      anon_sym_,
      anon_sym_TAB,
  [1094] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(237), 1,
      sym_account_name,
    STATE(22), 1,
      sym_account,
  [1113] = 4,
    STATE(30), 1,
      sym_whitespace,
    STATE(31), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(89), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [1128] = 5,
    ACTIONS(220), 1,
      anon_sym_DASH,
    ACTIONS(222), 1,
      aux_sym_quantity_token1,
    STATE(27), 1,
      sym_amount,
    STATE(72), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1145] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(194), 1,
      sym_account_name,
    STATE(8), 1,
      sym_account,
  [1164] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(237), 1,
      sym_account_name,
    STATE(27), 1,
      sym_account,
  [1183] = 5,
    ACTIONS(220), 1,
      anon_sym_DASH,
    ACTIONS(222), 1,
      aux_sym_quantity_token1,
    STATE(52), 1,
      sym_amount,
    STATE(72), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1200] = 4,
    ACTIONS(239), 1,
      anon_sym_LF,
    STATE(38), 1,
      aux_sym_whitespace_repeat1,
    STATE(60), 1,
      sym_whitespace,
    ACTIONS(241), 2,
      anon_sym_,
      anon_sym_TAB,
  [1214] = 4,
    ACTIONS(186), 1,
      anon_sym_SEMI,
    ACTIONS(243), 1,
      anon_sym_LF,
    STATE(73), 1,
      sym_note,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1228] = 4,
    ACTIONS(245), 1,
      anon_sym_LF,
    STATE(37), 1,
      sym_whitespace,
    STATE(38), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(241), 2,
      anon_sym_,
      anon_sym_TAB,
  [1242] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(247), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1251] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(249), 2,
      anon_sym_DASH,
      aux_sym_quantity_token1,
  [1260] = 3,
    ACTIONS(251), 1,
      sym_single_date,
    STATE(77), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1271] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(253), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1280] = 3,
    ACTIONS(255), 1,
      anon_sym_EQ,
    ACTIONS(257), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1291] = 3,
    ACTIONS(251), 1,
      sym_single_date,
    STATE(78), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1302] = 2,
    ACTIONS(259), 1,
      anon_sym_EQ,
    ACTIONS(257), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1311] = 1,
    ACTIONS(261), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1317] = 2,
    ACTIONS(263), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1325] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(265), 1,
      sym_account_name,
  [1335] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(267), 1,
      sym_account_name,
  [1345] = 2,
    ACTIONS(269), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1353] = 2,
    ACTIONS(271), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1361] = 2,
    ACTIONS(273), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1369] = 2,
    ACTIONS(275), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1377] = 2,
    ACTIONS(277), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1385] = 2,
    ACTIONS(279), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1393] = 2,
    ACTIONS(243), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1401] = 2,
    ACTIONS(281), 1,
      aux_sym_note_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1409] = 2,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1417] = 2,
    ACTIONS(285), 1,
      aux_sym_quantity_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1425] = 2,
    ACTIONS(287), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1433] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(289), 1,
      sym_commodity,
  [1443] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(291), 1,
      sym_commodity,
  [1453] = 2,
    ACTIONS(293), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1461] = 2,
    ACTIONS(239), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1469] = 2,
    ACTIONS(295), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1477] = 2,
    ACTIONS(297), 1,
      aux_sym_word_directive_token3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1485] = 2,
    ACTIONS(299), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1493] = 2,
    ACTIONS(301), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1501] = 1,
    ACTIONS(303), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1507] = 2,
    ACTIONS(305), 1,
      aux_sym_comment_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1515] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(307), 1,
      sym_commodity,
  [1525] = 2,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1533] = 2,
    ACTIONS(311), 1,
      aux_sym_word_directive_token3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1541] = 2,
    ACTIONS(303), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1549] = 2,
    ACTIONS(313), 1,
      aux_sym_word_directive_token2,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1557] = 2,
    ACTIONS(315), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1565] = 2,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1573] = 2,
    ACTIONS(317), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1581] = 2,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1589] = 2,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1597] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(321), 1,
      sym_account_name,
  [1607] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(323), 1,
      sym_account_name,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 192,
  [SMALL_STATE(6)] = 230,
  [SMALL_STATE(7)] = 268,
  [SMALL_STATE(8)] = 306,
  [SMALL_STATE(9)] = 341,
  [SMALL_STATE(10)] = 371,
  [SMALL_STATE(11)] = 401,
  [SMALL_STATE(12)] = 431,
  [SMALL_STATE(13)] = 459,
  [SMALL_STATE(14)] = 487,
  [SMALL_STATE(15)] = 515,
  [SMALL_STATE(16)] = 541,
  [SMALL_STATE(17)] = 569,
  [SMALL_STATE(18)] = 597,
  [SMALL_STATE(19)] = 625,
  [SMALL_STATE(20)] = 651,
  [SMALL_STATE(21)] = 679,
  [SMALL_STATE(22)] = 707,
  [SMALL_STATE(23)] = 735,
  [SMALL_STATE(24)] = 763,
  [SMALL_STATE(25)] = 791,
  [SMALL_STATE(26)] = 817,
  [SMALL_STATE(27)] = 845,
  [SMALL_STATE(28)] = 873,
  [SMALL_STATE(29)] = 899,
  [SMALL_STATE(30)] = 923,
  [SMALL_STATE(31)] = 948,
  [SMALL_STATE(32)] = 966,
  [SMALL_STATE(33)] = 984,
  [SMALL_STATE(34)] = 1002,
  [SMALL_STATE(35)] = 1019,
  [SMALL_STATE(36)] = 1034,
  [SMALL_STATE(37)] = 1049,
  [SMALL_STATE(38)] = 1064,
  [SMALL_STATE(39)] = 1079,
  [SMALL_STATE(40)] = 1094,
  [SMALL_STATE(41)] = 1113,
  [SMALL_STATE(42)] = 1128,
  [SMALL_STATE(43)] = 1145,
  [SMALL_STATE(44)] = 1164,
  [SMALL_STATE(45)] = 1183,
  [SMALL_STATE(46)] = 1200,
  [SMALL_STATE(47)] = 1214,
  [SMALL_STATE(48)] = 1228,
  [SMALL_STATE(49)] = 1242,
  [SMALL_STATE(50)] = 1251,
  [SMALL_STATE(51)] = 1260,
  [SMALL_STATE(52)] = 1271,
  [SMALL_STATE(53)] = 1280,
  [SMALL_STATE(54)] = 1291,
  [SMALL_STATE(55)] = 1302,
  [SMALL_STATE(56)] = 1311,
  [SMALL_STATE(57)] = 1317,
  [SMALL_STATE(58)] = 1325,
  [SMALL_STATE(59)] = 1335,
  [SMALL_STATE(60)] = 1345,
  [SMALL_STATE(61)] = 1353,
  [SMALL_STATE(62)] = 1361,
  [SMALL_STATE(63)] = 1369,
  [SMALL_STATE(64)] = 1377,
  [SMALL_STATE(65)] = 1385,
  [SMALL_STATE(66)] = 1393,
  [SMALL_STATE(67)] = 1401,
  [SMALL_STATE(68)] = 1409,
  [SMALL_STATE(69)] = 1417,
  [SMALL_STATE(70)] = 1425,
  [SMALL_STATE(71)] = 1433,
  [SMALL_STATE(72)] = 1443,
  [SMALL_STATE(73)] = 1453,
  [SMALL_STATE(74)] = 1461,
  [SMALL_STATE(75)] = 1469,
  [SMALL_STATE(76)] = 1477,
  [SMALL_STATE(77)] = 1485,
  [SMALL_STATE(78)] = 1493,
  [SMALL_STATE(79)] = 1501,
  [SMALL_STATE(80)] = 1507,
  [SMALL_STATE(81)] = 1515,
  [SMALL_STATE(82)] = 1525,
  [SMALL_STATE(83)] = 1533,
  [SMALL_STATE(84)] = 1541,
  [SMALL_STATE(85)] = 1549,
  [SMALL_STATE(86)] = 1557,
  [SMALL_STATE(87)] = 1565,
  [SMALL_STATE(88)] = 1573,
  [SMALL_STATE(89)] = 1581,
  [SMALL_STATE(90)] = 1589,
  [SMALL_STATE(91)] = 1597,
  [SMALL_STATE(92)] = 1607,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(31),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_in, 4),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_in, 6),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_out, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 4),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whitespace, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_whitespace, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(33),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(33),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(39),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spacer, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spacer, 1),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [283] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
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
