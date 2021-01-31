#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
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
  sym_single_date = 13,
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
  sym_date = 38,
  sym_status = 39,
  sym_note = 40,
  sym_posting = 41,
  sym_account = 42,
  sym_values = 43,
  sym_amount_expr = 44,
  sym_quantity = 45,
  sym_price = 46,
  sym_whitespace = 47,
  sym_spacer = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym_plain_xact_repeat1 = 50,
  aux_sym_whitespace_repeat1 = 51,
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
  [sym_single_date] = "single_date",
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
  [sym_date] = "date",
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
  [sym_single_date] = sym_single_date,
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
  [sym_date] = sym_date,
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
  [sym_single_date] = {
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
      if (eof) ADVANCE(42);
      if (lookahead == '\t') ADVANCE(88);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == ' ') ADVANCE(81);
      if (lookahead == '!') ADVANCE(56);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '@') ADVANCE(78);
      if (lookahead == '[') ADVANCE(63);
      if (lookahead == ']') ADVANCE(65);
      if (lookahead == 'a') ADVANCE(10);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(88);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(88);
      if (lookahead == ' ') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(94);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(93);
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead == '!') ADVANCE(56);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(89);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(92);
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(52);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(54);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 28:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(34);
      END_STATE();
    case 29:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(35);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 40:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(67);
      END_STATE();
    case 41:
      if (eof) ADVANCE(42);
      if (lookahead == '\t') ADVANCE(88);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '@') ADVANCE(78);
      if (lookahead == ']') ADVANCE(65);
      if (lookahead == 'a') ADVANCE(10);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_word_directive_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_word_directive_token2);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_single_date);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '\t') ADVANCE(90);
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(33);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(96);
      if (lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(52);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(57);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(52);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(57);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 41},
  [2] = {.lex_state = 41},
  [3] = {.lex_state = 41},
  [4] = {.lex_state = 41},
  [5] = {.lex_state = 41},
  [6] = {.lex_state = 41},
  [7] = {.lex_state = 41},
  [8] = {.lex_state = 41},
  [9] = {.lex_state = 41},
  [10] = {.lex_state = 41},
  [11] = {.lex_state = 41},
  [12] = {.lex_state = 41},
  [13] = {.lex_state = 41},
  [14] = {.lex_state = 41},
  [15] = {.lex_state = 41},
  [16] = {.lex_state = 41},
  [17] = {.lex_state = 41},
  [18] = {.lex_state = 41},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 41},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 41},
  [25] = {.lex_state = 41},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 41},
  [33] = {.lex_state = 41},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 41},
  [36] = {.lex_state = 41},
  [37] = {.lex_state = 41},
  [38] = {.lex_state = 41},
  [39] = {.lex_state = 41},
  [40] = {.lex_state = 41},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 41},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 41},
  [45] = {.lex_state = 41},
  [46] = {.lex_state = 41},
  [47] = {.lex_state = 41},
  [48] = {.lex_state = 41},
  [49] = {.lex_state = 41},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 41},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 58},
  [58] = {.lex_state = 41},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 41},
  [61] = {.lex_state = 41},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 41},
  [64] = {.lex_state = 41},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 7},
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
    [sym_single_date] = ACTIONS(1),
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
    [sym_source_file] = STATE(64),
    [sym_journal_item] = STATE(3),
    [sym_comment] = STATE(11),
    [sym_directive] = STATE(11),
    [sym_word_directive] = STATE(12),
    [sym_xact] = STATE(11),
    [sym_plain_xact] = STATE(8),
    [sym_date] = STATE(36),
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
    [sym_single_date] = ACTIONS(19),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_TAB] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_LF,
    ACTIONS(32), 1,
      anon_sym_end,
    ACTIONS(35), 1,
      anon_sym_alias,
    ACTIONS(38), 1,
      sym_single_date,
    STATE(8), 1,
      sym_plain_xact,
    STATE(12), 1,
      sym_word_directive,
    STATE(36), 1,
      sym_date,
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
    STATE(11), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [47] = 13,
    ACTIONS(15), 1,
      anon_sym_end,
    ACTIONS(17), 1,
      anon_sym_alias,
    ACTIONS(19), 1,
      sym_single_date,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_LF,
    STATE(8), 1,
      sym_plain_xact,
    STATE(12), 1,
      sym_word_directive,
    STATE(36), 1,
      sym_date,
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
    STATE(11), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [94] = 5,
    STATE(20), 1,
      sym_whitespace,
    STATE(21), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(47), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
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
      sym_single_date,
  [121] = 5,
    STATE(20), 1,
      sym_whitespace,
    STATE(21), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(52), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(50), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      sym_single_date,
  [148] = 5,
    STATE(20), 1,
      sym_whitespace,
    STATE(21), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(52), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(54), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      sym_single_date,
  [175] = 5,
    STATE(20), 1,
      sym_whitespace,
    STATE(21), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(52), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(56), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      sym_single_date,
  [202] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
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
      sym_single_date,
  [219] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
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
      sym_single_date,
  [236] = 1,
    ACTIONS(62), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [251] = 2,
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
      sym_single_date,
  [268] = 2,
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
      sym_single_date,
  [285] = 1,
    ACTIONS(68), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [300] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(70), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      sym_single_date,
  [317] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(72), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      sym_single_date,
  [334] = 1,
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
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [349] = 2,
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
      sym_single_date,
  [366] = 1,
    ACTIONS(78), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [381] = 7,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(80), 1,
      anon_sym_LF,
    ACTIONS(82), 1,
      anon_sym_SEMI,
    STATE(34), 1,
      sym_spacer,
    STATE(37), 1,
      sym_values,
    STATE(45), 1,
      sym_note,
    ACTIONS(84), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [405] = 8,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(82), 1,
      anon_sym_SEMI,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(90), 1,
      sym_account_name,
    STATE(19), 1,
      sym_account,
    STATE(48), 1,
      sym_note,
  [430] = 5,
    ACTIONS(96), 1,
      anon_sym_,
    ACTIONS(98), 1,
      anon_sym_TAB,
    STATE(23), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(92), 2,
      anon_sym_SEMI,
      sym_account_name,
    ACTIONS(94), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [448] = 5,
    ACTIONS(102), 1,
      anon_sym_AT,
    ACTIONS(104), 1,
      anon_sym_AT_AT,
    STATE(39), 1,
      sym_price,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(100), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [466] = 5,
    ACTIONS(110), 1,
      anon_sym_,
    ACTIONS(113), 1,
      anon_sym_TAB,
    STATE(23), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(106), 2,
      anon_sym_SEMI,
      sym_account_name,
    ACTIONS(108), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [484] = 4,
    STATE(20), 1,
      sym_whitespace,
    STATE(21), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(52), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [499] = 4,
    STATE(20), 1,
      sym_whitespace,
    STATE(21), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(52), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [514] = 4,
    ACTIONS(108), 1,
      sym_payee,
    STATE(26), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(106), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(116), 2,
      anon_sym_,
      anon_sym_TAB,
  [529] = 5,
    ACTIONS(119), 1,
      anon_sym_DASH,
    ACTIONS(121), 1,
      aux_sym_quantity_token1,
    STATE(40), 1,
      sym_amount_expr,
    STATE(56), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [546] = 4,
    ACTIONS(94), 1,
      sym_payee,
    STATE(26), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(92), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(123), 2,
      anon_sym_,
      anon_sym_TAB,
  [561] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(125), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [572] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(127), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [583] = 4,
    ACTIONS(131), 1,
      sym_payee,
    STATE(35), 1,
      sym_status,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(129), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [598] = 4,
    STATE(20), 1,
      sym_whitespace,
    STATE(21), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(52), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [613] = 3,
    ACTIONS(135), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(133), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_AT_AT,
  [626] = 5,
    ACTIONS(119), 1,
      anon_sym_DASH,
    ACTIONS(121), 1,
      aux_sym_quantity_token1,
    STATE(22), 1,
      sym_amount_expr,
    STATE(56), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [643] = 4,
    ACTIONS(137), 1,
      anon_sym_LF,
    STATE(28), 1,
      aux_sym_whitespace_repeat1,
    STATE(43), 1,
      sym_whitespace,
    ACTIONS(139), 2,
      anon_sym_,
      anon_sym_TAB,
  [657] = 4,
    ACTIONS(141), 1,
      anon_sym_LF,
    STATE(28), 1,
      aux_sym_whitespace_repeat1,
    STATE(31), 1,
      sym_whitespace,
    ACTIONS(139), 2,
      anon_sym_,
      anon_sym_TAB,
  [671] = 4,
    ACTIONS(82), 1,
      anon_sym_SEMI,
    ACTIONS(143), 1,
      anon_sym_LF,
    STATE(52), 1,
      sym_note,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [685] = 2,
    ACTIONS(147), 1,
      anon_sym_EQ,
    ACTIONS(145), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [694] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(149), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [703] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(151), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [712] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(153), 2,
      anon_sym_DASH,
      aux_sym_quantity_token1,
  [721] = 2,
    ACTIONS(155), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [729] = 2,
    ACTIONS(157), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [737] = 2,
    ACTIONS(159), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [745] = 2,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [753] = 2,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [761] = 2,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [769] = 2,
    ACTIONS(163), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [777] = 2,
    ACTIONS(165), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [785] = 2,
    ACTIONS(167), 1,
      aux_sym_comment_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [793] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(169), 1,
      sym_account_name,
  [803] = 2,
    ACTIONS(171), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [811] = 2,
    ACTIONS(173), 1,
      aux_sym_quantity_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [819] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(175), 1,
      sym_commodity,
  [829] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(177), 1,
      sym_account_name,
  [839] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(179), 1,
      sym_commodity,
  [849] = 2,
    ACTIONS(181), 1,
      aux_sym_note_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [857] = 2,
    ACTIONS(137), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [865] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(183), 1,
      sym_commodity,
  [875] = 1,
    ACTIONS(185), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [881] = 1,
    ACTIONS(187), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [887] = 2,
    ACTIONS(189), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [895] = 2,
    ACTIONS(191), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [903] = 2,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [911] = 2,
    ACTIONS(195), 1,
      aux_sym_word_directive_token2,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [919] = 2,
    ACTIONS(197), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 121,
  [SMALL_STATE(6)] = 148,
  [SMALL_STATE(7)] = 175,
  [SMALL_STATE(8)] = 202,
  [SMALL_STATE(9)] = 219,
  [SMALL_STATE(10)] = 236,
  [SMALL_STATE(11)] = 251,
  [SMALL_STATE(12)] = 268,
  [SMALL_STATE(13)] = 285,
  [SMALL_STATE(14)] = 300,
  [SMALL_STATE(15)] = 317,
  [SMALL_STATE(16)] = 334,
  [SMALL_STATE(17)] = 349,
  [SMALL_STATE(18)] = 366,
  [SMALL_STATE(19)] = 381,
  [SMALL_STATE(20)] = 405,
  [SMALL_STATE(21)] = 430,
  [SMALL_STATE(22)] = 448,
  [SMALL_STATE(23)] = 466,
  [SMALL_STATE(24)] = 484,
  [SMALL_STATE(25)] = 499,
  [SMALL_STATE(26)] = 514,
  [SMALL_STATE(27)] = 529,
  [SMALL_STATE(28)] = 546,
  [SMALL_STATE(29)] = 561,
  [SMALL_STATE(30)] = 572,
  [SMALL_STATE(31)] = 583,
  [SMALL_STATE(32)] = 598,
  [SMALL_STATE(33)] = 613,
  [SMALL_STATE(34)] = 626,
  [SMALL_STATE(35)] = 643,
  [SMALL_STATE(36)] = 657,
  [SMALL_STATE(37)] = 671,
  [SMALL_STATE(38)] = 685,
  [SMALL_STATE(39)] = 694,
  [SMALL_STATE(40)] = 703,
  [SMALL_STATE(41)] = 712,
  [SMALL_STATE(42)] = 721,
  [SMALL_STATE(43)] = 729,
  [SMALL_STATE(44)] = 737,
  [SMALL_STATE(45)] = 745,
  [SMALL_STATE(46)] = 753,
  [SMALL_STATE(47)] = 761,
  [SMALL_STATE(48)] = 769,
  [SMALL_STATE(49)] = 777,
  [SMALL_STATE(50)] = 785,
  [SMALL_STATE(51)] = 793,
  [SMALL_STATE(52)] = 803,
  [SMALL_STATE(53)] = 811,
  [SMALL_STATE(54)] = 819,
  [SMALL_STATE(55)] = 829,
  [SMALL_STATE(56)] = 839,
  [SMALL_STATE(57)] = 849,
  [SMALL_STATE(58)] = 857,
  [SMALL_STATE(59)] = 865,
  [SMALL_STATE(60)] = 875,
  [SMALL_STATE(61)] = 881,
  [SMALL_STATE(62)] = 887,
  [SMALL_STATE(63)] = 895,
  [SMALL_STATE(64)] = 903,
  [SMALL_STATE(65)] = 911,
  [SMALL_STATE(66)] = 919,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(21),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 4),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whitespace, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_whitespace, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(23),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(23),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(26),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_expr, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount_expr, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spacer, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [193] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
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
