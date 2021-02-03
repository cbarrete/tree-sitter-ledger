#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 81
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
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
  anon_sym_i = 13,
  anon_sym_I = 14,
  anon_sym_o = 15,
  anon_sym_O = 16,
  sym_single_date = 17,
  sym_time = 18,
  anon_sym_BANG = 19,
  sym_payee = 20,
  aux_sym_note_token1 = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  anon_sym_LBRACK = 24,
  anon_sym_RBRACK = 25,
  sym_account_name = 26,
  anon_sym_DASH = 27,
  aux_sym_quantity_token1 = 28,
  sym_commodity = 29,
  anon_sym_AT = 30,
  anon_sym_AT_AT = 31,
  anon_sym_ = 32,
  anon_sym_TAB = 33,
  anon_sym_2 = 34,
  anon_sym_TAB2 = 35,
  sym_source_file = 36,
  sym_journal_item = 37,
  sym_comment = 38,
  sym_directive = 39,
  sym_word_directive = 40,
  sym_char_directive = 41,
  sym_check_in = 42,
  sym_check_out = 43,
  sym_xact = 44,
  sym_plain_xact = 45,
  sym_date = 46,
  sym_status = 47,
  sym_note = 48,
  sym_posting = 49,
  sym_account = 50,
  sym_values = 51,
  sym_amount_expr = 52,
  sym_quantity = 53,
  sym_price = 54,
  sym_whitespace = 55,
  sym_spacer = 56,
  aux_sym_source_file_repeat1 = 57,
  aux_sym_plain_xact_repeat1 = 58,
  aux_sym_whitespace_repeat1 = 59,
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
      if (eof) ADVANCE(49);
      if (lookahead == '\t') ADVANCE(100);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '@') ADVANCE(90);
      if (lookahead == 'I') ADVANCE(63);
      if (lookahead == 'O') ADVANCE(65);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(100);
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == '-') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(100);
      if (lookahead == ' ') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(106);
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(105);
      if (lookahead == ' ') ADVANCE(99);
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(104);
      if (lookahead == ' ') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(59);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(101);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(103);
      if (lookahead == ' ') ADVANCE(97);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
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
          lookahead != ' ') ADVANCE(78);
      END_STATE();
    case 46:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(79);
      END_STATE();
    case 47:
      if (eof) ADVANCE(49);
      if (lookahead == '\t') ADVANCE(100);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == 'I') ADVANCE(63);
      if (lookahead == 'O') ADVANCE(65);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      if (lookahead == '\t') ADVANCE(100);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '@') ADVANCE(90);
      if (lookahead == 'I') ADVANCE(63);
      if (lookahead == 'O') ADVANCE(65);
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(64);
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
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_single_date);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '\t') ADVANCE(102);
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(78);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ':') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(37);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(108);
      if (lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(59);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(69);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(59);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(69);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(78);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 108:
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
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 48},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 48},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 48},
  [36] = {.lex_state = 48},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 48},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 48},
  [41] = {.lex_state = 48},
  [42] = {.lex_state = 48},
  [43] = {.lex_state = 48},
  [44] = {.lex_state = 48},
  [45] = {.lex_state = 48},
  [46] = {.lex_state = 48},
  [47] = {.lex_state = 48},
  [48] = {.lex_state = 48},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 48},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 48},
  [54] = {.lex_state = 48},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 48},
  [57] = {.lex_state = 48},
  [58] = {.lex_state = 48},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 48},
  [61] = {.lex_state = 48},
  [62] = {.lex_state = 48},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 70},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 48},
  [72] = {.lex_state = 48},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 48},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 48},
  [77] = {.lex_state = 48},
  [78] = {.lex_state = 48},
  [79] = {.lex_state = 48},
  [80] = {.lex_state = 48},
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
    [sym_source_file] = STATE(60),
    [sym_journal_item] = STATE(3),
    [sym_comment] = STATE(13),
    [sym_directive] = STATE(13),
    [sym_word_directive] = STATE(14),
    [sym_char_directive] = STATE(14),
    [sym_check_in] = STATE(15),
    [sym_check_out] = STATE(15),
    [sym_xact] = STATE(13),
    [sym_plain_xact] = STATE(16),
    [sym_date] = STATE(41),
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
    [anon_sym_i] = ACTIONS(19),
    [anon_sym_I] = ACTIONS(21),
    [anon_sym_o] = ACTIONS(23),
    [anon_sym_O] = ACTIONS(23),
    [sym_single_date] = ACTIONS(25),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_TAB] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_LF,
    ACTIONS(38), 1,
      anon_sym_end,
    ACTIONS(41), 1,
      anon_sym_alias,
    ACTIONS(44), 1,
      anon_sym_i,
    ACTIONS(47), 1,
      anon_sym_I,
    ACTIONS(53), 1,
      sym_single_date,
    STATE(16), 1,
      sym_plain_xact,
    STATE(41), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(32), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(50), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(14), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(15), 2,
      sym_check_in,
      sym_check_out,
    ACTIONS(35), 3,
      anon_sym_include,
      anon_sym_account,
      anon_sym_def,
    STATE(13), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [62] = 17,
    ACTIONS(15), 1,
      anon_sym_end,
    ACTIONS(17), 1,
      anon_sym_alias,
    ACTIONS(19), 1,
      anon_sym_i,
    ACTIONS(21), 1,
      anon_sym_I,
    ACTIONS(25), 1,
      sym_single_date,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym_plain_xact,
    STATE(41), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(11), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(23), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
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
    STATE(13), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [124] = 6,
    ACTIONS(62), 1,
      anon_sym_i,
    STATE(26), 1,
      sym_whitespace,
    STATE(28), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(64), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(60), 13,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [157] = 6,
    ACTIONS(68), 1,
      anon_sym_i,
    STATE(26), 1,
      sym_whitespace,
    STATE(28), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(64), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(66), 13,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [190] = 6,
    ACTIONS(72), 1,
      anon_sym_i,
    STATE(26), 1,
      sym_whitespace,
    STATE(28), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(74), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(70), 13,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [223] = 6,
    ACTIONS(79), 1,
      anon_sym_i,
    STATE(26), 1,
      sym_whitespace,
    STATE(28), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(64), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(77), 13,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [256] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(83), 1,
      anon_sym_i,
    STATE(52), 1,
      sym_spacer,
    ACTIONS(85), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
    ACTIONS(81), 13,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [286] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(89), 1,
      anon_sym_i,
    ACTIONS(87), 16,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [311] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(93), 1,
      anon_sym_i,
    ACTIONS(91), 16,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [336] = 3,
    ACTIONS(97), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(95), 13,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [359] = 3,
    ACTIONS(101), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(99), 13,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [382] = 3,
    ACTIONS(105), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(103), 13,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [405] = 3,
    ACTIONS(109), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(107), 13,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [428] = 3,
    ACTIONS(113), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(111), 13,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [451] = 3,
    ACTIONS(117), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(115), 13,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [474] = 2,
    ACTIONS(121), 1,
      anon_sym_i,
    ACTIONS(119), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [495] = 3,
    ACTIONS(125), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(123), 13,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [518] = 3,
    ACTIONS(129), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(127), 13,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [541] = 3,
    ACTIONS(133), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(131), 13,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [564] = 2,
    ACTIONS(137), 1,
      anon_sym_i,
    ACTIONS(135), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [585] = 2,
    ACTIONS(141), 1,
      anon_sym_i,
    ACTIONS(139), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [606] = 2,
    ACTIONS(145), 1,
      anon_sym_i,
    ACTIONS(143), 15,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [627] = 3,
    ACTIONS(149), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(147), 13,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_include,
      anon_sym_account,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [650] = 7,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(151), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      anon_sym_SEMI,
    STATE(39), 1,
      sym_spacer,
    STATE(42), 1,
      sym_values,
    STATE(54), 1,
      sym_note,
    ACTIONS(155), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [674] = 8,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(153), 1,
      anon_sym_SEMI,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      sym_account_name,
    STATE(25), 1,
      sym_account,
    STATE(61), 1,
      sym_note,
  [699] = 5,
    ACTIONS(165), 1,
      anon_sym_AT,
    ACTIONS(167), 1,
      anon_sym_AT_AT,
    STATE(43), 1,
      sym_price,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(163), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [717] = 5,
    ACTIONS(173), 1,
      anon_sym_,
    ACTIONS(175), 1,
      anon_sym_TAB,
    STATE(29), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(169), 2,
      anon_sym_SEMI,
      sym_account_name,
    ACTIONS(171), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [735] = 5,
    ACTIONS(181), 1,
      anon_sym_,
    ACTIONS(184), 1,
      anon_sym_TAB,
    STATE(29), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(177), 2,
      anon_sym_SEMI,
      sym_account_name,
    ACTIONS(179), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [753] = 5,
    ACTIONS(187), 1,
      anon_sym_DASH,
    ACTIONS(189), 1,
      aux_sym_quantity_token1,
    STATE(46), 1,
      sym_amount_expr,
    STATE(66), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [770] = 3,
    ACTIONS(193), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(191), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_AT_AT,
  [783] = 4,
    ACTIONS(171), 1,
      sym_payee,
    STATE(33), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(169), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(195), 2,
      anon_sym_,
      anon_sym_TAB,
  [798] = 4,
    ACTIONS(179), 1,
      sym_payee,
    STATE(33), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(177), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(197), 2,
      anon_sym_,
      anon_sym_TAB,
  [813] = 4,
    ACTIONS(202), 1,
      sym_payee,
    STATE(40), 1,
      sym_status,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(200), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [828] = 4,
    STATE(26), 1,
      sym_whitespace,
    STATE(28), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(64), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [843] = 4,
    STATE(26), 1,
      sym_whitespace,
    STATE(28), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(64), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [858] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      sym_account_name,
    STATE(8), 1,
      sym_account,
  [877] = 4,
    STATE(26), 1,
      sym_whitespace,
    STATE(28), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(64), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [892] = 5,
    ACTIONS(187), 1,
      anon_sym_DASH,
    ACTIONS(189), 1,
      aux_sym_quantity_token1,
    STATE(27), 1,
      sym_amount_expr,
    STATE(66), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [909] = 4,
    ACTIONS(204), 1,
      anon_sym_LF,
    STATE(32), 1,
      aux_sym_whitespace_repeat1,
    STATE(50), 1,
      sym_whitespace,
    ACTIONS(206), 2,
      anon_sym_,
      anon_sym_TAB,
  [923] = 4,
    ACTIONS(208), 1,
      anon_sym_LF,
    STATE(32), 1,
      aux_sym_whitespace_repeat1,
    STATE(34), 1,
      sym_whitespace,
    ACTIONS(206), 2,
      anon_sym_,
      anon_sym_TAB,
  [937] = 4,
    ACTIONS(153), 1,
      anon_sym_SEMI,
    ACTIONS(210), 1,
      anon_sym_LF,
    STATE(62), 1,
      sym_note,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [951] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(212), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [960] = 2,
    ACTIONS(216), 1,
      anon_sym_EQ,
    ACTIONS(214), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [969] = 3,
    ACTIONS(214), 1,
      sym_time,
    ACTIONS(218), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [980] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(220), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [989] = 3,
    ACTIONS(222), 1,
      sym_single_date,
    STATE(78), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1000] = 3,
    ACTIONS(222), 1,
      sym_single_date,
    STATE(79), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1011] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(224), 2,
      anon_sym_DASH,
      aux_sym_quantity_token1,
  [1020] = 2,
    ACTIONS(226), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1028] = 2,
    ACTIONS(228), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1036] = 2,
    ACTIONS(230), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1044] = 2,
    ACTIONS(232), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1052] = 2,
    ACTIONS(210), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1060] = 2,
    ACTIONS(234), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1068] = 2,
    ACTIONS(236), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1076] = 2,
    ACTIONS(236), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1084] = 2,
    ACTIONS(238), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1092] = 2,
    ACTIONS(240), 1,
      aux_sym_word_directive_token2,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1100] = 2,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1108] = 2,
    ACTIONS(244), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1116] = 2,
    ACTIONS(246), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1124] = 2,
    ACTIONS(248), 1,
      aux_sym_quantity_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1132] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(250), 1,
      sym_commodity,
  [1142] = 2,
    ACTIONS(252), 1,
      aux_sym_note_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1150] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(254), 1,
      sym_commodity,
  [1160] = 2,
    ACTIONS(256), 1,
      aux_sym_comment_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1168] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(258), 1,
      sym_account_name,
  [1178] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(260), 1,
      sym_commodity,
  [1188] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(262), 1,
      sym_account_name,
  [1198] = 2,
    ACTIONS(204), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1206] = 1,
    ACTIONS(264), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1212] = 2,
    ACTIONS(266), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1220] = 1,
    ACTIONS(268), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1226] = 2,
    ACTIONS(270), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1234] = 2,
    ACTIONS(272), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1242] = 2,
    ACTIONS(268), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1250] = 2,
    ACTIONS(274), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1258] = 2,
    ACTIONS(276), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1266] = 2,
    ACTIONS(278), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 124,
  [SMALL_STATE(5)] = 157,
  [SMALL_STATE(6)] = 190,
  [SMALL_STATE(7)] = 223,
  [SMALL_STATE(8)] = 256,
  [SMALL_STATE(9)] = 286,
  [SMALL_STATE(10)] = 311,
  [SMALL_STATE(11)] = 336,
  [SMALL_STATE(12)] = 359,
  [SMALL_STATE(13)] = 382,
  [SMALL_STATE(14)] = 405,
  [SMALL_STATE(15)] = 428,
  [SMALL_STATE(16)] = 451,
  [SMALL_STATE(17)] = 474,
  [SMALL_STATE(18)] = 495,
  [SMALL_STATE(19)] = 518,
  [SMALL_STATE(20)] = 541,
  [SMALL_STATE(21)] = 564,
  [SMALL_STATE(22)] = 585,
  [SMALL_STATE(23)] = 606,
  [SMALL_STATE(24)] = 627,
  [SMALL_STATE(25)] = 650,
  [SMALL_STATE(26)] = 674,
  [SMALL_STATE(27)] = 699,
  [SMALL_STATE(28)] = 717,
  [SMALL_STATE(29)] = 735,
  [SMALL_STATE(30)] = 753,
  [SMALL_STATE(31)] = 770,
  [SMALL_STATE(32)] = 783,
  [SMALL_STATE(33)] = 798,
  [SMALL_STATE(34)] = 813,
  [SMALL_STATE(35)] = 828,
  [SMALL_STATE(36)] = 843,
  [SMALL_STATE(37)] = 858,
  [SMALL_STATE(38)] = 877,
  [SMALL_STATE(39)] = 892,
  [SMALL_STATE(40)] = 909,
  [SMALL_STATE(41)] = 923,
  [SMALL_STATE(42)] = 937,
  [SMALL_STATE(43)] = 951,
  [SMALL_STATE(44)] = 960,
  [SMALL_STATE(45)] = 969,
  [SMALL_STATE(46)] = 980,
  [SMALL_STATE(47)] = 989,
  [SMALL_STATE(48)] = 1000,
  [SMALL_STATE(49)] = 1011,
  [SMALL_STATE(50)] = 1020,
  [SMALL_STATE(51)] = 1028,
  [SMALL_STATE(52)] = 1036,
  [SMALL_STATE(53)] = 1044,
  [SMALL_STATE(54)] = 1052,
  [SMALL_STATE(55)] = 1060,
  [SMALL_STATE(56)] = 1068,
  [SMALL_STATE(57)] = 1076,
  [SMALL_STATE(58)] = 1084,
  [SMALL_STATE(59)] = 1092,
  [SMALL_STATE(60)] = 1100,
  [SMALL_STATE(61)] = 1108,
  [SMALL_STATE(62)] = 1116,
  [SMALL_STATE(63)] = 1124,
  [SMALL_STATE(64)] = 1132,
  [SMALL_STATE(65)] = 1142,
  [SMALL_STATE(66)] = 1150,
  [SMALL_STATE(67)] = 1160,
  [SMALL_STATE(68)] = 1168,
  [SMALL_STATE(69)] = 1178,
  [SMALL_STATE(70)] = 1188,
  [SMALL_STATE(71)] = 1198,
  [SMALL_STATE(72)] = 1206,
  [SMALL_STATE(73)] = 1212,
  [SMALL_STATE(74)] = 1220,
  [SMALL_STATE(75)] = 1226,
  [SMALL_STATE(76)] = 1234,
  [SMALL_STATE(77)] = 1242,
  [SMALL_STATE(78)] = 1250,
  [SMALL_STATE(79)] = 1258,
  [SMALL_STATE(80)] = 1266,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(28),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_in, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_in, 6),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_out, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whitespace, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_whitespace, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(29),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(29),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_expr, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount_expr, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(33),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spacer, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spacer, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [242] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
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
