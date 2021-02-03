#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
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
  anon_sym_Y = 13,
  aux_sym_char_directive_token1 = 14,
  anon_sym_D = 15,
  anon_sym_i = 16,
  anon_sym_I = 17,
  anon_sym_o = 18,
  anon_sym_O = 19,
  sym_single_date = 20,
  sym_time = 21,
  anon_sym_BANG = 22,
  sym_payee = 23,
  aux_sym_note_token1 = 24,
  anon_sym_LPAREN = 25,
  anon_sym_RPAREN = 26,
  anon_sym_LBRACK = 27,
  anon_sym_RBRACK = 28,
  sym_account_name = 29,
  anon_sym_DASH = 30,
  aux_sym_quantity_token1 = 31,
  sym_commodity = 32,
  anon_sym_AT = 33,
  anon_sym_AT_AT = 34,
  anon_sym_ = 35,
  anon_sym_TAB = 36,
  anon_sym_2 = 37,
  anon_sym_TAB2 = 38,
  sym_source_file = 39,
  sym_journal_item = 40,
  sym_comment = 41,
  sym_directive = 42,
  sym_word_directive = 43,
  sym_char_directive = 44,
  sym_check_in = 45,
  sym_check_out = 46,
  sym_xact = 47,
  sym_plain_xact = 48,
  sym_date = 49,
  sym_status = 50,
  sym_note = 51,
  sym_posting = 52,
  sym_account = 53,
  sym_values = 54,
  sym_amount = 55,
  sym_quantity = 56,
  sym_price = 57,
  sym_whitespace = 58,
  sym_spacer = 59,
  aux_sym_source_file_repeat1 = 60,
  aux_sym_plain_xact_repeat1 = 61,
  aux_sym_whitespace_repeat1 = 62,
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
      if (lookahead == '\t') ADVANCE(104);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == ';') ADVANCE(57);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '@') ADVANCE(94);
      if (lookahead == 'D') ADVANCE(71);
      if (lookahead == 'I') ADVANCE(73);
      if (lookahead == 'O') ADVANCE(75);
      if (lookahead == 'Y') ADVANCE(68);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(104);
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead == '-') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(104);
      if (lookahead == ' ') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(104);
      if (lookahead == ' ') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(110);
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == ';') ADVANCE(57);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(109);
      if (lookahead == ' ') ADVANCE(103);
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(106);
      if (lookahead == ' ') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(105);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == ' ') ADVANCE(98);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(108);
      if (lookahead == ' ') ADVANCE(102);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
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
          lookahead != ' ') ADVANCE(88);
      END_STATE();
    case 52:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 53:
      if (eof) ADVANCE(55);
      if (lookahead == '\t') ADVANCE(104);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead == ';') ADVANCE(57);
      if (lookahead == 'D') ADVANCE(71);
      if (lookahead == 'I') ADVANCE(73);
      if (lookahead == 'O') ADVANCE(75);
      if (lookahead == 'Y') ADVANCE(68);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 54:
      if (eof) ADVANCE(55);
      if (lookahead == '\t') ADVANCE(104);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead == ';') ADVANCE(57);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '@') ADVANCE(94);
      if (lookahead == 'D') ADVANCE(71);
      if (lookahead == 'I') ADVANCE(73);
      if (lookahead == 'O') ADVANCE(75);
      if (lookahead == 'Y') ADVANCE(68);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(74);
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
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_char_directive_token1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_char_directive_token1);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(42);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_single_date);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '\t') ADVANCE(107);
      if (lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(88);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(112);
      if (lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(65);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(79);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(65);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(79);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(88);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 112:
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
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 54},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 54},
  [35] = {.lex_state = 54},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 54},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 54},
  [43] = {.lex_state = 54},
  [44] = {.lex_state = 54},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 54},
  [47] = {.lex_state = 54},
  [48] = {.lex_state = 54},
  [49] = {.lex_state = 54},
  [50] = {.lex_state = 54},
  [51] = {.lex_state = 54},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 54},
  [56] = {.lex_state = 54},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 54},
  [60] = {.lex_state = 54},
  [61] = {.lex_state = 54},
  [62] = {.lex_state = 54},
  [63] = {.lex_state = 54},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 54},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 54},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 54},
  [71] = {.lex_state = 54},
  [72] = {.lex_state = 54},
  [73] = {.lex_state = 54},
  [74] = {.lex_state = 80},
  [75] = {.lex_state = 54},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 54},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 54},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 54},
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
    [sym_source_file] = STATE(71),
    [sym_journal_item] = STATE(2),
    [sym_comment] = STATE(20),
    [sym_directive] = STATE(20),
    [sym_word_directive] = STATE(13),
    [sym_char_directive] = STATE(13),
    [sym_check_in] = STATE(14),
    [sym_check_out] = STATE(14),
    [sym_xact] = STATE(20),
    [sym_plain_xact] = STATE(15),
    [sym_date] = STATE(44),
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
    [anon_sym_Y] = ACTIONS(19),
    [anon_sym_D] = ACTIONS(21),
    [anon_sym_i] = ACTIONS(23),
    [anon_sym_I] = ACTIONS(25),
    [anon_sym_o] = ACTIONS(27),
    [anon_sym_O] = ACTIONS(27),
    [sym_single_date] = ACTIONS(29),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_TAB] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(15), 1,
      anon_sym_end,
    ACTIONS(17), 1,
      anon_sym_alias,
    ACTIONS(19), 1,
      anon_sym_Y,
    ACTIONS(21), 1,
      anon_sym_D,
    ACTIONS(23), 1,
      anon_sym_i,
    ACTIONS(25), 1,
      anon_sym_I,
    ACTIONS(29), 1,
      sym_single_date,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_LF,
    STATE(15), 1,
      sym_plain_xact,
    STATE(44), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(11), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(27), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(13), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(14), 2,
      sym_check_in,
      sym_check_out,
    ACTIONS(13), 3,
      anon_sym_include,
      anon_sym_account,
      anon_sym_def,
    STATE(20), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [68] = 19,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_LF,
    ACTIONS(46), 1,
      anon_sym_end,
    ACTIONS(49), 1,
      anon_sym_alias,
    ACTIONS(52), 1,
      anon_sym_Y,
    ACTIONS(55), 1,
      anon_sym_D,
    ACTIONS(58), 1,
      anon_sym_i,
    ACTIONS(61), 1,
      anon_sym_I,
    ACTIONS(67), 1,
      sym_single_date,
    STATE(15), 1,
      sym_plain_xact,
    STATE(44), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(40), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(64), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(13), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(14), 2,
      sym_check_in,
      sym_check_out,
    ACTIONS(43), 3,
      anon_sym_include,
      anon_sym_account,
      anon_sym_def,
    STATE(20), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [136] = 6,
    ACTIONS(72), 1,
      anon_sym_i,
    STATE(28), 1,
      sym_whitespace,
    STATE(31), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(74), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(70), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [171] = 6,
    ACTIONS(79), 1,
      anon_sym_i,
    STATE(28), 1,
      sym_whitespace,
    STATE(31), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(81), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(77), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [206] = 6,
    ACTIONS(85), 1,
      anon_sym_i,
    STATE(28), 1,
      sym_whitespace,
    STATE(31), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(81), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(83), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [241] = 6,
    ACTIONS(89), 1,
      anon_sym_i,
    STATE(28), 1,
      sym_whitespace,
    STATE(31), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(81), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(87), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [276] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(93), 1,
      anon_sym_i,
    STATE(58), 1,
      sym_spacer,
    ACTIONS(95), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
    ACTIONS(91), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [308] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(99), 1,
      anon_sym_i,
    ACTIONS(97), 18,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [335] = 3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(103), 2,
      anon_sym_i,
      anon_sym_AT,
    ACTIONS(101), 16,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_AT_AT,
  [362] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(107), 1,
      anon_sym_i,
    ACTIONS(105), 18,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [389] = 3,
    ACTIONS(111), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(109), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [414] = 3,
    ACTIONS(115), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(113), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [439] = 3,
    ACTIONS(119), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(117), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [464] = 3,
    ACTIONS(123), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(121), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [489] = 3,
    ACTIONS(127), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(125), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [514] = 3,
    ACTIONS(131), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(129), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [539] = 3,
    ACTIONS(135), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(133), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [564] = 3,
    ACTIONS(139), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(137), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [589] = 3,
    ACTIONS(143), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(141), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [614] = 2,
    ACTIONS(147), 1,
      anon_sym_i,
    ACTIONS(145), 17,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [637] = 3,
    ACTIONS(151), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(149), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [662] = 2,
    ACTIONS(155), 1,
      anon_sym_i,
    ACTIONS(153), 17,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [685] = 2,
    ACTIONS(159), 1,
      anon_sym_i,
    ACTIONS(157), 17,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [708] = 2,
    ACTIONS(163), 1,
      anon_sym_i,
    ACTIONS(161), 17,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [731] = 3,
    ACTIONS(167), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(165), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_Y,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [756] = 7,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(169), 1,
      anon_sym_LF,
    ACTIONS(171), 1,
      anon_sym_SEMI,
    STATE(33), 1,
      sym_spacer,
    STATE(42), 1,
      sym_values,
    STATE(62), 1,
      sym_note,
    ACTIONS(173), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [780] = 8,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(171), 1,
      anon_sym_SEMI,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(179), 1,
      sym_account_name,
    STATE(27), 1,
      sym_account,
    STATE(73), 1,
      sym_note,
  [805] = 5,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(185), 1,
      anon_sym_AT_AT,
    STATE(48), 1,
      sym_price,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(181), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [823] = 5,
    ACTIONS(191), 1,
      anon_sym_,
    ACTIONS(194), 1,
      anon_sym_TAB,
    STATE(30), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(187), 2,
      anon_sym_SEMI,
      sym_account_name,
    ACTIONS(189), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [841] = 5,
    ACTIONS(201), 1,
      anon_sym_,
    ACTIONS(203), 1,
      anon_sym_TAB,
    STATE(30), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(197), 2,
      anon_sym_SEMI,
      sym_account_name,
    ACTIONS(199), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [859] = 4,
    ACTIONS(199), 1,
      sym_payee,
    STATE(38), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(197), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(205), 2,
      anon_sym_,
      anon_sym_TAB,
  [874] = 5,
    ACTIONS(207), 1,
      anon_sym_DASH,
    ACTIONS(209), 1,
      aux_sym_quantity_token1,
    STATE(29), 1,
      sym_amount,
    STATE(64), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [891] = 4,
    STATE(28), 1,
      sym_whitespace,
    STATE(31), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(81), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [906] = 4,
    STATE(28), 1,
      sym_whitespace,
    STATE(31), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(81), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [921] = 4,
    ACTIONS(213), 1,
      sym_payee,
    STATE(43), 1,
      sym_status,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(211), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [936] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(179), 1,
      sym_account_name,
    STATE(8), 1,
      sym_account,
  [955] = 4,
    ACTIONS(189), 1,
      sym_payee,
    STATE(38), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(187), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(215), 2,
      anon_sym_,
      anon_sym_TAB,
  [970] = 4,
    STATE(28), 1,
      sym_whitespace,
    STATE(31), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(81), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [985] = 5,
    ACTIONS(207), 1,
      anon_sym_DASH,
    ACTIONS(209), 1,
      aux_sym_quantity_token1,
    STATE(12), 1,
      sym_amount,
    STATE(64), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1002] = 5,
    ACTIONS(207), 1,
      anon_sym_DASH,
    ACTIONS(209), 1,
      aux_sym_quantity_token1,
    STATE(47), 1,
      sym_amount,
    STATE(64), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1019] = 4,
    ACTIONS(171), 1,
      anon_sym_SEMI,
    ACTIONS(218), 1,
      anon_sym_LF,
    STATE(70), 1,
      sym_note,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1033] = 4,
    ACTIONS(220), 1,
      anon_sym_LF,
    STATE(32), 1,
      aux_sym_whitespace_repeat1,
    STATE(54), 1,
      sym_whitespace,
    ACTIONS(222), 2,
      anon_sym_,
      anon_sym_TAB,
  [1047] = 4,
    ACTIONS(224), 1,
      anon_sym_LF,
    STATE(32), 1,
      aux_sym_whitespace_repeat1,
    STATE(36), 1,
      sym_whitespace,
    ACTIONS(222), 2,
      anon_sym_,
      anon_sym_TAB,
  [1061] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(226), 2,
      anon_sym_DASH,
      aux_sym_quantity_token1,
  [1070] = 3,
    ACTIONS(228), 1,
      anon_sym_EQ,
    ACTIONS(230), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1081] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(232), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1090] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(234), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1099] = 3,
    ACTIONS(236), 1,
      sym_single_date,
    STATE(63), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1110] = 3,
    ACTIONS(236), 1,
      sym_single_date,
    STATE(61), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1121] = 2,
    ACTIONS(238), 1,
      anon_sym_EQ,
    ACTIONS(230), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1130] = 2,
    ACTIONS(240), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1138] = 2,
    ACTIONS(242), 1,
      aux_sym_quantity_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1146] = 2,
    ACTIONS(244), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1154] = 2,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1162] = 2,
    ACTIONS(246), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1170] = 2,
    ACTIONS(248), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1178] = 2,
    ACTIONS(250), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1186] = 2,
    ACTIONS(252), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1194] = 2,
    ACTIONS(254), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1202] = 2,
    ACTIONS(256), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1210] = 2,
    ACTIONS(218), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1218] = 2,
    ACTIONS(258), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1226] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(260), 1,
      sym_commodity,
  [1236] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(262), 1,
      sym_commodity,
  [1246] = 2,
    ACTIONS(264), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1254] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(266), 1,
      sym_commodity,
  [1264] = 2,
    ACTIONS(268), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1272] = 2,
    ACTIONS(270), 1,
      aux_sym_comment_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1280] = 2,
    ACTIONS(272), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1288] = 2,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1296] = 1,
    ACTIONS(276), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1302] = 2,
    ACTIONS(278), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1310] = 2,
    ACTIONS(280), 1,
      aux_sym_note_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1318] = 1,
    ACTIONS(282), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1324] = 2,
    ACTIONS(284), 1,
      aux_sym_char_directive_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1332] = 2,
    ACTIONS(220), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1340] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(286), 1,
      sym_account_name,
  [1350] = 2,
    ACTIONS(288), 1,
      aux_sym_word_directive_token2,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1358] = 2,
    ACTIONS(276), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1366] = 2,
    ACTIONS(290), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1374] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(292), 1,
      sym_account_name,
  [1384] = 2,
    ACTIONS(294), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 68,
  [SMALL_STATE(4)] = 136,
  [SMALL_STATE(5)] = 171,
  [SMALL_STATE(6)] = 206,
  [SMALL_STATE(7)] = 241,
  [SMALL_STATE(8)] = 276,
  [SMALL_STATE(9)] = 308,
  [SMALL_STATE(10)] = 335,
  [SMALL_STATE(11)] = 362,
  [SMALL_STATE(12)] = 389,
  [SMALL_STATE(13)] = 414,
  [SMALL_STATE(14)] = 439,
  [SMALL_STATE(15)] = 464,
  [SMALL_STATE(16)] = 489,
  [SMALL_STATE(17)] = 514,
  [SMALL_STATE(18)] = 539,
  [SMALL_STATE(19)] = 564,
  [SMALL_STATE(20)] = 589,
  [SMALL_STATE(21)] = 614,
  [SMALL_STATE(22)] = 637,
  [SMALL_STATE(23)] = 662,
  [SMALL_STATE(24)] = 685,
  [SMALL_STATE(25)] = 708,
  [SMALL_STATE(26)] = 731,
  [SMALL_STATE(27)] = 756,
  [SMALL_STATE(28)] = 780,
  [SMALL_STATE(29)] = 805,
  [SMALL_STATE(30)] = 823,
  [SMALL_STATE(31)] = 841,
  [SMALL_STATE(32)] = 859,
  [SMALL_STATE(33)] = 874,
  [SMALL_STATE(34)] = 891,
  [SMALL_STATE(35)] = 906,
  [SMALL_STATE(36)] = 921,
  [SMALL_STATE(37)] = 936,
  [SMALL_STATE(38)] = 955,
  [SMALL_STATE(39)] = 970,
  [SMALL_STATE(40)] = 985,
  [SMALL_STATE(41)] = 1002,
  [SMALL_STATE(42)] = 1019,
  [SMALL_STATE(43)] = 1033,
  [SMALL_STATE(44)] = 1047,
  [SMALL_STATE(45)] = 1061,
  [SMALL_STATE(46)] = 1070,
  [SMALL_STATE(47)] = 1081,
  [SMALL_STATE(48)] = 1090,
  [SMALL_STATE(49)] = 1099,
  [SMALL_STATE(50)] = 1110,
  [SMALL_STATE(51)] = 1121,
  [SMALL_STATE(52)] = 1130,
  [SMALL_STATE(53)] = 1138,
  [SMALL_STATE(54)] = 1146,
  [SMALL_STATE(55)] = 1154,
  [SMALL_STATE(56)] = 1162,
  [SMALL_STATE(57)] = 1170,
  [SMALL_STATE(58)] = 1178,
  [SMALL_STATE(59)] = 1186,
  [SMALL_STATE(60)] = 1194,
  [SMALL_STATE(61)] = 1202,
  [SMALL_STATE(62)] = 1210,
  [SMALL_STATE(63)] = 1218,
  [SMALL_STATE(64)] = 1226,
  [SMALL_STATE(65)] = 1236,
  [SMALL_STATE(66)] = 1246,
  [SMALL_STATE(67)] = 1254,
  [SMALL_STATE(68)] = 1264,
  [SMALL_STATE(69)] = 1272,
  [SMALL_STATE(70)] = 1280,
  [SMALL_STATE(71)] = 1288,
  [SMALL_STATE(72)] = 1296,
  [SMALL_STATE(73)] = 1302,
  [SMALL_STATE(74)] = 1310,
  [SMALL_STATE(75)] = 1318,
  [SMALL_STATE(76)] = 1324,
  [SMALL_STATE(77)] = 1332,
  [SMALL_STATE(78)] = 1340,
  [SMALL_STATE(79)] = 1350,
  [SMALL_STATE(80)] = 1358,
  [SMALL_STATE(81)] = 1366,
  [SMALL_STATE(82)] = 1374,
  [SMALL_STATE(83)] = 1384,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(31),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_in, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_in, 6),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_out, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(30),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(30),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whitespace, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_whitespace, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(38),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spacer, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spacer, 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [274] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
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
