#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 275
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 97
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_SEMI = 2,
  anon_sym_STAR = 3,
  aux_sym_comment_token1 = 4,
  anon_sym_account = 5,
  anon_sym_commodity = 6,
  anon_sym_include = 7,
  aux_sym_word_directive_token1 = 8,
  anon_sym_end = 9,
  anon_sym_alias = 10,
  aux_sym_word_directive_token2 = 11,
  anon_sym_EQ = 12,
  anon_sym_def = 13,
  anon_sym_year = 14,
  aux_sym_word_directive_token3 = 15,
  anon_sym_bucket = 16,
  anon_sym_A = 17,
  anon_sym_Y = 18,
  anon_sym_N = 19,
  anon_sym_D = 20,
  anon_sym_C = 21,
  anon_sym_P = 22,
  aux_sym_alias_subdirective_token1 = 23,
  anon_sym_assert = 24,
  anon_sym_check = 25,
  anon_sym_default = 26,
  aux_sym_default_subdirective_token1 = 27,
  anon_sym_eval = 28,
  anon_sym_format = 29,
  anon_sym_nomarket = 30,
  anon_sym_note = 31,
  anon_sym_payee = 32,
  anon_sym_i = 33,
  anon_sym_I = 34,
  anon_sym_o = 35,
  anon_sym_O = 36,
  anon_sym_TILDE = 37,
  sym_single_date = 38,
  sym_time = 39,
  anon_sym_BANG = 40,
  sym_payee = 41,
  aux_sym_note_token1 = 42,
  anon_sym_LPAREN = 43,
  anon_sym_RPAREN = 44,
  anon_sym_LBRACK = 45,
  anon_sym_RBRACK = 46,
  sym_account_name = 47,
  anon_sym_DASH = 48,
  aux_sym_quantity_token1 = 49,
  aux_sym_commodity_token1 = 50,
  aux_sym_commodity_token2 = 51,
  anon_sym_AT = 52,
  anon_sym_AT_AT = 53,
  anon_sym_ = 54,
  anon_sym_TAB = 55,
  anon_sym_2 = 56,
  anon_sym_TAB2 = 57,
  sym_source_file = 58,
  sym_journal_item = 59,
  sym_comment = 60,
  sym_directive = 61,
  sym_account_directive = 62,
  sym_account_subdirective = 63,
  sym_commodity_directive = 64,
  sym_commodity_subdirective = 65,
  sym_word_directive = 66,
  sym_char_directive = 67,
  sym_alias_subdirective = 68,
  sym_assert_subdirective = 69,
  sym_check_subdirective = 70,
  sym_default_subdirective = 71,
  sym_eval_subdirective = 72,
  sym_format_subdirective = 73,
  sym_nomarket_subdirective = 74,
  sym_note_subdirective = 75,
  sym_payee_subdirective = 76,
  sym_check_in = 77,
  sym_check_out = 78,
  sym_xact = 79,
  sym_plain_xact = 80,
  sym_periodic_xact = 81,
  sym_date = 82,
  sym_status = 83,
  sym_note = 84,
  sym_posting = 85,
  sym_account = 86,
  sym_amount = 87,
  sym_quantity = 88,
  sym_commodity = 89,
  sym_price = 90,
  sym_balance_assertion = 91,
  aux_sym_source_file_repeat1 = 92,
  aux_sym_account_directive_repeat1 = 93,
  aux_sym_commodity_directive_repeat1 = 94,
  aux_sym_plain_xact_repeat1 = 95,
  aux_sym_whitespace_repeat1 = 96,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_STAR] = "*",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_account] = "account",
  [anon_sym_commodity] = "commodity",
  [anon_sym_include] = "include",
  [aux_sym_word_directive_token1] = "word_directive_token1",
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
  [anon_sym_N] = "N",
  [anon_sym_D] = "D",
  [anon_sym_C] = "C",
  [anon_sym_P] = "P",
  [aux_sym_alias_subdirective_token1] = "alias_subdirective_token1",
  [anon_sym_assert] = "assert",
  [anon_sym_check] = "check",
  [anon_sym_default] = "default",
  [aux_sym_default_subdirective_token1] = "default_subdirective_token1",
  [anon_sym_eval] = "eval",
  [anon_sym_format] = "format",
  [anon_sym_nomarket] = "nomarket",
  [anon_sym_note] = "note",
  [anon_sym_payee] = "payee",
  [anon_sym_i] = "i",
  [anon_sym_I] = "I",
  [anon_sym_o] = "o",
  [anon_sym_O] = "O",
  [anon_sym_TILDE] = "~",
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
  [aux_sym_commodity_token1] = "commodity_token1",
  [aux_sym_commodity_token2] = "commodity_token2",
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
  [sym_account_directive] = "account_directive",
  [sym_account_subdirective] = "account_subdirective",
  [sym_commodity_directive] = "commodity_directive",
  [sym_commodity_subdirective] = "commodity_subdirective",
  [sym_word_directive] = "word_directive",
  [sym_char_directive] = "char_directive",
  [sym_alias_subdirective] = "alias_subdirective",
  [sym_assert_subdirective] = "assert_subdirective",
  [sym_check_subdirective] = "check_subdirective",
  [sym_default_subdirective] = "default_subdirective",
  [sym_eval_subdirective] = "eval_subdirective",
  [sym_format_subdirective] = "format_subdirective",
  [sym_nomarket_subdirective] = "nomarket_subdirective",
  [sym_note_subdirective] = "note_subdirective",
  [sym_payee_subdirective] = "payee_subdirective",
  [sym_check_in] = "check_in",
  [sym_check_out] = "check_out",
  [sym_xact] = "xact",
  [sym_plain_xact] = "plain_xact",
  [sym_periodic_xact] = "periodic_xact",
  [sym_date] = "date",
  [sym_status] = "status",
  [sym_note] = "note",
  [sym_posting] = "posting",
  [sym_account] = "account",
  [sym_amount] = "amount",
  [sym_quantity] = "quantity",
  [sym_commodity] = "commodity",
  [sym_price] = "price",
  [sym_balance_assertion] = "balance_assertion",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_account_directive_repeat1] = "account_directive_repeat1",
  [aux_sym_commodity_directive_repeat1] = "commodity_directive_repeat1",
  [aux_sym_plain_xact_repeat1] = "plain_xact_repeat1",
  [aux_sym_whitespace_repeat1] = "whitespace_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_account] = anon_sym_account,
  [anon_sym_commodity] = anon_sym_commodity,
  [anon_sym_include] = anon_sym_include,
  [aux_sym_word_directive_token1] = aux_sym_word_directive_token1,
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
  [anon_sym_N] = anon_sym_N,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_C] = anon_sym_C,
  [anon_sym_P] = anon_sym_P,
  [aux_sym_alias_subdirective_token1] = aux_sym_alias_subdirective_token1,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_check] = anon_sym_check,
  [anon_sym_default] = anon_sym_default,
  [aux_sym_default_subdirective_token1] = aux_sym_default_subdirective_token1,
  [anon_sym_eval] = anon_sym_eval,
  [anon_sym_format] = anon_sym_format,
  [anon_sym_nomarket] = anon_sym_nomarket,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_payee] = anon_sym_payee,
  [anon_sym_i] = anon_sym_i,
  [anon_sym_I] = anon_sym_I,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_O] = anon_sym_O,
  [anon_sym_TILDE] = anon_sym_TILDE,
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
  [aux_sym_commodity_token1] = aux_sym_commodity_token1,
  [aux_sym_commodity_token2] = aux_sym_commodity_token2,
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
  [sym_account_directive] = sym_account_directive,
  [sym_account_subdirective] = sym_account_subdirective,
  [sym_commodity_directive] = sym_commodity_directive,
  [sym_commodity_subdirective] = sym_commodity_subdirective,
  [sym_word_directive] = sym_word_directive,
  [sym_char_directive] = sym_char_directive,
  [sym_alias_subdirective] = sym_alias_subdirective,
  [sym_assert_subdirective] = sym_assert_subdirective,
  [sym_check_subdirective] = sym_check_subdirective,
  [sym_default_subdirective] = sym_default_subdirective,
  [sym_eval_subdirective] = sym_eval_subdirective,
  [sym_format_subdirective] = sym_format_subdirective,
  [sym_nomarket_subdirective] = sym_nomarket_subdirective,
  [sym_note_subdirective] = sym_note_subdirective,
  [sym_payee_subdirective] = sym_payee_subdirective,
  [sym_check_in] = sym_check_in,
  [sym_check_out] = sym_check_out,
  [sym_xact] = sym_xact,
  [sym_plain_xact] = sym_plain_xact,
  [sym_periodic_xact] = sym_periodic_xact,
  [sym_date] = sym_date,
  [sym_status] = sym_status,
  [sym_note] = sym_note,
  [sym_posting] = sym_posting,
  [sym_account] = sym_account,
  [sym_amount] = sym_amount,
  [sym_quantity] = sym_quantity,
  [sym_commodity] = sym_commodity,
  [sym_price] = sym_price,
  [sym_balance_assertion] = sym_balance_assertion,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_account_directive_repeat1] = aux_sym_account_directive_repeat1,
  [aux_sym_commodity_directive_repeat1] = aux_sym_commodity_directive_repeat1,
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
  [anon_sym_account] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commodity] = {
    .visible = true,
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
  [anon_sym_N] = {
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
  [anon_sym_P] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_alias_subdirective_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_check] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_default_subdirective_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_eval] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_format] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nomarket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_payee] = {
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
  [anon_sym_TILDE] = {
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
  [aux_sym_commodity_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commodity_token2] = {
    .visible = false,
    .named = false,
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
  [sym_account_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_account_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity_subdirective] = {
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
  [sym_alias_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_assert_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_check_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_default_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_eval_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_format_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_nomarket_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_note_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_payee_subdirective] = {
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
  [sym_periodic_xact] = {
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
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity] = {
    .visible = true,
    .named = true,
  },
  [sym_price] = {
    .visible = true,
    .named = true,
  },
  [sym_balance_assertion] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_account_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commodity_directive_repeat1] = {
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

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool aux_sym_commodity_token1_character_set_1(int32_t c) {
  return (c < 6688
    ? (c < 2990
      ? (c < 2384
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'g'
                  ? (c >= 'B' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2230
                ? (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)
                : (c <= 2247 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2877
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2962
              ? (c < 2947
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))
              : (c <= 2965 || (c < 2974
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 4193
        ? (c < 3461
          ? (c < 3253
            ? (c < 3160
              ? (c < 3090
                ? (c < 3077
                  ? c == 3024
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : c <= 3133)))
              : (c <= 3162 || (c < 3214
                ? (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))))
            : (c <= 3257 || (c < 3346
              ? (c < 3313
                ? (c < 3294
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3314 || (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)))
              : (c <= 3386 || (c < 3412
                ? (c < 3406
                  ? c == 3389
                  : c <= 3406)
                : (c <= 3414 || (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : c <= 3455)))))))
          : (c <= 3478 || (c < 3762
            ? (c < 3648
              ? (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : c <= 3635)))
              : (c <= 3654 || (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))))
            : (c <= 3763 || (c < 3913
              ? (c < 3804
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3904
                  ? c == 3840
                  : c <= 3911)))
              : (c <= 3948 || (c < 4159
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)
                : (c <= 4159 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))))))))
        : (c <= 4193 || (c < 5112
          ? (c < 4704
            ? (c < 4301
              ? (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : c <= 4295)))
              : (c <= 4301 || (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))))
            : (c <= 4744 || (c < 4808
              ? (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))
              : (c <= 4822 || (c < 4888
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))))))
          : (c <= 5117 || (c < 6103
            ? (c < 5902
              ? (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5900)))
              : (c <= 5905 || (c < 5984
                ? (c < 5952
                  ? (c >= 5920 && c <= 5937)
                  : c <= 5969)
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43259
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6987)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11310 || (c < 12549
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11360
                  ? (c >= 11312 && c <= 11358)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : c <= 12294)))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12347 && c <= 12348)
                  : c <= 12438)
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42623
            ? (c < 40956
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 40956 || (c < 42512
                ? (c < 42192
                  ? (c >= 40960 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 43011
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42943 || (c < 42997
                  ? (c >= 42946 && c <= 42954)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67828
            ? (c < 67639
              ? (c < 67584
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67594
                  ? c == 67592
                  : c <= 67637)))
              : (c <= 67640 || (c < 67680
                ? (c < 67647
                  ? c == 67644
                  : c <= 67669)
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool aux_sym_commodity_token1_character_set_2(int32_t c) {
  return (c < 6688
    ? (c < 2990
      ? (c < 2384
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'a'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2230
                ? (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)
                : (c <= 2247 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2877
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2962
              ? (c < 2947
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))
              : (c <= 2965 || (c < 2974
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 4193
        ? (c < 3461
          ? (c < 3253
            ? (c < 3160
              ? (c < 3090
                ? (c < 3077
                  ? c == 3024
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : c <= 3133)))
              : (c <= 3162 || (c < 3214
                ? (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))))
            : (c <= 3257 || (c < 3346
              ? (c < 3313
                ? (c < 3294
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3314 || (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)))
              : (c <= 3386 || (c < 3412
                ? (c < 3406
                  ? c == 3389
                  : c <= 3406)
                : (c <= 3414 || (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : c <= 3455)))))))
          : (c <= 3478 || (c < 3762
            ? (c < 3648
              ? (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : c <= 3635)))
              : (c <= 3654 || (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))))
            : (c <= 3763 || (c < 3913
              ? (c < 3804
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3904
                  ? c == 3840
                  : c <= 3911)))
              : (c <= 3948 || (c < 4159
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)
                : (c <= 4159 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))))))))
        : (c <= 4193 || (c < 5112
          ? (c < 4704
            ? (c < 4301
              ? (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : c <= 4295)))
              : (c <= 4301 || (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))))
            : (c <= 4744 || (c < 4808
              ? (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))
              : (c <= 4822 || (c < 4888
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))))))
          : (c <= 5117 || (c < 6103
            ? (c < 5902
              ? (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5900)))
              : (c <= 5905 || (c < 5984
                ? (c < 5952
                  ? (c >= 5920 && c <= 5937)
                  : c <= 5969)
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43259
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6987)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11310 || (c < 12549
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11360
                  ? (c >= 11312 && c <= 11358)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : c <= 12294)))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12347 && c <= 12348)
                  : c <= 12438)
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42623
            ? (c < 40956
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 40956 || (c < 42512
                ? (c < 42192
                  ? (c >= 40960 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 43011
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42943 || (c < 42997
                  ? (c >= 42946 && c <= 42954)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67828
            ? (c < 67639
              ? (c < 67584
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67594
                  ? c == 67592
                  : c <= 67637)))
              : (c <= 67640 || (c < 67680
                ? (c < 67647
                  ? c == 67644
                  : c <= 67669)
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool aux_sym_commodity_token1_character_set_3(int32_t c) {
  return (c < 6688
    ? (c < 2990
      ? (c < 2384
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'b'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2230
                ? (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)
                : (c <= 2247 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2877
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2962
              ? (c < 2947
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))
              : (c <= 2965 || (c < 2974
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 4193
        ? (c < 3461
          ? (c < 3253
            ? (c < 3160
              ? (c < 3090
                ? (c < 3077
                  ? c == 3024
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : c <= 3133)))
              : (c <= 3162 || (c < 3214
                ? (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))))
            : (c <= 3257 || (c < 3346
              ? (c < 3313
                ? (c < 3294
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3314 || (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)))
              : (c <= 3386 || (c < 3412
                ? (c < 3406
                  ? c == 3389
                  : c <= 3406)
                : (c <= 3414 || (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : c <= 3455)))))))
          : (c <= 3478 || (c < 3762
            ? (c < 3648
              ? (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : c <= 3635)))
              : (c <= 3654 || (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))))
            : (c <= 3763 || (c < 3913
              ? (c < 3804
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3904
                  ? c == 3840
                  : c <= 3911)))
              : (c <= 3948 || (c < 4159
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)
                : (c <= 4159 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))))))))
        : (c <= 4193 || (c < 5112
          ? (c < 4704
            ? (c < 4301
              ? (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : c <= 4295)))
              : (c <= 4301 || (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))))
            : (c <= 4744 || (c < 4808
              ? (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))
              : (c <= 4822 || (c < 4888
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))))))
          : (c <= 5117 || (c < 6103
            ? (c < 5902
              ? (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5900)))
              : (c <= 5905 || (c < 5984
                ? (c < 5952
                  ? (c >= 5920 && c <= 5937)
                  : c <= 5969)
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43259
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6987)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11310 || (c < 12549
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11360
                  ? (c >= 11312 && c <= 11358)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : c <= 12294)))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12347 && c <= 12348)
                  : c <= 12438)
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42623
            ? (c < 40956
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 40956 || (c < 42512
                ? (c < 42192
                  ? (c >= 40960 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 43011
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42943 || (c < 42997
                  ? (c >= 42946 && c <= 42954)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67828
            ? (c < 67639
              ? (c < 67584
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67594
                  ? c == 67592
                  : c <= 67637)))
              : (c <= 67640 || (c < 67680
                ? (c < 67647
                  ? c == 67644
                  : c <= 67669)
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(109);
      if (lookahead == '\t') ADVANCE(263);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead == '!') ADVANCE(177);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '(') ADVANCE(181);
      if (lookahead == ')') ADVANCE(183);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '=') ADVANCE(127);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == 'A') ADVANCE(137);
      if (lookahead == 'C') ADVANCE(145);
      if (lookahead == 'D') ADVANCE(143);
      if (lookahead == 'I') ADVANCE(169);
      if (lookahead == 'N') ADVANCE(141);
      if (lookahead == 'O') ADVANCE(173);
      if (lookahead == 'P') ADVANCE(147);
      if (lookahead == 'Y') ADVANCE(139);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == ']') ADVANCE(186);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'b') ADVANCE(249);
      if (lookahead == 'c') ADVANCE(216);
      if (lookahead == 'd') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == 'f') ADVANCE(231);
      if (lookahead == 'i') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == 'p') ADVANCE(191);
      if (lookahead == 'y') ADVANCE(210);
      if (lookahead == '~') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(254);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(263);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '=') ADVANCE(127);
      if (lookahead == '@') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(263);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(263);
      if (lookahead == '\n') ADVANCE(155);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 'p') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(263);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '=') ADVANCE(127);
      if (lookahead == '@') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(265);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead == '!') ADVANCE(178);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '*') ADVANCE(113);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(265);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '[') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(188);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(266);
      if (lookahead == ' ') ADVANCE(260);
      if (lookahead == '!') ADVANCE(177);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(179);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(264);
      if (lookahead == ' ') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(270);
      if (lookahead == ' ') ADVANCE(269);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(268);
      if (lookahead == ' ') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(126);
      END_STATE();
    case 11:
      if (lookahead == '\t') ADVANCE(267);
      if (lookahead == ' ') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(148);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(99);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(122);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 44:
      if (lookahead == 'f') ADVANCE(128);
      END_STATE();
    case 45:
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(41);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 49:
      if (lookahead == 'k') ADVANCE(151);
      END_STATE();
    case 50:
      if (lookahead == 'k') ADVANCE(35);
      END_STATE();
    case 51:
      if (lookahead == 'k') ADVANCE(42);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(23);
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 81:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 83:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 84:
      if (lookahead == 'v') ADVANCE(20);
      END_STATE();
    case 85:
      if (lookahead == 'y') ADVANCE(117);
      END_STATE();
    case 86:
      if (lookahead == 'y') ADVANCE(43);
      END_STATE();
    case 87:
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 88:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(98);
      END_STATE();
    case 89:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(100);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 105:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 106:
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(188);
      END_STATE();
    case 107:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 108:
      if (eof) ADVANCE(109);
      if (lookahead == '\t') ADVANCE(263);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '=') ADVANCE(127);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == 'A') ADVANCE(136);
      if (lookahead == 'C') ADVANCE(144);
      if (lookahead == 'D') ADVANCE(142);
      if (lookahead == 'I') ADVANCE(168);
      if (lookahead == 'N') ADVANCE(140);
      if (lookahead == 'O') ADVANCE(172);
      if (lookahead == 'P') ADVANCE(146);
      if (lookahead == 'Y') ADVANCE(138);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(167);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == 'y') ADVANCE(34);
      if (lookahead == '~') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(187);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_account);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_include);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_word_directive_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_end);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_alias);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_word_directive_token2);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'a') ADVANCE(251);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(254);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_year);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_word_directive_token3);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_word_directive_token3);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(98);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_bucket);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_A);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_Y);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_N);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_D);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_C);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_P);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_alias_subdirective_token1);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_assert);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_check);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_check);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_default);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_default_subdirective_token1);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_eval);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_eval);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_format);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_nomarket);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_nomarket);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_note);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_payee);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_payee);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(200);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_I);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_o);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_O);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_single_date);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(187);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(187);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(187);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(187);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(253);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(254);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(222);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(254);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(239);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(254);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(235);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(254);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(243);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(254);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(238);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(254);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(217);
      if (lookahead == 's') ADVANCE(240);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(220);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(219);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(223);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(233);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(123);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(218);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(208);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(215);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(163);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(165);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(120);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(242);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(194);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(236);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(199);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(246);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(207);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'f') ADVANCE(129);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'h') ADVANCE(212);
      if (lookahead == 'o') ADVANCE(225);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(193);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(247);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(152);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(209);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(213);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(157);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(250);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(245);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(226);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(234);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 't') ADVANCE(206);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(195);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(202);
      if (lookahead == 'v') ADVANCE(192);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(244);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(237);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(227);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(248);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(203);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(131);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(241);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(228);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(221);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(125);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(211);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(150);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(135);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(159);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(116);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(154);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(161);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(252);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(230);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(198);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(204);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(224);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'y') ADVANCE(118);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'y') ADVANCE(214);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(148);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(179);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(126);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(148);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(187);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(179);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(126);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 108},
  [2] = {.lex_state = 108},
  [3] = {.lex_state = 108},
  [4] = {.lex_state = 108},
  [5] = {.lex_state = 108},
  [6] = {.lex_state = 108},
  [7] = {.lex_state = 108},
  [8] = {.lex_state = 108},
  [9] = {.lex_state = 108},
  [10] = {.lex_state = 108},
  [11] = {.lex_state = 108},
  [12] = {.lex_state = 108},
  [13] = {.lex_state = 108},
  [14] = {.lex_state = 108},
  [15] = {.lex_state = 108},
  [16] = {.lex_state = 108},
  [17] = {.lex_state = 108},
  [18] = {.lex_state = 108},
  [19] = {.lex_state = 108},
  [20] = {.lex_state = 108},
  [21] = {.lex_state = 108},
  [22] = {.lex_state = 108},
  [23] = {.lex_state = 108},
  [24] = {.lex_state = 108},
  [25] = {.lex_state = 108},
  [26] = {.lex_state = 108},
  [27] = {.lex_state = 108},
  [28] = {.lex_state = 108},
  [29] = {.lex_state = 108},
  [30] = {.lex_state = 108},
  [31] = {.lex_state = 108},
  [32] = {.lex_state = 108},
  [33] = {.lex_state = 108},
  [34] = {.lex_state = 108},
  [35] = {.lex_state = 108},
  [36] = {.lex_state = 108},
  [37] = {.lex_state = 108},
  [38] = {.lex_state = 108},
  [39] = {.lex_state = 108},
  [40] = {.lex_state = 108},
  [41] = {.lex_state = 108},
  [42] = {.lex_state = 108},
  [43] = {.lex_state = 108},
  [44] = {.lex_state = 108},
  [45] = {.lex_state = 108},
  [46] = {.lex_state = 108},
  [47] = {.lex_state = 108},
  [48] = {.lex_state = 108},
  [49] = {.lex_state = 108},
  [50] = {.lex_state = 108},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 108},
  [61] = {.lex_state = 108},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 108},
  [65] = {.lex_state = 108},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 108},
  [86] = {.lex_state = 108},
  [87] = {.lex_state = 108},
  [88] = {.lex_state = 108},
  [89] = {.lex_state = 108},
  [90] = {.lex_state = 108},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 108},
  [113] = {.lex_state = 108},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 108},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 108},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 108},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 108},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 108},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 108},
  [132] = {.lex_state = 108},
  [133] = {.lex_state = 108},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 108},
  [138] = {.lex_state = 108},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 108},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 108},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 108},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 108},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 11},
  [164] = {.lex_state = 108},
  [165] = {.lex_state = 108},
  [166] = {.lex_state = 11},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 10},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 108},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 108},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 108},
  [191] = {.lex_state = 108},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 108},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 7},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 7},
  [204] = {.lex_state = 7},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 108},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 3},
  [227] = {.lex_state = 108},
  [228] = {.lex_state = 108},
  [229] = {.lex_state = 108},
  [230] = {.lex_state = 108},
  [231] = {.lex_state = 108},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 108},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 108},
  [236] = {.lex_state = 108},
  [237] = {.lex_state = 108},
  [238] = {.lex_state = 108},
  [239] = {.lex_state = 108},
  [240] = {.lex_state = 106},
  [241] = {.lex_state = 106},
  [242] = {.lex_state = 108},
  [243] = {.lex_state = 108},
  [244] = {.lex_state = 108},
  [245] = {.lex_state = 108},
  [246] = {.lex_state = 108},
  [247] = {.lex_state = 108},
  [248] = {.lex_state = 108},
  [249] = {.lex_state = 108},
  [250] = {.lex_state = 13},
  [251] = {.lex_state = 108},
  [252] = {.lex_state = 108},
  [253] = {.lex_state = 108},
  [254] = {.lex_state = 108},
  [255] = {.lex_state = 108},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 108},
  [258] = {.lex_state = 108},
  [259] = {.lex_state = 108},
  [260] = {.lex_state = 108},
  [261] = {.lex_state = 108},
  [262] = {.lex_state = 108},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 107},
  [266] = {.lex_state = 3},
  [267] = {.lex_state = 108},
  [268] = {.lex_state = 108},
  [269] = {.lex_state = 108},
  [270] = {.lex_state = 108},
  [271] = {.lex_state = 108},
  [272] = {.lex_state = 108},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 180},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_account] = ACTIONS(1),
    [anon_sym_commodity] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_year] = ACTIONS(1),
    [aux_sym_word_directive_token3] = ACTIONS(1),
    [anon_sym_bucket] = ACTIONS(1),
    [anon_sym_A] = ACTIONS(1),
    [anon_sym_Y] = ACTIONS(1),
    [anon_sym_N] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_C] = ACTIONS(1),
    [anon_sym_P] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_check] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [aux_sym_default_subdirective_token1] = ACTIONS(1),
    [anon_sym_eval] = ACTIONS(1),
    [anon_sym_format] = ACTIONS(1),
    [anon_sym_nomarket] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_payee] = ACTIONS(1),
    [anon_sym_i] = ACTIONS(1),
    [anon_sym_I] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_O] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [sym_single_date] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_commodity_token1] = ACTIONS(1),
    [aux_sym_commodity_token2] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(256),
    [sym_journal_item] = STATE(3),
    [sym_comment] = STATE(46),
    [sym_directive] = STATE(46),
    [sym_account_directive] = STATE(49),
    [sym_commodity_directive] = STATE(49),
    [sym_word_directive] = STATE(254),
    [sym_char_directive] = STATE(254),
    [sym_check_in] = STATE(253),
    [sym_check_out] = STATE(253),
    [sym_xact] = STATE(46),
    [sym_plain_xact] = STATE(50),
    [sym_periodic_xact] = STATE(50),
    [sym_date] = STATE(165),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_account] = ACTIONS(9),
    [anon_sym_commodity] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(13),
    [anon_sym_end] = ACTIONS(15),
    [anon_sym_alias] = ACTIONS(17),
    [anon_sym_def] = ACTIONS(13),
    [anon_sym_year] = ACTIONS(19),
    [anon_sym_bucket] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_Y] = ACTIONS(25),
    [anon_sym_N] = ACTIONS(27),
    [anon_sym_D] = ACTIONS(29),
    [anon_sym_C] = ACTIONS(31),
    [anon_sym_P] = ACTIONS(33),
    [anon_sym_i] = ACTIONS(35),
    [anon_sym_I] = ACTIONS(37),
    [anon_sym_o] = ACTIONS(39),
    [anon_sym_O] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [sym_single_date] = ACTIONS(43),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 28,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_LF,
    ACTIONS(53), 1,
      anon_sym_account,
    ACTIONS(56), 1,
      anon_sym_commodity,
    ACTIONS(62), 1,
      anon_sym_end,
    ACTIONS(65), 1,
      anon_sym_alias,
    ACTIONS(68), 1,
      anon_sym_year,
    ACTIONS(71), 1,
      anon_sym_bucket,
    ACTIONS(74), 1,
      anon_sym_A,
    ACTIONS(77), 1,
      anon_sym_Y,
    ACTIONS(80), 1,
      anon_sym_N,
    ACTIONS(83), 1,
      anon_sym_D,
    ACTIONS(86), 1,
      anon_sym_C,
    ACTIONS(89), 1,
      anon_sym_P,
    ACTIONS(92), 1,
      anon_sym_i,
    ACTIONS(95), 1,
      anon_sym_I,
    ACTIONS(101), 1,
      anon_sym_TILDE,
    ACTIONS(104), 1,
      sym_single_date,
    STATE(165), 1,
      sym_date,
    ACTIONS(50), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(59), 2,
      anon_sym_include,
      anon_sym_def,
    ACTIONS(98), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(49), 2,
      sym_account_directive,
      sym_commodity_directive,
    STATE(50), 2,
      sym_plain_xact,
      sym_periodic_xact,
    STATE(253), 2,
      sym_check_in,
      sym_check_out,
    STATE(254), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(46), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [95] = 28,
    ACTIONS(9), 1,
      anon_sym_account,
    ACTIONS(11), 1,
      anon_sym_commodity,
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
      anon_sym_N,
    ACTIONS(29), 1,
      anon_sym_D,
    ACTIONS(31), 1,
      anon_sym_C,
    ACTIONS(33), 1,
      anon_sym_P,
    ACTIONS(35), 1,
      anon_sym_i,
    ACTIONS(37), 1,
      anon_sym_I,
    ACTIONS(41), 1,
      anon_sym_TILDE,
    ACTIONS(43), 1,
      sym_single_date,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      anon_sym_LF,
    STATE(165), 1,
      sym_date,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(13), 2,
      anon_sym_include,
      anon_sym_def,
    ACTIONS(39), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(49), 2,
      sym_account_directive,
      sym_commodity_directive,
    STATE(50), 2,
      sym_plain_xact,
      sym_periodic_xact,
    STATE(253), 2,
      sym_check_in,
      sym_check_out,
    STATE(254), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(46), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [190] = 6,
    ACTIONS(113), 1,
      anon_sym_i,
    STATE(67), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(115), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    STATE(40), 7,
      sym_alias_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
      sym_default_subdirective,
      sym_eval_subdirective,
      sym_note_subdirective,
      sym_payee_subdirective,
    ACTIONS(111), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [239] = 6,
    ACTIONS(119), 1,
      anon_sym_i,
    STATE(67), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(115), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    STATE(40), 7,
      sym_alias_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
      sym_default_subdirective,
      sym_eval_subdirective,
      sym_note_subdirective,
      sym_payee_subdirective,
    ACTIONS(117), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [288] = 6,
    ACTIONS(123), 1,
      anon_sym_i,
    STATE(67), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(125), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    STATE(40), 7,
      sym_alias_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
      sym_default_subdirective,
      sym_eval_subdirective,
      sym_note_subdirective,
      sym_payee_subdirective,
    ACTIONS(121), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [337] = 6,
    ACTIONS(130), 1,
      anon_sym_i,
    STATE(84), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(132), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(8), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    STATE(41), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_nomarket_subdirective,
      sym_note_subdirective,
    ACTIONS(128), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [384] = 6,
    ACTIONS(136), 1,
      anon_sym_i,
    STATE(84), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(132), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(9), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    STATE(41), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_nomarket_subdirective,
      sym_note_subdirective,
    ACTIONS(134), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [431] = 6,
    ACTIONS(140), 1,
      anon_sym_i,
    STATE(84), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(142), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(9), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    STATE(41), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_nomarket_subdirective,
      sym_note_subdirective,
    ACTIONS(138), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [478] = 5,
    ACTIONS(147), 1,
      anon_sym_i,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(149), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(10), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(145), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [518] = 5,
    ACTIONS(154), 1,
      anon_sym_i,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(156), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(10), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(152), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [558] = 2,
    ACTIONS(160), 2,
      anon_sym_i,
      anon_sym_AT,
    ACTIONS(158), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_EQ,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [592] = 5,
    ACTIONS(164), 1,
      anon_sym_i,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(156), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(10), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(162), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [632] = 2,
    ACTIONS(168), 2,
      anon_sym_i,
      anon_sym_AT,
    ACTIONS(166), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_EQ,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [666] = 5,
    ACTIONS(172), 1,
      anon_sym_i,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(156), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(10), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(170), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [706] = 5,
    ACTIONS(176), 1,
      anon_sym_i,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(156), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(10), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(174), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [746] = 5,
    ACTIONS(180), 1,
      anon_sym_i,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(156), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(10), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(178), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [786] = 5,
    ACTIONS(184), 1,
      anon_sym_i,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(156), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(10), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(182), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [826] = 2,
    ACTIONS(188), 1,
      anon_sym_i,
    ACTIONS(186), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [857] = 2,
    ACTIONS(192), 1,
      anon_sym_i,
    ACTIONS(190), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [888] = 2,
    ACTIONS(196), 1,
      anon_sym_i,
    ACTIONS(194), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [919] = 2,
    ACTIONS(200), 1,
      anon_sym_i,
    ACTIONS(198), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [950] = 2,
    ACTIONS(204), 1,
      anon_sym_i,
    ACTIONS(202), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [981] = 2,
    ACTIONS(208), 1,
      anon_sym_i,
    ACTIONS(206), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1012] = 2,
    ACTIONS(212), 1,
      anon_sym_i,
    ACTIONS(210), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1043] = 2,
    ACTIONS(216), 1,
      anon_sym_i,
    ACTIONS(214), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1074] = 2,
    ACTIONS(220), 1,
      anon_sym_i,
    ACTIONS(218), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1105] = 2,
    ACTIONS(224), 1,
      anon_sym_i,
    ACTIONS(222), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1136] = 2,
    ACTIONS(228), 1,
      anon_sym_i,
    ACTIONS(226), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1167] = 2,
    ACTIONS(232), 1,
      anon_sym_i,
    ACTIONS(230), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1198] = 2,
    ACTIONS(236), 1,
      anon_sym_i,
    ACTIONS(234), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1229] = 2,
    ACTIONS(240), 1,
      anon_sym_i,
    ACTIONS(238), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1260] = 2,
    ACTIONS(244), 1,
      anon_sym_i,
    ACTIONS(242), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1291] = 2,
    ACTIONS(248), 1,
      anon_sym_i,
    ACTIONS(246), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1322] = 2,
    ACTIONS(252), 1,
      anon_sym_i,
    ACTIONS(250), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1353] = 2,
    ACTIONS(256), 1,
      anon_sym_i,
    ACTIONS(254), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1384] = 2,
    ACTIONS(260), 1,
      anon_sym_i,
    ACTIONS(258), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1415] = 2,
    ACTIONS(264), 1,
      anon_sym_i,
    ACTIONS(262), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1446] = 2,
    ACTIONS(268), 1,
      anon_sym_i,
    ACTIONS(266), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1477] = 2,
    ACTIONS(272), 1,
      anon_sym_i,
    ACTIONS(270), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1508] = 2,
    ACTIONS(276), 1,
      anon_sym_i,
    ACTIONS(274), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1539] = 2,
    ACTIONS(280), 1,
      anon_sym_i,
    ACTIONS(278), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1570] = 2,
    ACTIONS(284), 1,
      anon_sym_i,
    ACTIONS(282), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1601] = 2,
    ACTIONS(288), 1,
      anon_sym_i,
    ACTIONS(286), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1632] = 2,
    ACTIONS(292), 1,
      anon_sym_i,
    ACTIONS(290), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1663] = 2,
    ACTIONS(296), 1,
      anon_sym_i,
    ACTIONS(294), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [1692] = 2,
    ACTIONS(300), 1,
      anon_sym_i,
    ACTIONS(298), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [1721] = 2,
    ACTIONS(304), 1,
      anon_sym_i,
    ACTIONS(302), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [1750] = 2,
    ACTIONS(308), 1,
      anon_sym_i,
    ACTIONS(306), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [1779] = 2,
    ACTIONS(312), 1,
      anon_sym_i,
    ACTIONS(310), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [1808] = 16,
    ACTIONS(314), 1,
      anon_sym_LF,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_EQ,
    ACTIONS(320), 1,
      anon_sym_DASH,
    ACTIONS(322), 1,
      aux_sym_quantity_token1,
    ACTIONS(326), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_AT_AT,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    STATE(64), 1,
      sym_amount,
    STATE(90), 1,
      sym_price,
    STATE(110), 1,
      sym_commodity,
    STATE(125), 1,
      sym_quantity,
    STATE(127), 1,
      sym_balance_assertion,
    STATE(231), 1,
      sym_note,
    ACTIONS(324), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(330), 2,
      anon_sym_,
      anon_sym_TAB,
  [1859] = 16,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_EQ,
    ACTIONS(320), 1,
      anon_sym_DASH,
    ACTIONS(322), 1,
      aux_sym_quantity_token1,
    ACTIONS(326), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_AT_AT,
    ACTIONS(332), 1,
      anon_sym_LF,
    STATE(54), 1,
      aux_sym_whitespace_repeat1,
    STATE(61), 1,
      sym_amount,
    STATE(85), 1,
      sym_price,
    STATE(110), 1,
      sym_commodity,
    STATE(124), 1,
      sym_balance_assertion,
    STATE(125), 1,
      sym_quantity,
    STATE(271), 1,
      sym_note,
    ACTIONS(324), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(334), 2,
      anon_sym_,
      anon_sym_TAB,
  [1910] = 16,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_EQ,
    ACTIONS(320), 1,
      anon_sym_DASH,
    ACTIONS(322), 1,
      aux_sym_quantity_token1,
    ACTIONS(326), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_AT_AT,
    ACTIONS(336), 1,
      anon_sym_LF,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(65), 1,
      sym_amount,
    STATE(87), 1,
      sym_price,
    STATE(110), 1,
      sym_commodity,
    STATE(113), 1,
      sym_balance_assertion,
    STATE(125), 1,
      sym_quantity,
    STATE(272), 1,
      sym_note,
    ACTIONS(324), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(338), 2,
      anon_sym_,
      anon_sym_TAB,
  [1961] = 15,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_EQ,
    ACTIONS(320), 1,
      anon_sym_DASH,
    ACTIONS(322), 1,
      aux_sym_quantity_token1,
    ACTIONS(326), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_AT_AT,
    STATE(60), 1,
      sym_amount,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    STATE(89), 1,
      sym_price,
    STATE(110), 1,
      sym_commodity,
    STATE(125), 1,
      sym_quantity,
    STATE(129), 1,
      sym_balance_assertion,
    STATE(247), 1,
      sym_note,
    ACTIONS(324), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(340), 2,
      anon_sym_,
      anon_sym_TAB,
  [2009] = 15,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_EQ,
    ACTIONS(320), 1,
      anon_sym_DASH,
    ACTIONS(322), 1,
      aux_sym_quantity_token1,
    ACTIONS(326), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_AT_AT,
    STATE(61), 1,
      sym_amount,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    STATE(85), 1,
      sym_price,
    STATE(110), 1,
      sym_commodity,
    STATE(124), 1,
      sym_balance_assertion,
    STATE(125), 1,
      sym_quantity,
    STATE(271), 1,
      sym_note,
    ACTIONS(324), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(340), 2,
      anon_sym_,
      anon_sym_TAB,
  [2057] = 15,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_EQ,
    ACTIONS(320), 1,
      anon_sym_DASH,
    ACTIONS(322), 1,
      aux_sym_quantity_token1,
    ACTIONS(326), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_AT_AT,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    STATE(64), 1,
      sym_amount,
    STATE(90), 1,
      sym_price,
    STATE(110), 1,
      sym_commodity,
    STATE(125), 1,
      sym_quantity,
    STATE(127), 1,
      sym_balance_assertion,
    STATE(231), 1,
      sym_note,
    ACTIONS(324), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(340), 2,
      anon_sym_,
      anon_sym_TAB,
  [2105] = 3,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(344), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(342), 9,
      anon_sym_alias,
      anon_sym_assert,
      anon_sym_check,
      anon_sym_default,
      anon_sym_eval,
      anon_sym_format,
      anon_sym_nomarket,
      anon_sym_note,
      anon_sym_payee,
  [2124] = 11,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(353), 1,
      sym_account_name,
    ACTIONS(355), 1,
      anon_sym_,
    ACTIONS(357), 1,
      anon_sym_TAB,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    STATE(103), 1,
      sym_status,
    STATE(199), 1,
      sym_account,
    STATE(270), 1,
      sym_note,
    ACTIONS(347), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [2159] = 4,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(359), 2,
      aux_sym_word_directive_token3,
      anon_sym_AT,
    ACTIONS(361), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(342), 7,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_single_date,
      sym_time,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
  [2180] = 10,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_EQ,
    ACTIONS(326), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_AT_AT,
    ACTIONS(364), 1,
      anon_sym_LF,
    STATE(75), 1,
      aux_sym_whitespace_repeat1,
    STATE(86), 1,
      sym_price,
    STATE(112), 1,
      sym_balance_assertion,
    STATE(230), 1,
      sym_note,
    ACTIONS(366), 2,
      anon_sym_,
      anon_sym_TAB,
  [2212] = 10,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_EQ,
    ACTIONS(326), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_AT_AT,
    ACTIONS(368), 1,
      anon_sym_LF,
    STATE(69), 1,
      aux_sym_whitespace_repeat1,
    STATE(89), 1,
      sym_price,
    STATE(129), 1,
      sym_balance_assertion,
    STATE(247), 1,
      sym_note,
    ACTIONS(370), 2,
      anon_sym_,
      anon_sym_TAB,
  [2244] = 4,
    ACTIONS(359), 1,
      anon_sym_AT,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(372), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(342), 7,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      aux_sym_quantity_token1,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
  [2264] = 2,
    ACTIONS(260), 1,
      anon_sym_AT,
    ACTIONS(258), 10,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      aux_sym_quantity_token1,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [2280] = 10,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_EQ,
    ACTIONS(326), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_AT_AT,
    ACTIONS(332), 1,
      anon_sym_LF,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(85), 1,
      sym_price,
    STATE(124), 1,
      sym_balance_assertion,
    STATE(271), 1,
      sym_note,
    ACTIONS(375), 2,
      anon_sym_,
      anon_sym_TAB,
  [2312] = 10,
    ACTIONS(314), 1,
      anon_sym_LF,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_EQ,
    ACTIONS(326), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_AT_AT,
    STATE(70), 1,
      aux_sym_whitespace_repeat1,
    STATE(90), 1,
      sym_price,
    STATE(127), 1,
      sym_balance_assertion,
    STATE(231), 1,
      sym_note,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [2344] = 8,
    ACTIONS(320), 1,
      anon_sym_DASH,
    ACTIONS(322), 1,
      aux_sym_quantity_token1,
    STATE(78), 1,
      aux_sym_whitespace_repeat1,
    STATE(110), 1,
      sym_commodity,
    STATE(125), 1,
      sym_quantity,
    STATE(188), 1,
      sym_amount,
    ACTIONS(324), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(379), 2,
      anon_sym_,
      anon_sym_TAB,
  [2371] = 9,
    ACTIONS(381), 1,
      anon_sym_alias,
    ACTIONS(383), 1,
      anon_sym_assert,
    ACTIONS(385), 1,
      anon_sym_check,
    ACTIONS(387), 1,
      anon_sym_default,
    ACTIONS(389), 1,
      anon_sym_eval,
    ACTIONS(391), 1,
      anon_sym_note,
    ACTIONS(393), 1,
      anon_sym_payee,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(395), 2,
      anon_sym_,
      anon_sym_TAB,
  [2400] = 8,
    ACTIONS(320), 1,
      anon_sym_DASH,
    ACTIONS(322), 1,
      aux_sym_quantity_token1,
    STATE(19), 1,
      sym_amount,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    STATE(119), 1,
      sym_commodity,
    STATE(120), 1,
      sym_quantity,
    ACTIONS(324), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(340), 2,
      anon_sym_,
      anon_sym_TAB,
  [2427] = 9,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_EQ,
    ACTIONS(326), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_AT_AT,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    STATE(86), 1,
      sym_price,
    STATE(112), 1,
      sym_balance_assertion,
    STATE(230), 1,
      sym_note,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [2456] = 9,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_EQ,
    ACTIONS(326), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_AT_AT,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    STATE(85), 1,
      sym_price,
    STATE(124), 1,
      sym_balance_assertion,
    STATE(271), 1,
      sym_note,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [2485] = 8,
    ACTIONS(320), 1,
      anon_sym_DASH,
    ACTIONS(322), 1,
      aux_sym_quantity_token1,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    STATE(110), 1,
      sym_commodity,
    STATE(125), 1,
      sym_quantity,
    STATE(245), 1,
      sym_amount,
    ACTIONS(324), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(340), 2,
      anon_sym_,
      anon_sym_TAB,
  [2512] = 8,
    ACTIONS(320), 1,
      anon_sym_DASH,
    ACTIONS(322), 1,
      aux_sym_quantity_token1,
    STATE(73), 1,
      aux_sym_whitespace_repeat1,
    STATE(110), 1,
      sym_commodity,
    STATE(125), 1,
      sym_quantity,
    STATE(262), 1,
      sym_amount,
    ACTIONS(324), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(399), 2,
      anon_sym_,
      anon_sym_TAB,
  [2539] = 8,
    ACTIONS(320), 1,
      anon_sym_DASH,
    ACTIONS(322), 1,
      aux_sym_quantity_token1,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    STATE(110), 1,
      sym_commodity,
    STATE(125), 1,
      sym_quantity,
    STATE(267), 1,
      sym_amount,
    ACTIONS(324), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(340), 2,
      anon_sym_,
      anon_sym_TAB,
  [2566] = 8,
    ACTIONS(320), 1,
      anon_sym_DASH,
    ACTIONS(322), 1,
      aux_sym_quantity_token1,
    STATE(71), 1,
      aux_sym_whitespace_repeat1,
    STATE(110), 1,
      sym_commodity,
    STATE(125), 1,
      sym_quantity,
    STATE(267), 1,
      sym_amount,
    ACTIONS(324), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(401), 2,
      anon_sym_,
      anon_sym_TAB,
  [2593] = 9,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_EQ,
    ACTIONS(326), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_AT_AT,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    STATE(88), 1,
      sym_price,
    STATE(117), 1,
      sym_balance_assertion,
    STATE(237), 1,
      sym_note,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [2622] = 8,
    ACTIONS(320), 1,
      anon_sym_DASH,
    ACTIONS(322), 1,
      aux_sym_quantity_token1,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    STATE(110), 1,
      sym_commodity,
    STATE(125), 1,
      sym_quantity,
    STATE(233), 1,
      sym_amount,
    ACTIONS(324), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(340), 2,
      anon_sym_,
      anon_sym_TAB,
  [2649] = 8,
    ACTIONS(320), 1,
      anon_sym_DASH,
    ACTIONS(322), 1,
      aux_sym_quantity_token1,
    STATE(80), 1,
      aux_sym_whitespace_repeat1,
    STATE(110), 1,
      sym_commodity,
    STATE(125), 1,
      sym_quantity,
    STATE(138), 1,
      sym_amount,
    ACTIONS(324), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(403), 2,
      anon_sym_,
      anon_sym_TAB,
  [2676] = 8,
    ACTIONS(320), 1,
      anon_sym_DASH,
    ACTIONS(322), 1,
      aux_sym_quantity_token1,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    STATE(110), 1,
      sym_commodity,
    STATE(125), 1,
      sym_quantity,
    STATE(191), 1,
      sym_amount,
    ACTIONS(324), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(340), 2,
      anon_sym_,
      anon_sym_TAB,
  [2703] = 9,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_EQ,
    ACTIONS(326), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_AT_AT,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    STATE(89), 1,
      sym_price,
    STATE(129), 1,
      sym_balance_assertion,
    STATE(247), 1,
      sym_note,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [2732] = 8,
    ACTIONS(320), 1,
      anon_sym_DASH,
    ACTIONS(322), 1,
      aux_sym_quantity_token1,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    STATE(110), 1,
      sym_commodity,
    STATE(125), 1,
      sym_quantity,
    STATE(154), 1,
      sym_amount,
    ACTIONS(324), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(340), 2,
      anon_sym_,
      anon_sym_TAB,
  [2759] = 2,
    ACTIONS(288), 1,
      anon_sym_AT,
    ACTIONS(286), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [2773] = 2,
    ACTIONS(268), 1,
      anon_sym_AT,
    ACTIONS(266), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [2787] = 5,
    ACTIONS(342), 1,
      anon_sym_SEMI,
    ACTIONS(405), 1,
      anon_sym_,
    ACTIONS(408), 1,
      anon_sym_TAB,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(359), 5,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [2807] = 7,
    ACTIONS(381), 1,
      anon_sym_alias,
    ACTIONS(387), 1,
      anon_sym_default,
    ACTIONS(391), 1,
      anon_sym_note,
    ACTIONS(411), 1,
      anon_sym_format,
    ACTIONS(413), 1,
      anon_sym_nomarket,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(395), 2,
      anon_sym_,
      anon_sym_TAB,
  [2830] = 7,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_EQ,
    ACTIONS(368), 1,
      anon_sym_LF,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(129), 1,
      sym_balance_assertion,
    STATE(247), 1,
      sym_note,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [2853] = 7,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_EQ,
    ACTIONS(417), 1,
      anon_sym_LF,
    STATE(106), 1,
      aux_sym_whitespace_repeat1,
    STATE(117), 1,
      sym_balance_assertion,
    STATE(237), 1,
      sym_note,
    ACTIONS(419), 2,
      anon_sym_,
      anon_sym_TAB,
  [2876] = 7,
    ACTIONS(314), 1,
      anon_sym_LF,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_EQ,
    STATE(105), 1,
      aux_sym_whitespace_repeat1,
    STATE(127), 1,
      sym_balance_assertion,
    STATE(231), 1,
      sym_note,
    ACTIONS(421), 2,
      anon_sym_,
      anon_sym_TAB,
  [2899] = 7,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_EQ,
    ACTIONS(423), 1,
      anon_sym_LF,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(131), 1,
      sym_balance_assertion,
    STATE(243), 1,
      sym_note,
    ACTIONS(425), 2,
      anon_sym_,
      anon_sym_TAB,
  [2922] = 7,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_EQ,
    ACTIONS(364), 1,
      anon_sym_LF,
    STATE(107), 1,
      aux_sym_whitespace_repeat1,
    STATE(112), 1,
      sym_balance_assertion,
    STATE(230), 1,
      sym_note,
    ACTIONS(427), 2,
      anon_sym_,
      anon_sym_TAB,
  [2945] = 7,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_EQ,
    ACTIONS(332), 1,
      anon_sym_LF,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(124), 1,
      sym_balance_assertion,
    STATE(271), 1,
      sym_note,
    ACTIONS(429), 2,
      anon_sym_,
      anon_sym_TAB,
  [2968] = 7,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(353), 1,
      sym_account_name,
    ACTIONS(431), 1,
      anon_sym_,
    ACTIONS(433), 1,
      anon_sym_TAB,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    STATE(192), 1,
      sym_account,
  [2990] = 6,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_EQ,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    STATE(121), 1,
      sym_balance_assertion,
    STATE(248), 1,
      sym_note,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [3010] = 7,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(353), 1,
      sym_account_name,
    ACTIONS(435), 1,
      anon_sym_,
    ACTIONS(437), 1,
      anon_sym_TAB,
    STATE(115), 1,
      aux_sym_whitespace_repeat1,
    STATE(235), 1,
      sym_account,
  [3032] = 7,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(353), 1,
      sym_account_name,
    ACTIONS(435), 1,
      anon_sym_,
    ACTIONS(437), 1,
      anon_sym_TAB,
    STATE(115), 1,
      aux_sym_whitespace_repeat1,
    STATE(233), 1,
      sym_account,
  [3054] = 6,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_EQ,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    STATE(112), 1,
      sym_balance_assertion,
    STATE(230), 1,
      sym_note,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [3074] = 7,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(353), 1,
      sym_account_name,
    ACTIONS(435), 1,
      anon_sym_,
    ACTIONS(437), 1,
      anon_sym_TAB,
    STATE(115), 1,
      aux_sym_whitespace_repeat1,
    STATE(192), 1,
      sym_account,
  [3096] = 5,
    ACTIONS(441), 1,
      sym_payee,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    STATE(186), 1,
      sym_status,
    ACTIONS(439), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(443), 2,
      anon_sym_,
      anon_sym_TAB,
  [3114] = 7,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(353), 1,
      sym_account_name,
    ACTIONS(435), 1,
      anon_sym_,
    ACTIONS(437), 1,
      anon_sym_TAB,
    STATE(115), 1,
      aux_sym_whitespace_repeat1,
    STATE(176), 1,
      sym_account,
  [3136] = 6,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_EQ,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    STATE(129), 1,
      sym_balance_assertion,
    STATE(247), 1,
      sym_note,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [3156] = 7,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(353), 1,
      sym_account_name,
    ACTIONS(445), 1,
      anon_sym_,
    ACTIONS(447), 1,
      anon_sym_TAB,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(200), 1,
      sym_account,
  [3178] = 7,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(353), 1,
      sym_account_name,
    ACTIONS(449), 1,
      anon_sym_,
    ACTIONS(451), 1,
      anon_sym_TAB,
    STATE(109), 1,
      aux_sym_whitespace_repeat1,
    STATE(161), 1,
      sym_account,
  [3200] = 7,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(353), 1,
      sym_account_name,
    ACTIONS(435), 1,
      anon_sym_,
    ACTIONS(437), 1,
      anon_sym_TAB,
    STATE(115), 1,
      aux_sym_whitespace_repeat1,
    STATE(161), 1,
      sym_account,
  [3222] = 7,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(353), 1,
      sym_account_name,
    ACTIONS(453), 1,
      anon_sym_,
    ACTIONS(455), 1,
      anon_sym_TAB,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(189), 1,
      sym_account,
  [3244] = 7,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(353), 1,
      sym_account_name,
    ACTIONS(435), 1,
      anon_sym_,
    ACTIONS(437), 1,
      anon_sym_TAB,
    STATE(115), 1,
      aux_sym_whitespace_repeat1,
    STATE(238), 1,
      sym_account,
  [3266] = 6,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_EQ,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    STATE(124), 1,
      sym_balance_assertion,
    STATE(271), 1,
      sym_note,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [3286] = 6,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_EQ,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    STATE(131), 1,
      sym_balance_assertion,
    STATE(243), 1,
      sym_note,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [3306] = 6,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_EQ,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    STATE(117), 1,
      sym_balance_assertion,
    STATE(237), 1,
      sym_note,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [3326] = 5,
    ACTIONS(457), 1,
      sym_payee,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    STATE(194), 1,
      sym_status,
    ACTIONS(439), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(443), 2,
      anon_sym_,
      anon_sym_TAB,
  [3344] = 7,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(353), 1,
      sym_account_name,
    ACTIONS(435), 1,
      anon_sym_,
    ACTIONS(437), 1,
      anon_sym_TAB,
    STATE(115), 1,
      aux_sym_whitespace_repeat1,
    STATE(180), 1,
      sym_account,
  [3366] = 5,
    ACTIONS(320), 1,
      anon_sym_DASH,
    ACTIONS(322), 1,
      aux_sym_quantity_token1,
    STATE(12), 1,
      sym_quantity,
    STATE(123), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(459), 2,
      anon_sym_,
      anon_sym_TAB,
  [3383] = 4,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    STATE(74), 1,
      sym_commodity,
    ACTIONS(324), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [3398] = 5,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(417), 1,
      anon_sym_LF,
    STATE(153), 1,
      aux_sym_whitespace_repeat1,
    STATE(237), 1,
      sym_note,
    ACTIONS(461), 2,
      anon_sym_,
      anon_sym_TAB,
  [3415] = 5,
    ACTIONS(314), 1,
      anon_sym_LF,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    STATE(151), 1,
      aux_sym_whitespace_repeat1,
    STATE(231), 1,
      sym_note,
    ACTIONS(463), 2,
      anon_sym_,
      anon_sym_TAB,
  [3432] = 4,
    ACTIONS(359), 1,
      sym_payee,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(342), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(465), 2,
      anon_sym_,
      anon_sym_TAB,
  [3447] = 4,
    ACTIONS(468), 1,
      anon_sym_,
    ACTIONS(471), 1,
      anon_sym_TAB,
    STATE(115), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(359), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [3462] = 5,
    ACTIONS(474), 1,
      anon_sym_DASH,
    ACTIONS(476), 1,
      aux_sym_quantity_token1,
    STATE(14), 1,
      sym_quantity,
    STATE(148), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(478), 2,
      anon_sym_,
      anon_sym_TAB,
  [3479] = 5,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(423), 1,
      anon_sym_LF,
    STATE(139), 1,
      aux_sym_whitespace_repeat1,
    STATE(243), 1,
      sym_note,
    ACTIONS(480), 2,
      anon_sym_,
      anon_sym_TAB,
  [3496] = 4,
    STATE(14), 1,
      sym_commodity,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(482), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [3511] = 5,
    ACTIONS(474), 1,
      anon_sym_DASH,
    ACTIONS(476), 1,
      aux_sym_quantity_token1,
    STATE(12), 1,
      sym_quantity,
    STATE(116), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(484), 2,
      anon_sym_,
      anon_sym_TAB,
  [3528] = 4,
    STATE(12), 1,
      sym_commodity,
    STATE(118), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(482), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(486), 2,
      anon_sym_,
      anon_sym_TAB,
  [3543] = 5,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      anon_sym_LF,
    STATE(141), 1,
      aux_sym_whitespace_repeat1,
    STATE(252), 1,
      sym_note,
    ACTIONS(490), 2,
      anon_sym_,
      anon_sym_TAB,
  [3560] = 4,
    STATE(14), 1,
      sym_commodity,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(324), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [3575] = 5,
    ACTIONS(320), 1,
      anon_sym_DASH,
    ACTIONS(322), 1,
      aux_sym_quantity_token1,
    STATE(14), 1,
      sym_quantity,
    STATE(148), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(478), 2,
      anon_sym_,
      anon_sym_TAB,
  [3592] = 5,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(368), 1,
      anon_sym_LF,
    STATE(143), 1,
      aux_sym_whitespace_repeat1,
    STATE(247), 1,
      sym_note,
    ACTIONS(492), 2,
      anon_sym_,
      anon_sym_TAB,
  [3609] = 4,
    STATE(12), 1,
      sym_commodity,
    STATE(122), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(324), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(494), 2,
      anon_sym_,
      anon_sym_TAB,
  [3624] = 4,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    STATE(236), 1,
      sym_commodity,
    ACTIONS(324), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [3639] = 5,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(332), 1,
      anon_sym_LF,
    STATE(136), 1,
      aux_sym_whitespace_repeat1,
    STATE(271), 1,
      sym_note,
    ACTIONS(496), 2,
      anon_sym_,
      anon_sym_TAB,
  [3656] = 4,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    STATE(182), 1,
      sym_commodity,
    ACTIONS(324), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [3671] = 5,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(364), 1,
      anon_sym_LF,
    STATE(140), 1,
      aux_sym_whitespace_repeat1,
    STATE(230), 1,
      sym_note,
    ACTIONS(498), 2,
      anon_sym_,
      anon_sym_TAB,
  [3688] = 4,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    STATE(233), 1,
      sym_commodity,
    ACTIONS(324), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [3703] = 5,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(500), 1,
      anon_sym_LF,
    STATE(135), 1,
      aux_sym_whitespace_repeat1,
    STATE(248), 1,
      sym_note,
    ACTIONS(502), 2,
      anon_sym_,
      anon_sym_TAB,
  [3720] = 4,
    ACTIONS(43), 1,
      sym_single_date,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    STATE(183), 1,
      sym_date,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [3734] = 4,
    ACTIONS(43), 1,
      sym_single_date,
    STATE(147), 1,
      aux_sym_whitespace_repeat1,
    STATE(177), 1,
      sym_date,
    ACTIONS(504), 2,
      anon_sym_,
      anon_sym_TAB,
  [3748] = 3,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(156), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(17), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [3760] = 4,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    STATE(252), 1,
      sym_note,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [3774] = 4,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    STATE(247), 1,
      sym_note,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [3788] = 4,
    ACTIONS(43), 1,
      sym_single_date,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    STATE(205), 1,
      sym_date,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [3802] = 1,
    ACTIONS(506), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_,
      anon_sym_TAB,
  [3810] = 4,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    STATE(248), 1,
      sym_note,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [3824] = 4,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    STATE(237), 1,
      sym_note,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [3838] = 4,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    STATE(255), 1,
      sym_note,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [3852] = 2,
    ACTIONS(510), 1,
      anon_sym_EQ,
    ACTIONS(508), 4,
      anon_sym_LF,
      sym_time,
      anon_sym_,
      anon_sym_TAB,
  [3862] = 4,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    STATE(230), 1,
      sym_note,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [3876] = 3,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(156), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(16), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [3888] = 4,
    ACTIONS(43), 1,
      sym_single_date,
    STATE(132), 1,
      aux_sym_whitespace_repeat1,
    STATE(157), 1,
      sym_date,
    ACTIONS(512), 2,
      anon_sym_,
      anon_sym_TAB,
  [3902] = 3,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(156), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(15), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [3914] = 4,
    ACTIONS(43), 1,
      sym_single_date,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    STATE(185), 1,
      sym_date,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [3928] = 3,
    STATE(148), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(342), 2,
      anon_sym_DASH,
      aux_sym_quantity_token1,
    ACTIONS(514), 2,
      anon_sym_,
      anon_sym_TAB,
  [3940] = 3,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(156), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(13), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [3952] = 2,
    ACTIONS(519), 1,
      anon_sym_,
    ACTIONS(517), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
      anon_sym_TAB,
  [3962] = 4,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    STATE(271), 1,
      sym_note,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [3976] = 3,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(156), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(11), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [3988] = 4,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    STATE(243), 1,
      sym_note,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [4002] = 1,
    ACTIONS(521), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_,
      anon_sym_TAB,
  [4010] = 3,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(156), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(18), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [4022] = 3,
    ACTIONS(523), 1,
      sym_time,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [4033] = 3,
    ACTIONS(525), 1,
      sym_time,
    STATE(156), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(527), 2,
      anon_sym_,
      anon_sym_TAB,
  [4044] = 3,
    ACTIONS(529), 1,
      sym_payee,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(443), 2,
      anon_sym_,
      anon_sym_TAB,
  [4055] = 3,
    ACTIONS(529), 1,
      sym_payee,
    STATE(178), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(531), 2,
      anon_sym_,
      anon_sym_TAB,
  [4066] = 3,
    ACTIONS(342), 1,
      aux_sym_alias_subdirective_token1,
    STATE(160), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(533), 2,
      anon_sym_,
      anon_sym_TAB,
  [4077] = 2,
    ACTIONS(536), 1,
      anon_sym_LF,
    ACTIONS(538), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4086] = 3,
    ACTIONS(359), 1,
      aux_sym_word_directive_token2,
    STATE(162), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [4097] = 3,
    ACTIONS(359), 1,
      aux_sym_word_directive_token1,
    STATE(163), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(543), 2,
      anon_sym_,
      anon_sym_TAB,
  [4108] = 3,
    ACTIONS(546), 1,
      anon_sym_LF,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(548), 2,
      anon_sym_,
      anon_sym_TAB,
  [4119] = 3,
    ACTIONS(550), 1,
      anon_sym_LF,
    STATE(108), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(552), 2,
      anon_sym_,
      anon_sym_TAB,
  [4130] = 3,
    ACTIONS(554), 1,
      aux_sym_word_directive_token1,
    STATE(163), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
  [4141] = 3,
    ACTIONS(558), 1,
      aux_sym_alias_subdirective_token1,
    STATE(160), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(560), 2,
      anon_sym_,
      anon_sym_TAB,
  [4152] = 3,
    ACTIONS(562), 1,
      aux_sym_alias_subdirective_token1,
    STATE(160), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(560), 2,
      anon_sym_,
      anon_sym_TAB,
  [4163] = 3,
    ACTIONS(564), 1,
      aux_sym_alias_subdirective_token1,
    STATE(160), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(560), 2,
      anon_sym_,
      anon_sym_TAB,
  [4174] = 3,
    ACTIONS(566), 1,
      aux_sym_word_directive_token2,
    STATE(162), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(568), 2,
      anon_sym_,
      anon_sym_TAB,
  [4185] = 3,
    ACTIONS(570), 1,
      aux_sym_alias_subdirective_token1,
    STATE(160), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(560), 2,
      anon_sym_,
      anon_sym_TAB,
  [4196] = 3,
    ACTIONS(572), 1,
      aux_sym_alias_subdirective_token1,
    STATE(160), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(560), 2,
      anon_sym_,
      anon_sym_TAB,
  [4207] = 3,
    ACTIONS(574), 1,
      aux_sym_alias_subdirective_token1,
    STATE(160), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(560), 2,
      anon_sym_,
      anon_sym_TAB,
  [4218] = 3,
    ACTIONS(576), 1,
      aux_sym_word_directive_token3,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [4229] = 3,
    ACTIONS(578), 1,
      aux_sym_word_directive_token3,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [4240] = 2,
    ACTIONS(314), 1,
      anon_sym_LF,
    ACTIONS(580), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4249] = 3,
    ACTIONS(582), 1,
      sym_time,
    STATE(184), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(584), 2,
      anon_sym_,
      anon_sym_TAB,
  [4260] = 3,
    ACTIONS(586), 1,
      sym_payee,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(443), 2,
      anon_sym_,
      anon_sym_TAB,
  [4271] = 3,
    ACTIONS(586), 1,
      sym_payee,
    STATE(204), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(588), 2,
      anon_sym_,
      anon_sym_TAB,
  [4282] = 2,
    ACTIONS(590), 1,
      anon_sym_LF,
    ACTIONS(592), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4291] = 1,
    ACTIONS(594), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4298] = 3,
    ACTIONS(596), 1,
      anon_sym_EQ,
    STATE(195), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(598), 2,
      anon_sym_,
      anon_sym_TAB,
  [4309] = 3,
    ACTIONS(523), 1,
      sym_time,
    STATE(201), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(600), 2,
      anon_sym_,
      anon_sym_TAB,
  [4320] = 3,
    ACTIONS(602), 1,
      sym_time,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [4331] = 3,
    ACTIONS(602), 1,
      sym_time,
    STATE(202), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(604), 2,
      anon_sym_,
      anon_sym_TAB,
  [4342] = 3,
    ACTIONS(606), 1,
      anon_sym_LF,
    STATE(198), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(608), 2,
      anon_sym_,
      anon_sym_TAB,
  [4353] = 3,
    ACTIONS(610), 1,
      sym_payee,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(443), 2,
      anon_sym_,
      anon_sym_TAB,
  [4364] = 1,
    ACTIONS(612), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [4371] = 2,
    ACTIONS(336), 1,
      anon_sym_LF,
    ACTIONS(614), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4380] = 1,
    ACTIONS(616), 4,
      anon_sym_LF,
      sym_time,
      anon_sym_,
      anon_sym_TAB,
  [4387] = 1,
    ACTIONS(618), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [4394] = 2,
    ACTIONS(620), 1,
      anon_sym_LF,
    ACTIONS(622), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4403] = 3,
    ACTIONS(624), 1,
      sym_payee,
    STATE(158), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(626), 2,
      anon_sym_,
      anon_sym_TAB,
  [4414] = 3,
    ACTIONS(628), 1,
      anon_sym_LF,
    STATE(197), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(630), 2,
      anon_sym_,
      anon_sym_TAB,
  [4425] = 3,
    ACTIONS(632), 1,
      anon_sym_EQ,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [4436] = 1,
    ACTIONS(634), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4443] = 3,
    ACTIONS(636), 1,
      sym_payee,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(443), 2,
      anon_sym_,
      anon_sym_TAB,
  [4454] = 3,
    ACTIONS(638), 1,
      sym_payee,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(443), 2,
      anon_sym_,
      anon_sym_TAB,
  [4465] = 2,
    ACTIONS(640), 1,
      anon_sym_LF,
    ACTIONS(642), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4474] = 2,
    ACTIONS(644), 1,
      anon_sym_LF,
    ACTIONS(646), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4483] = 3,
    ACTIONS(648), 1,
      sym_time,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [4494] = 3,
    ACTIONS(650), 1,
      sym_time,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [4505] = 3,
    ACTIONS(652), 1,
      sym_payee,
    STATE(187), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(654), 2,
      anon_sym_,
      anon_sym_TAB,
  [4516] = 3,
    ACTIONS(652), 1,
      sym_payee,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(443), 2,
      anon_sym_,
      anon_sym_TAB,
  [4527] = 2,
    STATE(111), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(656), 2,
      anon_sym_,
      anon_sym_TAB,
  [4535] = 2,
    STATE(104), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(658), 2,
      anon_sym_,
      anon_sym_TAB,
  [4543] = 2,
    STATE(126), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(660), 2,
      anon_sym_,
      anon_sym_TAB,
  [4551] = 2,
    STATE(166), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(662), 2,
      anon_sym_,
      anon_sym_TAB,
  [4559] = 2,
    STATE(170), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(664), 2,
      anon_sym_,
      anon_sym_TAB,
  [4567] = 2,
    STATE(174), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(666), 2,
      anon_sym_,
      anon_sym_TAB,
  [4575] = 2,
    STATE(93), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(668), 2,
      anon_sym_,
      anon_sym_TAB,
  [4583] = 2,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(670), 2,
      anon_sym_,
      anon_sym_TAB,
  [4591] = 2,
    STATE(175), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(672), 2,
      anon_sym_,
      anon_sym_TAB,
  [4599] = 2,
    STATE(130), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(674), 2,
      anon_sym_,
      anon_sym_TAB,
  [4607] = 2,
    STATE(76), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(676), 2,
      anon_sym_,
      anon_sym_TAB,
  [4615] = 2,
    STATE(128), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(678), 2,
      anon_sym_,
      anon_sym_TAB,
  [4623] = 2,
    STATE(137), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(680), 2,
      anon_sym_,
      anon_sym_TAB,
  [4631] = 2,
    STATE(68), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(682), 2,
      anon_sym_,
      anon_sym_TAB,
  [4639] = 2,
    STATE(173), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(684), 2,
      anon_sym_,
      anon_sym_TAB,
  [4647] = 2,
    STATE(172), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(686), 2,
      anon_sym_,
      anon_sym_TAB,
  [4655] = 2,
    STATE(171), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(688), 2,
      anon_sym_,
      anon_sym_TAB,
  [4663] = 2,
    STATE(169), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(690), 2,
      anon_sym_,
      anon_sym_TAB,
  [4671] = 1,
    ACTIONS(519), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [4677] = 2,
    STATE(167), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(692), 2,
      anon_sym_,
      anon_sym_TAB,
  [4685] = 2,
    STATE(168), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(694), 2,
      anon_sym_,
      anon_sym_TAB,
  [4693] = 1,
    ACTIONS(696), 1,
      aux_sym_default_subdirective_token1,
  [4697] = 1,
    ACTIONS(698), 1,
      anon_sym_LF,
  [4701] = 1,
    ACTIONS(700), 1,
      anon_sym_LF,
  [4705] = 1,
    ACTIONS(702), 1,
      anon_sym_LF,
  [4709] = 1,
    ACTIONS(417), 1,
      anon_sym_LF,
  [4713] = 1,
    ACTIONS(332), 1,
      anon_sym_LF,
  [4717] = 1,
    ACTIONS(704), 1,
      aux_sym_quantity_token1,
  [4721] = 1,
    ACTIONS(706), 1,
      anon_sym_LF,
  [4725] = 1,
    ACTIONS(708), 1,
      anon_sym_EQ,
  [4729] = 1,
    ACTIONS(710), 1,
      anon_sym_LF,
  [4733] = 1,
    ACTIONS(712), 1,
      anon_sym_LF,
  [4737] = 1,
    ACTIONS(423), 1,
      anon_sym_LF,
  [4741] = 1,
    ACTIONS(714), 1,
      anon_sym_LF,
  [4745] = 1,
    ACTIONS(716), 1,
      anon_sym_LF,
  [4749] = 1,
    ACTIONS(718), 1,
      sym_account_name,
  [4753] = 1,
    ACTIONS(720), 1,
      sym_account_name,
  [4757] = 1,
    ACTIONS(722), 1,
      sym_single_date,
  [4761] = 1,
    ACTIONS(500), 1,
      anon_sym_LF,
  [4765] = 1,
    ACTIONS(590), 1,
      anon_sym_LF,
  [4769] = 1,
    ACTIONS(724), 1,
      anon_sym_LF,
  [4773] = 1,
    ACTIONS(726), 1,
      anon_sym_LF,
  [4777] = 1,
    ACTIONS(364), 1,
      anon_sym_LF,
  [4781] = 1,
    ACTIONS(488), 1,
      anon_sym_LF,
  [4785] = 1,
    ACTIONS(728), 1,
      anon_sym_LF,
  [4789] = 1,
    ACTIONS(730), 1,
      aux_sym_comment_token1,
  [4793] = 1,
    ACTIONS(606), 1,
      anon_sym_LF,
  [4797] = 1,
    ACTIONS(732), 1,
      anon_sym_LF,
  [4801] = 1,
    ACTIONS(734), 1,
      anon_sym_LF,
  [4805] = 1,
    ACTIONS(736), 1,
      anon_sym_LF,
  [4809] = 1,
    ACTIONS(738), 1,
      anon_sym_LF,
  [4813] = 1,
    ACTIONS(740), 1,
      ts_builtin_sym_end,
  [4817] = 1,
    ACTIONS(536), 1,
      anon_sym_LF,
  [4821] = 1,
    ACTIONS(742), 1,
      anon_sym_LF,
  [4825] = 1,
    ACTIONS(744), 1,
      anon_sym_LF,
  [4829] = 1,
    ACTIONS(746), 1,
      anon_sym_LF,
  [4833] = 1,
    ACTIONS(628), 1,
      anon_sym_LF,
  [4837] = 1,
    ACTIONS(748), 1,
      anon_sym_LF,
  [4841] = 1,
    ACTIONS(750), 1,
      anon_sym_RPAREN,
  [4845] = 1,
    ACTIONS(750), 1,
      anon_sym_RBRACK,
  [4849] = 1,
    ACTIONS(752), 1,
      aux_sym_word_directive_token1,
  [4853] = 1,
    ACTIONS(754), 1,
      aux_sym_default_subdirective_token1,
  [4857] = 1,
    ACTIONS(756), 1,
      anon_sym_LF,
  [4861] = 1,
    ACTIONS(758), 1,
      anon_sym_LF,
  [4865] = 1,
    ACTIONS(760), 1,
      anon_sym_LF,
  [4869] = 1,
    ACTIONS(762), 1,
      anon_sym_LF,
  [4873] = 1,
    ACTIONS(368), 1,
      anon_sym_LF,
  [4877] = 1,
    ACTIONS(314), 1,
      anon_sym_LF,
  [4881] = 1,
    ACTIONS(764), 1,
      aux_sym_quantity_token1,
  [4885] = 1,
    ACTIONS(766), 1,
      aux_sym_note_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 95,
  [SMALL_STATE(4)] = 190,
  [SMALL_STATE(5)] = 239,
  [SMALL_STATE(6)] = 288,
  [SMALL_STATE(7)] = 337,
  [SMALL_STATE(8)] = 384,
  [SMALL_STATE(9)] = 431,
  [SMALL_STATE(10)] = 478,
  [SMALL_STATE(11)] = 518,
  [SMALL_STATE(12)] = 558,
  [SMALL_STATE(13)] = 592,
  [SMALL_STATE(14)] = 632,
  [SMALL_STATE(15)] = 666,
  [SMALL_STATE(16)] = 706,
  [SMALL_STATE(17)] = 746,
  [SMALL_STATE(18)] = 786,
  [SMALL_STATE(19)] = 826,
  [SMALL_STATE(20)] = 857,
  [SMALL_STATE(21)] = 888,
  [SMALL_STATE(22)] = 919,
  [SMALL_STATE(23)] = 950,
  [SMALL_STATE(24)] = 981,
  [SMALL_STATE(25)] = 1012,
  [SMALL_STATE(26)] = 1043,
  [SMALL_STATE(27)] = 1074,
  [SMALL_STATE(28)] = 1105,
  [SMALL_STATE(29)] = 1136,
  [SMALL_STATE(30)] = 1167,
  [SMALL_STATE(31)] = 1198,
  [SMALL_STATE(32)] = 1229,
  [SMALL_STATE(33)] = 1260,
  [SMALL_STATE(34)] = 1291,
  [SMALL_STATE(35)] = 1322,
  [SMALL_STATE(36)] = 1353,
  [SMALL_STATE(37)] = 1384,
  [SMALL_STATE(38)] = 1415,
  [SMALL_STATE(39)] = 1446,
  [SMALL_STATE(40)] = 1477,
  [SMALL_STATE(41)] = 1508,
  [SMALL_STATE(42)] = 1539,
  [SMALL_STATE(43)] = 1570,
  [SMALL_STATE(44)] = 1601,
  [SMALL_STATE(45)] = 1632,
  [SMALL_STATE(46)] = 1663,
  [SMALL_STATE(47)] = 1692,
  [SMALL_STATE(48)] = 1721,
  [SMALL_STATE(49)] = 1750,
  [SMALL_STATE(50)] = 1779,
  [SMALL_STATE(51)] = 1808,
  [SMALL_STATE(52)] = 1859,
  [SMALL_STATE(53)] = 1910,
  [SMALL_STATE(54)] = 1961,
  [SMALL_STATE(55)] = 2009,
  [SMALL_STATE(56)] = 2057,
  [SMALL_STATE(57)] = 2105,
  [SMALL_STATE(58)] = 2124,
  [SMALL_STATE(59)] = 2159,
  [SMALL_STATE(60)] = 2180,
  [SMALL_STATE(61)] = 2212,
  [SMALL_STATE(62)] = 2244,
  [SMALL_STATE(63)] = 2264,
  [SMALL_STATE(64)] = 2280,
  [SMALL_STATE(65)] = 2312,
  [SMALL_STATE(66)] = 2344,
  [SMALL_STATE(67)] = 2371,
  [SMALL_STATE(68)] = 2400,
  [SMALL_STATE(69)] = 2427,
  [SMALL_STATE(70)] = 2456,
  [SMALL_STATE(71)] = 2485,
  [SMALL_STATE(72)] = 2512,
  [SMALL_STATE(73)] = 2539,
  [SMALL_STATE(74)] = 2566,
  [SMALL_STATE(75)] = 2593,
  [SMALL_STATE(76)] = 2622,
  [SMALL_STATE(77)] = 2649,
  [SMALL_STATE(78)] = 2676,
  [SMALL_STATE(79)] = 2703,
  [SMALL_STATE(80)] = 2732,
  [SMALL_STATE(81)] = 2759,
  [SMALL_STATE(82)] = 2773,
  [SMALL_STATE(83)] = 2787,
  [SMALL_STATE(84)] = 2807,
  [SMALL_STATE(85)] = 2830,
  [SMALL_STATE(86)] = 2853,
  [SMALL_STATE(87)] = 2876,
  [SMALL_STATE(88)] = 2899,
  [SMALL_STATE(89)] = 2922,
  [SMALL_STATE(90)] = 2945,
  [SMALL_STATE(91)] = 2968,
  [SMALL_STATE(92)] = 2990,
  [SMALL_STATE(93)] = 3010,
  [SMALL_STATE(94)] = 3032,
  [SMALL_STATE(95)] = 3054,
  [SMALL_STATE(96)] = 3074,
  [SMALL_STATE(97)] = 3096,
  [SMALL_STATE(98)] = 3114,
  [SMALL_STATE(99)] = 3136,
  [SMALL_STATE(100)] = 3156,
  [SMALL_STATE(101)] = 3178,
  [SMALL_STATE(102)] = 3200,
  [SMALL_STATE(103)] = 3222,
  [SMALL_STATE(104)] = 3244,
  [SMALL_STATE(105)] = 3266,
  [SMALL_STATE(106)] = 3286,
  [SMALL_STATE(107)] = 3306,
  [SMALL_STATE(108)] = 3326,
  [SMALL_STATE(109)] = 3344,
  [SMALL_STATE(110)] = 3366,
  [SMALL_STATE(111)] = 3383,
  [SMALL_STATE(112)] = 3398,
  [SMALL_STATE(113)] = 3415,
  [SMALL_STATE(114)] = 3432,
  [SMALL_STATE(115)] = 3447,
  [SMALL_STATE(116)] = 3462,
  [SMALL_STATE(117)] = 3479,
  [SMALL_STATE(118)] = 3496,
  [SMALL_STATE(119)] = 3511,
  [SMALL_STATE(120)] = 3528,
  [SMALL_STATE(121)] = 3543,
  [SMALL_STATE(122)] = 3560,
  [SMALL_STATE(123)] = 3575,
  [SMALL_STATE(124)] = 3592,
  [SMALL_STATE(125)] = 3609,
  [SMALL_STATE(126)] = 3624,
  [SMALL_STATE(127)] = 3639,
  [SMALL_STATE(128)] = 3656,
  [SMALL_STATE(129)] = 3671,
  [SMALL_STATE(130)] = 3688,
  [SMALL_STATE(131)] = 3703,
  [SMALL_STATE(132)] = 3720,
  [SMALL_STATE(133)] = 3734,
  [SMALL_STATE(134)] = 3748,
  [SMALL_STATE(135)] = 3760,
  [SMALL_STATE(136)] = 3774,
  [SMALL_STATE(137)] = 3788,
  [SMALL_STATE(138)] = 3802,
  [SMALL_STATE(139)] = 3810,
  [SMALL_STATE(140)] = 3824,
  [SMALL_STATE(141)] = 3838,
  [SMALL_STATE(142)] = 3852,
  [SMALL_STATE(143)] = 3862,
  [SMALL_STATE(144)] = 3876,
  [SMALL_STATE(145)] = 3888,
  [SMALL_STATE(146)] = 3902,
  [SMALL_STATE(147)] = 3914,
  [SMALL_STATE(148)] = 3928,
  [SMALL_STATE(149)] = 3940,
  [SMALL_STATE(150)] = 3952,
  [SMALL_STATE(151)] = 3962,
  [SMALL_STATE(152)] = 3976,
  [SMALL_STATE(153)] = 3988,
  [SMALL_STATE(154)] = 4002,
  [SMALL_STATE(155)] = 4010,
  [SMALL_STATE(156)] = 4022,
  [SMALL_STATE(157)] = 4033,
  [SMALL_STATE(158)] = 4044,
  [SMALL_STATE(159)] = 4055,
  [SMALL_STATE(160)] = 4066,
  [SMALL_STATE(161)] = 4077,
  [SMALL_STATE(162)] = 4086,
  [SMALL_STATE(163)] = 4097,
  [SMALL_STATE(164)] = 4108,
  [SMALL_STATE(165)] = 4119,
  [SMALL_STATE(166)] = 4130,
  [SMALL_STATE(167)] = 4141,
  [SMALL_STATE(168)] = 4152,
  [SMALL_STATE(169)] = 4163,
  [SMALL_STATE(170)] = 4174,
  [SMALL_STATE(171)] = 4185,
  [SMALL_STATE(172)] = 4196,
  [SMALL_STATE(173)] = 4207,
  [SMALL_STATE(174)] = 4218,
  [SMALL_STATE(175)] = 4229,
  [SMALL_STATE(176)] = 4240,
  [SMALL_STATE(177)] = 4249,
  [SMALL_STATE(178)] = 4260,
  [SMALL_STATE(179)] = 4271,
  [SMALL_STATE(180)] = 4282,
  [SMALL_STATE(181)] = 4291,
  [SMALL_STATE(182)] = 4298,
  [SMALL_STATE(183)] = 4309,
  [SMALL_STATE(184)] = 4320,
  [SMALL_STATE(185)] = 4331,
  [SMALL_STATE(186)] = 4342,
  [SMALL_STATE(187)] = 4353,
  [SMALL_STATE(188)] = 4364,
  [SMALL_STATE(189)] = 4371,
  [SMALL_STATE(190)] = 4380,
  [SMALL_STATE(191)] = 4387,
  [SMALL_STATE(192)] = 4394,
  [SMALL_STATE(193)] = 4403,
  [SMALL_STATE(194)] = 4414,
  [SMALL_STATE(195)] = 4425,
  [SMALL_STATE(196)] = 4436,
  [SMALL_STATE(197)] = 4443,
  [SMALL_STATE(198)] = 4454,
  [SMALL_STATE(199)] = 4465,
  [SMALL_STATE(200)] = 4474,
  [SMALL_STATE(201)] = 4483,
  [SMALL_STATE(202)] = 4494,
  [SMALL_STATE(203)] = 4505,
  [SMALL_STATE(204)] = 4516,
  [SMALL_STATE(205)] = 4527,
  [SMALL_STATE(206)] = 4535,
  [SMALL_STATE(207)] = 4543,
  [SMALL_STATE(208)] = 4551,
  [SMALL_STATE(209)] = 4559,
  [SMALL_STATE(210)] = 4567,
  [SMALL_STATE(211)] = 4575,
  [SMALL_STATE(212)] = 4583,
  [SMALL_STATE(213)] = 4591,
  [SMALL_STATE(214)] = 4599,
  [SMALL_STATE(215)] = 4607,
  [SMALL_STATE(216)] = 4615,
  [SMALL_STATE(217)] = 4623,
  [SMALL_STATE(218)] = 4631,
  [SMALL_STATE(219)] = 4639,
  [SMALL_STATE(220)] = 4647,
  [SMALL_STATE(221)] = 4655,
  [SMALL_STATE(222)] = 4663,
  [SMALL_STATE(223)] = 4671,
  [SMALL_STATE(224)] = 4677,
  [SMALL_STATE(225)] = 4685,
  [SMALL_STATE(226)] = 4693,
  [SMALL_STATE(227)] = 4697,
  [SMALL_STATE(228)] = 4701,
  [SMALL_STATE(229)] = 4705,
  [SMALL_STATE(230)] = 4709,
  [SMALL_STATE(231)] = 4713,
  [SMALL_STATE(232)] = 4717,
  [SMALL_STATE(233)] = 4721,
  [SMALL_STATE(234)] = 4725,
  [SMALL_STATE(235)] = 4729,
  [SMALL_STATE(236)] = 4733,
  [SMALL_STATE(237)] = 4737,
  [SMALL_STATE(238)] = 4741,
  [SMALL_STATE(239)] = 4745,
  [SMALL_STATE(240)] = 4749,
  [SMALL_STATE(241)] = 4753,
  [SMALL_STATE(242)] = 4757,
  [SMALL_STATE(243)] = 4761,
  [SMALL_STATE(244)] = 4765,
  [SMALL_STATE(245)] = 4769,
  [SMALL_STATE(246)] = 4773,
  [SMALL_STATE(247)] = 4777,
  [SMALL_STATE(248)] = 4781,
  [SMALL_STATE(249)] = 4785,
  [SMALL_STATE(250)] = 4789,
  [SMALL_STATE(251)] = 4793,
  [SMALL_STATE(252)] = 4797,
  [SMALL_STATE(253)] = 4801,
  [SMALL_STATE(254)] = 4805,
  [SMALL_STATE(255)] = 4809,
  [SMALL_STATE(256)] = 4813,
  [SMALL_STATE(257)] = 4817,
  [SMALL_STATE(258)] = 4821,
  [SMALL_STATE(259)] = 4825,
  [SMALL_STATE(260)] = 4829,
  [SMALL_STATE(261)] = 4833,
  [SMALL_STATE(262)] = 4837,
  [SMALL_STATE(263)] = 4841,
  [SMALL_STATE(264)] = 4845,
  [SMALL_STATE(265)] = 4849,
  [SMALL_STATE(266)] = 4853,
  [SMALL_STATE(267)] = 4857,
  [SMALL_STATE(268)] = 4861,
  [SMALL_STATE(269)] = 4865,
  [SMALL_STATE(270)] = 4869,
  [SMALL_STATE(271)] = 4873,
  [SMALL_STATE(272)] = 4877,
  [SMALL_STATE(273)] = 4881,
  [SMALL_STATE(274)] = 4885,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(250),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(206),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(207),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(208),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(269),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(209),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(210),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(211),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(212),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(213),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(214),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(215),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(216),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(217),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(145),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(145),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(142),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 5),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 5),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2), SHIFT_REPEAT(67),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 5),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 5),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2), SHIFT_REPEAT(84),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(58),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_periodic_xact, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_periodic_xact, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_periodic_xact, 7),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_periodic_xact, 7),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_periodic_xact, 5),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_periodic_xact, 5),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_subdirective, 4),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_subdirective, 4),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 11),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 11),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_subdirective, 4),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_subdirective, 4),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 12),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 12),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eval_subdirective, 4),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eval_subdirective, 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nomarket_subdirective, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nomarket_subdirective, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_subdirective, 4),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_subdirective, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 14),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 14),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payee_subdirective, 4),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_payee_subdirective, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_subdirective, 4),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_subdirective, 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 13),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 13),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_subdirective, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_subdirective, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_subdirective, 4),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_subdirective, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 9),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 9),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 10),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 10),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(57),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(59),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(62),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(83),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(83),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(114),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(115),
  [471] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(115),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(148),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [533] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(160),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [540] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(162),
  [543] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(163),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 7),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 2),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 3),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 5),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 10),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 3),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 3),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 8),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 7),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 4),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [740] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 9),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 5),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 5),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 6),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 5),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
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
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
