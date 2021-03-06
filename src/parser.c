#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 166
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 97
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
  sym_spacer = 91,
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
  [sym_spacer] = "spacer",
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
  [sym_spacer] = sym_spacer,
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
  [sym_spacer] = {
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
      if (eof) ADVANCE(112);
      if (lookahead == '\t') ADVANCE(180);
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == ' ') ADVANCE(173);
      if (lookahead == '!') ADVANCE(153);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '-') ADVANCE(166);
      if (lookahead == ';') ADVANCE(114);
      if (lookahead == '=') ADVANCE(125);
      if (lookahead == '@') ADVANCE(170);
      if (lookahead == 'A') ADVANCE(131);
      if (lookahead == 'C') ADVANCE(135);
      if (lookahead == 'D') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(148);
      if (lookahead == 'N') ADVANCE(133);
      if (lookahead == 'O') ADVANCE(150);
      if (lookahead == 'P') ADVANCE(136);
      if (lookahead == 'Y') ADVANCE(132);
      if (lookahead == '[') ADVANCE(161);
      if (lookahead == ']') ADVANCE(163);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(83);
      if (lookahead == 'c') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 'y') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(180);
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == ' ') ADVANCE(172);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '-') ADVANCE(166);
      if (lookahead == ';') ADVANCE(114);
      if (lookahead == '=') ADVANCE(125);
      if (lookahead == '@') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(168);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(180);
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == ' ') ADVANCE(172);
      if (lookahead == '-') ADVANCE(166);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(180);
      if (lookahead == ' ') ADVANCE(172);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '=') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(168);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(183);
      if (lookahead == ' ') ADVANCE(172);
      if (lookahead == '!') ADVANCE(154);
      if (lookahead == '(') ADVANCE(159);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == ';') ADVANCE(114);
      if (lookahead == '[') ADVANCE(162);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(184);
      if (lookahead == ' ') ADVANCE(176);
      if (lookahead == '!') ADVANCE(153);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(181);
      if (lookahead == ' ') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(187);
      if (lookahead == ' ') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(124);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(182);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(175);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(186);
      if (lookahead == ' ') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(101);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(122);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 44:
      if (lookahead == 'f') ADVANCE(126);
      END_STATE();
    case 45:
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(41);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 50:
      if (lookahead == 'k') ADVANCE(139);
      END_STATE();
    case 51:
      if (lookahead == 'k') ADVANCE(38);
      END_STATE();
    case 52:
      if (lookahead == 'k') ADVANCE(42);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(23);
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 'v') ADVANCE(18);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 83:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 84:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 85:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 86:
      if (lookahead == 'v') ADVANCE(18);
      END_STATE();
    case 87:
      if (lookahead == 'y') ADVANCE(119);
      END_STATE();
    case 88:
      if (lookahead == 'y') ADVANCE(43);
      END_STATE();
    case 89:
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 90:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(100);
      END_STATE();
    case 91:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(102);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 108:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 109:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 110:
      if (eof) ADVANCE(112);
      if (lookahead == '\t') ADVANCE(180);
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == ' ') ADVANCE(173);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == ';') ADVANCE(114);
      if (lookahead == 'A') ADVANCE(131);
      if (lookahead == 'C') ADVANCE(135);
      if (lookahead == 'D') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(148);
      if (lookahead == 'N') ADVANCE(133);
      if (lookahead == 'O') ADVANCE(150);
      if (lookahead == 'P') ADVANCE(136);
      if (lookahead == 'Y') ADVANCE(132);
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(83);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead == 'y') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 111:
      if (eof) ADVANCE(112);
      if (lookahead == '\t') ADVANCE(180);
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == ' ') ADVANCE(172);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == ';') ADVANCE(114);
      if (lookahead == '=') ADVANCE(125);
      if (lookahead == '@') ADVANCE(170);
      if (lookahead == 'A') ADVANCE(131);
      if (lookahead == 'C') ADVANCE(135);
      if (lookahead == 'D') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(148);
      if (lookahead == 'N') ADVANCE(133);
      if (lookahead == 'O') ADVANCE(150);
      if (lookahead == 'P') ADVANCE(136);
      if (lookahead == 'Y') ADVANCE(132);
      if (lookahead == ']') ADVANCE(163);
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(83);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead == 'y') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_include);
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
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_word_directive_token2);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_word_directive_token3);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_word_directive_token3);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(100);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_bucket);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_alias_subdirective_token1);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_check);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_default_subdirective_token1);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_eval);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_nomarket);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_payee);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_single_date);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '\t') ADVANCE(185);
      if (lookahead == ' ') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(189);
      if (lookahead == ' ') ADVANCE(188);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(155);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(157);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(124);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(155);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(157);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(124);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 111},
  [2] = {.lex_state = 111},
  [3] = {.lex_state = 111},
  [4] = {.lex_state = 111},
  [5] = {.lex_state = 111},
  [6] = {.lex_state = 111},
  [7] = {.lex_state = 111},
  [8] = {.lex_state = 111},
  [9] = {.lex_state = 111},
  [10] = {.lex_state = 111},
  [11] = {.lex_state = 111},
  [12] = {.lex_state = 110},
  [13] = {.lex_state = 111},
  [14] = {.lex_state = 111},
  [15] = {.lex_state = 111},
  [16] = {.lex_state = 111},
  [17] = {.lex_state = 110},
  [18] = {.lex_state = 110},
  [19] = {.lex_state = 111},
  [20] = {.lex_state = 111},
  [21] = {.lex_state = 111},
  [22] = {.lex_state = 111},
  [23] = {.lex_state = 111},
  [24] = {.lex_state = 111},
  [25] = {.lex_state = 111},
  [26] = {.lex_state = 111},
  [27] = {.lex_state = 111},
  [28] = {.lex_state = 111},
  [29] = {.lex_state = 111},
  [30] = {.lex_state = 111},
  [31] = {.lex_state = 111},
  [32] = {.lex_state = 111},
  [33] = {.lex_state = 111},
  [34] = {.lex_state = 111},
  [35] = {.lex_state = 111},
  [36] = {.lex_state = 111},
  [37] = {.lex_state = 111},
  [38] = {.lex_state = 111},
  [39] = {.lex_state = 111},
  [40] = {.lex_state = 111},
  [41] = {.lex_state = 111},
  [42] = {.lex_state = 111},
  [43] = {.lex_state = 111},
  [44] = {.lex_state = 111},
  [45] = {.lex_state = 111},
  [46] = {.lex_state = 111},
  [47] = {.lex_state = 111},
  [48] = {.lex_state = 111},
  [49] = {.lex_state = 111},
  [50] = {.lex_state = 111},
  [51] = {.lex_state = 111},
  [52] = {.lex_state = 111},
  [53] = {.lex_state = 111},
  [54] = {.lex_state = 111},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 110},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 111},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 110},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 111},
  [84] = {.lex_state = 111},
  [85] = {.lex_state = 111},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 111},
  [92] = {.lex_state = 111},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 111},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 111},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 111},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 111},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 111},
  [106] = {.lex_state = 111},
  [107] = {.lex_state = 111},
  [108] = {.lex_state = 111},
  [109] = {.lex_state = 111},
  [110] = {.lex_state = 111},
  [111] = {.lex_state = 111},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 111},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 111},
  [122] = {.lex_state = 111},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 111},
  [125] = {.lex_state = 111},
  [126] = {.lex_state = 111},
  [127] = {.lex_state = 111},
  [128] = {.lex_state = 111},
  [129] = {.lex_state = 111},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 111},
  [132] = {.lex_state = 111},
  [133] = {.lex_state = 111},
  [134] = {.lex_state = 111},
  [135] = {.lex_state = 111},
  [136] = {.lex_state = 111},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 111},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 111},
  [141] = {.lex_state = 111},
  [142] = {.lex_state = 111},
  [143] = {.lex_state = 111},
  [144] = {.lex_state = 111},
  [145] = {.lex_state = 156},
  [146] = {.lex_state = 111},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 111},
  [149] = {.lex_state = 111},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 111},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 9},
  [154] = {.lex_state = 111},
  [155] = {.lex_state = 111},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 111},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 9},
  [160] = {.lex_state = 111},
  [161] = {.lex_state = 111},
  [162] = {.lex_state = 111},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 4},
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
    [sym_source_file] = STATE(129),
    [sym_journal_item] = STATE(2),
    [sym_comment] = STATE(23),
    [sym_directive] = STATE(23),
    [sym_account_directive] = STATE(24),
    [sym_commodity_directive] = STATE(24),
    [sym_word_directive] = STATE(24),
    [sym_char_directive] = STATE(24),
    [sym_check_in] = STATE(25),
    [sym_check_out] = STATE(25),
    [sym_xact] = STATE(23),
    [sym_plain_xact] = STATE(26),
    [sym_date] = STATE(110),
    [aux_sym_source_file_repeat1] = STATE(2),
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
  [0] = 27,
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
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      anon_sym_LF,
    STATE(26), 1,
      sym_plain_xact,
    STATE(110), 1,
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
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(25), 2,
      sym_check_in,
      sym_check_out,
    STATE(23), 3,
      sym_comment,
      sym_directive,
      sym_xact,
    STATE(24), 4,
      sym_account_directive,
      sym_commodity_directive,
      sym_word_directive,
      sym_char_directive,
  [93] = 27,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      anon_sym_LF,
    ACTIONS(59), 1,
      anon_sym_account,
    ACTIONS(62), 1,
      anon_sym_commodity,
    ACTIONS(68), 1,
      anon_sym_end,
    ACTIONS(71), 1,
      anon_sym_alias,
    ACTIONS(74), 1,
      anon_sym_year,
    ACTIONS(77), 1,
      anon_sym_bucket,
    ACTIONS(80), 1,
      anon_sym_A,
    ACTIONS(83), 1,
      anon_sym_Y,
    ACTIONS(86), 1,
      anon_sym_N,
    ACTIONS(89), 1,
      anon_sym_D,
    ACTIONS(92), 1,
      anon_sym_C,
    ACTIONS(95), 1,
      anon_sym_P,
    ACTIONS(98), 1,
      anon_sym_i,
    ACTIONS(101), 1,
      anon_sym_I,
    ACTIONS(107), 1,
      sym_single_date,
    STATE(26), 1,
      sym_plain_xact,
    STATE(110), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(56), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(65), 2,
      anon_sym_include,
      anon_sym_def,
    ACTIONS(104), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(25), 2,
      sym_check_in,
      sym_check_out,
    STATE(23), 3,
      sym_comment,
      sym_directive,
      sym_xact,
    STATE(24), 4,
      sym_account_directive,
      sym_commodity_directive,
      sym_word_directive,
      sym_char_directive,
  [186] = 6,
    ACTIONS(112), 1,
      anon_sym_i,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(114), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    STATE(52), 7,
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
  [234] = 6,
    ACTIONS(118), 1,
      anon_sym_i,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(114), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    STATE(52), 7,
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
  [282] = 6,
    ACTIONS(122), 1,
      anon_sym_i,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(124), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    STATE(52), 7,
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
  [330] = 6,
    ACTIONS(129), 1,
      anon_sym_i,
    STATE(70), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(131), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(8), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    STATE(44), 5,
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
  [376] = 6,
    ACTIONS(135), 1,
      anon_sym_i,
    STATE(70), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(131), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(9), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    STATE(44), 5,
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
  [422] = 6,
    ACTIONS(139), 1,
      anon_sym_i,
    STATE(70), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(141), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(9), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    STATE(44), 5,
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
  [468] = 3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(146), 2,
      anon_sym_i,
      anon_sym_AT,
    ACTIONS(144), 24,
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
      sym_single_date,
      anon_sym_AT_AT,
  [503] = 5,
    ACTIONS(150), 1,
      anon_sym_i,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(152), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(11), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(148), 22,
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
  [542] = 5,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(157), 1,
      anon_sym_i,
    STATE(137), 1,
      sym_spacer,
    ACTIONS(159), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
    ACTIONS(155), 22,
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
  [581] = 5,
    ACTIONS(163), 1,
      anon_sym_i,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(165), 2,
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
  [620] = 5,
    ACTIONS(169), 1,
      anon_sym_i,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(165), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(11), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(167), 22,
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
  [659] = 3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(173), 2,
      anon_sym_i,
      anon_sym_AT,
    ACTIONS(171), 24,
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
      sym_single_date,
      anon_sym_AT_AT,
  [694] = 5,
    ACTIONS(177), 1,
      anon_sym_i,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(165), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(11), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(175), 22,
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
  [733] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(181), 1,
      anon_sym_i,
    ACTIONS(179), 25,
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
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [767] = 3,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(185), 1,
      anon_sym_i,
    ACTIONS(183), 25,
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
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [801] = 2,
    ACTIONS(189), 1,
      anon_sym_i,
    ACTIONS(187), 24,
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
  [831] = 2,
    ACTIONS(193), 1,
      anon_sym_i,
    ACTIONS(191), 24,
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
  [861] = 2,
    ACTIONS(197), 1,
      anon_sym_i,
    ACTIONS(195), 24,
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
  [891] = 2,
    ACTIONS(201), 1,
      anon_sym_i,
    ACTIONS(199), 24,
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
  [921] = 3,
    ACTIONS(205), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(203), 22,
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
  [953] = 3,
    ACTIONS(209), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(207), 22,
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
  [985] = 3,
    ACTIONS(213), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(211), 22,
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
  [1017] = 3,
    ACTIONS(217), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(215), 22,
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
  [1049] = 3,
    ACTIONS(221), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(219), 22,
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
  [1081] = 3,
    ACTIONS(225), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(223), 22,
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
  [1113] = 3,
    ACTIONS(229), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(227), 22,
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
  [1145] = 2,
    ACTIONS(233), 1,
      anon_sym_i,
    ACTIONS(231), 24,
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
  [1175] = 3,
    ACTIONS(237), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(235), 22,
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
  [1207] = 2,
    ACTIONS(241), 1,
      anon_sym_i,
    ACTIONS(239), 24,
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
  [1237] = 3,
    ACTIONS(185), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(183), 22,
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
  [1269] = 3,
    ACTIONS(245), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(243), 22,
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
  [1301] = 3,
    ACTIONS(181), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(179), 22,
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
  [1333] = 2,
    ACTIONS(249), 1,
      anon_sym_i,
    ACTIONS(247), 24,
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
  [1363] = 3,
    ACTIONS(253), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(251), 22,
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
  [1395] = 2,
    ACTIONS(257), 1,
      anon_sym_i,
    ACTIONS(255), 24,
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
  [1425] = 2,
    ACTIONS(261), 1,
      anon_sym_i,
    ACTIONS(259), 24,
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
  [1455] = 2,
    ACTIONS(265), 1,
      anon_sym_i,
    ACTIONS(263), 24,
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
  [1485] = 2,
    ACTIONS(269), 1,
      anon_sym_i,
    ACTIONS(267), 24,
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
  [1515] = 2,
    ACTIONS(273), 1,
      anon_sym_i,
    ACTIONS(271), 24,
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
  [1545] = 2,
    ACTIONS(277), 1,
      anon_sym_i,
    ACTIONS(275), 24,
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
  [1575] = 2,
    ACTIONS(281), 1,
      anon_sym_i,
    ACTIONS(279), 24,
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
  [1605] = 3,
    ACTIONS(285), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(283), 22,
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
  [1637] = 2,
    ACTIONS(289), 1,
      anon_sym_i,
    ACTIONS(287), 24,
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
  [1667] = 3,
    ACTIONS(293), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(291), 22,
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
  [1699] = 3,
    ACTIONS(297), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(295), 22,
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
  [1731] = 2,
    ACTIONS(297), 1,
      anon_sym_i,
    ACTIONS(295), 24,
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
  [1761] = 2,
    ACTIONS(146), 1,
      anon_sym_i,
    ACTIONS(144), 24,
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
  [1791] = 3,
    ACTIONS(301), 1,
      anon_sym_i,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(299), 22,
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
  [1823] = 2,
    ACTIONS(305), 1,
      anon_sym_i,
    ACTIONS(303), 24,
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
  [1853] = 2,
    ACTIONS(173), 1,
      anon_sym_i,
    ACTIONS(171), 24,
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
  [1883] = 2,
    ACTIONS(293), 1,
      anon_sym_i,
    ACTIONS(291), 24,
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
  [1913] = 11,
    ACTIONS(307), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(315), 1,
      sym_account_name,
    ACTIONS(317), 1,
      anon_sym_,
    ACTIONS(319), 1,
      anon_sym_TAB,
    STATE(60), 1,
      sym_account,
    STATE(61), 1,
      aux_sym_whitespace_repeat1,
    STATE(76), 1,
      sym_status,
    STATE(144), 1,
      sym_note,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [1948] = 3,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(323), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(321), 9,
      anon_sym_alias,
      anon_sym_assert,
      anon_sym_check,
      anon_sym_default,
      anon_sym_eval,
      anon_sym_format,
      anon_sym_nomarket,
      anon_sym_note,
      anon_sym_payee,
  [1967] = 9,
    ACTIONS(326), 1,
      anon_sym_alias,
    ACTIONS(328), 1,
      anon_sym_assert,
    ACTIONS(330), 1,
      anon_sym_check,
    ACTIONS(332), 1,
      anon_sym_default,
    ACTIONS(334), 1,
      anon_sym_eval,
    ACTIONS(336), 1,
      anon_sym_note,
    ACTIONS(338), 1,
      anon_sym_payee,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(340), 2,
      anon_sym_,
      anon_sym_TAB,
  [1996] = 8,
    ACTIONS(342), 1,
      anon_sym_DASH,
    ACTIONS(344), 1,
      aux_sym_quantity_token1,
    STATE(43), 1,
      sym_amount,
    STATE(72), 1,
      aux_sym_whitespace_repeat1,
    STATE(89), 1,
      sym_quantity,
    STATE(90), 1,
      sym_commodity,
    ACTIONS(346), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(348), 2,
      anon_sym_,
      anon_sym_TAB,
  [2023] = 7,
    ACTIONS(342), 1,
      anon_sym_DASH,
    ACTIONS(344), 1,
      aux_sym_quantity_token1,
    STATE(85), 1,
      sym_amount,
    STATE(87), 1,
      sym_commodity,
    STATE(96), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(346), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [2047] = 7,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(307), 1,
      anon_sym_SEMI,
    ACTIONS(350), 1,
      anon_sym_LF,
    STATE(65), 1,
      sym_spacer,
    STATE(91), 1,
      sym_values,
    STATE(125), 1,
      sym_note,
    ACTIONS(352), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [2071] = 5,
    ACTIONS(356), 1,
      anon_sym_,
    ACTIONS(359), 1,
      anon_sym_TAB,
    STATE(61), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(321), 2,
      anon_sym_SEMI,
      sym_account_name,
    ACTIONS(354), 4,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [2091] = 7,
    ACTIONS(364), 1,
      anon_sym_EQ,
    ACTIONS(366), 1,
      anon_sym_AT,
    ACTIONS(368), 1,
      anon_sym_AT_AT,
    STATE(83), 1,
      sym_price,
    STATE(111), 1,
      sym_balance_assertion,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(362), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [2115] = 3,
    ACTIONS(293), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(291), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
  [2131] = 7,
    ACTIONS(342), 1,
      anon_sym_DASH,
    ACTIONS(344), 1,
      aux_sym_quantity_token1,
    STATE(87), 1,
      sym_commodity,
    STATE(96), 1,
      sym_quantity,
    STATE(106), 1,
      sym_amount,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(346), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [2155] = 7,
    ACTIONS(342), 1,
      anon_sym_DASH,
    ACTIONS(344), 1,
      aux_sym_quantity_token1,
    STATE(62), 1,
      sym_amount,
    STATE(87), 1,
      sym_commodity,
    STATE(96), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(346), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [2179] = 3,
    ACTIONS(297), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(295), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
  [2195] = 7,
    ACTIONS(342), 1,
      anon_sym_DASH,
    ACTIONS(344), 1,
      aux_sym_quantity_token1,
    STATE(28), 1,
      sym_amount,
    STATE(96), 1,
      sym_quantity,
    STATE(98), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(346), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [2219] = 7,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(307), 1,
      anon_sym_SEMI,
    ACTIONS(370), 1,
      anon_sym_LF,
    STATE(65), 1,
      sym_spacer,
    STATE(84), 1,
      sym_values,
    STATE(128), 1,
      sym_note,
    ACTIONS(352), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [2243] = 7,
    ACTIONS(342), 1,
      anon_sym_DASH,
    ACTIONS(344), 1,
      aux_sym_quantity_token1,
    STATE(34), 1,
      sym_amount,
    STATE(96), 1,
      sym_quantity,
    STATE(98), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(346), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [2267] = 7,
    ACTIONS(326), 1,
      anon_sym_alias,
    ACTIONS(332), 1,
      anon_sym_default,
    ACTIONS(336), 1,
      anon_sym_note,
    ACTIONS(372), 1,
      anon_sym_format,
    ACTIONS(374), 1,
      anon_sym_nomarket,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(340), 2,
      anon_sym_,
      anon_sym_TAB,
  [2290] = 7,
    ACTIONS(317), 1,
      anon_sym_,
    ACTIONS(319), 1,
      anon_sym_TAB,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_LBRACK,
    ACTIONS(380), 1,
      sym_account_name,
    STATE(61), 1,
      aux_sym_whitespace_repeat1,
    STATE(142), 1,
      sym_account,
  [2312] = 3,
    STATE(72), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(382), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(321), 4,
      anon_sym_DASH,
      aux_sym_quantity_token1,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [2326] = 5,
    ACTIONS(387), 1,
      sym_payee,
    STATE(77), 1,
      aux_sym_whitespace_repeat1,
    STATE(103), 1,
      sym_status,
    ACTIONS(385), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(389), 2,
      anon_sym_,
      anon_sym_TAB,
  [2344] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_LBRACK,
    ACTIONS(380), 1,
      sym_account_name,
    STATE(29), 1,
      sym_account,
  [2363] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_LBRACK,
    ACTIONS(380), 1,
      sym_account_name,
    STATE(34), 1,
      sym_account,
  [2382] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(315), 1,
      sym_account_name,
    STATE(68), 1,
      sym_account,
  [2401] = 4,
    ACTIONS(354), 1,
      sym_payee,
    STATE(77), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(391), 2,
      anon_sym_,
      anon_sym_TAB,
  [2416] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(394), 4,
      anon_sym_DASH,
      aux_sym_quantity_token1,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [2427] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(171), 4,
      anon_sym_DASH,
      aux_sym_quantity_token1,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [2438] = 6,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(315), 1,
      sym_account_name,
    STATE(12), 1,
      sym_account,
  [2457] = 4,
    STATE(72), 1,
      aux_sym_whitespace_repeat1,
    STATE(126), 1,
      sym_commodity,
    ACTIONS(348), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(396), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [2472] = 3,
    ACTIONS(398), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(400), 3,
      sym_time,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [2485] = 4,
    ACTIONS(364), 1,
      anon_sym_EQ,
    STATE(105), 1,
      sym_balance_assertion,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(402), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [2500] = 4,
    ACTIONS(307), 1,
      anon_sym_SEMI,
    ACTIONS(404), 1,
      anon_sym_LF,
    STATE(122), 1,
      sym_note,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2514] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(406), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
  [2524] = 3,
    STATE(141), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(396), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [2536] = 4,
    ACTIONS(342), 1,
      anon_sym_DASH,
    ACTIONS(344), 1,
      aux_sym_quantity_token1,
    STATE(10), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2550] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(408), 3,
      sym_time,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [2560] = 3,
    STATE(50), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(410), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [2572] = 4,
    ACTIONS(412), 1,
      anon_sym_DASH,
    ACTIONS(414), 1,
      aux_sym_quantity_token1,
    STATE(50), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2586] = 4,
    ACTIONS(307), 1,
      anon_sym_SEMI,
    ACTIONS(370), 1,
      anon_sym_LF,
    STATE(128), 1,
      sym_note,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2600] = 3,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(165), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(13), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [2612] = 3,
    STATE(67), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(346), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [2624] = 4,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(418), 1,
      sym_account_name,
    ACTIONS(416), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [2638] = 3,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(165), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(16), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [2650] = 3,
    STATE(10), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(396), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [2662] = 3,
    STATE(34), 1,
      sym_commodity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(396), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [2674] = 4,
    ACTIONS(420), 1,
      anon_sym_DASH,
    ACTIONS(422), 1,
      aux_sym_quantity_token1,
    STATE(10), 1,
      sym_quantity,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2688] = 3,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(165), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [2700] = 3,
    ACTIONS(424), 1,
      aux_sym_alias_subdirective_token1,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(426), 2,
      anon_sym_,
      anon_sym_TAB,
  [2711] = 3,
    ACTIONS(428), 1,
      sym_single_date,
    STATE(93), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2722] = 3,
    ACTIONS(321), 1,
      aux_sym_alias_subdirective_token1,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(430), 2,
      anon_sym_,
      anon_sym_TAB,
  [2733] = 3,
    ACTIONS(433), 1,
      anon_sym_LF,
    STATE(104), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(435), 2,
      anon_sym_,
      anon_sym_TAB,
  [2744] = 3,
    ACTIONS(437), 1,
      sym_payee,
    STATE(77), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(389), 2,
      anon_sym_,
      anon_sym_TAB,
  [2755] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(439), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [2764] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(441), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [2773] = 3,
    ACTIONS(428), 1,
      sym_single_date,
    STATE(127), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2784] = 3,
    ACTIONS(428), 1,
      sym_single_date,
    STATE(134), 1,
      sym_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2795] = 2,
    ACTIONS(443), 1,
      anon_sym_EQ,
    ACTIONS(400), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [2804] = 3,
    ACTIONS(445), 1,
      anon_sym_LF,
    STATE(73), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(447), 2,
      anon_sym_,
      anon_sym_TAB,
  [2815] = 2,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(402), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [2824] = 3,
    ACTIONS(449), 1,
      aux_sym_alias_subdirective_token1,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(426), 2,
      anon_sym_,
      anon_sym_TAB,
  [2835] = 3,
    ACTIONS(451), 1,
      aux_sym_alias_subdirective_token1,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(426), 2,
      anon_sym_,
      anon_sym_TAB,
  [2846] = 3,
    ACTIONS(453), 1,
      aux_sym_alias_subdirective_token1,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(426), 2,
      anon_sym_,
      anon_sym_TAB,
  [2857] = 3,
    ACTIONS(455), 1,
      aux_sym_alias_subdirective_token1,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(426), 2,
      anon_sym_,
      anon_sym_TAB,
  [2868] = 3,
    ACTIONS(457), 1,
      aux_sym_alias_subdirective_token1,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(426), 2,
      anon_sym_,
      anon_sym_TAB,
  [2879] = 2,
    ACTIONS(459), 1,
      aux_sym_comment_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [2887] = 2,
    STATE(71), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(461), 2,
      anon_sym_,
      anon_sym_TAB,
  [2895] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(463), 1,
      sym_account_name,
  [2905] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(465), 1,
      sym_account_name,
  [2915] = 2,
    ACTIONS(467), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2923] = 2,
    ACTIONS(469), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2931] = 2,
    ACTIONS(471), 1,
      aux_sym_quantity_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2939] = 2,
    ACTIONS(473), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2947] = 2,
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2955] = 2,
    ACTIONS(475), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2963] = 2,
    ACTIONS(477), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2971] = 2,
    ACTIONS(404), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2979] = 2,
    ACTIONS(479), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2987] = 2,
    ACTIONS(481), 1,
      aux_sym_default_subdirective_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [2995] = 2,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(483), 2,
      anon_sym_,
      anon_sym_TAB,
  [3003] = 2,
    STATE(112), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(485), 2,
      anon_sym_,
      anon_sym_TAB,
  [3011] = 2,
    STATE(100), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(487), 2,
      anon_sym_,
      anon_sym_TAB,
  [3019] = 2,
    ACTIONS(489), 1,
      sym_time,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [3027] = 2,
    ACTIONS(491), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [3035] = 2,
    STATE(115), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(493), 2,
      anon_sym_,
      anon_sym_TAB,
  [3043] = 2,
    ACTIONS(495), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [3051] = 2,
    STATE(116), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(497), 2,
      anon_sym_,
      anon_sym_TAB,
  [3059] = 2,
    ACTIONS(499), 1,
      sym_payee,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [3067] = 2,
    ACTIONS(501), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [3075] = 2,
    ACTIONS(503), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [3083] = 2,
    ACTIONS(505), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [3091] = 2,
    ACTIONS(433), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [3099] = 2,
    ACTIONS(507), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [3107] = 2,
    ACTIONS(509), 1,
      aux_sym_note_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [3115] = 2,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(511), 2,
      anon_sym_,
      anon_sym_TAB,
  [3123] = 2,
    ACTIONS(513), 1,
      aux_sym_default_subdirective_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [3131] = 1,
    ACTIONS(418), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [3137] = 1,
    ACTIONS(408), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [3143] = 2,
    ACTIONS(515), 1,
      aux_sym_word_directive_token3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [3151] = 2,
    ACTIONS(517), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [3159] = 2,
    ACTIONS(519), 1,
      aux_sym_word_directive_token2,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [3167] = 2,
    ACTIONS(521), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [3175] = 2,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [3183] = 2,
    STATE(81), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(523), 2,
      anon_sym_,
      anon_sym_TAB,
  [3191] = 2,
    ACTIONS(525), 1,
      aux_sym_word_directive_token3,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [3199] = 2,
    STATE(113), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(527), 2,
      anon_sym_,
      anon_sym_TAB,
  [3207] = 2,
    ACTIONS(529), 1,
      aux_sym_quantity_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [3215] = 2,
    ACTIONS(531), 1,
      aux_sym_word_directive_token1,
    ACTIONS(3), 2,
      anon_sym_,
      anon_sym_TAB,
  [3223] = 2,
    ACTIONS(533), 1,
      sym_single_date,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [3231] = 2,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [3239] = 2,
    ACTIONS(535), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [3247] = 2,
    ACTIONS(537), 1,
      aux_sym_quantity_token1,
    ACTIONS(5), 2,
      anon_sym_,
      anon_sym_TAB,
  [3255] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(539), 1,
      sym_account_name,
  [3265] = 3,
    ACTIONS(3), 1,
      anon_sym_TAB,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(541), 1,
      sym_account_name,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 93,
  [SMALL_STATE(4)] = 186,
  [SMALL_STATE(5)] = 234,
  [SMALL_STATE(6)] = 282,
  [SMALL_STATE(7)] = 330,
  [SMALL_STATE(8)] = 376,
  [SMALL_STATE(9)] = 422,
  [SMALL_STATE(10)] = 468,
  [SMALL_STATE(11)] = 503,
  [SMALL_STATE(12)] = 542,
  [SMALL_STATE(13)] = 581,
  [SMALL_STATE(14)] = 620,
  [SMALL_STATE(15)] = 659,
  [SMALL_STATE(16)] = 694,
  [SMALL_STATE(17)] = 733,
  [SMALL_STATE(18)] = 767,
  [SMALL_STATE(19)] = 801,
  [SMALL_STATE(20)] = 831,
  [SMALL_STATE(21)] = 861,
  [SMALL_STATE(22)] = 891,
  [SMALL_STATE(23)] = 921,
  [SMALL_STATE(24)] = 953,
  [SMALL_STATE(25)] = 985,
  [SMALL_STATE(26)] = 1017,
  [SMALL_STATE(27)] = 1049,
  [SMALL_STATE(28)] = 1081,
  [SMALL_STATE(29)] = 1113,
  [SMALL_STATE(30)] = 1145,
  [SMALL_STATE(31)] = 1175,
  [SMALL_STATE(32)] = 1207,
  [SMALL_STATE(33)] = 1237,
  [SMALL_STATE(34)] = 1269,
  [SMALL_STATE(35)] = 1301,
  [SMALL_STATE(36)] = 1333,
  [SMALL_STATE(37)] = 1363,
  [SMALL_STATE(38)] = 1395,
  [SMALL_STATE(39)] = 1425,
  [SMALL_STATE(40)] = 1455,
  [SMALL_STATE(41)] = 1485,
  [SMALL_STATE(42)] = 1515,
  [SMALL_STATE(43)] = 1545,
  [SMALL_STATE(44)] = 1575,
  [SMALL_STATE(45)] = 1605,
  [SMALL_STATE(46)] = 1637,
  [SMALL_STATE(47)] = 1667,
  [SMALL_STATE(48)] = 1699,
  [SMALL_STATE(49)] = 1731,
  [SMALL_STATE(50)] = 1761,
  [SMALL_STATE(51)] = 1791,
  [SMALL_STATE(52)] = 1823,
  [SMALL_STATE(53)] = 1853,
  [SMALL_STATE(54)] = 1883,
  [SMALL_STATE(55)] = 1913,
  [SMALL_STATE(56)] = 1948,
  [SMALL_STATE(57)] = 1967,
  [SMALL_STATE(58)] = 1996,
  [SMALL_STATE(59)] = 2023,
  [SMALL_STATE(60)] = 2047,
  [SMALL_STATE(61)] = 2071,
  [SMALL_STATE(62)] = 2091,
  [SMALL_STATE(63)] = 2115,
  [SMALL_STATE(64)] = 2131,
  [SMALL_STATE(65)] = 2155,
  [SMALL_STATE(66)] = 2179,
  [SMALL_STATE(67)] = 2195,
  [SMALL_STATE(68)] = 2219,
  [SMALL_STATE(69)] = 2243,
  [SMALL_STATE(70)] = 2267,
  [SMALL_STATE(71)] = 2290,
  [SMALL_STATE(72)] = 2312,
  [SMALL_STATE(73)] = 2326,
  [SMALL_STATE(74)] = 2344,
  [SMALL_STATE(75)] = 2363,
  [SMALL_STATE(76)] = 2382,
  [SMALL_STATE(77)] = 2401,
  [SMALL_STATE(78)] = 2416,
  [SMALL_STATE(79)] = 2427,
  [SMALL_STATE(80)] = 2438,
  [SMALL_STATE(81)] = 2457,
  [SMALL_STATE(82)] = 2472,
  [SMALL_STATE(83)] = 2485,
  [SMALL_STATE(84)] = 2500,
  [SMALL_STATE(85)] = 2514,
  [SMALL_STATE(86)] = 2524,
  [SMALL_STATE(87)] = 2536,
  [SMALL_STATE(88)] = 2550,
  [SMALL_STATE(89)] = 2560,
  [SMALL_STATE(90)] = 2572,
  [SMALL_STATE(91)] = 2586,
  [SMALL_STATE(92)] = 2600,
  [SMALL_STATE(93)] = 2612,
  [SMALL_STATE(94)] = 2624,
  [SMALL_STATE(95)] = 2638,
  [SMALL_STATE(96)] = 2650,
  [SMALL_STATE(97)] = 2662,
  [SMALL_STATE(98)] = 2674,
  [SMALL_STATE(99)] = 2688,
  [SMALL_STATE(100)] = 2700,
  [SMALL_STATE(101)] = 2711,
  [SMALL_STATE(102)] = 2722,
  [SMALL_STATE(103)] = 2733,
  [SMALL_STATE(104)] = 2744,
  [SMALL_STATE(105)] = 2755,
  [SMALL_STATE(106)] = 2764,
  [SMALL_STATE(107)] = 2773,
  [SMALL_STATE(108)] = 2784,
  [SMALL_STATE(109)] = 2795,
  [SMALL_STATE(110)] = 2804,
  [SMALL_STATE(111)] = 2815,
  [SMALL_STATE(112)] = 2824,
  [SMALL_STATE(113)] = 2835,
  [SMALL_STATE(114)] = 2846,
  [SMALL_STATE(115)] = 2857,
  [SMALL_STATE(116)] = 2868,
  [SMALL_STATE(117)] = 2879,
  [SMALL_STATE(118)] = 2887,
  [SMALL_STATE(119)] = 2895,
  [SMALL_STATE(120)] = 2905,
  [SMALL_STATE(121)] = 2915,
  [SMALL_STATE(122)] = 2923,
  [SMALL_STATE(123)] = 2931,
  [SMALL_STATE(124)] = 2939,
  [SMALL_STATE(125)] = 2947,
  [SMALL_STATE(126)] = 2955,
  [SMALL_STATE(127)] = 2963,
  [SMALL_STATE(128)] = 2971,
  [SMALL_STATE(129)] = 2979,
  [SMALL_STATE(130)] = 2987,
  [SMALL_STATE(131)] = 2995,
  [SMALL_STATE(132)] = 3003,
  [SMALL_STATE(133)] = 3011,
  [SMALL_STATE(134)] = 3019,
  [SMALL_STATE(135)] = 3027,
  [SMALL_STATE(136)] = 3035,
  [SMALL_STATE(137)] = 3043,
  [SMALL_STATE(138)] = 3051,
  [SMALL_STATE(139)] = 3059,
  [SMALL_STATE(140)] = 3067,
  [SMALL_STATE(141)] = 3075,
  [SMALL_STATE(142)] = 3083,
  [SMALL_STATE(143)] = 3091,
  [SMALL_STATE(144)] = 3099,
  [SMALL_STATE(145)] = 3107,
  [SMALL_STATE(146)] = 3115,
  [SMALL_STATE(147)] = 3123,
  [SMALL_STATE(148)] = 3131,
  [SMALL_STATE(149)] = 3137,
  [SMALL_STATE(150)] = 3143,
  [SMALL_STATE(151)] = 3151,
  [SMALL_STATE(152)] = 3159,
  [SMALL_STATE(153)] = 3167,
  [SMALL_STATE(154)] = 3175,
  [SMALL_STATE(155)] = 3183,
  [SMALL_STATE(156)] = 3191,
  [SMALL_STATE(157)] = 3199,
  [SMALL_STATE(158)] = 3207,
  [SMALL_STATE(159)] = 3215,
  [SMALL_STATE(160)] = 3223,
  [SMALL_STATE(161)] = 3231,
  [SMALL_STATE(162)] = 3239,
  [SMALL_STATE(163)] = 3247,
  [SMALL_STATE(164)] = 3255,
  [SMALL_STATE(165)] = 3265,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(117),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(118),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(155),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(153),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(152),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(150),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(156),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(101),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(107),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(107),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(109),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 4),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 5),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 5),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2), SHIFT_REPEAT(57),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 5),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2), SHIFT_REPEAT(70),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(55),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_in, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eval_subdirective, 4),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eval_subdirective, 4),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_subdirective, 4),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_subdirective, 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_subdirective, 4),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_subdirective, 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 4),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nomarket_subdirective, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nomarket_subdirective, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_out, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_subdirective, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_subdirective, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_directive, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_in, 6),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_subdirective, 4),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_subdirective, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_subdirective, 4),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_subdirective, 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payee_subdirective, 4),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_payee_subdirective, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_subdirective, 4),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_subdirective, 4),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 4),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_directive, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(56),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(61),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(61),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(72),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(77),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spacer, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(102),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 4),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [479] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spacer, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
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
