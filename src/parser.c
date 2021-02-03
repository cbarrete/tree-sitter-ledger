#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 83
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
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
  anon_sym_D = 13,
  anon_sym_i = 14,
  anon_sym_I = 15,
  anon_sym_o = 16,
  anon_sym_O = 17,
  sym_single_date = 18,
  sym_time = 19,
  anon_sym_BANG = 20,
  sym_payee = 21,
  aux_sym_note_token1 = 22,
  anon_sym_LPAREN = 23,
  anon_sym_RPAREN = 24,
  anon_sym_LBRACK = 25,
  anon_sym_RBRACK = 26,
  sym_account_name = 27,
  anon_sym_DASH = 28,
  aux_sym_quantity_token1 = 29,
  sym_commodity = 30,
  anon_sym_AT = 31,
  anon_sym_AT_AT = 32,
  anon_sym_ = 33,
  anon_sym_TAB = 34,
  anon_sym_2 = 35,
  anon_sym_TAB2 = 36,
  sym_source_file = 37,
  sym_journal_item = 38,
  sym_comment = 39,
  sym_directive = 40,
  sym_word_directive = 41,
  sym_char_directive = 42,
  sym_check_in = 43,
  sym_check_out = 44,
  sym_xact = 45,
  sym_plain_xact = 46,
  sym_date = 47,
  sym_status = 48,
  sym_note = 49,
  sym_posting = 50,
  sym_account = 51,
  sym_values = 52,
  sym_amount = 53,
  sym_quantity = 54,
  sym_price = 55,
  sym_whitespace = 56,
  sym_spacer = 57,
  aux_sym_source_file_repeat1 = 58,
  aux_sym_plain_xact_repeat1 = 59,
  aux_sym_whitespace_repeat1 = 60,
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
      if (eof) ADVANCE(49);
      if (lookahead == '\t') ADVANCE(101);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == '!') ADVANCE(69);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '@') ADVANCE(91);
      if (lookahead == 'D') ADVANCE(62);
      if (lookahead == 'I') ADVANCE(64);
      if (lookahead == 'O') ADVANCE(66);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(101);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == '-') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(101);
      if (lookahead == ' ') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(107);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(106);
      if (lookahead == ' ') ADVANCE(100);
      if (lookahead == '!') ADVANCE(69);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(102);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(105);
      if (lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(59);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(104);
      if (lookahead == ' ') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 29:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(39);
      END_STATE();
    case 30:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(41);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(79);
      END_STATE();
    case 46:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(80);
      END_STATE();
    case 47:
      if (eof) ADVANCE(49);
      if (lookahead == '\t') ADVANCE(101);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == 'D') ADVANCE(62);
      if (lookahead == 'I') ADVANCE(64);
      if (lookahead == 'O') ADVANCE(66);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      if (lookahead == '\t') ADVANCE(101);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '@') ADVANCE(91);
      if (lookahead == 'D') ADVANCE(62);
      if (lookahead == 'I') ADVANCE(64);
      if (lookahead == 'O') ADVANCE(66);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_word_directive_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_word_directive_token2);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_single_date);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '\t') ADVANCE(103);
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(79);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(79);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(79);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ':') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(37);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(109);
      if (lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(59);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(70);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(59);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(70);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(79);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 48},
  [3] = {.lex_state = 48},
  [4] = {.lex_state = 48},
  [5] = {.lex_state = 48},
  [6] = {.lex_state = 48},
  [7] = {.lex_state = 48},
  [8] = {.lex_state = 47},
  [9] = {.lex_state = 47},
  [10] = {.lex_state = 47},
  [11] = {.lex_state = 48},
  [12] = {.lex_state = 48},
  [13] = {.lex_state = 48},
  [14] = {.lex_state = 48},
  [15] = {.lex_state = 48},
  [16] = {.lex_state = 48},
  [17] = {.lex_state = 48},
  [18] = {.lex_state = 48},
  [19] = {.lex_state = 48},
  [20] = {.lex_state = 48},
  [21] = {.lex_state = 48},
  [22] = {.lex_state = 48},
  [23] = {.lex_state = 48},
  [24] = {.lex_state = 48},
  [25] = {.lex_state = 48},
  [26] = {.lex_state = 48},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 48},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 48},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 48},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 48},
  [42] = {.lex_state = 48},
  [43] = {.lex_state = 48},
  [44] = {.lex_state = 48},
  [45] = {.lex_state = 48},
  [46] = {.lex_state = 48},
  [47] = {.lex_state = 48},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 48},
  [50] = {.lex_state = 48},
  [51] = {.lex_state = 48},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 48},
  [55] = {.lex_state = 48},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 48},
  [59] = {.lex_state = 48},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 48},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 71},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 48},
  [66] = {.lex_state = 48},
  [67] = {.lex_state = 48},
  [68] = {.lex_state = 48},
  [69] = {.lex_state = 48},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 48},
  [73] = {.lex_state = 48},
  [74] = {.lex_state = 48},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 48},
  [78] = {.lex_state = 48},
  [79] = {.lex_state = 48},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 48},
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
    [aux_sym_quantity_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_TAB] = ACTIONS(5),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_TAB2] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(78),
    [sym_journal_item] = STATE(3),
    [sym_comment] = STATE(14),
    [sym_directive] = STATE(14),
    [sym_word_directive] = STATE(15),
    [sym_char_directive] = STATE(15),
    [sym_check_in] = STATE(12),
    [sym_check_out] = STATE(12),
    [sym_xact] = STATE(14),
    [sym_plain_xact] = STATE(17),
    [sym_date] = STATE(43),
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
    [anon_sym_D] = ACTIONS(19),
    [anon_sym_i] = ACTIONS(21),
    [anon_sym_I] = ACTIONS(23),
    [anon_sym_o] = ACTIONS(25),
    [anon_sym_O] = ACTIONS(25),
    [sym_single_date] = ACTIONS(27),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_TAB] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_LF,
    ACTIONS(40), 1,
      anon_sym_end,
    ACTIONS(43), 1,
      anon_sym_alias,
    ACTIONS(46), 1,
      anon_sym_D,
    ACTIONS(49), 1,
      anon_sym_i,
    ACTIONS(52), 1,
      anon_sym_I,
    ACTIONS(58), 1,
      sym_single_date,
    STATE(17), 1,
      sym_plain_xact,
    STATE(43), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(34), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(55), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(12), 2,
      sym_check_in,
      sym_check_out,
    STATE(15), 2,
      sym_word_directive,
      sym_char_directive,
    ACTIONS(37), 3,
      anon_sym_include,
      anon_sym_account,
      anon_sym_def,
    STATE(14), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [65] = 18,
    ACTIONS(15), 1,
      anon_sym_end,
    ACTIONS(17), 1,
      anon_sym_alias,
    ACTIONS(19), 1,
      anon_sym_D,
    ACTIONS(21), 1,
      anon_sym_i,
    ACTIONS(23), 1,
      anon_sym_I,
    ACTIONS(27), 1,
      sym_single_date,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      anon_sym_LF,
    STATE(17), 1,
      sym_plain_xact,
    STATE(43), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(11), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(25), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(12), 2,
      sym_check_in,
      sym_check_out,
    STATE(15), 2,
      sym_word_directive,
      sym_char_directive,
    ACTIONS(13), 3,
      anon_sym_include,
      anon_sym_account,
      anon_sym_def,
    STATE(14), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [130] = 6,
    ACTIONS(67), 1,
      anon_sym_i,
    STATE(28), 1,
      sym_whitespace,
    STATE(30), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(69), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(65), 14,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [164] = 6,
    ACTIONS(74), 1,
      anon_sym_i,
    STATE(28), 1,
      sym_whitespace,
    STATE(30), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(76), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(72), 14,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [198] = 6,
    ACTIONS(80), 1,
      anon_sym_i,
    STATE(28), 1,
      sym_whitespace,
    STATE(30), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(76), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(78), 14,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [232] = 6,
    ACTIONS(84), 1,
      anon_sym_i,
    STATE(28), 1,
      sym_whitespace,
    STATE(30), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(76), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(82), 14,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [266] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(88), 1,
      anon_sym_i,
    STATE(57), 1,
      sym_spacer,
    ACTIONS(90), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
    ACTIONS(86), 14,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [297] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(94), 1,
      anon_sym_i,
    ACTIONS(92), 17,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [323] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(98), 1,
      anon_sym_i,
    ACTIONS(96), 17,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [349] = 3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(102), 2,
      anon_sym_i,
      anon_sym_AT,
    ACTIONS(100), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_AT_AT,
  [375] = 3,
    ACTIONS(106), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(104), 14,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [399] = 2,
    ACTIONS(110), 1,
      anon_sym_i,
    ACTIONS(108), 16,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [421] = 3,
    ACTIONS(114), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(112), 14,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [445] = 3,
    ACTIONS(118), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(116), 14,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [469] = 2,
    ACTIONS(122), 1,
      anon_sym_i,
    ACTIONS(120), 16,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [491] = 3,
    ACTIONS(126), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(124), 14,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [515] = 2,
    ACTIONS(130), 1,
      anon_sym_i,
    ACTIONS(128), 16,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [537] = 3,
    ACTIONS(134), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(132), 14,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [561] = 3,
    ACTIONS(138), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(136), 14,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [585] = 3,
    ACTIONS(142), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(140), 14,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [609] = 3,
    ACTIONS(146), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(144), 14,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [633] = 3,
    ACTIONS(150), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(148), 14,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [657] = 2,
    ACTIONS(154), 1,
      anon_sym_i,
    ACTIONS(152), 16,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [679] = 3,
    ACTIONS(158), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(156), 14,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [703] = 3,
    ACTIONS(162), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(160), 14,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_D,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [727] = 7,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(164), 1,
      anon_sym_LF,
    ACTIONS(166), 1,
      anon_sym_SEMI,
    STATE(34), 1,
      sym_spacer,
    STATE(44), 1,
      sym_values,
    STATE(61), 1,
      sym_note,
    ACTIONS(168), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [751] = 8,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(166), 1,
      anon_sym_SEMI,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      anon_sym_LBRACK,
    ACTIONS(174), 1,
      sym_account_name,
    STATE(27), 1,
      sym_account,
    STATE(59), 1,
      sym_note,
  [776] = 5,
    ACTIONS(178), 1,
      anon_sym_AT,
    ACTIONS(180), 1,
      anon_sym_AT_AT,
    STATE(49), 1,
      sym_price,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(176), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [794] = 5,
    ACTIONS(186), 1,
      anon_sym_,
    ACTIONS(188), 1,
      anon_sym_TAB,
    STATE(31), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(182), 2,
      anon_sym_SEMI,
      sym_account_name,
    ACTIONS(184), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [812] = 5,
    ACTIONS(194), 1,
      anon_sym_,
    ACTIONS(197), 1,
      anon_sym_TAB,
    STATE(31), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(190), 2,
      anon_sym_SEMI,
      sym_account_name,
    ACTIONS(192), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [830] = 5,
    ACTIONS(200), 1,
      anon_sym_DASH,
    ACTIONS(202), 1,
      aux_sym_quantity_token1,
    STATE(21), 1,
      sym_amount,
    STATE(75), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [847] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      anon_sym_LBRACK,
    ACTIONS(174), 1,
      sym_account_name,
    STATE(8), 1,
      sym_account,
  [866] = 5,
    ACTIONS(200), 1,
      anon_sym_DASH,
    ACTIONS(202), 1,
      aux_sym_quantity_token1,
    STATE(29), 1,
      sym_amount,
    STATE(75), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [883] = 4,
    ACTIONS(206), 1,
      sym_payee,
    STATE(42), 1,
      sym_status,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(204), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [898] = 4,
    STATE(28), 1,
      sym_whitespace,
    STATE(30), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(76), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [913] = 4,
    ACTIONS(184), 1,
      sym_payee,
    STATE(38), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(182), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(208), 2,
      anon_sym_,
      anon_sym_TAB,
  [928] = 4,
    ACTIONS(192), 1,
      sym_payee,
    STATE(38), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(190), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(210), 2,
      anon_sym_,
      anon_sym_TAB,
  [943] = 4,
    STATE(28), 1,
      sym_whitespace,
    STATE(30), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(76), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [958] = 5,
    ACTIONS(200), 1,
      anon_sym_DASH,
    ACTIONS(202), 1,
      aux_sym_quantity_token1,
    STATE(51), 1,
      sym_amount,
    STATE(75), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [975] = 4,
    STATE(28), 1,
      sym_whitespace,
    STATE(30), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(76), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [990] = 4,
    ACTIONS(213), 1,
      anon_sym_LF,
    STATE(37), 1,
      aux_sym_whitespace_repeat1,
    STATE(53), 1,
      sym_whitespace,
    ACTIONS(215), 2,
      anon_sym_,
      anon_sym_TAB,
  [1004] = 4,
    ACTIONS(217), 1,
      anon_sym_LF,
    STATE(35), 1,
      sym_whitespace,
    STATE(37), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(215), 2,
      anon_sym_,
      anon_sym_TAB,
  [1018] = 4,
    ACTIONS(166), 1,
      anon_sym_SEMI,
    ACTIONS(219), 1,
      anon_sym_LF,
    STATE(69), 1,
      sym_note,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1032] = 2,
    ACTIONS(223), 1,
      anon_sym_EQ,
    ACTIONS(221), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1041] = 3,
    ACTIONS(225), 1,
      sym_single_date,
    STATE(73), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1052] = 3,
    ACTIONS(225), 1,
      sym_single_date,
    STATE(74), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1063] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(227), 2,
      anon_sym_DASH,
      aux_sym_quantity_token1,
  [1072] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(229), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1081] = 3,
    ACTIONS(221), 1,
      sym_time,
    ACTIONS(231), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1092] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(233), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1101] = 2,
    ACTIONS(235), 1,
      aux_sym_quantity_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1109] = 2,
    ACTIONS(237), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1117] = 2,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1125] = 2,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1133] = 2,
    ACTIONS(241), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1141] = 2,
    ACTIONS(243), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1149] = 2,
    ACTIONS(245), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1157] = 2,
    ACTIONS(247), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1165] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(249), 1,
      sym_account_name,
  [1175] = 2,
    ACTIONS(219), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1183] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(251), 1,
      sym_account_name,
  [1193] = 2,
    ACTIONS(253), 1,
      aux_sym_note_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1201] = 2,
    ACTIONS(255), 1,
      aux_sym_comment_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1209] = 2,
    ACTIONS(257), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1217] = 2,
    ACTIONS(213), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1225] = 1,
    ACTIONS(259), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1231] = 1,
    ACTIONS(261), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1237] = 2,
    ACTIONS(263), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1245] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(265), 1,
      sym_commodity,
  [1255] = 2,
    ACTIONS(267), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1263] = 2,
    ACTIONS(269), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1271] = 2,
    ACTIONS(271), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1279] = 2,
    ACTIONS(273), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1287] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(275), 1,
      sym_commodity,
  [1297] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(277), 1,
      sym_commodity,
  [1307] = 2,
    ACTIONS(279), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1315] = 2,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1323] = 2,
    ACTIONS(261), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1331] = 2,
    ACTIONS(283), 1,
      aux_sym_word_directive_token2,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1339] = 2,
    ACTIONS(285), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1347] = 2,
    ACTIONS(287), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 65,
  [SMALL_STATE(4)] = 130,
  [SMALL_STATE(5)] = 164,
  [SMALL_STATE(6)] = 198,
  [SMALL_STATE(7)] = 232,
  [SMALL_STATE(8)] = 266,
  [SMALL_STATE(9)] = 297,
  [SMALL_STATE(10)] = 323,
  [SMALL_STATE(11)] = 349,
  [SMALL_STATE(12)] = 375,
  [SMALL_STATE(13)] = 399,
  [SMALL_STATE(14)] = 421,
  [SMALL_STATE(15)] = 445,
  [SMALL_STATE(16)] = 469,
  [SMALL_STATE(17)] = 491,
  [SMALL_STATE(18)] = 515,
  [SMALL_STATE(19)] = 537,
  [SMALL_STATE(20)] = 561,
  [SMALL_STATE(21)] = 585,
  [SMALL_STATE(22)] = 609,
  [SMALL_STATE(23)] = 633,
  [SMALL_STATE(24)] = 657,
  [SMALL_STATE(25)] = 679,
  [SMALL_STATE(26)] = 703,
  [SMALL_STATE(27)] = 727,
  [SMALL_STATE(28)] = 751,
  [SMALL_STATE(29)] = 776,
  [SMALL_STATE(30)] = 794,
  [SMALL_STATE(31)] = 812,
  [SMALL_STATE(32)] = 830,
  [SMALL_STATE(33)] = 847,
  [SMALL_STATE(34)] = 866,
  [SMALL_STATE(35)] = 883,
  [SMALL_STATE(36)] = 898,
  [SMALL_STATE(37)] = 913,
  [SMALL_STATE(38)] = 928,
  [SMALL_STATE(39)] = 943,
  [SMALL_STATE(40)] = 958,
  [SMALL_STATE(41)] = 975,
  [SMALL_STATE(42)] = 990,
  [SMALL_STATE(43)] = 1004,
  [SMALL_STATE(44)] = 1018,
  [SMALL_STATE(45)] = 1032,
  [SMALL_STATE(46)] = 1041,
  [SMALL_STATE(47)] = 1052,
  [SMALL_STATE(48)] = 1063,
  [SMALL_STATE(49)] = 1072,
  [SMALL_STATE(50)] = 1081,
  [SMALL_STATE(51)] = 1092,
  [SMALL_STATE(52)] = 1101,
  [SMALL_STATE(53)] = 1109,
  [SMALL_STATE(54)] = 1117,
  [SMALL_STATE(55)] = 1125,
  [SMALL_STATE(56)] = 1133,
  [SMALL_STATE(57)] = 1141,
  [SMALL_STATE(58)] = 1149,
  [SMALL_STATE(59)] = 1157,
  [SMALL_STATE(60)] = 1165,
  [SMALL_STATE(61)] = 1175,
  [SMALL_STATE(62)] = 1183,
  [SMALL_STATE(63)] = 1193,
  [SMALL_STATE(64)] = 1201,
  [SMALL_STATE(65)] = 1209,
  [SMALL_STATE(66)] = 1217,
  [SMALL_STATE(67)] = 1225,
  [SMALL_STATE(68)] = 1231,
  [SMALL_STATE(69)] = 1237,
  [SMALL_STATE(70)] = 1245,
  [SMALL_STATE(71)] = 1255,
  [SMALL_STATE(72)] = 1263,
  [SMALL_STATE(73)] = 1271,
  [SMALL_STATE(74)] = 1279,
  [SMALL_STATE(75)] = 1287,
  [SMALL_STATE(76)] = 1297,
  [SMALL_STATE(77)] = 1307,
  [SMALL_STATE(78)] = 1315,
  [SMALL_STATE(79)] = 1323,
  [SMALL_STATE(80)] = 1331,
  [SMALL_STATE(81)] = 1339,
  [SMALL_STATE(82)] = 1347,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(30),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_in, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 4),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_in, 6),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_out, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whitespace, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_whitespace, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(31),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(31),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(38),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spacer, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spacer, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [281] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
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
