#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 68
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
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
  sym_date = 13,
  anon_sym_BANG = 14,
  sym_payee = 15,
  aux_sym_note_token1 = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK = 20,
  sym_account_name = 21,
  anon_sym_DASH = 22,
  aux_sym_quantity_token1 = 23,
  sym_commodity = 24,
  anon_sym_AT = 25,
  anon_sym_AT_AT = 26,
  anon_sym_ = 27,
  anon_sym_TAB = 28,
  anon_sym_2 = 29,
  anon_sym_TAB2 = 30,
  sym_source_file = 31,
  sym_journal_item = 32,
  sym_comment = 33,
  sym_directive = 34,
  sym_word_directive = 35,
  sym_xact = 36,
  sym_plain_xact = 37,
  sym_status = 38,
  sym_note = 39,
  sym_posting = 40,
  sym_account = 41,
  sym_values = 42,
  sym_amount_expr = 43,
  sym_quantity = 44,
  sym_price = 45,
  sym_whitespace = 46,
  sym_spacer = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym_plain_xact_repeat1 = 49,
  aux_sym_whitespace_repeat1 = 50,
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
  [sym_date] = "date",
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
  [sym_xact] = "xact",
  [sym_plain_xact] = "plain_xact",
  [sym_status] = "status",
  [sym_note] = "note",
  [sym_posting] = "posting",
  [sym_account] = "account",
  [sym_values] = "values",
  [sym_amount_expr] = "amount_expr",
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
  [sym_date] = sym_date,
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
  [sym_xact] = sym_xact,
  [sym_plain_xact] = sym_plain_xact,
  [sym_status] = sym_status,
  [sym_note] = sym_note,
  [sym_posting] = sym_posting,
  [sym_account] = sym_account,
  [sym_values] = sym_values,
  [sym_amount_expr] = sym_amount_expr,
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
  [sym_date] = {
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
  [sym_xact] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_xact] = {
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
  [sym_amount_expr] = {
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
      if (eof) ADVANCE(52);
      if (lookahead == '\t') ADVANCE(99);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == '!') ADVANCE(67);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == ';') ADVANCE(54);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(99);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(77);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(99);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == ';') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(99);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(77);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(99);
      if (lookahead == ' ') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(104);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == '!') ADVANCE(67);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(101);
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(103);
      if (lookahead == ' ') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(62);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(100);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(64);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 29:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(38);
      END_STATE();
    case 30:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(39);
      END_STATE();
    case 31:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(40);
      END_STATE();
    case 32:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(45);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(78);
      END_STATE();
    case 51:
      if (eof) ADVANCE(52);
      if (lookahead == '\t') ADVANCE(99);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == ';') ADVANCE(54);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_word_directive_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_word_directive_token2);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '=') ADVANCE(41);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '\t') ADVANCE(102);
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(77);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(77);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(37);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(107);
      if (lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(108);
      if (lookahead == ' ') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(68);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(62);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(62);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(68);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(68);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_TAB2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(68);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 51},
  [2] = {.lex_state = 51},
  [3] = {.lex_state = 51},
  [4] = {.lex_state = 51},
  [5] = {.lex_state = 51},
  [6] = {.lex_state = 51},
  [7] = {.lex_state = 51},
  [8] = {.lex_state = 51},
  [9] = {.lex_state = 51},
  [10] = {.lex_state = 51},
  [11] = {.lex_state = 51},
  [12] = {.lex_state = 51},
  [13] = {.lex_state = 51},
  [14] = {.lex_state = 51},
  [15] = {.lex_state = 51},
  [16] = {.lex_state = 51},
  [17] = {.lex_state = 51},
  [18] = {.lex_state = 51},
  [19] = {.lex_state = 51},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 51},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 51},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 51},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 51},
  [32] = {.lex_state = 51},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 51},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 51},
  [40] = {.lex_state = 51},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 51},
  [43] = {.lex_state = 51},
  [44] = {.lex_state = 51},
  [45] = {.lex_state = 51},
  [46] = {.lex_state = 51},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 51},
  [49] = {.lex_state = 69},
  [50] = {.lex_state = 51},
  [51] = {.lex_state = 51},
  [52] = {.lex_state = 51},
  [53] = {.lex_state = 51},
  [54] = {.lex_state = 51},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 51},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 51},
  [60] = {.lex_state = 51},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 51},
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
    [sym_date] = ACTIONS(1),
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
    [sym_source_file] = STATE(59),
    [sym_journal_item] = STATE(3),
    [sym_comment] = STATE(17),
    [sym_directive] = STATE(17),
    [sym_word_directive] = STATE(11),
    [sym_xact] = STATE(17),
    [sym_plain_xact] = STATE(12),
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
    [sym_date] = ACTIONS(19),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_TAB] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_LF,
    ACTIONS(32), 1,
      anon_sym_end,
    ACTIONS(35), 1,
      anon_sym_alias,
    ACTIONS(38), 1,
      sym_date,
    STATE(11), 1,
      sym_word_directive,
    STATE(12), 1,
      sym_plain_xact,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(26), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    ACTIONS(29), 3,
      anon_sym_include,
      anon_sym_account,
      anon_sym_def,
    STATE(17), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [44] = 12,
    ACTIONS(15), 1,
      anon_sym_end,
    ACTIONS(17), 1,
      anon_sym_alias,
    ACTIONS(19), 1,
      sym_date,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_LF,
    STATE(11), 1,
      sym_word_directive,
    STATE(12), 1,
      sym_plain_xact,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(11), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    ACTIONS(13), 3,
      anon_sym_include,
      anon_sym_account,
      anon_sym_def,
    STATE(17), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [88] = 5,
    STATE(26), 1,
      aux_sym_whitespace_repeat1,
    STATE(35), 1,
      sym_whitespace,
    ACTIONS(47), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(45), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      sym_date,
  [115] = 5,
    STATE(26), 1,
      aux_sym_whitespace_repeat1,
    STATE(35), 1,
      sym_whitespace,
    ACTIONS(47), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(49), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      sym_date,
  [142] = 5,
    STATE(26), 1,
      aux_sym_whitespace_repeat1,
    STATE(35), 1,
      sym_whitespace,
    ACTIONS(47), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(51), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      sym_date,
  [169] = 5,
    STATE(26), 1,
      aux_sym_whitespace_repeat1,
    STATE(35), 1,
      sym_whitespace,
    ACTIONS(55), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(53), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      sym_date,
  [196] = 5,
    STATE(26), 1,
      aux_sym_whitespace_repeat1,
    STATE(35), 1,
      sym_whitespace,
    ACTIONS(47), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(58), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      sym_date,
  [223] = 5,
    STATE(26), 1,
      aux_sym_whitespace_repeat1,
    STATE(35), 1,
      sym_whitespace,
    ACTIONS(47), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(60), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      sym_date,
  [250] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(62), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      sym_date,
  [267] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(64), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      sym_date,
  [284] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(66), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      sym_date,
  [301] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(68), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      sym_date,
  [318] = 1,
    ACTIONS(70), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      sym_date,
      anon_sym_,
      anon_sym_TAB,
  [333] = 1,
    ACTIONS(72), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      sym_date,
      anon_sym_,
      anon_sym_TAB,
  [348] = 1,
    ACTIONS(74), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      sym_date,
      anon_sym_,
      anon_sym_TAB,
  [363] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(76), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      sym_date,
  [380] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(78), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      sym_date,
  [397] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(80), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      sym_date,
  [414] = 7,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(82), 1,
      anon_sym_LF,
    ACTIONS(86), 1,
      sym_payee,
    STATE(23), 1,
      sym_status,
    STATE(43), 1,
      sym_spacer,
    ACTIONS(84), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(88), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [439] = 7,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(90), 1,
      anon_sym_LF,
    ACTIONS(92), 1,
      anon_sym_SEMI,
    STATE(28), 1,
      sym_spacer,
    STATE(40), 1,
      sym_values,
    STATE(48), 1,
      sym_note,
    ACTIONS(94), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [463] = 5,
    ACTIONS(98), 1,
      anon_sym_AT,
    ACTIONS(100), 1,
      anon_sym_AT_AT,
    STATE(44), 1,
      sym_price,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(96), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [481] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(102), 1,
      anon_sym_LF,
    ACTIONS(104), 1,
      sym_payee,
    STATE(46), 1,
      sym_spacer,
    ACTIONS(88), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [499] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(106), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [510] = 4,
    STATE(26), 1,
      aux_sym_whitespace_repeat1,
    STATE(35), 1,
      sym_whitespace,
    ACTIONS(47), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(9), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [525] = 3,
    STATE(37), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(110), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(108), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [538] = 4,
    STATE(26), 1,
      aux_sym_whitespace_repeat1,
    STATE(35), 1,
      sym_whitespace,
    ACTIONS(47), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(8), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [553] = 5,
    ACTIONS(112), 1,
      anon_sym_DASH,
    ACTIONS(114), 1,
      aux_sym_quantity_token1,
    STATE(22), 1,
      sym_amount_expr,
    STATE(58), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [570] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(116), 1,
      anon_sym_LF,
    STATE(42), 1,
      sym_spacer,
    ACTIONS(94), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [585] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(102), 1,
      anon_sym_LF,
    STATE(46), 1,
      sym_spacer,
    ACTIONS(94), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [600] = 3,
    ACTIONS(120), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(118), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_AT_AT,
  [613] = 4,
    STATE(26), 1,
      aux_sym_whitespace_repeat1,
    STATE(35), 1,
      sym_whitespace,
    ACTIONS(47), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [628] = 5,
    ACTIONS(112), 1,
      anon_sym_DASH,
    ACTIONS(114), 1,
      aux_sym_quantity_token1,
    STATE(45), 1,
      sym_amount_expr,
    STATE(58), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [645] = 4,
    STATE(26), 1,
      aux_sym_whitespace_repeat1,
    STATE(35), 1,
      sym_whitespace,
    ACTIONS(47), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [660] = 5,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      sym_account_name,
    STATE(21), 1,
      sym_account,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [677] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(128), 1,
      anon_sym_LF,
    ACTIONS(130), 4,
      sym_payee,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [690] = 3,
    STATE(37), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(134), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(132), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [703] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(137), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [714] = 4,
    STATE(26), 1,
      aux_sym_whitespace_repeat1,
    STATE(35), 1,
      sym_whitespace,
    ACTIONS(47), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [729] = 4,
    ACTIONS(92), 1,
      anon_sym_SEMI,
    ACTIONS(139), 1,
      anon_sym_LF,
    STATE(54), 1,
      sym_note,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [743] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(141), 3,
      anon_sym_SEMI,
      anon_sym_DASH,
      aux_sym_quantity_token1,
  [753] = 3,
    ACTIONS(92), 1,
      anon_sym_SEMI,
    STATE(51), 1,
      sym_note,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [764] = 3,
    ACTIONS(92), 1,
      anon_sym_SEMI,
    STATE(67), 1,
      sym_note,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [775] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(143), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [784] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(145), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [793] = 3,
    ACTIONS(92), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      sym_note,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [804] = 2,
    ACTIONS(147), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [812] = 2,
    ACTIONS(139), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [820] = 2,
    ACTIONS(149), 1,
      aux_sym_note_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [828] = 2,
    ACTIONS(151), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [836] = 2,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [844] = 2,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [852] = 2,
    ACTIONS(155), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [860] = 2,
    ACTIONS(157), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [868] = 2,
    ACTIONS(159), 1,
      aux_sym_quantity_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [876] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(161), 1,
      sym_commodity,
  [886] = 2,
    ACTIONS(163), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [894] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(165), 1,
      sym_commodity,
  [904] = 2,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [912] = 2,
    ACTIONS(169), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [920] = 2,
    ACTIONS(171), 1,
      aux_sym_word_directive_token2,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [928] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(173), 1,
      sym_commodity,
  [938] = 2,
    ACTIONS(175), 1,
      aux_sym_comment_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [946] = 2,
    ACTIONS(177), 1,
      sym_account_name,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [954] = 2,
    ACTIONS(179), 1,
      sym_account_name,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [962] = 2,
    ACTIONS(181), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [970] = 2,
    ACTIONS(116), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 115,
  [SMALL_STATE(6)] = 142,
  [SMALL_STATE(7)] = 169,
  [SMALL_STATE(8)] = 196,
  [SMALL_STATE(9)] = 223,
  [SMALL_STATE(10)] = 250,
  [SMALL_STATE(11)] = 267,
  [SMALL_STATE(12)] = 284,
  [SMALL_STATE(13)] = 301,
  [SMALL_STATE(14)] = 318,
  [SMALL_STATE(15)] = 333,
  [SMALL_STATE(16)] = 348,
  [SMALL_STATE(17)] = 363,
  [SMALL_STATE(18)] = 380,
  [SMALL_STATE(19)] = 397,
  [SMALL_STATE(20)] = 414,
  [SMALL_STATE(21)] = 439,
  [SMALL_STATE(22)] = 463,
  [SMALL_STATE(23)] = 481,
  [SMALL_STATE(24)] = 499,
  [SMALL_STATE(25)] = 510,
  [SMALL_STATE(26)] = 525,
  [SMALL_STATE(27)] = 538,
  [SMALL_STATE(28)] = 553,
  [SMALL_STATE(29)] = 570,
  [SMALL_STATE(30)] = 585,
  [SMALL_STATE(31)] = 600,
  [SMALL_STATE(32)] = 613,
  [SMALL_STATE(33)] = 628,
  [SMALL_STATE(34)] = 645,
  [SMALL_STATE(35)] = 660,
  [SMALL_STATE(36)] = 677,
  [SMALL_STATE(37)] = 690,
  [SMALL_STATE(38)] = 703,
  [SMALL_STATE(39)] = 714,
  [SMALL_STATE(40)] = 729,
  [SMALL_STATE(41)] = 743,
  [SMALL_STATE(42)] = 753,
  [SMALL_STATE(43)] = 764,
  [SMALL_STATE(44)] = 775,
  [SMALL_STATE(45)] = 784,
  [SMALL_STATE(46)] = 793,
  [SMALL_STATE(47)] = 804,
  [SMALL_STATE(48)] = 812,
  [SMALL_STATE(49)] = 820,
  [SMALL_STATE(50)] = 828,
  [SMALL_STATE(51)] = 836,
  [SMALL_STATE(52)] = 844,
  [SMALL_STATE(53)] = 852,
  [SMALL_STATE(54)] = 860,
  [SMALL_STATE(55)] = 868,
  [SMALL_STATE(56)] = 876,
  [SMALL_STATE(57)] = 886,
  [SMALL_STATE(58)] = 894,
  [SMALL_STATE(59)] = 904,
  [SMALL_STATE(60)] = 912,
  [SMALL_STATE(61)] = 920,
  [SMALL_STATE(62)] = 928,
  [SMALL_STATE(63)] = 938,
  [SMALL_STATE(64)] = 946,
  [SMALL_STATE(65)] = 954,
  [SMALL_STATE(66)] = 962,
  [SMALL_STATE(67)] = 970,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 6),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(26),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 4),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_whitespace, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_expr, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount_expr, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(37),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spacer, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [167] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
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
