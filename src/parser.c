#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 65
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
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(88);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(88);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(88);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(88);
      if (lookahead == ' ') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(93);
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead == '!') ADVANCE(56);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(89);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(92);
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(52);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(46);
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
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(54);
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
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 29:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(35);
      END_STATE();
    case 30:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(36);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
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
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
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
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
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
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(34);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(36);
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
      if (lookahead == '\t') ADVANCE(95);
      if (lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead != 0) ADVANCE(9);
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
      if (lookahead != 0) ADVANCE(9);
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
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 95:
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
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 41},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 41},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 41},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 41},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 41},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 41},
  [35] = {.lex_state = 41},
  [36] = {.lex_state = 41},
  [37] = {.lex_state = 41},
  [38] = {.lex_state = 41},
  [39] = {.lex_state = 41},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 41},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 58},
  [44] = {.lex_state = 41},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 41},
  [47] = {.lex_state = 41},
  [48] = {.lex_state = 41},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 41},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 41},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 41},
  [59] = {.lex_state = 41},
  [60] = {.lex_state = 41},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 41},
  [64] = {.lex_state = 41},
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
    [sym_source_file] = STATE(41),
    [sym_journal_item] = STATE(3),
    [sym_comment] = STATE(11),
    [sym_directive] = STATE(11),
    [sym_word_directive] = STATE(12),
    [sym_xact] = STATE(11),
    [sym_plain_xact] = STATE(13),
    [sym_date] = STATE(35),
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
    STATE(12), 1,
      sym_word_directive,
    STATE(13), 1,
      sym_plain_xact,
    STATE(35), 1,
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
    STATE(12), 1,
      sym_word_directive,
    STATE(13), 1,
      sym_plain_xact,
    STATE(35), 1,
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
    STATE(24), 1,
      aux_sym_whitespace_repeat1,
    STATE(25), 1,
      sym_whitespace,
    ACTIONS(47), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
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
    STATE(24), 1,
      aux_sym_whitespace_repeat1,
    STATE(25), 1,
      sym_whitespace,
    ACTIONS(47), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
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
      sym_single_date,
  [148] = 5,
    STATE(24), 1,
      aux_sym_whitespace_repeat1,
    STATE(25), 1,
      sym_whitespace,
    ACTIONS(53), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
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
      sym_single_date,
  [175] = 5,
    STATE(24), 1,
      aux_sym_whitespace_repeat1,
    STATE(25), 1,
      sym_whitespace,
    ACTIONS(47), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
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
  [202] = 1,
    ACTIONS(58), 12,
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
  [217] = 2,
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
  [234] = 1,
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
  [249] = 2,
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
  [266] = 2,
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
  [283] = 2,
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
      sym_single_date,
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
  [366] = 7,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(78), 1,
      anon_sym_LF,
    ACTIONS(80), 1,
      anon_sym_SEMI,
    STATE(30), 1,
      sym_spacer,
    STATE(34), 1,
      sym_values,
    STATE(44), 1,
      sym_note,
    ACTIONS(82), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [390] = 5,
    ACTIONS(86), 1,
      anon_sym_AT,
    ACTIONS(88), 1,
      anon_sym_AT_AT,
    STATE(38), 1,
      sym_price,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(84), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [408] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(90), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [419] = 4,
    STATE(24), 1,
      aux_sym_whitespace_repeat1,
    STATE(25), 1,
      sym_whitespace,
    ACTIONS(47), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [434] = 4,
    ACTIONS(94), 1,
      sym_payee,
    STATE(29), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(92), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(96), 2,
      anon_sym_,
      anon_sym_TAB,
  [449] = 3,
    STATE(23), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(100), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(98), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [462] = 3,
    STATE(23), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(103), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(94), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [475] = 5,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    ACTIONS(109), 1,
      sym_account_name,
    STATE(18), 1,
      sym_account,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [492] = 3,
    ACTIONS(113), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(111), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_AT_AT,
  [505] = 5,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(117), 1,
      aux_sym_quantity_token1,
    STATE(37), 1,
      sym_amount_expr,
    STATE(54), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [522] = 4,
    STATE(24), 1,
      aux_sym_whitespace_repeat1,
    STATE(25), 1,
      sym_whitespace,
    ACTIONS(47), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [537] = 4,
    ACTIONS(98), 1,
      sym_payee,
    STATE(29), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(119), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(121), 2,
      anon_sym_,
      anon_sym_TAB,
  [552] = 5,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(117), 1,
      aux_sym_quantity_token1,
    STATE(19), 1,
      sym_amount_expr,
    STATE(54), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [569] = 4,
    STATE(24), 1,
      aux_sym_whitespace_repeat1,
    STATE(25), 1,
      sym_whitespace,
    ACTIONS(47), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [584] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(124), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [595] = 4,
    ACTIONS(128), 1,
      sym_payee,
    STATE(36), 1,
      sym_status,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(126), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [610] = 4,
    ACTIONS(80), 1,
      anon_sym_SEMI,
    ACTIONS(130), 1,
      anon_sym_LF,
    STATE(50), 1,
      sym_note,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [624] = 4,
    ACTIONS(132), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym_whitespace_repeat1,
    STATE(33), 1,
      sym_whitespace,
    ACTIONS(134), 2,
      anon_sym_,
      anon_sym_TAB,
  [638] = 4,
    ACTIONS(136), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym_whitespace_repeat1,
    STATE(62), 1,
      sym_whitespace,
    ACTIONS(134), 2,
      anon_sym_,
      anon_sym_TAB,
  [652] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(138), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [661] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(140), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [670] = 2,
    ACTIONS(144), 1,
      anon_sym_EQ,
    ACTIONS(142), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [679] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(146), 2,
      anon_sym_DASH,
      aux_sym_quantity_token1,
  [688] = 2,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [696] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(150), 1,
      sym_commodity,
  [706] = 2,
    ACTIONS(152), 1,
      aux_sym_note_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [714] = 2,
    ACTIONS(130), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [722] = 2,
    ACTIONS(154), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [730] = 2,
    ACTIONS(156), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [738] = 2,
    ACTIONS(158), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [746] = 2,
    ACTIONS(160), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [754] = 2,
    ACTIONS(162), 1,
      sym_account_name,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [762] = 2,
    ACTIONS(164), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [770] = 2,
    ACTIONS(166), 1,
      aux_sym_quantity_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [778] = 2,
    ACTIONS(168), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [786] = 2,
    ACTIONS(170), 1,
      aux_sym_comment_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [794] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(172), 1,
      sym_commodity,
  [804] = 2,
    ACTIONS(174), 1,
      sym_account_name,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [812] = 2,
    ACTIONS(176), 1,
      aux_sym_word_directive_token2,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [820] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(178), 1,
      sym_commodity,
  [830] = 2,
    ACTIONS(180), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [838] = 2,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [846] = 2,
    ACTIONS(136), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [854] = 2,
    ACTIONS(182), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [862] = 2,
    ACTIONS(184), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [870] = 1,
    ACTIONS(186), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [876] = 1,
    ACTIONS(188), 3,
      anon_sym_LF,
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
  [SMALL_STATE(9)] = 217,
  [SMALL_STATE(10)] = 234,
  [SMALL_STATE(11)] = 249,
  [SMALL_STATE(12)] = 266,
  [SMALL_STATE(13)] = 283,
  [SMALL_STATE(14)] = 300,
  [SMALL_STATE(15)] = 317,
  [SMALL_STATE(16)] = 334,
  [SMALL_STATE(17)] = 349,
  [SMALL_STATE(18)] = 366,
  [SMALL_STATE(19)] = 390,
  [SMALL_STATE(20)] = 408,
  [SMALL_STATE(21)] = 419,
  [SMALL_STATE(22)] = 434,
  [SMALL_STATE(23)] = 449,
  [SMALL_STATE(24)] = 462,
  [SMALL_STATE(25)] = 475,
  [SMALL_STATE(26)] = 492,
  [SMALL_STATE(27)] = 505,
  [SMALL_STATE(28)] = 522,
  [SMALL_STATE(29)] = 537,
  [SMALL_STATE(30)] = 552,
  [SMALL_STATE(31)] = 569,
  [SMALL_STATE(32)] = 584,
  [SMALL_STATE(33)] = 595,
  [SMALL_STATE(34)] = 610,
  [SMALL_STATE(35)] = 624,
  [SMALL_STATE(36)] = 638,
  [SMALL_STATE(37)] = 652,
  [SMALL_STATE(38)] = 661,
  [SMALL_STATE(39)] = 670,
  [SMALL_STATE(40)] = 679,
  [SMALL_STATE(41)] = 688,
  [SMALL_STATE(42)] = 696,
  [SMALL_STATE(43)] = 706,
  [SMALL_STATE(44)] = 714,
  [SMALL_STATE(45)] = 722,
  [SMALL_STATE(46)] = 730,
  [SMALL_STATE(47)] = 738,
  [SMALL_STATE(48)] = 746,
  [SMALL_STATE(49)] = 754,
  [SMALL_STATE(50)] = 762,
  [SMALL_STATE(51)] = 770,
  [SMALL_STATE(52)] = 778,
  [SMALL_STATE(53)] = 786,
  [SMALL_STATE(54)] = 794,
  [SMALL_STATE(55)] = 804,
  [SMALL_STATE(56)] = 812,
  [SMALL_STATE(57)] = 820,
  [SMALL_STATE(58)] = 830,
  [SMALL_STATE(59)] = 838,
  [SMALL_STATE(60)] = 846,
  [SMALL_STATE(61)] = 854,
  [SMALL_STATE(62)] = 862,
  [SMALL_STATE(63)] = 870,
  [SMALL_STATE(64)] = 876,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(24),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 4),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whitespace, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_whitespace, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(23),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_expr, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount_expr, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(29),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spacer, 1),
  [148] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3),
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
