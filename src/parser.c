#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 91
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
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
  anon_sym_A = 13,
  anon_sym_Y = 14,
  aux_sym_char_directive_token1 = 15,
  anon_sym_D = 16,
  anon_sym_i = 17,
  anon_sym_I = 18,
  anon_sym_o = 19,
  anon_sym_O = 20,
  sym_single_date = 21,
  sym_time = 22,
  anon_sym_BANG = 23,
  sym_payee = 24,
  aux_sym_note_token1 = 25,
  anon_sym_LPAREN = 26,
  anon_sym_RPAREN = 27,
  anon_sym_LBRACK = 28,
  anon_sym_RBRACK = 29,
  sym_account_name = 30,
  anon_sym_DASH = 31,
  aux_sym_quantity_token1 = 32,
  sym_commodity = 33,
  anon_sym_AT = 34,
  anon_sym_AT_AT = 35,
  anon_sym_ = 36,
  anon_sym_TAB = 37,
  anon_sym_2 = 38,
  anon_sym_TAB2 = 39,
  sym_source_file = 40,
  sym_journal_item = 41,
  sym_comment = 42,
  sym_directive = 43,
  sym_word_directive = 44,
  sym_char_directive = 45,
  sym_check_in = 46,
  sym_check_out = 47,
  sym_xact = 48,
  sym_plain_xact = 49,
  sym_date = 50,
  sym_status = 51,
  sym_note = 52,
  sym_posting = 53,
  sym_account = 54,
  sym_values = 55,
  sym_amount = 56,
  sym_quantity = 57,
  sym_price = 58,
  sym_whitespace = 59,
  sym_spacer = 60,
  aux_sym_source_file_repeat1 = 61,
  aux_sym_plain_xact_repeat1 = 62,
  aux_sym_whitespace_repeat1 = 63,
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
  [anon_sym_A] = "A",
  [anon_sym_Y] = "Y",
  [aux_sym_char_directive_token1] = "char_directive_token1",
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
  [anon_sym_A] = anon_sym_A,
  [anon_sym_Y] = anon_sym_Y,
  [aux_sym_char_directive_token1] = aux_sym_char_directive_token1,
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
  [anon_sym_A] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Y] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_directive_token1] = {
    .visible = false,
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
      if (eof) ADVANCE(55);
      if (lookahead == '\t') ADVANCE(105);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == ' ') ADVANCE(98);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == ';') ADVANCE(57);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == 'A') ADVANCE(68);
      if (lookahead == 'D') ADVANCE(72);
      if (lookahead == 'I') ADVANCE(74);
      if (lookahead == 'O') ADVANCE(76);
      if (lookahead == 'Y') ADVANCE(69);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(105);
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == '-') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(105);
      if (lookahead == ' ') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(105);
      if (lookahead == ' ') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(111);
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ';') ADVANCE(57);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(110);
      if (lookahead == ' ') ADVANCE(104);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(107);
      if (lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(106);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == ' ') ADVANCE(99);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(109);
      if (lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(65);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(43);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 31:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(42);
      END_STATE();
    case 32:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(44);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 52:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(90);
      END_STATE();
    case 53:
      if (eof) ADVANCE(55);
      if (lookahead == '\t') ADVANCE(105);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == ' ') ADVANCE(98);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead == ';') ADVANCE(57);
      if (lookahead == 'A') ADVANCE(68);
      if (lookahead == 'D') ADVANCE(72);
      if (lookahead == 'I') ADVANCE(74);
      if (lookahead == 'O') ADVANCE(76);
      if (lookahead == 'Y') ADVANCE(69);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 54:
      if (eof) ADVANCE(55);
      if (lookahead == '\t') ADVANCE(105);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead == ';') ADVANCE(57);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == 'A') ADVANCE(68);
      if (lookahead == 'D') ADVANCE(72);
      if (lookahead == 'I') ADVANCE(74);
      if (lookahead == 'O') ADVANCE(76);
      if (lookahead == 'Y') ADVANCE(69);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_word_directive_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_word_directive_token2);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_char_directive_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_char_directive_token1);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(42);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_single_date);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '\t') ADVANCE(108);
      if (lookahead == ' ') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(113);
      if (lookahead == ' ') ADVANCE(112);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(65);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(80);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(65);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(80);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 54},
  [2] = {.lex_state = 54},
  [3] = {.lex_state = 54},
  [4] = {.lex_state = 54},
  [5] = {.lex_state = 54},
  [6] = {.lex_state = 54},
  [7] = {.lex_state = 54},
  [8] = {.lex_state = 53},
  [9] = {.lex_state = 53},
  [10] = {.lex_state = 54},
  [11] = {.lex_state = 53},
  [12] = {.lex_state = 54},
  [13] = {.lex_state = 54},
  [14] = {.lex_state = 54},
  [15] = {.lex_state = 54},
  [16] = {.lex_state = 54},
  [17] = {.lex_state = 54},
  [18] = {.lex_state = 54},
  [19] = {.lex_state = 54},
  [20] = {.lex_state = 54},
  [21] = {.lex_state = 54},
  [22] = {.lex_state = 54},
  [23] = {.lex_state = 54},
  [24] = {.lex_state = 54},
  [25] = {.lex_state = 54},
  [26] = {.lex_state = 54},
  [27] = {.lex_state = 54},
  [28] = {.lex_state = 54},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 54},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 54},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 54},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 54},
  [45] = {.lex_state = 54},
  [46] = {.lex_state = 54},
  [47] = {.lex_state = 54},
  [48] = {.lex_state = 54},
  [49] = {.lex_state = 54},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 54},
  [52] = {.lex_state = 54},
  [53] = {.lex_state = 54},
  [54] = {.lex_state = 54},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 54},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 54},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 54},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 54},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 54},
  [67] = {.lex_state = 54},
  [68] = {.lex_state = 54},
  [69] = {.lex_state = 54},
  [70] = {.lex_state = 54},
  [71] = {.lex_state = 54},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 81},
  [75] = {.lex_state = 54},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 54},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 54},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 54},
  [82] = {.lex_state = 54},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 54},
  [86] = {.lex_state = 54},
  [87] = {.lex_state = 54},
  [88] = {.lex_state = 54},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
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
    [anon_sym_A] = ACTIONS(1),
    [anon_sym_Y] = ACTIONS(1),
    [aux_sym_char_directive_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(69),
    [sym_journal_item] = STATE(3),
    [sym_comment] = STATE(14),
    [sym_directive] = STATE(14),
    [sym_word_directive] = STATE(15),
    [sym_char_directive] = STATE(15),
    [sym_check_in] = STATE(16),
    [sym_check_out] = STATE(16),
    [sym_xact] = STATE(14),
    [sym_plain_xact] = STATE(12),
    [sym_date] = STATE(46),
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
    [anon_sym_A] = ACTIONS(19),
    [anon_sym_Y] = ACTIONS(21),
    [anon_sym_D] = ACTIONS(23),
    [anon_sym_i] = ACTIONS(25),
    [anon_sym_I] = ACTIONS(27),
    [anon_sym_o] = ACTIONS(29),
    [anon_sym_O] = ACTIONS(29),
    [sym_single_date] = ACTIONS(31),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_TAB] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_LF,
    ACTIONS(44), 1,
      anon_sym_end,
    ACTIONS(47), 1,
      anon_sym_alias,
    ACTIONS(50), 1,
      anon_sym_A,
    ACTIONS(53), 1,
      anon_sym_Y,
    ACTIONS(56), 1,
      anon_sym_D,
    ACTIONS(59), 1,
      anon_sym_i,
    ACTIONS(62), 1,
      anon_sym_I,
    ACTIONS(68), 1,
      sym_single_date,
    STATE(12), 1,
      sym_plain_xact,
    STATE(46), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(38), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(65), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(15), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(16), 2,
      sym_check_in,
      sym_check_out,
    ACTIONS(41), 3,
      anon_sym_include,
      anon_sym_account,
      anon_sym_def,
    STATE(14), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [71] = 20,
    ACTIONS(15), 1,
      anon_sym_end,
    ACTIONS(17), 1,
      anon_sym_alias,
    ACTIONS(19), 1,
      anon_sym_A,
    ACTIONS(21), 1,
      anon_sym_Y,
    ACTIONS(23), 1,
      anon_sym_D,
    ACTIONS(25), 1,
      anon_sym_i,
    ACTIONS(27), 1,
      anon_sym_I,
    ACTIONS(31), 1,
      sym_single_date,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      anon_sym_LF,
    STATE(12), 1,
      sym_plain_xact,
    STATE(46), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(11), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(29), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(15), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(16), 2,
      sym_check_in,
      sym_check_out,
    ACTIONS(13), 3,
      anon_sym_include,
      anon_sym_account,
      anon_sym_def,
    STATE(14), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [142] = 6,
    ACTIONS(77), 1,
      anon_sym_i,
    STATE(30), 1,
      sym_whitespace,
    STATE(32), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(79), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(75), 16,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [178] = 6,
    ACTIONS(83), 1,
      anon_sym_i,
    STATE(30), 1,
      sym_whitespace,
    STATE(32), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(79), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(81), 16,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [214] = 6,
    ACTIONS(87), 1,
      anon_sym_i,
    STATE(30), 1,
      sym_whitespace,
    STATE(32), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(79), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(85), 16,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [250] = 6,
    ACTIONS(91), 1,
      anon_sym_i,
    STATE(30), 1,
      sym_whitespace,
    STATE(32), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(93), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(89), 16,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [286] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(98), 1,
      anon_sym_i,
    STATE(60), 1,
      sym_spacer,
    ACTIONS(100), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
    ACTIONS(96), 16,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [319] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(104), 1,
      anon_sym_i,
    ACTIONS(102), 19,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
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
  [347] = 3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(108), 2,
      anon_sym_i,
      anon_sym_AT,
    ACTIONS(106), 17,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_AT_AT,
  [375] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(112), 1,
      anon_sym_i,
    ACTIONS(110), 19,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
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
  [403] = 3,
    ACTIONS(116), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(114), 16,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [429] = 3,
    ACTIONS(104), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(102), 16,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [455] = 3,
    ACTIONS(120), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(118), 16,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [481] = 3,
    ACTIONS(124), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(122), 16,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [507] = 3,
    ACTIONS(128), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(126), 16,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [533] = 3,
    ACTIONS(132), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(130), 16,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [559] = 3,
    ACTIONS(136), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(134), 16,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [585] = 3,
    ACTIONS(140), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(138), 16,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [611] = 3,
    ACTIONS(144), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(142), 16,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [637] = 2,
    ACTIONS(148), 1,
      anon_sym_i,
    ACTIONS(146), 18,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [661] = 2,
    ACTIONS(152), 1,
      anon_sym_i,
    ACTIONS(150), 18,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [685] = 2,
    ACTIONS(156), 1,
      anon_sym_i,
    ACTIONS(154), 18,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [709] = 3,
    ACTIONS(112), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(110), 16,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [735] = 3,
    ACTIONS(160), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(158), 16,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [761] = 2,
    ACTIONS(164), 1,
      anon_sym_i,
    ACTIONS(162), 18,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [785] = 3,
    ACTIONS(168), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(166), 16,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [811] = 3,
    ACTIONS(172), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(170), 16,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [837] = 7,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(174), 1,
      anon_sym_LF,
    ACTIONS(176), 1,
      anon_sym_SEMI,
    STATE(34), 1,
      sym_spacer,
    STATE(47), 1,
      sym_values,
    STATE(64), 1,
      sym_note,
    ACTIONS(178), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [861] = 8,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(176), 1,
      anon_sym_SEMI,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      sym_account_name,
    STATE(29), 1,
      sym_account,
    STATE(56), 1,
      sym_note,
  [886] = 5,
    ACTIONS(188), 1,
      anon_sym_AT,
    ACTIONS(190), 1,
      anon_sym_AT_AT,
    STATE(48), 1,
      sym_price,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(186), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [904] = 5,
    ACTIONS(196), 1,
      anon_sym_,
    ACTIONS(198), 1,
      anon_sym_TAB,
    STATE(33), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(192), 2,
      anon_sym_SEMI,
      sym_account_name,
    ACTIONS(194), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [922] = 5,
    ACTIONS(204), 1,
      anon_sym_,
    ACTIONS(207), 1,
      anon_sym_TAB,
    STATE(33), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(200), 2,
      anon_sym_SEMI,
      sym_account_name,
    ACTIONS(202), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [940] = 5,
    ACTIONS(210), 1,
      anon_sym_DASH,
    ACTIONS(212), 1,
      aux_sym_quantity_token1,
    STATE(31), 1,
      sym_amount,
    STATE(78), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [957] = 4,
    ACTIONS(216), 1,
      sym_payee,
    STATE(45), 1,
      sym_status,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(214), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [972] = 4,
    ACTIONS(194), 1,
      sym_payee,
    STATE(43), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(192), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(218), 2,
      anon_sym_,
      anon_sym_TAB,
  [987] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(224), 1,
      sym_account_name,
    STATE(25), 1,
      sym_account,
  [1006] = 5,
    ACTIONS(210), 1,
      anon_sym_DASH,
    ACTIONS(212), 1,
      aux_sym_quantity_token1,
    STATE(25), 1,
      sym_amount,
    STATE(78), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1023] = 4,
    STATE(30), 1,
      sym_whitespace,
    STATE(32), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(79), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [1038] = 5,
    ACTIONS(210), 1,
      anon_sym_DASH,
    ACTIONS(212), 1,
      aux_sym_quantity_token1,
    STATE(52), 1,
      sym_amount,
    STATE(78), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1055] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      sym_account_name,
    STATE(8), 1,
      sym_account,
  [1074] = 4,
    STATE(30), 1,
      sym_whitespace,
    STATE(32), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(79), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [1089] = 4,
    ACTIONS(202), 1,
      sym_payee,
    STATE(43), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(200), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(226), 2,
      anon_sym_,
      anon_sym_TAB,
  [1104] = 4,
    STATE(30), 1,
      sym_whitespace,
    STATE(32), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(79), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [1119] = 4,
    ACTIONS(229), 1,
      anon_sym_LF,
    STATE(36), 1,
      aux_sym_whitespace_repeat1,
    STATE(58), 1,
      sym_whitespace,
    ACTIONS(231), 2,
      anon_sym_,
      anon_sym_TAB,
  [1133] = 4,
    ACTIONS(233), 1,
      anon_sym_LF,
    STATE(35), 1,
      sym_whitespace,
    STATE(36), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(231), 2,
      anon_sym_,
      anon_sym_TAB,
  [1147] = 4,
    ACTIONS(176), 1,
      anon_sym_SEMI,
    ACTIONS(235), 1,
      anon_sym_LF,
    STATE(71), 1,
      sym_note,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1161] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(237), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1170] = 2,
    ACTIONS(241), 1,
      anon_sym_EQ,
    ACTIONS(239), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1179] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(243), 2,
      anon_sym_DASH,
      aux_sym_quantity_token1,
  [1188] = 3,
    ACTIONS(239), 1,
      sym_time,
    ACTIONS(245), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1199] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(247), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1208] = 3,
    ACTIONS(249), 1,
      sym_single_date,
    STATE(79), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1219] = 3,
    ACTIONS(249), 1,
      sym_single_date,
    STATE(85), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1230] = 2,
    ACTIONS(251), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1238] = 2,
    ACTIONS(253), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1246] = 2,
    ACTIONS(255), 1,
      aux_sym_quantity_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1254] = 2,
    ACTIONS(257), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1262] = 1,
    ACTIONS(259), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1268] = 2,
    ACTIONS(261), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1276] = 2,
    ACTIONS(263), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1284] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(265), 1,
      sym_account_name,
  [1294] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(267), 1,
      sym_account_name,
  [1304] = 2,
    ACTIONS(235), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1312] = 2,
    ACTIONS(269), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1320] = 2,
    ACTIONS(271), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1328] = 2,
    ACTIONS(273), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1336] = 2,
    ACTIONS(275), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1344] = 2,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1352] = 2,
    ACTIONS(229), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1360] = 2,
    ACTIONS(279), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1368] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(281), 1,
      sym_commodity,
  [1378] = 2,
    ACTIONS(283), 1,
      aux_sym_comment_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1386] = 2,
    ACTIONS(285), 1,
      aux_sym_note_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1394] = 1,
    ACTIONS(287), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1400] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(289), 1,
      sym_commodity,
  [1410] = 2,
    ACTIONS(291), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1418] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(293), 1,
      sym_commodity,
  [1428] = 2,
    ACTIONS(295), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1436] = 2,
    ACTIONS(297), 1,
      aux_sym_char_directive_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1444] = 2,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1452] = 2,
    ACTIONS(287), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1460] = 2,
    ACTIONS(299), 1,
      aux_sym_word_directive_token2,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1468] = 2,
    ACTIONS(301), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1476] = 2,
    ACTIONS(303), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1484] = 2,
    ACTIONS(305), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1492] = 2,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1500] = 2,
    ACTIONS(307), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1508] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(309), 1,
      sym_account_name,
  [1518] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(311), 1,
      sym_account_name,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 71,
  [SMALL_STATE(4)] = 142,
  [SMALL_STATE(5)] = 178,
  [SMALL_STATE(6)] = 214,
  [SMALL_STATE(7)] = 250,
  [SMALL_STATE(8)] = 286,
  [SMALL_STATE(9)] = 319,
  [SMALL_STATE(10)] = 347,
  [SMALL_STATE(11)] = 375,
  [SMALL_STATE(12)] = 403,
  [SMALL_STATE(13)] = 429,
  [SMALL_STATE(14)] = 455,
  [SMALL_STATE(15)] = 481,
  [SMALL_STATE(16)] = 507,
  [SMALL_STATE(17)] = 533,
  [SMALL_STATE(18)] = 559,
  [SMALL_STATE(19)] = 585,
  [SMALL_STATE(20)] = 611,
  [SMALL_STATE(21)] = 637,
  [SMALL_STATE(22)] = 661,
  [SMALL_STATE(23)] = 685,
  [SMALL_STATE(24)] = 709,
  [SMALL_STATE(25)] = 735,
  [SMALL_STATE(26)] = 761,
  [SMALL_STATE(27)] = 785,
  [SMALL_STATE(28)] = 811,
  [SMALL_STATE(29)] = 837,
  [SMALL_STATE(30)] = 861,
  [SMALL_STATE(31)] = 886,
  [SMALL_STATE(32)] = 904,
  [SMALL_STATE(33)] = 922,
  [SMALL_STATE(34)] = 940,
  [SMALL_STATE(35)] = 957,
  [SMALL_STATE(36)] = 972,
  [SMALL_STATE(37)] = 987,
  [SMALL_STATE(38)] = 1006,
  [SMALL_STATE(39)] = 1023,
  [SMALL_STATE(40)] = 1038,
  [SMALL_STATE(41)] = 1055,
  [SMALL_STATE(42)] = 1074,
  [SMALL_STATE(43)] = 1089,
  [SMALL_STATE(44)] = 1104,
  [SMALL_STATE(45)] = 1119,
  [SMALL_STATE(46)] = 1133,
  [SMALL_STATE(47)] = 1147,
  [SMALL_STATE(48)] = 1161,
  [SMALL_STATE(49)] = 1170,
  [SMALL_STATE(50)] = 1179,
  [SMALL_STATE(51)] = 1188,
  [SMALL_STATE(52)] = 1199,
  [SMALL_STATE(53)] = 1208,
  [SMALL_STATE(54)] = 1219,
  [SMALL_STATE(55)] = 1230,
  [SMALL_STATE(56)] = 1238,
  [SMALL_STATE(57)] = 1246,
  [SMALL_STATE(58)] = 1254,
  [SMALL_STATE(59)] = 1262,
  [SMALL_STATE(60)] = 1268,
  [SMALL_STATE(61)] = 1276,
  [SMALL_STATE(62)] = 1284,
  [SMALL_STATE(63)] = 1294,
  [SMALL_STATE(64)] = 1304,
  [SMALL_STATE(65)] = 1312,
  [SMALL_STATE(66)] = 1320,
  [SMALL_STATE(67)] = 1328,
  [SMALL_STATE(68)] = 1336,
  [SMALL_STATE(69)] = 1344,
  [SMALL_STATE(70)] = 1352,
  [SMALL_STATE(71)] = 1360,
  [SMALL_STATE(72)] = 1368,
  [SMALL_STATE(73)] = 1378,
  [SMALL_STATE(74)] = 1386,
  [SMALL_STATE(75)] = 1394,
  [SMALL_STATE(76)] = 1400,
  [SMALL_STATE(77)] = 1410,
  [SMALL_STATE(78)] = 1418,
  [SMALL_STATE(79)] = 1428,
  [SMALL_STATE(80)] = 1436,
  [SMALL_STATE(81)] = 1444,
  [SMALL_STATE(82)] = 1452,
  [SMALL_STATE(83)] = 1460,
  [SMALL_STATE(84)] = 1468,
  [SMALL_STATE(85)] = 1476,
  [SMALL_STATE(86)] = 1484,
  [SMALL_STATE(87)] = 1492,
  [SMALL_STATE(88)] = 1500,
  [SMALL_STATE(89)] = 1508,
  [SMALL_STATE(90)] = 1518,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(84),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(32),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_in, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_out, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 4),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_in, 6),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whitespace, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_whitespace, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(33),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(33),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(43),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spacer, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spacer, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [277] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
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
