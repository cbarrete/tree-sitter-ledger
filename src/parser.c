#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 97
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
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
  anon_sym_C = 19,
  anon_sym_i = 20,
  anon_sym_I = 21,
  anon_sym_o = 22,
  anon_sym_O = 23,
  sym_single_date = 24,
  sym_time = 25,
  anon_sym_BANG = 26,
  sym_payee = 27,
  aux_sym_note_token1 = 28,
  anon_sym_LPAREN = 29,
  anon_sym_RPAREN = 30,
  anon_sym_LBRACK = 31,
  anon_sym_RBRACK = 32,
  sym_account_name = 33,
  anon_sym_DASH = 34,
  aux_sym_quantity_token1 = 35,
  sym_commodity = 36,
  anon_sym_AT = 37,
  anon_sym_AT_AT = 38,
  anon_sym_ = 39,
  anon_sym_TAB = 40,
  anon_sym_2 = 41,
  anon_sym_TAB2 = 42,
  sym_source_file = 43,
  sym_journal_item = 44,
  sym_comment = 45,
  sym_directive = 46,
  sym_word_directive = 47,
  sym_char_directive = 48,
  sym_check_in = 49,
  sym_check_out = 50,
  sym_xact = 51,
  sym_plain_xact = 52,
  sym_date = 53,
  sym_status = 54,
  sym_note = 55,
  sym_posting = 56,
  sym_account = 57,
  sym_values = 58,
  sym_amount = 59,
  sym_quantity = 60,
  sym_price = 61,
  sym_whitespace = 62,
  sym_spacer = 63,
  aux_sym_source_file_repeat1 = 64,
  aux_sym_plain_xact_repeat1 = 65,
  aux_sym_whitespace_repeat1 = 66,
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
      if (lookahead == '\t') ADVANCE(116);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(109);
      if (lookahead == '!') ADVANCE(90);
      if (lookahead == '(') ADVANCE(94);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == 'A') ADVANCE(80);
      if (lookahead == 'C') ADVANCE(83);
      if (lookahead == 'D') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(85);
      if (lookahead == 'O') ADVANCE(87);
      if (lookahead == 'Y') ADVANCE(81);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == 'y') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(116);
      if (lookahead == ' ') ADVANCE(108);
      if (lookahead == '-') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(116);
      if (lookahead == ' ') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(116);
      if (lookahead == ' ') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(122);
      if (lookahead == ' ') ADVANCE(108);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(121);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == '!') ADVANCE(90);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(117);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == ' ') ADVANCE(110);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(120);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(119);
      if (lookahead == ' ') ADVANCE(113);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
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
          lookahead != ' ') ADVANCE(100);
      END_STATE();
    case 60:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(101);
      END_STATE();
    case 61:
      if (eof) ADVANCE(63);
      if (lookahead == '\t') ADVANCE(116);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(109);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == 'A') ADVANCE(80);
      if (lookahead == 'C') ADVANCE(83);
      if (lookahead == 'D') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(85);
      if (lookahead == 'O') ADVANCE(87);
      if (lookahead == 'Y') ADVANCE(81);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == 'y') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 62:
      if (eof) ADVANCE(63);
      if (lookahead == '\t') ADVANCE(116);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(108);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == 'A') ADVANCE(80);
      if (lookahead == 'C') ADVANCE(83);
      if (lookahead == 'D') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(85);
      if (lookahead == 'O') ADVANCE(87);
      if (lookahead == 'Y') ADVANCE(81);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(86);
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
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_single_date);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '\t') ADVANCE(118);
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(100);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == '.') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(124);
      if (lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(91);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(91);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(100);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 124:
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
  [10] = {.lex_state = 62},
  [11] = {.lex_state = 61},
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
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 62},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 62},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 62},
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
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 62},
  [58] = {.lex_state = 62},
  [59] = {.lex_state = 62},
  [60] = {.lex_state = 92},
  [61] = {.lex_state = 62},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 62},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 62},
  [68] = {.lex_state = 62},
  [69] = {.lex_state = 62},
  [70] = {.lex_state = 62},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 62},
  [75] = {.lex_state = 62},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 62},
  [79] = {.lex_state = 62},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 62},
  [82] = {.lex_state = 62},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 62},
  [86] = {.lex_state = 62},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 62},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 62},
  [93] = {.lex_state = 62},
  [94] = {.lex_state = 62},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
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
    [sym_source_file] = STATE(69),
    [sym_journal_item] = STATE(2),
    [sym_comment] = STATE(12),
    [sym_directive] = STATE(12),
    [sym_word_directive] = STATE(17),
    [sym_char_directive] = STATE(17),
    [sym_check_in] = STATE(18),
    [sym_check_out] = STATE(18),
    [sym_xact] = STATE(12),
    [sym_plain_xact] = STATE(19),
    [sym_date] = STATE(50),
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
    [anon_sym_bucket] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_Y] = ACTIONS(25),
    [anon_sym_D] = ACTIONS(27),
    [anon_sym_C] = ACTIONS(29),
    [anon_sym_i] = ACTIONS(31),
    [anon_sym_I] = ACTIONS(33),
    [anon_sym_o] = ACTIONS(35),
    [anon_sym_O] = ACTIONS(35),
    [sym_single_date] = ACTIONS(37),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_TAB] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 23,
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
      anon_sym_C,
    ACTIONS(31), 1,
      anon_sym_i,
    ACTIONS(33), 1,
      anon_sym_I,
    ACTIONS(37), 1,
      sym_single_date,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_LF,
    STATE(19), 1,
      sym_plain_xact,
    STATE(50), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(11), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(35), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(17), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(18), 2,
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
  [80] = 23,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_LF,
    ACTIONS(54), 1,
      anon_sym_end,
    ACTIONS(57), 1,
      anon_sym_alias,
    ACTIONS(60), 1,
      anon_sym_year,
    ACTIONS(63), 1,
      anon_sym_bucket,
    ACTIONS(66), 1,
      anon_sym_A,
    ACTIONS(69), 1,
      anon_sym_Y,
    ACTIONS(72), 1,
      anon_sym_D,
    ACTIONS(75), 1,
      anon_sym_C,
    ACTIONS(78), 1,
      anon_sym_i,
    ACTIONS(81), 1,
      anon_sym_I,
    ACTIONS(87), 1,
      sym_single_date,
    STATE(19), 1,
      sym_plain_xact,
    STATE(50), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(48), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(84), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(17), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(18), 2,
      sym_check_in,
      sym_check_out,
    ACTIONS(51), 3,
      anon_sym_include,
      anon_sym_account,
      anon_sym_def,
    STATE(12), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [160] = 6,
    ACTIONS(92), 1,
      anon_sym_i,
    STATE(31), 1,
      sym_whitespace,
    STATE(32), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(94), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(90), 19,
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
      anon_sym_C,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [199] = 6,
    ACTIONS(98), 1,
      anon_sym_i,
    STATE(31), 1,
      sym_whitespace,
    STATE(32), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(94), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(96), 19,
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
      anon_sym_C,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [238] = 6,
    ACTIONS(102), 1,
      anon_sym_i,
    STATE(31), 1,
      sym_whitespace,
    STATE(32), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(94), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(100), 19,
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
      anon_sym_C,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [277] = 6,
    ACTIONS(106), 1,
      anon_sym_i,
    STATE(31), 1,
      sym_whitespace,
    STATE(32), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(108), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(104), 19,
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
      anon_sym_C,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [316] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(113), 1,
      anon_sym_i,
    STATE(66), 1,
      sym_spacer,
    ACTIONS(115), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
    ACTIONS(111), 19,
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
      anon_sym_C,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [352] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(119), 1,
      anon_sym_i,
    ACTIONS(117), 22,
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
      anon_sym_C,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [383] = 3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(123), 2,
      anon_sym_i,
      anon_sym_AT,
    ACTIONS(121), 20,
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
      anon_sym_C,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_AT_AT,
  [414] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(127), 1,
      anon_sym_i,
    ACTIONS(125), 22,
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
      anon_sym_C,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [445] = 3,
    ACTIONS(131), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(129), 19,
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
      anon_sym_C,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [474] = 3,
    ACTIONS(135), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(133), 19,
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
      anon_sym_C,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [503] = 3,
    ACTIONS(139), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(137), 19,
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
      anon_sym_C,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [532] = 2,
    ACTIONS(143), 1,
      anon_sym_i,
    ACTIONS(141), 21,
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
      anon_sym_C,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [559] = 2,
    ACTIONS(147), 1,
      anon_sym_i,
    ACTIONS(145), 21,
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
      anon_sym_C,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [586] = 3,
    ACTIONS(151), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(149), 19,
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
      anon_sym_C,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [615] = 3,
    ACTIONS(155), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(153), 19,
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
      anon_sym_C,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [644] = 3,
    ACTIONS(159), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(157), 19,
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
      anon_sym_C,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [673] = 3,
    ACTIONS(163), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(161), 19,
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
      anon_sym_C,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [702] = 3,
    ACTIONS(167), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(165), 19,
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
      anon_sym_C,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [731] = 3,
    ACTIONS(171), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(169), 19,
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
      anon_sym_C,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [760] = 2,
    ACTIONS(175), 1,
      anon_sym_i,
    ACTIONS(173), 21,
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
      anon_sym_C,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [787] = 3,
    ACTIONS(179), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(177), 19,
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
      anon_sym_C,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [816] = 2,
    ACTIONS(183), 1,
      anon_sym_i,
    ACTIONS(181), 21,
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
      anon_sym_C,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [843] = 3,
    ACTIONS(187), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(185), 19,
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
      anon_sym_C,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [872] = 3,
    ACTIONS(127), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(125), 19,
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
      anon_sym_C,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [901] = 3,
    ACTIONS(191), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(189), 19,
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
      anon_sym_C,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [930] = 3,
    ACTIONS(119), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(117), 19,
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
      anon_sym_C,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym_single_date,
  [959] = 7,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(193), 1,
      anon_sym_LF,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    STATE(35), 1,
      sym_spacer,
    STATE(49), 1,
      sym_values,
    STATE(70), 1,
      sym_note,
    ACTIONS(197), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [983] = 8,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      sym_account_name,
    STATE(30), 1,
      sym_account,
    STATE(61), 1,
      sym_note,
  [1008] = 5,
    ACTIONS(209), 1,
      anon_sym_,
    ACTIONS(211), 1,
      anon_sym_TAB,
    STATE(34), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(205), 2,
      anon_sym_SEMI,
      sym_account_name,
    ACTIONS(207), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1026] = 5,
    ACTIONS(215), 1,
      anon_sym_AT,
    ACTIONS(217), 1,
      anon_sym_AT_AT,
    STATE(51), 1,
      sym_price,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(213), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1044] = 5,
    ACTIONS(223), 1,
      anon_sym_,
    ACTIONS(226), 1,
      anon_sym_TAB,
    STATE(34), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(219), 2,
      anon_sym_SEMI,
      sym_account_name,
    ACTIONS(221), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [1062] = 5,
    ACTIONS(229), 1,
      anon_sym_DASH,
    ACTIONS(231), 1,
      aux_sym_quantity_token1,
    STATE(33), 1,
      sym_amount,
    STATE(73), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1079] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      sym_account_name,
    STATE(8), 1,
      sym_account,
  [1098] = 4,
    ACTIONS(221), 1,
      sym_payee,
    STATE(37), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(219), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(233), 2,
      anon_sym_,
      anon_sym_TAB,
  [1113] = 4,
    STATE(31), 1,
      sym_whitespace,
    STATE(32), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(94), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [1128] = 4,
    ACTIONS(238), 1,
      sym_payee,
    STATE(48), 1,
      sym_status,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(236), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [1143] = 4,
    ACTIONS(207), 1,
      sym_payee,
    STATE(37), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(205), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(240), 2,
      anon_sym_,
      anon_sym_TAB,
  [1158] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      sym_account_name,
    STATE(13), 1,
      sym_account,
  [1177] = 5,
    ACTIONS(229), 1,
      anon_sym_DASH,
    ACTIONS(231), 1,
      aux_sym_quantity_token1,
    STATE(28), 1,
      sym_amount,
    STATE(73), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1194] = 4,
    STATE(31), 1,
      sym_whitespace,
    STATE(32), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(94), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [1209] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      sym_account_name,
    STATE(28), 1,
      sym_account,
  [1228] = 5,
    ACTIONS(229), 1,
      anon_sym_DASH,
    ACTIONS(231), 1,
      aux_sym_quantity_token1,
    STATE(26), 1,
      sym_amount,
    STATE(73), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1245] = 4,
    STATE(31), 1,
      sym_whitespace,
    STATE(32), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(94), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [1260] = 5,
    ACTIONS(229), 1,
      anon_sym_DASH,
    ACTIONS(231), 1,
      aux_sym_quantity_token1,
    STATE(52), 1,
      sym_amount,
    STATE(73), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1277] = 4,
    ACTIONS(248), 1,
      anon_sym_LF,
    STATE(40), 1,
      aux_sym_whitespace_repeat1,
    STATE(64), 1,
      sym_whitespace,
    ACTIONS(250), 2,
      anon_sym_,
      anon_sym_TAB,
  [1291] = 4,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(252), 1,
      anon_sym_LF,
    STATE(59), 1,
      sym_note,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1305] = 4,
    ACTIONS(254), 1,
      anon_sym_LF,
    STATE(39), 1,
      sym_whitespace,
    STATE(40), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(250), 2,
      anon_sym_,
      anon_sym_TAB,
  [1319] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(256), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1328] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(258), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1337] = 3,
    ACTIONS(260), 1,
      anon_sym_EQ,
    ACTIONS(262), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1348] = 3,
    ACTIONS(264), 1,
      sym_single_date,
    STATE(81), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1359] = 3,
    ACTIONS(264), 1,
      sym_single_date,
    STATE(78), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1370] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(266), 2,
      anon_sym_DASH,
      aux_sym_quantity_token1,
  [1379] = 2,
    ACTIONS(268), 1,
      anon_sym_EQ,
    ACTIONS(262), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1388] = 1,
    ACTIONS(270), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1394] = 2,
    ACTIONS(272), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1402] = 2,
    ACTIONS(274), 1,
      aux_sym_note_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1410] = 2,
    ACTIONS(276), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1418] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(278), 1,
      sym_account_name,
  [1428] = 2,
    ACTIONS(280), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1436] = 2,
    ACTIONS(282), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1444] = 2,
    ACTIONS(284), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1452] = 2,
    ACTIONS(286), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1460] = 2,
    ACTIONS(288), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1468] = 2,
    ACTIONS(290), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1476] = 2,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1484] = 2,
    ACTIONS(252), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1492] = 2,
    ACTIONS(294), 1,
      aux_sym_quantity_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1500] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(296), 1,
      sym_commodity,
  [1510] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(298), 1,
      sym_commodity,
  [1520] = 2,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1528] = 2,
    ACTIONS(248), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1536] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(302), 1,
      sym_commodity,
  [1546] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(304), 1,
      sym_account_name,
  [1556] = 2,
    ACTIONS(306), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1564] = 2,
    ACTIONS(308), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1572] = 2,
    ACTIONS(310), 1,
      aux_sym_word_directive_token3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1580] = 2,
    ACTIONS(312), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1588] = 1,
    ACTIONS(314), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [1594] = 2,
    ACTIONS(316), 1,
      aux_sym_comment_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1602] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_TAB,
    ACTIONS(318), 1,
      sym_commodity,
  [1612] = 2,
    ACTIONS(320), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1620] = 2,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1628] = 2,
    ACTIONS(322), 1,
      aux_sym_word_directive_token3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1636] = 2,
    ACTIONS(314), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1644] = 2,
    ACTIONS(324), 1,
      aux_sym_word_directive_token2,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1652] = 2,
    ACTIONS(326), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1660] = 2,
    ACTIONS(328), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [1668] = 2,
    ACTIONS(330), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1676] = 2,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1684] = 2,
    ACTIONS(332), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1692] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(334), 1,
      sym_account_name,
  [1702] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(336), 1,
      sym_account_name,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 80,
  [SMALL_STATE(4)] = 160,
  [SMALL_STATE(5)] = 199,
  [SMALL_STATE(6)] = 238,
  [SMALL_STATE(7)] = 277,
  [SMALL_STATE(8)] = 316,
  [SMALL_STATE(9)] = 352,
  [SMALL_STATE(10)] = 383,
  [SMALL_STATE(11)] = 414,
  [SMALL_STATE(12)] = 445,
  [SMALL_STATE(13)] = 474,
  [SMALL_STATE(14)] = 503,
  [SMALL_STATE(15)] = 532,
  [SMALL_STATE(16)] = 559,
  [SMALL_STATE(17)] = 586,
  [SMALL_STATE(18)] = 615,
  [SMALL_STATE(19)] = 644,
  [SMALL_STATE(20)] = 673,
  [SMALL_STATE(21)] = 702,
  [SMALL_STATE(22)] = 731,
  [SMALL_STATE(23)] = 760,
  [SMALL_STATE(24)] = 787,
  [SMALL_STATE(25)] = 816,
  [SMALL_STATE(26)] = 843,
  [SMALL_STATE(27)] = 872,
  [SMALL_STATE(28)] = 901,
  [SMALL_STATE(29)] = 930,
  [SMALL_STATE(30)] = 959,
  [SMALL_STATE(31)] = 983,
  [SMALL_STATE(32)] = 1008,
  [SMALL_STATE(33)] = 1026,
  [SMALL_STATE(34)] = 1044,
  [SMALL_STATE(35)] = 1062,
  [SMALL_STATE(36)] = 1079,
  [SMALL_STATE(37)] = 1098,
  [SMALL_STATE(38)] = 1113,
  [SMALL_STATE(39)] = 1128,
  [SMALL_STATE(40)] = 1143,
  [SMALL_STATE(41)] = 1158,
  [SMALL_STATE(42)] = 1177,
  [SMALL_STATE(43)] = 1194,
  [SMALL_STATE(44)] = 1209,
  [SMALL_STATE(45)] = 1228,
  [SMALL_STATE(46)] = 1245,
  [SMALL_STATE(47)] = 1260,
  [SMALL_STATE(48)] = 1277,
  [SMALL_STATE(49)] = 1291,
  [SMALL_STATE(50)] = 1305,
  [SMALL_STATE(51)] = 1319,
  [SMALL_STATE(52)] = 1328,
  [SMALL_STATE(53)] = 1337,
  [SMALL_STATE(54)] = 1348,
  [SMALL_STATE(55)] = 1359,
  [SMALL_STATE(56)] = 1370,
  [SMALL_STATE(57)] = 1379,
  [SMALL_STATE(58)] = 1388,
  [SMALL_STATE(59)] = 1394,
  [SMALL_STATE(60)] = 1402,
  [SMALL_STATE(61)] = 1410,
  [SMALL_STATE(62)] = 1418,
  [SMALL_STATE(63)] = 1428,
  [SMALL_STATE(64)] = 1436,
  [SMALL_STATE(65)] = 1444,
  [SMALL_STATE(66)] = 1452,
  [SMALL_STATE(67)] = 1460,
  [SMALL_STATE(68)] = 1468,
  [SMALL_STATE(69)] = 1476,
  [SMALL_STATE(70)] = 1484,
  [SMALL_STATE(71)] = 1492,
  [SMALL_STATE(72)] = 1500,
  [SMALL_STATE(73)] = 1510,
  [SMALL_STATE(74)] = 1520,
  [SMALL_STATE(75)] = 1528,
  [SMALL_STATE(76)] = 1536,
  [SMALL_STATE(77)] = 1546,
  [SMALL_STATE(78)] = 1556,
  [SMALL_STATE(79)] = 1564,
  [SMALL_STATE(80)] = 1572,
  [SMALL_STATE(81)] = 1580,
  [SMALL_STATE(82)] = 1588,
  [SMALL_STATE(83)] = 1594,
  [SMALL_STATE(84)] = 1602,
  [SMALL_STATE(85)] = 1612,
  [SMALL_STATE(86)] = 1620,
  [SMALL_STATE(87)] = 1628,
  [SMALL_STATE(88)] = 1636,
  [SMALL_STATE(89)] = 1644,
  [SMALL_STATE(90)] = 1652,
  [SMALL_STATE(91)] = 1660,
  [SMALL_STATE(92)] = 1668,
  [SMALL_STATE(93)] = 1676,
  [SMALL_STATE(94)] = 1684,
  [SMALL_STATE(95)] = 1692,
  [SMALL_STATE(96)] = 1702,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(89),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(32),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_in, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_in, 6),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_out, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 4),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 4),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whitespace, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_whitespace, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(34),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(34),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(37),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spacer, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spacer, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [292] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
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
