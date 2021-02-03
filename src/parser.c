#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 92
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
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
  anon_sym_A = 15,
  anon_sym_Y = 16,
  anon_sym_D = 17,
  anon_sym_i = 18,
  anon_sym_I = 19,
  anon_sym_o = 20,
  anon_sym_O = 21,
  sym_single_date = 22,
  sym_time = 23,
  anon_sym_BANG = 24,
  sym_payee = 25,
  aux_sym_note_token1 = 26,
  anon_sym_LPAREN = 27,
  anon_sym_RPAREN = 28,
  anon_sym_LBRACK = 29,
  anon_sym_RBRACK = 30,
  sym_account_name = 31,
  anon_sym_DASH = 32,
  aux_sym_quantity_token1 = 33,
  sym_commodity = 34,
  anon_sym_AT = 35,
  anon_sym_AT_AT = 36,
  anon_sym_ = 37,
  anon_sym_TAB = 38,
  anon_sym_2 = 39,
  anon_sym_TAB2 = 40,
  sym_source_file = 41,
  sym_journal_item = 42,
  sym_comment = 43,
  sym_directive = 44,
  sym_word_directive = 45,
  sym_char_directive = 46,
  sym_check_in = 47,
  sym_check_out = 48,
  sym_xact = 49,
  sym_plain_xact = 50,
  sym_date = 51,
  sym_status = 52,
  sym_note = 53,
  sym_posting = 54,
  sym_account = 55,
  sym_values = 56,
  sym_amount = 57,
  sym_quantity = 58,
  sym_price = 59,
  sym_whitespace = 60,
  sym_spacer = 61,
  aux_sym_source_file_repeat1 = 62,
  aux_sym_plain_xact_repeat1 = 63,
  aux_sym_whitespace_repeat1 = 64,
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
      if (eof) ADVANCE(58);
      if (lookahead == '\t') ADVANCE(109);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == ' ') ADVANCE(102);
      if (lookahead == '!') ADVANCE(83);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '@') ADVANCE(99);
      if (lookahead == 'A') ADVANCE(74);
      if (lookahead == 'D') ADVANCE(76);
      if (lookahead == 'I') ADVANCE(78);
      if (lookahead == 'O') ADVANCE(80);
      if (lookahead == 'Y') ADVANCE(75);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == ']') ADVANCE(92);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(79);
      if (lookahead == 'y') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(109);
      if (lookahead == ' ') ADVANCE(101);
      if (lookahead == '-') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(109);
      if (lookahead == ' ') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(109);
      if (lookahead == ' ') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(115);
      if (lookahead == ' ') ADVANCE(101);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == '[') ADVANCE(91);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(114);
      if (lookahead == ' ') ADVANCE(108);
      if (lookahead == '!') ADVANCE(83);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(110);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == ' ') ADVANCE(103);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(113);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(68);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(112);
      if (lookahead == ' ') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(46);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(70);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 34:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(45);
      END_STATE();
    case 35:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(47);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 54:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(93);
      END_STATE();
    case 55:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(94);
      END_STATE();
    case 56:
      if (eof) ADVANCE(58);
      if (lookahead == '\t') ADVANCE(109);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == ' ') ADVANCE(102);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == 'A') ADVANCE(74);
      if (lookahead == 'D') ADVANCE(76);
      if (lookahead == 'I') ADVANCE(78);
      if (lookahead == 'O') ADVANCE(80);
      if (lookahead == 'Y') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(79);
      if (lookahead == 'y') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 57:
      if (eof) ADVANCE(58);
      if (lookahead == '\t') ADVANCE(109);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == ' ') ADVANCE(101);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '@') ADVANCE(99);
      if (lookahead == 'A') ADVANCE(74);
      if (lookahead == 'D') ADVANCE(76);
      if (lookahead == 'I') ADVANCE(78);
      if (lookahead == 'O') ADVANCE(80);
      if (lookahead == 'Y') ADVANCE(75);
      if (lookahead == ']') ADVANCE(92);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(79);
      if (lookahead == 'y') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_word_directive_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_word_directive_token2);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_word_directive_token3);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_word_directive_token3);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(45);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_single_date);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '\t') ADVANCE(111);
      if (lookahead == ' ') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(93);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(93);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(68);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(84);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(68);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(84);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(93);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 57},
  [2] = {.lex_state = 57},
  [3] = {.lex_state = 57},
  [4] = {.lex_state = 57},
  [5] = {.lex_state = 57},
  [6] = {.lex_state = 57},
  [7] = {.lex_state = 57},
  [8] = {.lex_state = 56},
  [9] = {.lex_state = 56},
  [10] = {.lex_state = 56},
  [11] = {.lex_state = 57},
  [12] = {.lex_state = 57},
  [13] = {.lex_state = 57},
  [14] = {.lex_state = 57},
  [15] = {.lex_state = 57},
  [16] = {.lex_state = 57},
  [17] = {.lex_state = 57},
  [18] = {.lex_state = 57},
  [19] = {.lex_state = 57},
  [20] = {.lex_state = 57},
  [21] = {.lex_state = 57},
  [22] = {.lex_state = 57},
  [23] = {.lex_state = 57},
  [24] = {.lex_state = 57},
  [25] = {.lex_state = 57},
  [26] = {.lex_state = 57},
  [27] = {.lex_state = 57},
  [28] = {.lex_state = 57},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 57},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 57},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 57},
  [41] = {.lex_state = 57},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 57},
  [46] = {.lex_state = 57},
  [47] = {.lex_state = 57},
  [48] = {.lex_state = 57},
  [49] = {.lex_state = 57},
  [50] = {.lex_state = 57},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 57},
  [53] = {.lex_state = 57},
  [54] = {.lex_state = 57},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 57},
  [58] = {.lex_state = 57},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 57},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 57},
  [65] = {.lex_state = 57},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 57},
  [69] = {.lex_state = 57},
  [70] = {.lex_state = 57},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 57},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 85},
  [75] = {.lex_state = 57},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 57},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 57},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 57},
  [83] = {.lex_state = 57},
  [84] = {.lex_state = 57},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 57},
  [87] = {.lex_state = 57},
  [88] = {.lex_state = 57},
  [89] = {.lex_state = 57},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
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
    [sym_source_file] = STATE(58),
    [sym_journal_item] = STATE(2),
    [sym_comment] = STATE(12),
    [sym_directive] = STATE(12),
    [sym_word_directive] = STATE(14),
    [sym_char_directive] = STATE(14),
    [sym_check_in] = STATE(15),
    [sym_check_out] = STATE(15),
    [sym_xact] = STATE(12),
    [sym_plain_xact] = STATE(16),
    [sym_date] = STATE(47),
    [aux_sym_source_file_repeat1] = STATE(2),
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
    [anon_sym_A] = ACTIONS(21),
    [anon_sym_Y] = ACTIONS(23),
    [anon_sym_D] = ACTIONS(25),
    [anon_sym_i] = ACTIONS(27),
    [anon_sym_I] = ACTIONS(29),
    [anon_sym_o] = ACTIONS(31),
    [anon_sym_O] = ACTIONS(31),
    [sym_single_date] = ACTIONS(33),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_TAB] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(15), 1,
      anon_sym_end,
    ACTIONS(17), 1,
      anon_sym_alias,
    ACTIONS(19), 1,
      anon_sym_year,
    ACTIONS(21), 1,
      anon_sym_A,
    ACTIONS(23), 1,
      anon_sym_Y,
    ACTIONS(25), 1,
      anon_sym_D,
    ACTIONS(27), 1,
      anon_sym_i,
    ACTIONS(29), 1,
      anon_sym_I,
    ACTIONS(33), 1,
      sym_single_date,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym_plain_xact,
    STATE(47), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(11), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(31), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(14), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(15), 2,
      sym_check_in,
      sym_check_out,
    ACTIONS(13), 3,
      anon_sym_include,
      anon_sym_account,
      anon_sym_def,
    STATE(12), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [74] = 21,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_LF,
    ACTIONS(50), 1,
      anon_sym_end,
    ACTIONS(53), 1,
      anon_sym_alias,
    ACTIONS(56), 1,
      anon_sym_year,
    ACTIONS(59), 1,
      anon_sym_A,
    ACTIONS(62), 1,
      anon_sym_Y,
    ACTIONS(65), 1,
      anon_sym_D,
    ACTIONS(68), 1,
      anon_sym_i,
    ACTIONS(71), 1,
      anon_sym_I,
    ACTIONS(77), 1,
      sym_single_date,
    STATE(16), 1,
      sym_plain_xact,
    STATE(47), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(44), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(74), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(14), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(15), 2,
      sym_check_in,
      sym_check_out,
    ACTIONS(47), 3,
      anon_sym_include,
      anon_sym_account,
      anon_sym_def,
    STATE(12), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [148] = 6,
    ACTIONS(82), 1,
      anon_sym_i,
    STATE(30), 1,
      sym_whitespace,
    STATE(31), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(84), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(80), 17,
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
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [185] = 6,
    ACTIONS(89), 1,
      anon_sym_i,
    STATE(30), 1,
      sym_whitespace,
    STATE(31), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(91), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(87), 17,
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
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [222] = 6,
    ACTIONS(95), 1,
      anon_sym_i,
    STATE(30), 1,
      sym_whitespace,
    STATE(31), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(91), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(93), 17,
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
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [259] = 6,
    ACTIONS(99), 1,
      anon_sym_i,
    STATE(30), 1,
      sym_whitespace,
    STATE(31), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(91), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(97), 17,
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
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [296] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(103), 1,
      anon_sym_i,
    STATE(61), 1,
      sym_spacer,
    ACTIONS(105), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
    ACTIONS(101), 17,
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
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [330] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(109), 1,
      anon_sym_i,
    ACTIONS(107), 20,
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
  [359] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(113), 1,
      anon_sym_i,
    ACTIONS(111), 20,
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
  [388] = 3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(117), 2,
      anon_sym_i,
      anon_sym_AT,
    ACTIONS(115), 18,
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
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_AT_AT,
  [417] = 3,
    ACTIONS(121), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(119), 17,
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
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [444] = 2,
    ACTIONS(125), 1,
      anon_sym_i,
    ACTIONS(123), 19,
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
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [469] = 3,
    ACTIONS(129), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(127), 17,
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
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [496] = 3,
    ACTIONS(133), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(131), 17,
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
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [523] = 3,
    ACTIONS(137), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(135), 17,
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
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [550] = 3,
    ACTIONS(141), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(139), 17,
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
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [577] = 2,
    ACTIONS(145), 1,
      anon_sym_i,
    ACTIONS(143), 19,
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
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [602] = 3,
    ACTIONS(149), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(147), 17,
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
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [629] = 3,
    ACTIONS(153), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(151), 17,
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
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [656] = 3,
    ACTIONS(109), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(107), 17,
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
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [683] = 3,
    ACTIONS(157), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(155), 17,
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
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [710] = 3,
    ACTIONS(161), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(159), 17,
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
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [737] = 3,
    ACTIONS(113), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(111), 17,
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
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [764] = 3,
    ACTIONS(165), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(163), 17,
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
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [791] = 2,
    ACTIONS(169), 1,
      anon_sym_i,
    ACTIONS(167), 19,
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
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [816] = 2,
    ACTIONS(173), 1,
      anon_sym_i,
    ACTIONS(171), 19,
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
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [841] = 3,
    ACTIONS(177), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(175), 17,
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
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [868] = 7,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(179), 1,
      anon_sym_LF,
    ACTIONS(181), 1,
      anon_sym_SEMI,
    STATE(43), 1,
      sym_spacer,
    STATE(46), 1,
      sym_values,
    STATE(65), 1,
      sym_note,
    ACTIONS(183), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [892] = 8,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(181), 1,
      anon_sym_SEMI,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_LBRACK,
    ACTIONS(189), 1,
      sym_account_name,
    STATE(29), 1,
      sym_account,
    STATE(57), 1,
      sym_note,
  [917] = 5,
    ACTIONS(195), 1,
      anon_sym_,
    ACTIONS(197), 1,
      anon_sym_TAB,
    STATE(33), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(191), 2,
      anon_sym_SEMI,
      sym_account_name,
    ACTIONS(193), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [935] = 5,
    ACTIONS(201), 1,
      anon_sym_AT,
    ACTIONS(203), 1,
      anon_sym_AT_AT,
    STATE(50), 1,
      sym_price,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(199), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [953] = 5,
    ACTIONS(209), 1,
      anon_sym_,
    ACTIONS(212), 1,
      anon_sym_TAB,
    STATE(33), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(205), 2,
      anon_sym_SEMI,
      sym_account_name,
    ACTIONS(207), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [971] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_LBRACK,
    ACTIONS(189), 1,
      sym_account_name,
    STATE(8), 1,
      sym_account,
  [990] = 4,
    STATE(30), 1,
      sym_whitespace,
    STATE(31), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(91), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [1005] = 4,
    ACTIONS(217), 1,
      sym_payee,
    STATE(45), 1,
      sym_status,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(215), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [1020] = 4,
    ACTIONS(193), 1,
      sym_payee,
    STATE(44), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(219), 2,
      anon_sym_,
      anon_sym_TAB,
  [1035] = 5,
    ACTIONS(221), 1,
      anon_sym_DASH,
    ACTIONS(223), 1,
      aux_sym_quantity_token1,
    STATE(49), 1,
      sym_amount,
    STATE(63), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1052] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_LBRACK,
    ACTIONS(229), 1,
      sym_account_name,
    STATE(25), 1,
      sym_account,
  [1071] = 4,
    STATE(30), 1,
      sym_whitespace,
    STATE(31), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(91), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [1086] = 4,
    STATE(30), 1,
      sym_whitespace,
    STATE(31), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(91), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [1101] = 5,
    ACTIONS(221), 1,
      anon_sym_DASH,
    ACTIONS(223), 1,
      aux_sym_quantity_token1,
    STATE(25), 1,
      sym_amount,
    STATE(63), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1118] = 5,
    ACTIONS(221), 1,
      anon_sym_DASH,
    ACTIONS(223), 1,
      aux_sym_quantity_token1,
    STATE(32), 1,
      sym_amount,
    STATE(63), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1135] = 4,
    ACTIONS(207), 1,
      sym_payee,
    STATE(44), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(205), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(231), 2,
      anon_sym_,
      anon_sym_TAB,
  [1150] = 4,
    ACTIONS(234), 1,
      anon_sym_LF,
    STATE(37), 1,
      aux_sym_whitespace_repeat1,
    STATE(59), 1,
      sym_whitespace,
    ACTIONS(236), 2,
      anon_sym_,
      anon_sym_TAB,
  [1164] = 4,
    ACTIONS(181), 1,
      anon_sym_SEMI,
    ACTIONS(238), 1,
      anon_sym_LF,
    STATE(72), 1,
      sym_note,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1178] = 4,
    ACTIONS(240), 1,
      anon_sym_LF,
    STATE(36), 1,
      sym_whitespace,
    STATE(37), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(236), 2,
      anon_sym_,
      anon_sym_TAB,
  [1192] = 3,
    ACTIONS(242), 1,
      anon_sym_EQ,
    ACTIONS(244), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1203] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(246), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1212] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(248), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1221] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(250), 2,
      anon_sym_DASH,
      aux_sym_quantity_token1,
  [1230] = 3,
    ACTIONS(252), 1,
      sym_single_date,
    STATE(86), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1241] = 3,
    ACTIONS(252), 1,
      sym_single_date,
    STATE(84), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1252] = 2,
    ACTIONS(254), 1,
      anon_sym_EQ,
    ACTIONS(244), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1261] = 2,
    ACTIONS(256), 1,
      aux_sym_quantity_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1269] = 2,
    ACTIONS(258), 1,
      aux_sym_comment_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1277] = 2,
    ACTIONS(260), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1285] = 2,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1293] = 2,
    ACTIONS(264), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1301] = 2,
    ACTIONS(266), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1309] = 2,
    ACTIONS(268), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1317] = 2,
    ACTIONS(270), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1325] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(272), 1,
      sym_commodity,
  [1335] = 2,
    ACTIONS(274), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1343] = 2,
    ACTIONS(238), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1351] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(276), 1,
      sym_account_name,
  [1361] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(278), 1,
      sym_account_name,
  [1371] = 2,
    ACTIONS(234), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1379] = 2,
    ACTIONS(280), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1387] = 1,
    ACTIONS(282), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1393] = 2,
    ACTIONS(284), 1,
      aux_sym_word_directive_token3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1401] = 2,
    ACTIONS(286), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1409] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(288), 1,
      sym_commodity,
  [1419] = 2,
    ACTIONS(290), 1,
      aux_sym_note_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1427] = 1,
    ACTIONS(292), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1433] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(294), 1,
      sym_commodity,
  [1443] = 2,
    ACTIONS(296), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1451] = 2,
    ACTIONS(298), 1,
      aux_sym_word_directive_token3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1459] = 2,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1467] = 2,
    ACTIONS(300), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1475] = 2,
    ACTIONS(302), 1,
      aux_sym_word_directive_token2,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1483] = 2,
    ACTIONS(304), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1491] = 2,
    ACTIONS(292), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1499] = 2,
    ACTIONS(306), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1507] = 2,
    ACTIONS(308), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1515] = 2,
    ACTIONS(310), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1523] = 2,
    ACTIONS(312), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1531] = 2,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1539] = 2,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1547] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(316), 1,
      sym_account_name,
  [1557] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(318), 1,
      sym_account_name,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 74,
  [SMALL_STATE(4)] = 148,
  [SMALL_STATE(5)] = 185,
  [SMALL_STATE(6)] = 222,
  [SMALL_STATE(7)] = 259,
  [SMALL_STATE(8)] = 296,
  [SMALL_STATE(9)] = 330,
  [SMALL_STATE(10)] = 359,
  [SMALL_STATE(11)] = 388,
  [SMALL_STATE(12)] = 417,
  [SMALL_STATE(13)] = 444,
  [SMALL_STATE(14)] = 469,
  [SMALL_STATE(15)] = 496,
  [SMALL_STATE(16)] = 523,
  [SMALL_STATE(17)] = 550,
  [SMALL_STATE(18)] = 577,
  [SMALL_STATE(19)] = 602,
  [SMALL_STATE(20)] = 629,
  [SMALL_STATE(21)] = 656,
  [SMALL_STATE(22)] = 683,
  [SMALL_STATE(23)] = 710,
  [SMALL_STATE(24)] = 737,
  [SMALL_STATE(25)] = 764,
  [SMALL_STATE(26)] = 791,
  [SMALL_STATE(27)] = 816,
  [SMALL_STATE(28)] = 841,
  [SMALL_STATE(29)] = 868,
  [SMALL_STATE(30)] = 892,
  [SMALL_STATE(31)] = 917,
  [SMALL_STATE(32)] = 935,
  [SMALL_STATE(33)] = 953,
  [SMALL_STATE(34)] = 971,
  [SMALL_STATE(35)] = 990,
  [SMALL_STATE(36)] = 1005,
  [SMALL_STATE(37)] = 1020,
  [SMALL_STATE(38)] = 1035,
  [SMALL_STATE(39)] = 1052,
  [SMALL_STATE(40)] = 1071,
  [SMALL_STATE(41)] = 1086,
  [SMALL_STATE(42)] = 1101,
  [SMALL_STATE(43)] = 1118,
  [SMALL_STATE(44)] = 1135,
  [SMALL_STATE(45)] = 1150,
  [SMALL_STATE(46)] = 1164,
  [SMALL_STATE(47)] = 1178,
  [SMALL_STATE(48)] = 1192,
  [SMALL_STATE(49)] = 1203,
  [SMALL_STATE(50)] = 1212,
  [SMALL_STATE(51)] = 1221,
  [SMALL_STATE(52)] = 1230,
  [SMALL_STATE(53)] = 1241,
  [SMALL_STATE(54)] = 1252,
  [SMALL_STATE(55)] = 1261,
  [SMALL_STATE(56)] = 1269,
  [SMALL_STATE(57)] = 1277,
  [SMALL_STATE(58)] = 1285,
  [SMALL_STATE(59)] = 1293,
  [SMALL_STATE(60)] = 1301,
  [SMALL_STATE(61)] = 1309,
  [SMALL_STATE(62)] = 1317,
  [SMALL_STATE(63)] = 1325,
  [SMALL_STATE(64)] = 1335,
  [SMALL_STATE(65)] = 1343,
  [SMALL_STATE(66)] = 1351,
  [SMALL_STATE(67)] = 1361,
  [SMALL_STATE(68)] = 1371,
  [SMALL_STATE(69)] = 1379,
  [SMALL_STATE(70)] = 1387,
  [SMALL_STATE(71)] = 1393,
  [SMALL_STATE(72)] = 1401,
  [SMALL_STATE(73)] = 1409,
  [SMALL_STATE(74)] = 1419,
  [SMALL_STATE(75)] = 1427,
  [SMALL_STATE(76)] = 1433,
  [SMALL_STATE(77)] = 1443,
  [SMALL_STATE(78)] = 1451,
  [SMALL_STATE(79)] = 1459,
  [SMALL_STATE(80)] = 1467,
  [SMALL_STATE(81)] = 1475,
  [SMALL_STATE(82)] = 1483,
  [SMALL_STATE(83)] = 1491,
  [SMALL_STATE(84)] = 1499,
  [SMALL_STATE(85)] = 1507,
  [SMALL_STATE(86)] = 1515,
  [SMALL_STATE(87)] = 1523,
  [SMALL_STATE(88)] = 1531,
  [SMALL_STATE(89)] = 1539,
  [SMALL_STATE(90)] = 1547,
  [SMALL_STATE(91)] = 1557,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(31),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_in, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 4),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_in, 6),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_out, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whitespace, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_whitespace, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(33),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(33),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(44),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spacer, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [262] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spacer, 1),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
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
