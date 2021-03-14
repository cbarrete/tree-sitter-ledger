#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 161
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7

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
  sym_single_date = 37,
  sym_time = 38,
  anon_sym_BANG = 39,
  sym_payee = 40,
  aux_sym_note_token1 = 41,
  anon_sym_LPAREN = 42,
  anon_sym_RPAREN = 43,
  anon_sym_LBRACK = 44,
  anon_sym_RBRACK = 45,
  sym_account_name = 46,
  anon_sym_DASH = 47,
  aux_sym_quantity_token1 = 48,
  aux_sym_commodity_token1 = 49,
  aux_sym_commodity_token2 = 50,
  anon_sym_AT = 51,
  anon_sym_AT_AT = 52,
  anon_sym_ = 53,
  anon_sym_TAB = 54,
  anon_sym_2 = 55,
  anon_sym_TAB2 = 56,
  sym_source_file = 57,
  sym_journal_item = 58,
  sym_comment = 59,
  sym_directive = 60,
  sym_account_directive = 61,
  sym_account_subdirective = 62,
  sym_commodity_directive = 63,
  sym_commodity_subdirective = 64,
  sym_word_directive = 65,
  sym_char_directive = 66,
  sym_alias_subdirective = 67,
  sym_assert_subdirective = 68,
  sym_check_subdirective = 69,
  sym_default_subdirective = 70,
  sym_eval_subdirective = 71,
  sym_format_subdirective = 72,
  sym_nomarket_subdirective = 73,
  sym_note_subdirective = 74,
  sym_payee_subdirective = 75,
  sym_check_in = 76,
  sym_check_out = 77,
  sym_xact = 78,
  sym_plain_xact = 79,
  sym_date = 80,
  sym_status = 81,
  sym_note = 82,
  sym_posting = 83,
  sym_account = 84,
  sym_values = 85,
  sym_amount = 86,
  sym_quantity = 87,
  sym_commodity = 88,
  sym_price = 89,
  sym_balance_assertion = 90,
  aux_sym_source_file_repeat1 = 91,
  aux_sym_account_directive_repeat1 = 92,
  aux_sym_commodity_directive_repeat1 = 93,
  aux_sym_plain_xact_repeat1 = 94,
  aux_sym_whitespace_repeat1 = 95,
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
  [sym_date] = "date",
  [sym_status] = "status",
  [sym_note] = "note",
  [sym_posting] = "posting",
  [sym_account] = "account",
  [sym_values] = "values",
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
  [sym_date] = sym_date,
  [sym_status] = sym_status,
  [sym_note] = sym_note,
  [sym_posting] = sym_posting,
  [sym_account] = sym_account,
  [sym_values] = sym_values,
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

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(111);
      if (lookahead == '\t') ADVANCE(175);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '!') ADVANCE(151);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(155);
      if (lookahead == ')') ADVANCE(156);
      if (lookahead == '*') ADVANCE(114);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '=') ADVANCE(123);
      if (lookahead == '@') ADVANCE(165);
      if (lookahead == 'A') ADVANCE(129);
      if (lookahead == 'C') ADVANCE(133);
      if (lookahead == 'D') ADVANCE(132);
      if (lookahead == 'I') ADVANCE(146);
      if (lookahead == 'N') ADVANCE(131);
      if (lookahead == 'O') ADVANCE(148);
      if (lookahead == 'P') ADVANCE(134);
      if (lookahead == 'Y') ADVANCE(130);
      if (lookahead == '[') ADVANCE(157);
      if (lookahead == ']') ADVANCE(158);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(84);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(147);
      if (lookahead == 'p') ADVANCE(18);
      if (lookahead == 'y') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(175);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == ';') ADVANCE(113);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(175);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == ' ') ADVANCE(167);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '=') ADVANCE(123);
      if (lookahead == '@') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(175);
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == ' ') ADVANCE(167);
      if (lookahead == '!') ADVANCE(151);
      if (lookahead == '(') ADVANCE(155);
      if (lookahead == '*') ADVANCE(114);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '[') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(159);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(175);
      if (lookahead == ' ') ADVANCE(167);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '=') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(175);
      if (lookahead == ' ') ADVANCE(167);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'c') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 'p') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(178);
      if (lookahead == ' ') ADVANCE(171);
      if (lookahead == '!') ADVANCE(151);
      if (lookahead == '*') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(152);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(176);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(181);
      if (lookahead == ' ') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(122);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(177);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == ' ') ADVANCE(170);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(180);
      if (lookahead == ' ') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(100);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(102);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == 'f') ADVANCE(124);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 51:
      if (lookahead == 'k') ADVANCE(137);
      END_STATE();
    case 52:
      if (lookahead == 'k') ADVANCE(39);
      END_STATE();
    case 53:
      if (lookahead == 'k') ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 'v') ADVANCE(19);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 83:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 84:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 85:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 86:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 87:
      if (lookahead == 'v') ADVANCE(19);
      END_STATE();
    case 88:
      if (lookahead == 'y') ADVANCE(117);
      END_STATE();
    case 89:
      if (lookahead == 'y') ADVANCE(44);
      END_STATE();
    case 90:
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 91:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(101);
      END_STATE();
    case 92:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(103);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 109:
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(160);
      END_STATE();
    case 110:
      if (eof) ADVANCE(111);
      if (lookahead == '\t') ADVANCE(175);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == ' ') ADVANCE(167);
      if (lookahead == ')') ADVANCE(156);
      if (lookahead == '*') ADVANCE(114);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '=') ADVANCE(123);
      if (lookahead == '@') ADVANCE(165);
      if (lookahead == 'A') ADVANCE(129);
      if (lookahead == 'C') ADVANCE(133);
      if (lookahead == 'D') ADVANCE(132);
      if (lookahead == 'I') ADVANCE(146);
      if (lookahead == 'N') ADVANCE(131);
      if (lookahead == 'O') ADVANCE(148);
      if (lookahead == 'P') ADVANCE(134);
      if (lookahead == 'Y') ADVANCE(130);
      if (lookahead == ']') ADVANCE(158);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(84);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'd') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 'o') ADVANCE(147);
      if (lookahead == 'y') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_word_directive_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_word_directive_token2);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_word_directive_token3);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_word_directive_token3);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(101);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_bucket);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_alias_subdirective_token1);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_check);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_default_subdirective_token1);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_eval);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_nomarket);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_payee);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_single_date);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '\t') ADVANCE(179);
      if (lookahead == ' ') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(109);
      if (lookahead == ':') ADVANCE(160);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_account_name);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(159);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(183);
      if (lookahead == ' ') ADVANCE(182);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(152);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(122);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(152);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(122);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 110},
  [2] = {.lex_state = 110},
  [3] = {.lex_state = 110},
  [4] = {.lex_state = 110},
  [5] = {.lex_state = 110},
  [6] = {.lex_state = 110},
  [7] = {.lex_state = 110},
  [8] = {.lex_state = 110},
  [9] = {.lex_state = 110},
  [10] = {.lex_state = 110},
  [11] = {.lex_state = 110},
  [12] = {.lex_state = 110},
  [13] = {.lex_state = 110},
  [14] = {.lex_state = 110},
  [15] = {.lex_state = 110},
  [16] = {.lex_state = 110},
  [17] = {.lex_state = 110},
  [18] = {.lex_state = 110},
  [19] = {.lex_state = 110},
  [20] = {.lex_state = 110},
  [21] = {.lex_state = 110},
  [22] = {.lex_state = 110},
  [23] = {.lex_state = 110},
  [24] = {.lex_state = 110},
  [25] = {.lex_state = 110},
  [26] = {.lex_state = 110},
  [27] = {.lex_state = 110},
  [28] = {.lex_state = 110},
  [29] = {.lex_state = 110},
  [30] = {.lex_state = 110},
  [31] = {.lex_state = 110},
  [32] = {.lex_state = 110},
  [33] = {.lex_state = 110},
  [34] = {.lex_state = 110},
  [35] = {.lex_state = 110},
  [36] = {.lex_state = 110},
  [37] = {.lex_state = 110},
  [38] = {.lex_state = 110},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 110},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 110},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 110},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 110},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 110},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 110},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 110},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 110},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 110},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 110},
  [87] = {.lex_state = 110},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 110},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 110},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 110},
  [94] = {.lex_state = 110},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 110},
  [100] = {.lex_state = 110},
  [101] = {.lex_state = 110},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 110},
  [104] = {.lex_state = 110},
  [105] = {.lex_state = 110},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 110},
  [108] = {.lex_state = 110},
  [109] = {.lex_state = 110},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 110},
  [112] = {.lex_state = 110},
  [113] = {.lex_state = 110},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 110},
  [116] = {.lex_state = 110},
  [117] = {.lex_state = 110},
  [118] = {.lex_state = 110},
  [119] = {.lex_state = 110},
  [120] = {.lex_state = 110},
  [121] = {.lex_state = 110},
  [122] = {.lex_state = 110},
  [123] = {.lex_state = 110},
  [124] = {.lex_state = 110},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 110},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 110},
  [131] = {.lex_state = 153},
  [132] = {.lex_state = 110},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 110},
  [135] = {.lex_state = 110},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 110},
  [138] = {.lex_state = 110},
  [139] = {.lex_state = 110},
  [140] = {.lex_state = 110},
  [141] = {.lex_state = 110},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 110},
  [144] = {.lex_state = 110},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 110},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 110},
  [149] = {.lex_state = 110},
  [150] = {.lex_state = 110},
  [151] = {.lex_state = 110},
  [152] = {.lex_state = 110},
  [153] = {.lex_state = 110},
  [154] = {.lex_state = 110},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 110},
  [157] = {.lex_state = 110},
  [158] = {.lex_state = 110},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 3},
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
    [sym_single_date] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_commodity_token2] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_TAB] = ACTIONS(5),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_TAB2] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(120),
    [sym_journal_item] = STATE(3),
    [sym_comment] = STATE(14),
    [sym_directive] = STATE(14),
    [sym_account_directive] = STATE(21),
    [sym_commodity_directive] = STATE(21),
    [sym_word_directive] = STATE(116),
    [sym_char_directive] = STATE(116),
    [sym_check_in] = STATE(108),
    [sym_check_out] = STATE(108),
    [sym_xact] = STATE(14),
    [sym_plain_xact] = STATE(24),
    [sym_date] = STATE(99),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_account] = ACTIONS(13),
    [anon_sym_commodity] = ACTIONS(15),
    [anon_sym_include] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_alias] = ACTIONS(21),
    [anon_sym_def] = ACTIONS(17),
    [anon_sym_year] = ACTIONS(23),
    [anon_sym_bucket] = ACTIONS(25),
    [anon_sym_A] = ACTIONS(27),
    [anon_sym_Y] = ACTIONS(29),
    [anon_sym_N] = ACTIONS(31),
    [anon_sym_D] = ACTIONS(33),
    [anon_sym_C] = ACTIONS(35),
    [anon_sym_P] = ACTIONS(37),
    [anon_sym_i] = ACTIONS(39),
    [anon_sym_I] = ACTIONS(41),
    [anon_sym_o] = ACTIONS(43),
    [anon_sym_O] = ACTIONS(43),
    [sym_single_date] = ACTIONS(45),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_TAB] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 28,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      anon_sym_account,
    ACTIONS(58), 1,
      anon_sym_commodity,
    ACTIONS(64), 1,
      anon_sym_end,
    ACTIONS(67), 1,
      anon_sym_alias,
    ACTIONS(70), 1,
      anon_sym_year,
    ACTIONS(73), 1,
      anon_sym_bucket,
    ACTIONS(76), 1,
      anon_sym_A,
    ACTIONS(79), 1,
      anon_sym_Y,
    ACTIONS(82), 1,
      anon_sym_N,
    ACTIONS(85), 1,
      anon_sym_D,
    ACTIONS(88), 1,
      anon_sym_C,
    ACTIONS(91), 1,
      anon_sym_P,
    ACTIONS(94), 1,
      anon_sym_i,
    ACTIONS(97), 1,
      anon_sym_I,
    ACTIONS(103), 1,
      sym_single_date,
    STATE(24), 1,
      sym_plain_xact,
    STATE(99), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(52), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(61), 2,
      anon_sym_include,
      anon_sym_def,
    ACTIONS(100), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(21), 2,
      sym_account_directive,
      sym_commodity_directive,
    STATE(108), 2,
      sym_check_in,
      sym_check_out,
    STATE(116), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(14), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [95] = 28,
    ACTIONS(13), 1,
      anon_sym_account,
    ACTIONS(15), 1,
      anon_sym_commodity,
    ACTIONS(19), 1,
      anon_sym_end,
    ACTIONS(21), 1,
      anon_sym_alias,
    ACTIONS(23), 1,
      anon_sym_year,
    ACTIONS(25), 1,
      anon_sym_bucket,
    ACTIONS(27), 1,
      anon_sym_A,
    ACTIONS(29), 1,
      anon_sym_Y,
    ACTIONS(31), 1,
      anon_sym_N,
    ACTIONS(33), 1,
      anon_sym_D,
    ACTIONS(35), 1,
      anon_sym_C,
    ACTIONS(37), 1,
      anon_sym_P,
    ACTIONS(39), 1,
      anon_sym_i,
    ACTIONS(41), 1,
      anon_sym_I,
    ACTIONS(45), 1,
      sym_single_date,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 1,
      anon_sym_LF,
    STATE(24), 1,
      sym_plain_xact,
    STATE(99), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(11), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(17), 2,
      anon_sym_include,
      anon_sym_def,
    ACTIONS(43), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(21), 2,
      sym_account_directive,
      sym_commodity_directive,
    STATE(108), 2,
      sym_check_in,
      sym_check_out,
    STATE(116), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(14), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [190] = 6,
    ACTIONS(112), 1,
      anon_sym_i,
    STATE(43), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(114), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    STATE(34), 7,
      sym_alias_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
      sym_default_subdirective,
      sym_eval_subdirective,
      sym_note_subdirective,
      sym_payee_subdirective,
    ACTIONS(110), 22,
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
      sym_single_date,
  [238] = 6,
    ACTIONS(118), 1,
      anon_sym_i,
    STATE(43), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(114), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    STATE(34), 7,
      sym_alias_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
      sym_default_subdirective,
      sym_eval_subdirective,
      sym_note_subdirective,
      sym_payee_subdirective,
    ACTIONS(116), 22,
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
      sym_single_date,
  [286] = 6,
    ACTIONS(122), 1,
      anon_sym_i,
    STATE(43), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(124), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    STATE(34), 7,
      sym_alias_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
      sym_default_subdirective,
      sym_eval_subdirective,
      sym_note_subdirective,
      sym_payee_subdirective,
    ACTIONS(120), 22,
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
      sym_single_date,
  [334] = 6,
    ACTIONS(129), 1,
      anon_sym_i,
    STATE(54), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(131), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(8), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    STATE(32), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_nomarket_subdirective,
      sym_note_subdirective,
    ACTIONS(127), 22,
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
      sym_single_date,
  [380] = 6,
    ACTIONS(135), 1,
      anon_sym_i,
    STATE(54), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(131), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(9), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    STATE(32), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_nomarket_subdirective,
      sym_note_subdirective,
    ACTIONS(133), 22,
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
      sym_single_date,
  [426] = 6,
    ACTIONS(139), 1,
      anon_sym_i,
    STATE(54), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(141), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(9), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    STATE(32), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_nomarket_subdirective,
      sym_note_subdirective,
    ACTIONS(137), 22,
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
      sym_single_date,
  [472] = 5,
    ACTIONS(146), 1,
      anon_sym_i,
    STATE(39), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(148), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(11), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(144), 22,
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
      sym_single_date,
  [511] = 5,
    ACTIONS(152), 1,
      anon_sym_i,
    STATE(39), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(154), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(11), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(150), 22,
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
      sym_single_date,
  [550] = 5,
    ACTIONS(159), 1,
      anon_sym_i,
    STATE(39), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(148), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(11), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(157), 22,
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
      sym_single_date,
  [589] = 5,
    ACTIONS(163), 1,
      anon_sym_i,
    STATE(39), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(148), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(11), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(161), 22,
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
      sym_single_date,
  [628] = 3,
    ACTIONS(167), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(165), 22,
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
      sym_single_date,
  [660] = 3,
    ACTIONS(171), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(169), 22,
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
      sym_single_date,
  [692] = 2,
    ACTIONS(175), 1,
      anon_sym_i,
    ACTIONS(173), 24,
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
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [722] = 2,
    ACTIONS(179), 1,
      anon_sym_i,
    ACTIONS(177), 24,
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
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [752] = 2,
    ACTIONS(183), 1,
      anon_sym_i,
    ACTIONS(181), 24,
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
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [782] = 2,
    ACTIONS(187), 1,
      anon_sym_i,
    ACTIONS(185), 24,
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
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [812] = 2,
    ACTIONS(191), 1,
      anon_sym_i,
    ACTIONS(189), 24,
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
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [842] = 3,
    ACTIONS(195), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(193), 22,
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
      sym_single_date,
  [874] = 2,
    ACTIONS(199), 1,
      anon_sym_i,
    ACTIONS(197), 24,
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
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [904] = 2,
    ACTIONS(203), 1,
      anon_sym_i,
    ACTIONS(201), 24,
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
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [934] = 3,
    ACTIONS(207), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(205), 22,
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
      sym_single_date,
  [966] = 2,
    ACTIONS(211), 1,
      anon_sym_i,
    ACTIONS(209), 24,
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
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [996] = 2,
    ACTIONS(215), 1,
      anon_sym_i,
    ACTIONS(213), 24,
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
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1026] = 2,
    ACTIONS(219), 1,
      anon_sym_i,
    ACTIONS(217), 24,
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
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1056] = 2,
    ACTIONS(223), 1,
      anon_sym_i,
    ACTIONS(221), 24,
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
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1086] = 2,
    ACTIONS(227), 1,
      anon_sym_i,
    ACTIONS(225), 24,
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
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1116] = 2,
    ACTIONS(231), 1,
      anon_sym_i,
    ACTIONS(229), 24,
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
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1146] = 2,
    ACTIONS(235), 1,
      anon_sym_i,
    ACTIONS(233), 24,
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
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1176] = 2,
    ACTIONS(239), 1,
      anon_sym_i,
    ACTIONS(237), 24,
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
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1206] = 2,
    ACTIONS(243), 1,
      anon_sym_i,
    ACTIONS(241), 24,
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
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1236] = 2,
    ACTIONS(247), 1,
      anon_sym_i,
    ACTIONS(245), 24,
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
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1266] = 2,
    ACTIONS(251), 1,
      anon_sym_i,
    ACTIONS(249), 24,
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
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1296] = 3,
    ACTIONS(255), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(253), 22,
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
      sym_single_date,
  [1328] = 2,
    ACTIONS(259), 1,
      anon_sym_i,
    ACTIONS(257), 24,
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
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1358] = 2,
    ACTIONS(263), 1,
      anon_sym_i,
    ACTIONS(261), 24,
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
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1388] = 10,
    ACTIONS(265), 1,
      anon_sym_SEMI,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(273), 1,
      sym_account_name,
    STATE(46), 1,
      aux_sym_whitespace_repeat1,
    STATE(55), 1,
      sym_account,
    STATE(67), 1,
      sym_status,
    STATE(130), 1,
      sym_note,
    ACTIONS(267), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(275), 2,
      anon_sym_,
      anon_sym_TAB,
  [1421] = 3,
    STATE(40), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(279), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(277), 9,
      anon_sym_alias,
      anon_sym_assert,
      anon_sym_check,
      anon_sym_default,
      anon_sym_eval,
      anon_sym_format,
      anon_sym_nomarket,
      anon_sym_note,
      anon_sym_payee,
  [1440] = 3,
    ACTIONS(251), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(249), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      aux_sym_quantity_token1,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
  [1458] = 8,
    ACTIONS(282), 1,
      anon_sym_DASH,
    ACTIONS(284), 1,
      aux_sym_quantity_token1,
    STATE(31), 1,
      sym_amount,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(84), 1,
      sym_quantity,
    STATE(85), 1,
      sym_commodity,
    ACTIONS(286), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(288), 2,
      anon_sym_,
      anon_sym_TAB,
  [1485] = 9,
    ACTIONS(290), 1,
      anon_sym_alias,
    ACTIONS(292), 1,
      anon_sym_assert,
    ACTIONS(294), 1,
      anon_sym_check,
    ACTIONS(296), 1,
      anon_sym_default,
    ACTIONS(298), 1,
      anon_sym_eval,
    ACTIONS(300), 1,
      anon_sym_note,
    ACTIONS(302), 1,
      anon_sym_payee,
    STATE(40), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(304), 2,
      anon_sym_,
      anon_sym_TAB,
  [1514] = 3,
    ACTIONS(263), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(261), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
  [1530] = 7,
    ACTIONS(282), 1,
      anon_sym_DASH,
    ACTIONS(284), 1,
      aux_sym_quantity_token1,
    STATE(75), 1,
      sym_quantity,
    STATE(77), 1,
      sym_commodity,
    STATE(134), 1,
      sym_amount,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(286), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1554] = 3,
    STATE(46), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(306), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(277), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [1570] = 7,
    ACTIONS(311), 1,
      anon_sym_EQ,
    ACTIONS(313), 1,
      anon_sym_AT,
    ACTIONS(315), 1,
      anon_sym_AT_AT,
    STATE(69), 1,
      sym_price,
    STATE(93), 1,
      sym_balance_assertion,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(309), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1594] = 7,
    ACTIONS(282), 1,
      anon_sym_DASH,
    ACTIONS(284), 1,
      aux_sym_quantity_token1,
    STATE(75), 1,
      sym_quantity,
    STATE(77), 1,
      sym_commodity,
    STATE(132), 1,
      sym_amount,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(286), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1618] = 7,
    ACTIONS(282), 1,
      anon_sym_DASH,
    ACTIONS(284), 1,
      aux_sym_quantity_token1,
    STATE(47), 1,
      sym_amount,
    STATE(75), 1,
      sym_quantity,
    STATE(77), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(286), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1642] = 7,
    ACTIONS(282), 1,
      anon_sym_DASH,
    ACTIONS(284), 1,
      aux_sym_quantity_token1,
    STATE(75), 1,
      sym_quantity,
    STATE(77), 1,
      sym_commodity,
    STATE(82), 1,
      sym_amount,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(286), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1666] = 3,
    ACTIONS(259), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(257), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
  [1682] = 7,
    ACTIONS(282), 1,
      anon_sym_DASH,
    ACTIONS(284), 1,
      aux_sym_quantity_token1,
    STATE(75), 1,
      sym_quantity,
    STATE(77), 1,
      sym_commodity,
    STATE(100), 1,
      sym_amount,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(286), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1706] = 6,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(265), 1,
      anon_sym_SEMI,
    ACTIONS(317), 1,
      anon_sym_LF,
    STATE(76), 1,
      sym_values,
    STATE(109), 1,
      sym_note,
    ACTIONS(319), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [1727] = 7,
    ACTIONS(290), 1,
      anon_sym_alias,
    ACTIONS(296), 1,
      anon_sym_default,
    ACTIONS(300), 1,
      anon_sym_note,
    ACTIONS(321), 1,
      anon_sym_format,
    ACTIONS(323), 1,
      anon_sym_nomarket,
    STATE(40), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(304), 2,
      anon_sym_,
      anon_sym_TAB,
  [1750] = 6,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(265), 1,
      anon_sym_SEMI,
    ACTIONS(325), 1,
      anon_sym_LF,
    STATE(80), 1,
      sym_values,
    STATE(119), 1,
      sym_note,
    ACTIONS(319), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [1771] = 5,
    ACTIONS(329), 1,
      sym_payee,
    STATE(66), 1,
      aux_sym_whitespace_repeat1,
    STATE(87), 1,
      sym_status,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(331), 2,
      anon_sym_,
      anon_sym_TAB,
  [1789] = 3,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(333), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(277), 4,
      anon_sym_DASH,
      aux_sym_quantity_token1,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1803] = 6,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      anon_sym_LBRACK,
    ACTIONS(340), 1,
      sym_account_name,
    STATE(46), 1,
      aux_sym_whitespace_repeat1,
    STATE(149), 1,
      sym_account,
    ACTIONS(275), 2,
      anon_sym_,
      anon_sym_TAB,
  [1823] = 3,
    ACTIONS(203), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(201), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_AT_AT,
  [1837] = 3,
    ACTIONS(342), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(344), 3,
      sym_time,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1850] = 4,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(146), 1,
      sym_commodity,
    ACTIONS(286), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(288), 2,
      anon_sym_,
      anon_sym_TAB,
  [1865] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(346), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [1876] = 5,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      anon_sym_LBRACK,
    ACTIONS(340), 1,
      sym_account_name,
    STATE(134), 1,
      sym_account,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1893] = 2,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(348), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [1904] = 5,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(273), 1,
      sym_account_name,
    STATE(70), 1,
      sym_account,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1921] = 4,
    ACTIONS(350), 1,
      sym_payee,
    STATE(66), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(277), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(352), 2,
      anon_sym_,
      anon_sym_TAB,
  [1936] = 5,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    ACTIONS(273), 1,
      sym_account_name,
    STATE(53), 1,
      sym_account,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1953] = 5,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      anon_sym_LBRACK,
    ACTIONS(340), 1,
      sym_account_name,
    STATE(121), 1,
      sym_account,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [1970] = 4,
    ACTIONS(311), 1,
      anon_sym_EQ,
    STATE(91), 1,
      sym_balance_assertion,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(355), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [1985] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(357), 1,
      anon_sym_LF,
    ACTIONS(359), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [1997] = 3,
    STATE(39), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(148), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(10), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [2009] = 3,
    STATE(134), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(286), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [2021] = 3,
    STATE(39), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(148), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(13), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [2033] = 3,
    STATE(154), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(286), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [2045] = 3,
    STATE(59), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(286), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [2057] = 4,
    ACTIONS(265), 1,
      anon_sym_SEMI,
    ACTIONS(361), 1,
      anon_sym_LF,
    STATE(123), 1,
      sym_note,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2071] = 4,
    ACTIONS(282), 1,
      anon_sym_DASH,
    ACTIONS(284), 1,
      aux_sym_quantity_token1,
    STATE(59), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2085] = 3,
    STATE(39), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(148), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(12), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [2097] = 3,
    STATE(48), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(286), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [2109] = 4,
    ACTIONS(265), 1,
      anon_sym_SEMI,
    ACTIONS(317), 1,
      anon_sym_LF,
    STATE(109), 1,
      sym_note,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2123] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(363), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [2133] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(365), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
  [2143] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(367), 3,
      sym_time,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [2153] = 3,
    STATE(23), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(369), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [2165] = 4,
    ACTIONS(371), 1,
      anon_sym_DASH,
    ACTIONS(373), 1,
      aux_sym_quantity_token1,
    STATE(23), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2179] = 3,
    ACTIONS(375), 1,
      sym_single_date,
    STATE(151), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2190] = 3,
    ACTIONS(377), 1,
      anon_sym_LF,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(379), 2,
      anon_sym_,
      anon_sym_TAB,
  [2201] = 3,
    ACTIONS(381), 1,
      aux_sym_alias_subdirective_token1,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(383), 2,
      anon_sym_,
      anon_sym_TAB,
  [2212] = 2,
    ACTIONS(385), 1,
      anon_sym_EQ,
    ACTIONS(344), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [2221] = 3,
    ACTIONS(387), 1,
      aux_sym_alias_subdirective_token1,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(383), 2,
      anon_sym_,
      anon_sym_TAB,
  [2232] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(389), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [2241] = 3,
    ACTIONS(391), 1,
      aux_sym_alias_subdirective_token1,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(383), 2,
      anon_sym_,
      anon_sym_TAB,
  [2252] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(355), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [2261] = 3,
    ACTIONS(375), 1,
      sym_single_date,
    STATE(152), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2272] = 3,
    ACTIONS(393), 1,
      aux_sym_alias_subdirective_token1,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(383), 2,
      anon_sym_,
      anon_sym_TAB,
  [2283] = 3,
    ACTIONS(395), 1,
      sym_payee,
    STATE(66), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(331), 2,
      anon_sym_,
      anon_sym_TAB,
  [2294] = 3,
    ACTIONS(397), 1,
      aux_sym_alias_subdirective_token1,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(383), 2,
      anon_sym_,
      anon_sym_TAB,
  [2305] = 3,
    ACTIONS(399), 1,
      aux_sym_alias_subdirective_token1,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(383), 2,
      anon_sym_,
      anon_sym_TAB,
  [2316] = 3,
    ACTIONS(401), 1,
      anon_sym_LF,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(403), 2,
      anon_sym_,
      anon_sym_TAB,
  [2327] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(405), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [2336] = 3,
    ACTIONS(375), 1,
      sym_single_date,
    STATE(79), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2347] = 3,
    ACTIONS(277), 1,
      aux_sym_alias_subdirective_token1,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(407), 2,
      anon_sym_,
      anon_sym_TAB,
  [2358] = 2,
    ACTIONS(348), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2366] = 2,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [2374] = 2,
    STATE(42), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(412), 2,
      anon_sym_,
      anon_sym_TAB,
  [2382] = 2,
    ACTIONS(414), 1,
      aux_sym_default_subdirective_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2390] = 2,
    ACTIONS(416), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2398] = 2,
    ACTIONS(418), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2406] = 2,
    ACTIONS(361), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2414] = 2,
    ACTIONS(420), 1,
      aux_sym_default_subdirective_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2422] = 2,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(422), 2,
      anon_sym_,
      anon_sym_TAB,
  [2430] = 2,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(424), 2,
      anon_sym_,
      anon_sym_TAB,
  [2438] = 2,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(426), 2,
      anon_sym_,
      anon_sym_TAB,
  [2446] = 2,
    ACTIONS(428), 1,
      aux_sym_quantity_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2454] = 2,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(430), 2,
      anon_sym_,
      anon_sym_TAB,
  [2462] = 2,
    ACTIONS(432), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2470] = 2,
    STATE(88), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(434), 2,
      anon_sym_,
      anon_sym_TAB,
  [2478] = 2,
    ACTIONS(436), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2486] = 2,
    ACTIONS(317), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2494] = 2,
    ACTIONS(438), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2502] = 2,
    ACTIONS(440), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2510] = 2,
    ACTIONS(442), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2518] = 2,
    ACTIONS(444), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2526] = 2,
    ACTIONS(446), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2534] = 2,
    ACTIONS(448), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [2542] = 2,
    ACTIONS(450), 1,
      sym_account_name,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2550] = 2,
    ACTIONS(452), 1,
      sym_account_name,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2558] = 2,
    ACTIONS(346), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2566] = 2,
    ACTIONS(454), 1,
      aux_sym_comment_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [2574] = 2,
    ACTIONS(456), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2582] = 2,
    ACTIONS(458), 1,
      aux_sym_note_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [2590] = 2,
    ACTIONS(460), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2598] = 2,
    ACTIONS(462), 1,
      aux_sym_word_directive_token3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2606] = 2,
    ACTIONS(464), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2614] = 2,
    ACTIONS(466), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2622] = 2,
    ACTIONS(468), 1,
      aux_sym_word_directive_token3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2630] = 2,
    ACTIONS(377), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2638] = 1,
    ACTIONS(363), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [2644] = 1,
    ACTIONS(367), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [2650] = 2,
    ACTIONS(470), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2658] = 2,
    ACTIONS(472), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2666] = 2,
    ACTIONS(474), 1,
      aux_sym_word_directive_token2,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [2674] = 2,
    ACTIONS(476), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2682] = 2,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2690] = 2,
    ACTIONS(478), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [2698] = 2,
    ACTIONS(480), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2706] = 2,
    ACTIONS(482), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [2714] = 2,
    STATE(61), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(484), 2,
      anon_sym_,
      anon_sym_TAB,
  [2722] = 2,
    ACTIONS(486), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2730] = 2,
    ACTIONS(488), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2738] = 2,
    ACTIONS(490), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2746] = 2,
    ACTIONS(492), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2754] = 2,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(494), 2,
      anon_sym_,
      anon_sym_TAB,
  [2762] = 2,
    ACTIONS(496), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2770] = 2,
    ACTIONS(498), 1,
      aux_sym_quantity_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2778] = 2,
    ACTIONS(500), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2786] = 2,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2794] = 2,
    ACTIONS(502), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2802] = 2,
    ACTIONS(504), 1,
      sym_account_name,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2810] = 2,
    ACTIONS(506), 1,
      sym_account_name,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 95,
  [SMALL_STATE(4)] = 190,
  [SMALL_STATE(5)] = 238,
  [SMALL_STATE(6)] = 286,
  [SMALL_STATE(7)] = 334,
  [SMALL_STATE(8)] = 380,
  [SMALL_STATE(9)] = 426,
  [SMALL_STATE(10)] = 472,
  [SMALL_STATE(11)] = 511,
  [SMALL_STATE(12)] = 550,
  [SMALL_STATE(13)] = 589,
  [SMALL_STATE(14)] = 628,
  [SMALL_STATE(15)] = 660,
  [SMALL_STATE(16)] = 692,
  [SMALL_STATE(17)] = 722,
  [SMALL_STATE(18)] = 752,
  [SMALL_STATE(19)] = 782,
  [SMALL_STATE(20)] = 812,
  [SMALL_STATE(21)] = 842,
  [SMALL_STATE(22)] = 874,
  [SMALL_STATE(23)] = 904,
  [SMALL_STATE(24)] = 934,
  [SMALL_STATE(25)] = 966,
  [SMALL_STATE(26)] = 996,
  [SMALL_STATE(27)] = 1026,
  [SMALL_STATE(28)] = 1056,
  [SMALL_STATE(29)] = 1086,
  [SMALL_STATE(30)] = 1116,
  [SMALL_STATE(31)] = 1146,
  [SMALL_STATE(32)] = 1176,
  [SMALL_STATE(33)] = 1206,
  [SMALL_STATE(34)] = 1236,
  [SMALL_STATE(35)] = 1266,
  [SMALL_STATE(36)] = 1296,
  [SMALL_STATE(37)] = 1328,
  [SMALL_STATE(38)] = 1358,
  [SMALL_STATE(39)] = 1388,
  [SMALL_STATE(40)] = 1421,
  [SMALL_STATE(41)] = 1440,
  [SMALL_STATE(42)] = 1458,
  [SMALL_STATE(43)] = 1485,
  [SMALL_STATE(44)] = 1514,
  [SMALL_STATE(45)] = 1530,
  [SMALL_STATE(46)] = 1554,
  [SMALL_STATE(47)] = 1570,
  [SMALL_STATE(48)] = 1594,
  [SMALL_STATE(49)] = 1618,
  [SMALL_STATE(50)] = 1642,
  [SMALL_STATE(51)] = 1666,
  [SMALL_STATE(52)] = 1682,
  [SMALL_STATE(53)] = 1706,
  [SMALL_STATE(54)] = 1727,
  [SMALL_STATE(55)] = 1750,
  [SMALL_STATE(56)] = 1771,
  [SMALL_STATE(57)] = 1789,
  [SMALL_STATE(58)] = 1803,
  [SMALL_STATE(59)] = 1823,
  [SMALL_STATE(60)] = 1837,
  [SMALL_STATE(61)] = 1850,
  [SMALL_STATE(62)] = 1865,
  [SMALL_STATE(63)] = 1876,
  [SMALL_STATE(64)] = 1893,
  [SMALL_STATE(65)] = 1904,
  [SMALL_STATE(66)] = 1921,
  [SMALL_STATE(67)] = 1936,
  [SMALL_STATE(68)] = 1953,
  [SMALL_STATE(69)] = 1970,
  [SMALL_STATE(70)] = 1985,
  [SMALL_STATE(71)] = 1997,
  [SMALL_STATE(72)] = 2009,
  [SMALL_STATE(73)] = 2021,
  [SMALL_STATE(74)] = 2033,
  [SMALL_STATE(75)] = 2045,
  [SMALL_STATE(76)] = 2057,
  [SMALL_STATE(77)] = 2071,
  [SMALL_STATE(78)] = 2085,
  [SMALL_STATE(79)] = 2097,
  [SMALL_STATE(80)] = 2109,
  [SMALL_STATE(81)] = 2123,
  [SMALL_STATE(82)] = 2133,
  [SMALL_STATE(83)] = 2143,
  [SMALL_STATE(84)] = 2153,
  [SMALL_STATE(85)] = 2165,
  [SMALL_STATE(86)] = 2179,
  [SMALL_STATE(87)] = 2190,
  [SMALL_STATE(88)] = 2201,
  [SMALL_STATE(89)] = 2212,
  [SMALL_STATE(90)] = 2221,
  [SMALL_STATE(91)] = 2232,
  [SMALL_STATE(92)] = 2241,
  [SMALL_STATE(93)] = 2252,
  [SMALL_STATE(94)] = 2261,
  [SMALL_STATE(95)] = 2272,
  [SMALL_STATE(96)] = 2283,
  [SMALL_STATE(97)] = 2294,
  [SMALL_STATE(98)] = 2305,
  [SMALL_STATE(99)] = 2316,
  [SMALL_STATE(100)] = 2327,
  [SMALL_STATE(101)] = 2336,
  [SMALL_STATE(102)] = 2347,
  [SMALL_STATE(103)] = 2358,
  [SMALL_STATE(104)] = 2366,
  [SMALL_STATE(105)] = 2374,
  [SMALL_STATE(106)] = 2382,
  [SMALL_STATE(107)] = 2390,
  [SMALL_STATE(108)] = 2398,
  [SMALL_STATE(109)] = 2406,
  [SMALL_STATE(110)] = 2414,
  [SMALL_STATE(111)] = 2422,
  [SMALL_STATE(112)] = 2430,
  [SMALL_STATE(113)] = 2438,
  [SMALL_STATE(114)] = 2446,
  [SMALL_STATE(115)] = 2454,
  [SMALL_STATE(116)] = 2462,
  [SMALL_STATE(117)] = 2470,
  [SMALL_STATE(118)] = 2478,
  [SMALL_STATE(119)] = 2486,
  [SMALL_STATE(120)] = 2494,
  [SMALL_STATE(121)] = 2502,
  [SMALL_STATE(122)] = 2510,
  [SMALL_STATE(123)] = 2518,
  [SMALL_STATE(124)] = 2526,
  [SMALL_STATE(125)] = 2534,
  [SMALL_STATE(126)] = 2542,
  [SMALL_STATE(127)] = 2550,
  [SMALL_STATE(128)] = 2558,
  [SMALL_STATE(129)] = 2566,
  [SMALL_STATE(130)] = 2574,
  [SMALL_STATE(131)] = 2582,
  [SMALL_STATE(132)] = 2590,
  [SMALL_STATE(133)] = 2598,
  [SMALL_STATE(134)] = 2606,
  [SMALL_STATE(135)] = 2614,
  [SMALL_STATE(136)] = 2622,
  [SMALL_STATE(137)] = 2630,
  [SMALL_STATE(138)] = 2638,
  [SMALL_STATE(139)] = 2644,
  [SMALL_STATE(140)] = 2650,
  [SMALL_STATE(141)] = 2658,
  [SMALL_STATE(142)] = 2666,
  [SMALL_STATE(143)] = 2674,
  [SMALL_STATE(144)] = 2682,
  [SMALL_STATE(145)] = 2690,
  [SMALL_STATE(146)] = 2698,
  [SMALL_STATE(147)] = 2706,
  [SMALL_STATE(148)] = 2714,
  [SMALL_STATE(149)] = 2722,
  [SMALL_STATE(150)] = 2730,
  [SMALL_STATE(151)] = 2738,
  [SMALL_STATE(152)] = 2746,
  [SMALL_STATE(153)] = 2754,
  [SMALL_STATE(154)] = 2762,
  [SMALL_STATE(155)] = 2770,
  [SMALL_STATE(156)] = 2778,
  [SMALL_STATE(157)] = 2786,
  [SMALL_STATE(158)] = 2794,
  [SMALL_STATE(159)] = 2802,
  [SMALL_STATE(160)] = 2810,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(129),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(153),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(148),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(147),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(143),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(142),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(101),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(89),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 4),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 5),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 5),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2), SHIFT_REPEAT(43),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 5),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2), SHIFT_REPEAT(54),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(39),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_subdirective, 4),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_subdirective, 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_subdirective, 4),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_subdirective, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nomarket_subdirective, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nomarket_subdirective, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_subdirective, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_subdirective, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eval_subdirective, 4),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eval_subdirective, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_subdirective, 4),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_subdirective, 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_subdirective, 4),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_subdirective, 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payee_subdirective, 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_payee_subdirective, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_subdirective, 4),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_subdirective, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(40),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(46),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(57),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(66),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 4),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 2),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(102),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [438] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 4),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 4),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
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
