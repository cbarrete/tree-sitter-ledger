#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 262
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 110
#define ALIAS_COUNT 0
#define TOKEN_COUNT 74
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
  anon_sym_assert = 6,
  aux_sym_account_subdirective_token1 = 7,
  anon_sym_check = 8,
  anon_sym_eval = 9,
  anon_sym_payee = 10,
  anon_sym_commodity = 11,
  anon_sym_nomarket = 12,
  anon_sym_include = 13,
  anon_sym_end = 14,
  anon_sym_alias = 15,
  aux_sym_word_directive_token1 = 16,
  anon_sym_EQ = 17,
  aux_sym_word_directive_token2 = 18,
  anon_sym_def = 19,
  anon_sym_year = 20,
  aux_sym_word_directive_token3 = 21,
  anon_sym_bucket = 22,
  anon_sym_A = 23,
  anon_sym_Y = 24,
  anon_sym_N = 25,
  anon_sym_D = 26,
  anon_sym_C = 27,
  anon_sym_P = 28,
  anon_sym_default = 29,
  anon_sym_format = 30,
  anon_sym_note = 31,
  anon_sym_i = 32,
  anon_sym_I = 33,
  anon_sym_o = 34,
  anon_sym_O = 35,
  anon_sym_TILDE = 36,
  aux_sym_interval_token1 = 37,
  aux_sym_interval_token2 = 38,
  aux_sym_interval_token3 = 39,
  aux_sym_interval_token4 = 40,
  aux_sym_interval_token5 = 41,
  aux_sym_interval_token6 = 42,
  aux_sym_interval_token7 = 43,
  aux_sym_interval_token8 = 44,
  aux_sym_interval_token9 = 45,
  aux_sym_interval_token10 = 46,
  aux_sym_interval_token11 = 47,
  aux_sym_interval_token12 = 48,
  aux_sym_interval_token13 = 49,
  aux_sym_interval_token14 = 50,
  aux_sym_interval_token15 = 51,
  aux_sym_interval_token16 = 52,
  aux_sym_interval_token17 = 53,
  sym_single_date = 54,
  sym_time = 55,
  anon_sym_BANG = 56,
  sym_payee = 57,
  aux_sym_note_token1 = 58,
  anon_sym_LPAREN = 59,
  anon_sym_RPAREN = 60,
  anon_sym_LBRACK = 61,
  anon_sym_RBRACK = 62,
  sym_account_name = 63,
  anon_sym_DASH = 64,
  aux_sym_quantity_token1 = 65,
  aux_sym_commodity_token1 = 66,
  aux_sym_commodity_token2 = 67,
  anon_sym_AT = 68,
  anon_sym_AT_AT = 69,
  anon_sym_ = 70,
  anon_sym_TAB = 71,
  anon_sym_2 = 72,
  anon_sym_TAB2 = 73,
  sym_source_file = 74,
  sym_journal_item = 75,
  sym_comment = 76,
  sym_directive = 77,
  sym_account_directive = 78,
  sym_account_subdirective = 79,
  sym_commodity_directive = 80,
  sym_commodity_subdirective = 81,
  sym_word_directive = 82,
  sym_filename = 83,
  sym_char_directive = 84,
  sym_alias_subdirective = 85,
  sym_default_subdirective = 86,
  sym_format_subdirective = 87,
  sym_note_subdirective = 88,
  sym_check_in = 89,
  sym_check_out = 90,
  sym_xact = 91,
  sym_plain_xact = 92,
  sym_periodic_xact = 93,
  sym_interval = 94,
  sym_date = 95,
  sym_status = 96,
  sym_note = 97,
  sym_posting = 98,
  sym_account = 99,
  sym_amount = 100,
  sym_quantity = 101,
  sym_commodity = 102,
  sym_price = 103,
  sym_balance_assertion = 104,
  aux_sym_source_file_repeat1 = 105,
  aux_sym_account_directive_repeat1 = 106,
  aux_sym_commodity_directive_repeat1 = 107,
  aux_sym_plain_xact_repeat1 = 108,
  aux_sym_whitespace_repeat1 = 109,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_STAR] = "*",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_account] = "account",
  [anon_sym_assert] = "assert",
  [aux_sym_account_subdirective_token1] = "account_subdirective_token1",
  [anon_sym_check] = "check",
  [anon_sym_eval] = "eval",
  [anon_sym_payee] = "payee",
  [anon_sym_commodity] = "commodity",
  [anon_sym_nomarket] = "nomarket",
  [anon_sym_include] = "include",
  [anon_sym_end] = "end",
  [anon_sym_alias] = "alias",
  [aux_sym_word_directive_token1] = "word_directive_token1",
  [anon_sym_EQ] = "=",
  [aux_sym_word_directive_token2] = "word_directive_token2",
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
  [anon_sym_default] = "default",
  [anon_sym_format] = "format",
  [anon_sym_note] = "note",
  [anon_sym_i] = "i",
  [anon_sym_I] = "I",
  [anon_sym_o] = "o",
  [anon_sym_O] = "O",
  [anon_sym_TILDE] = "~",
  [aux_sym_interval_token1] = "interval_token1",
  [aux_sym_interval_token2] = "interval_token2",
  [aux_sym_interval_token3] = "interval_token3",
  [aux_sym_interval_token4] = "interval_token4",
  [aux_sym_interval_token5] = "interval_token5",
  [aux_sym_interval_token6] = "interval_token6",
  [aux_sym_interval_token7] = "interval_token7",
  [aux_sym_interval_token8] = "interval_token8",
  [aux_sym_interval_token9] = "interval_token9",
  [aux_sym_interval_token10] = "interval_token10",
  [aux_sym_interval_token11] = "interval_token11",
  [aux_sym_interval_token12] = "interval_token12",
  [aux_sym_interval_token13] = "interval_token13",
  [aux_sym_interval_token14] = "interval_token14",
  [aux_sym_interval_token15] = "interval_token15",
  [aux_sym_interval_token16] = "interval_token16",
  [aux_sym_interval_token17] = "interval_token17",
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
  [sym_filename] = "filename",
  [sym_char_directive] = "char_directive",
  [sym_alias_subdirective] = "alias_subdirective",
  [sym_default_subdirective] = "default_subdirective",
  [sym_format_subdirective] = "format_subdirective",
  [sym_note_subdirective] = "note_subdirective",
  [sym_check_in] = "check_in",
  [sym_check_out] = "check_out",
  [sym_xact] = "xact",
  [sym_plain_xact] = "plain_xact",
  [sym_periodic_xact] = "periodic_xact",
  [sym_interval] = "interval",
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
  [anon_sym_assert] = anon_sym_assert,
  [aux_sym_account_subdirective_token1] = aux_sym_account_subdirective_token1,
  [anon_sym_check] = anon_sym_check,
  [anon_sym_eval] = anon_sym_eval,
  [anon_sym_payee] = anon_sym_payee,
  [anon_sym_commodity] = anon_sym_commodity,
  [anon_sym_nomarket] = anon_sym_nomarket,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_alias] = anon_sym_alias,
  [aux_sym_word_directive_token1] = aux_sym_word_directive_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_word_directive_token2] = aux_sym_word_directive_token2,
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
  [anon_sym_default] = anon_sym_default,
  [anon_sym_format] = anon_sym_format,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_i] = anon_sym_i,
  [anon_sym_I] = anon_sym_I,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_O] = anon_sym_O,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [aux_sym_interval_token1] = aux_sym_interval_token1,
  [aux_sym_interval_token2] = aux_sym_interval_token2,
  [aux_sym_interval_token3] = aux_sym_interval_token3,
  [aux_sym_interval_token4] = aux_sym_interval_token4,
  [aux_sym_interval_token5] = aux_sym_interval_token5,
  [aux_sym_interval_token6] = aux_sym_interval_token6,
  [aux_sym_interval_token7] = aux_sym_interval_token7,
  [aux_sym_interval_token8] = aux_sym_interval_token8,
  [aux_sym_interval_token9] = aux_sym_interval_token9,
  [aux_sym_interval_token10] = aux_sym_interval_token10,
  [aux_sym_interval_token11] = aux_sym_interval_token11,
  [aux_sym_interval_token12] = aux_sym_interval_token12,
  [aux_sym_interval_token13] = aux_sym_interval_token13,
  [aux_sym_interval_token14] = aux_sym_interval_token14,
  [aux_sym_interval_token15] = aux_sym_interval_token15,
  [aux_sym_interval_token16] = aux_sym_interval_token16,
  [aux_sym_interval_token17] = aux_sym_interval_token17,
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
  [sym_filename] = sym_filename,
  [sym_char_directive] = sym_char_directive,
  [sym_alias_subdirective] = sym_alias_subdirective,
  [sym_default_subdirective] = sym_default_subdirective,
  [sym_format_subdirective] = sym_format_subdirective,
  [sym_note_subdirective] = sym_note_subdirective,
  [sym_check_in] = sym_check_in,
  [sym_check_out] = sym_check_out,
  [sym_xact] = sym_xact,
  [sym_plain_xact] = sym_plain_xact,
  [sym_periodic_xact] = sym_periodic_xact,
  [sym_interval] = sym_interval,
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
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_account_subdirective_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_check] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eval] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_payee] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commodity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nomarket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
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
  [aux_sym_word_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_word_directive_token2] = {
    .visible = false,
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
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_format] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
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
  [aux_sym_interval_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token17] = {
    .visible = false,
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
  [sym_filename] = {
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
  [sym_default_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_format_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_note_subdirective] = {
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
  [sym_interval] = {
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
                  ? (c >= 'E' && c <= 'Z')
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

static inline bool aux_sym_commodity_token1_character_set_4(int32_t c) {
  return (c < 6688
    ? (c < 2990
      ? (c < 2384
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'b'
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(200);
      if (lookahead == '\t') ADVANCE(416);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == ' ') ADVANCE(411);
      if (lookahead == '!') ADVANCE(291);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == ')') ADVANCE(297);
      if (lookahead == '*') ADVANCE(203);
      if (lookahead == '-') ADVANCE(303);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == '=') ADVANCE(228);
      if (lookahead == '@') ADVANCE(409);
      if (lookahead == 'A') ADVANCE(239);
      if (lookahead == 'B') ADVANCE(377);
      if (lookahead == 'C') ADVANCE(247);
      if (lookahead == 'D') ADVANCE(245);
      if (lookahead == 'I') ADVANCE(259);
      if (lookahead == 'N') ADVANCE(243);
      if (lookahead == 'O') ADVANCE(263);
      if (lookahead == 'P') ADVANCE(249);
      if (lookahead == 'Y') ADVANCE(241);
      if (lookahead == '[') ADVANCE(298);
      if (lookahead == ']') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == 'b') ADVANCE(363);
      if (lookahead == 'c') ADVANCE(331);
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 'i') ADVANCE(256);
      if (lookahead == 'n') ADVANCE(347);
      if (lookahead == 'o') ADVANCE(261);
      if (lookahead == 'p') ADVANCE(308);
      if (lookahead == 'y') ADVANCE(306);
      if (lookahead == '~') ADVANCE(264);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(391);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(399);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(407);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(416);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == ' ') ADVANCE(411);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '-') ADVANCE(303);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == '=') ADVANCE(228);
      if (lookahead == '@') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(416);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(411);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == '=') ADVANCE(228);
      if (lookahead == '@') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(411);
      if (lookahead == '-') ADVANCE(303);
      if (lookahead == 'D') ADVANCE(89);
      if (lookahead == 'E') ADVANCE(166);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(24);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(119);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(137);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(163);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(104);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(411);
      if (lookahead == '!') ADVANCE(292);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == '*') ADVANCE(204);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == '[') ADVANCE(299);
      if (lookahead != 0) ADVANCE(302);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(411);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == '[') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(302);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(413);
      if (lookahead == '!') ADVANCE(291);
      if (lookahead == '*') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(229);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(422);
      END_STATE();
    case 11:
      if (lookahead == '\t') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '\t') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(227);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(205);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(189);
      END_STATE();
    case 20:
      if (lookahead == 'V') ADVANCE(100);
      if (lookahead == 'v') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(230);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(25);
      END_STATE();
    case 49:
      if (lookahead == 'h') ADVANCE(44);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 52:
      if (lookahead == 'k') ADVANCE(211);
      END_STATE();
    case 53:
      if (lookahead == 'k') ADVANCE(38);
      END_STATE();
    case 54:
      if (lookahead == 'k') ADVANCE(45);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 83:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 84:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 85:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 86:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 87:
      if (lookahead == 'y') ADVANCE(217);
      END_STATE();
    case 88:
      if (lookahead == 'y') ADVANCE(46);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 98:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(138);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(164);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(105);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 99:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(95);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(139);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(165);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(107);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(111);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 115:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(267);
      END_STATE();
    case 116:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(154);
      END_STATE();
    case 117:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(128);
      END_STATE();
    case 118:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(130);
      END_STATE();
    case 119:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 120:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 121:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(266);
      END_STATE();
    case 122:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(152);
      END_STATE();
    case 123:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(126);
      END_STATE();
    case 124:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(129);
      END_STATE();
    case 125:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 126:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 127:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 128:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 129:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 130:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 131:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 132:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(140);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(114);
      END_STATE();
    case 133:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 134:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 135:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 136:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 137:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 138:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 139:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 140:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 141:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 142:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 143:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 144:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 145:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 146:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 147:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 148:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 149:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 150:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 151:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(270);
      END_STATE();
    case 152:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(271);
      END_STATE();
    case 153:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(274);
      END_STATE();
    case 154:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(272);
      END_STATE();
    case 155:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(273);
      END_STATE();
    case 156:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 157:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 158:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 159:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 160:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(106);
      END_STATE();
    case 161:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 162:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 163:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 164:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 165:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 166:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(100);
      END_STATE();
    case 167:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(275);
      END_STATE();
    case 168:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(15);
      END_STATE();
    case 169:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(277);
      END_STATE();
    case 170:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(287);
      END_STATE();
    case 171:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(281);
      END_STATE();
    case 172:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(279);
      END_STATE();
    case 173:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(265);
      END_STATE();
    case 174:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(283);
      END_STATE();
    case 175:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(285);
      END_STATE();
    case 176:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(151);
      END_STATE();
    case 177:
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 178:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(188);
      END_STATE();
    case 179:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(190);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 196:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(302);
      END_STATE();
    case 197:
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(302);
      END_STATE();
    case 198:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(229);
      END_STATE();
    case 199:
      if (eof) ADVANCE(200);
      if (lookahead == '\t') ADVANCE(416);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == ' ') ADVANCE(411);
      if (lookahead == '*') ADVANCE(203);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == '=') ADVANCE(228);
      if (lookahead == '@') ADVANCE(409);
      if (lookahead == 'A') ADVANCE(238);
      if (lookahead == 'C') ADVANCE(246);
      if (lookahead == 'D') ADVANCE(244);
      if (lookahead == 'I') ADVANCE(258);
      if (lookahead == 'N') ADVANCE(242);
      if (lookahead == 'O') ADVANCE(262);
      if (lookahead == 'P') ADVANCE(248);
      if (lookahead == 'Y') ADVANCE(240);
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'b') ADVANCE(84);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(257);
      if (lookahead == 'o') ADVANCE(260);
      if (lookahead == 'y') ADVANCE(37);
      if (lookahead == '~') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(301);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_account);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_assert);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_account_subdirective_token1);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_check);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_check);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_eval);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_eval);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_payee);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_payee);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_nomarket);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_nomarket);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_include);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_end);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_alias);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_word_directive_token1);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_word_directive_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'a') ADVANCE(365);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(407);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(401);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_word_directive_token3);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_word_directive_token3);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(188);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_bucket);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_A);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_N);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(378);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(407);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_C);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_P);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_default);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_format);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_note);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(316);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_I);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_o);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_O);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_interval_token1);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_interval_token2);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_interval_token3);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_interval_token4);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_interval_token5);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_interval_token6);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_interval_token7);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_interval_token8);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_interval_token9);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_interval_token10);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_interval_token11);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_interval_token11);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_interval_token12);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_interval_token12);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_interval_token13);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_interval_token13);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_interval_token14);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_interval_token14);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_interval_token15);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_interval_token15);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_interval_token16);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_interval_token16);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_interval_token17);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_interval_token17);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_single_date);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(301);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(301);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(301);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(301);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'A') ADVANCE(394);
      if (lookahead == 'a') ADVANCE(307);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(407);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(305);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'R') ADVANCE(382);
      if (lookahead == 'r') ADVANCE(233);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(367);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(407);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(407);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(353);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(407);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(352);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(407);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(357);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(407);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(317);
      if (lookahead == 'l') ADVANCE(332);
      if (lookahead == 's') ADVANCE(354);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(335);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(334);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(338);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(348);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(224);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(333);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(324);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(378);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(407);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(255);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(216);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(222);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(350);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(356);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(315);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(323);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(360);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'f') ADVANCE(231);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'h') ADVANCE(327);
      if (lookahead == 'o') ADVANCE(340);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(310);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(361);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(212);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(326);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(329);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(214);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(364);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(359);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(341);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(349);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(311);
      if (lookahead == 't') ADVANCE(322);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(312);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(318);
      if (lookahead == 'v') ADVANCE(309);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(358);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(351);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(342);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(362);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(319);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(355);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(343);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(226);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(325);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(209);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(237);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(253);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(207);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(251);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(220);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(366);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(345);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(314);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(388);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(320);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(339);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'y') ADVANCE(218);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'y') ADVANCE(328);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(394);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(407);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(393);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(407);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(370);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(395);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(373);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(384);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(388);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(381);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(385);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(400);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(401);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(402);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(403);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(404);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(405);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(406);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(392);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(374);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(396);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(398);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(389);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(390);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(397);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(382);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(387);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(375);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(372);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(376);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(369);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(276);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(288);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(278);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(282);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(280);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(284);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(286);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(410);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(293);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(229);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(227);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(301);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(293);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(229);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(227);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 199},
  [2] = {.lex_state = 199},
  [3] = {.lex_state = 199},
  [4] = {.lex_state = 199},
  [5] = {.lex_state = 199},
  [6] = {.lex_state = 199},
  [7] = {.lex_state = 199},
  [8] = {.lex_state = 199},
  [9] = {.lex_state = 199},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 199},
  [12] = {.lex_state = 199},
  [13] = {.lex_state = 199},
  [14] = {.lex_state = 199},
  [15] = {.lex_state = 199},
  [16] = {.lex_state = 199},
  [17] = {.lex_state = 199},
  [18] = {.lex_state = 199},
  [19] = {.lex_state = 199},
  [20] = {.lex_state = 199},
  [21] = {.lex_state = 199},
  [22] = {.lex_state = 199},
  [23] = {.lex_state = 199},
  [24] = {.lex_state = 199},
  [25] = {.lex_state = 199},
  [26] = {.lex_state = 199},
  [27] = {.lex_state = 199},
  [28] = {.lex_state = 199},
  [29] = {.lex_state = 199},
  [30] = {.lex_state = 199},
  [31] = {.lex_state = 199},
  [32] = {.lex_state = 199},
  [33] = {.lex_state = 199},
  [34] = {.lex_state = 199},
  [35] = {.lex_state = 199},
  [36] = {.lex_state = 199},
  [37] = {.lex_state = 199},
  [38] = {.lex_state = 199},
  [39] = {.lex_state = 199},
  [40] = {.lex_state = 199},
  [41] = {.lex_state = 199},
  [42] = {.lex_state = 199},
  [43] = {.lex_state = 199},
  [44] = {.lex_state = 199},
  [45] = {.lex_state = 199},
  [46] = {.lex_state = 199},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 199},
  [138] = {.lex_state = 199},
  [139] = {.lex_state = 199},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 199},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 199},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 11},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 11},
  [165] = {.lex_state = 11},
  [166] = {.lex_state = 11},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 12},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 12},
  [179] = {.lex_state = 8},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 9},
  [184] = {.lex_state = 5},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 8},
  [191] = {.lex_state = 8},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 199},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 197},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 198},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 197},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 4},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 14},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 294},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 4},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_account] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_check] = ACTIONS(1),
    [anon_sym_eval] = ACTIONS(1),
    [anon_sym_payee] = ACTIONS(1),
    [anon_sym_commodity] = ACTIONS(1),
    [anon_sym_nomarket] = ACTIONS(1),
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
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_format] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_i] = ACTIONS(1),
    [anon_sym_I] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_O] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [aux_sym_interval_token11] = ACTIONS(1),
    [aux_sym_interval_token12] = ACTIONS(1),
    [aux_sym_interval_token13] = ACTIONS(1),
    [aux_sym_interval_token14] = ACTIONS(1),
    [aux_sym_interval_token15] = ACTIONS(1),
    [aux_sym_interval_token16] = ACTIONS(1),
    [aux_sym_interval_token17] = ACTIONS(1),
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
    [sym_source_file] = STATE(221),
    [sym_journal_item] = STATE(3),
    [sym_comment] = STATE(43),
    [sym_directive] = STATE(43),
    [sym_account_directive] = STATE(46),
    [sym_commodity_directive] = STATE(46),
    [sym_word_directive] = STATE(217),
    [sym_char_directive] = STATE(217),
    [sym_check_in] = STATE(215),
    [sym_check_out] = STATE(215),
    [sym_xact] = STATE(43),
    [sym_plain_xact] = STATE(42),
    [sym_periodic_xact] = STATE(42),
    [sym_date] = STATE(168),
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
    [anon_sym_def] = ACTIONS(19),
    [anon_sym_year] = ACTIONS(21),
    [anon_sym_bucket] = ACTIONS(23),
    [anon_sym_A] = ACTIONS(25),
    [anon_sym_Y] = ACTIONS(27),
    [anon_sym_N] = ACTIONS(29),
    [anon_sym_D] = ACTIONS(31),
    [anon_sym_C] = ACTIONS(33),
    [anon_sym_P] = ACTIONS(35),
    [anon_sym_i] = ACTIONS(37),
    [anon_sym_I] = ACTIONS(39),
    [anon_sym_o] = ACTIONS(41),
    [anon_sym_O] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [sym_single_date] = ACTIONS(45),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 29,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      anon_sym_account,
    ACTIONS(58), 1,
      anon_sym_commodity,
    ACTIONS(61), 1,
      anon_sym_include,
    ACTIONS(64), 1,
      anon_sym_end,
    ACTIONS(67), 1,
      anon_sym_alias,
    ACTIONS(70), 1,
      anon_sym_def,
    ACTIONS(73), 1,
      anon_sym_year,
    ACTIONS(76), 1,
      anon_sym_bucket,
    ACTIONS(79), 1,
      anon_sym_A,
    ACTIONS(82), 1,
      anon_sym_Y,
    ACTIONS(85), 1,
      anon_sym_N,
    ACTIONS(88), 1,
      anon_sym_D,
    ACTIONS(91), 1,
      anon_sym_C,
    ACTIONS(94), 1,
      anon_sym_P,
    ACTIONS(97), 1,
      anon_sym_i,
    ACTIONS(100), 1,
      anon_sym_I,
    ACTIONS(106), 1,
      anon_sym_TILDE,
    ACTIONS(109), 1,
      sym_single_date,
    STATE(168), 1,
      sym_date,
    ACTIONS(52), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(103), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(42), 2,
      sym_plain_xact,
      sym_periodic_xact,
    STATE(46), 2,
      sym_account_directive,
      sym_commodity_directive,
    STATE(215), 2,
      sym_check_in,
      sym_check_out,
    STATE(217), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(43), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [97] = 29,
    ACTIONS(9), 1,
      anon_sym_account,
    ACTIONS(11), 1,
      anon_sym_commodity,
    ACTIONS(13), 1,
      anon_sym_include,
    ACTIONS(15), 1,
      anon_sym_end,
    ACTIONS(17), 1,
      anon_sym_alias,
    ACTIONS(19), 1,
      anon_sym_def,
    ACTIONS(21), 1,
      anon_sym_year,
    ACTIONS(23), 1,
      anon_sym_bucket,
    ACTIONS(25), 1,
      anon_sym_A,
    ACTIONS(27), 1,
      anon_sym_Y,
    ACTIONS(29), 1,
      anon_sym_N,
    ACTIONS(31), 1,
      anon_sym_D,
    ACTIONS(33), 1,
      anon_sym_C,
    ACTIONS(35), 1,
      anon_sym_P,
    ACTIONS(37), 1,
      anon_sym_i,
    ACTIONS(39), 1,
      anon_sym_I,
    ACTIONS(43), 1,
      anon_sym_TILDE,
    ACTIONS(45), 1,
      sym_single_date,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(114), 1,
      anon_sym_LF,
    STATE(168), 1,
      sym_date,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(41), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(42), 2,
      sym_plain_xact,
      sym_periodic_xact,
    STATE(46), 2,
      sym_account_directive,
      sym_commodity_directive,
    STATE(215), 2,
      sym_check_in,
      sym_check_out,
    STATE(217), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(43), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [194] = 6,
    ACTIONS(118), 1,
      anon_sym_i,
    STATE(81), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(120), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    STATE(22), 4,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_note_subdirective,
    ACTIONS(116), 23,
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
  [240] = 6,
    ACTIONS(125), 1,
      anon_sym_i,
    STATE(81), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(127), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    STATE(22), 4,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_note_subdirective,
    ACTIONS(123), 23,
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
  [286] = 6,
    ACTIONS(131), 1,
      anon_sym_i,
    STATE(81), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(127), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    STATE(22), 4,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_note_subdirective,
    ACTIONS(129), 23,
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
  [332] = 6,
    ACTIONS(135), 1,
      anon_sym_i,
    STATE(70), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(137), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(8), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    STATE(24), 3,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_note_subdirective,
    ACTIONS(133), 23,
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
  [377] = 6,
    ACTIONS(141), 1,
      anon_sym_i,
    STATE(70), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(143), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(8), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    STATE(24), 3,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_note_subdirective,
    ACTIONS(139), 23,
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
  [422] = 6,
    ACTIONS(148), 1,
      anon_sym_i,
    STATE(70), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(137), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    STATE(24), 3,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_note_subdirective,
    ACTIONS(146), 23,
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
  [467] = 3,
    STATE(10), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(152), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(150), 28,
      anon_sym_assert,
      anon_sym_check,
      anon_sym_eval,
      anon_sym_payee,
      anon_sym_nomarket,
      anon_sym_alias,
      anon_sym_default,
      anon_sym_format,
      anon_sym_note,
      aux_sym_interval_token1,
      aux_sym_interval_token2,
      aux_sym_interval_token3,
      aux_sym_interval_token4,
      aux_sym_interval_token5,
      aux_sym_interval_token6,
      aux_sym_interval_token7,
      aux_sym_interval_token8,
      aux_sym_interval_token9,
      aux_sym_interval_token10,
      aux_sym_interval_token11,
      aux_sym_interval_token12,
      aux_sym_interval_token13,
      aux_sym_interval_token14,
      aux_sym_interval_token15,
      aux_sym_interval_token16,
      aux_sym_interval_token17,
      anon_sym_DASH,
      aux_sym_quantity_token1,
  [505] = 5,
    ACTIONS(157), 1,
      anon_sym_i,
    STATE(54), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(159), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(16), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(155), 23,
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
  [545] = 5,
    ACTIONS(163), 1,
      anon_sym_i,
    STATE(54), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(159), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(16), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(161), 23,
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
  [585] = 5,
    ACTIONS(167), 1,
      anon_sym_i,
    STATE(54), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(159), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(16), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(165), 23,
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
  [625] = 5,
    ACTIONS(171), 1,
      anon_sym_i,
    STATE(54), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(159), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(16), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(169), 23,
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
  [665] = 2,
    ACTIONS(175), 2,
      anon_sym_i,
      anon_sym_AT,
    ACTIONS(173), 27,
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
  [699] = 5,
    ACTIONS(179), 1,
      anon_sym_i,
    STATE(54), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(181), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(16), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(177), 23,
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
  [739] = 2,
    ACTIONS(186), 2,
      anon_sym_i,
      anon_sym_AT,
    ACTIONS(184), 27,
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
  [773] = 2,
    ACTIONS(190), 1,
      anon_sym_i,
    ACTIONS(188), 25,
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
  [804] = 2,
    ACTIONS(194), 1,
      anon_sym_i,
    ACTIONS(192), 25,
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
  [835] = 2,
    ACTIONS(198), 1,
      anon_sym_i,
    ACTIONS(196), 25,
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
  [866] = 2,
    ACTIONS(202), 1,
      anon_sym_i,
    ACTIONS(200), 25,
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
  [897] = 2,
    ACTIONS(206), 1,
      anon_sym_i,
    ACTIONS(204), 25,
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
  [928] = 2,
    ACTIONS(210), 1,
      anon_sym_i,
    ACTIONS(208), 25,
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
  [959] = 2,
    ACTIONS(214), 1,
      anon_sym_i,
    ACTIONS(212), 25,
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
  [990] = 2,
    ACTIONS(218), 1,
      anon_sym_i,
    ACTIONS(216), 25,
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
  [1021] = 2,
    ACTIONS(222), 1,
      anon_sym_i,
    ACTIONS(220), 25,
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
  [1052] = 2,
    ACTIONS(226), 1,
      anon_sym_i,
    ACTIONS(224), 25,
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
  [1083] = 2,
    ACTIONS(230), 1,
      anon_sym_i,
    ACTIONS(228), 25,
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
  [1114] = 2,
    ACTIONS(234), 1,
      anon_sym_i,
    ACTIONS(232), 25,
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
  [1145] = 2,
    ACTIONS(238), 1,
      anon_sym_i,
    ACTIONS(236), 25,
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
  [1176] = 2,
    ACTIONS(242), 1,
      anon_sym_i,
    ACTIONS(240), 25,
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
  [1207] = 2,
    ACTIONS(246), 1,
      anon_sym_i,
    ACTIONS(244), 25,
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
  [1238] = 2,
    ACTIONS(250), 1,
      anon_sym_i,
    ACTIONS(248), 25,
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
  [1269] = 2,
    ACTIONS(254), 1,
      anon_sym_i,
    ACTIONS(252), 25,
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
  [1300] = 2,
    ACTIONS(258), 1,
      anon_sym_i,
    ACTIONS(256), 25,
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
  [1331] = 2,
    ACTIONS(262), 1,
      anon_sym_i,
    ACTIONS(260), 25,
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
  [1362] = 2,
    ACTIONS(266), 1,
      anon_sym_i,
    ACTIONS(264), 25,
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
  [1393] = 2,
    ACTIONS(270), 1,
      anon_sym_i,
    ACTIONS(268), 25,
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
  [1424] = 2,
    ACTIONS(274), 1,
      anon_sym_i,
    ACTIONS(272), 25,
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
  [1455] = 2,
    ACTIONS(278), 1,
      anon_sym_i,
    ACTIONS(276), 25,
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
  [1486] = 2,
    ACTIONS(282), 1,
      anon_sym_i,
    ACTIONS(280), 25,
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
  [1517] = 2,
    ACTIONS(286), 1,
      anon_sym_i,
    ACTIONS(284), 23,
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
  [1546] = 2,
    ACTIONS(290), 1,
      anon_sym_i,
    ACTIONS(288), 23,
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
  [1575] = 2,
    ACTIONS(294), 1,
      anon_sym_i,
    ACTIONS(292), 23,
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
  [1604] = 2,
    ACTIONS(298), 1,
      anon_sym_i,
    ACTIONS(296), 23,
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
  [1633] = 2,
    ACTIONS(302), 1,
      anon_sym_i,
    ACTIONS(300), 23,
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
  [1662] = 4,
    STATE(10), 1,
      aux_sym_whitespace_repeat1,
    STATE(247), 1,
      sym_interval,
    ACTIONS(306), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(304), 17,
      aux_sym_interval_token1,
      aux_sym_interval_token2,
      aux_sym_interval_token3,
      aux_sym_interval_token4,
      aux_sym_interval_token5,
      aux_sym_interval_token6,
      aux_sym_interval_token7,
      aux_sym_interval_token8,
      aux_sym_interval_token9,
      aux_sym_interval_token10,
      aux_sym_interval_token11,
      aux_sym_interval_token12,
      aux_sym_interval_token13,
      aux_sym_interval_token14,
      aux_sym_interval_token15,
      aux_sym_interval_token16,
      aux_sym_interval_token17,
  [1692] = 16,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_EQ,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(316), 1,
      aux_sym_quantity_token1,
    ACTIONS(320), 1,
      anon_sym_AT,
    ACTIONS(322), 1,
      anon_sym_AT_AT,
    STATE(53), 1,
      aux_sym_whitespace_repeat1,
    STATE(60), 1,
      sym_amount,
    STATE(85), 1,
      sym_price,
    STATE(105), 1,
      sym_quantity,
    STATE(121), 1,
      sym_commodity,
    STATE(122), 1,
      sym_balance_assertion,
    STATE(239), 1,
      sym_note,
    ACTIONS(318), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(324), 2,
      anon_sym_,
      anon_sym_TAB,
  [1743] = 16,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_EQ,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(316), 1,
      aux_sym_quantity_token1,
    ACTIONS(320), 1,
      anon_sym_AT,
    ACTIONS(322), 1,
      anon_sym_AT_AT,
    ACTIONS(326), 1,
      anon_sym_LF,
    STATE(52), 1,
      aux_sym_whitespace_repeat1,
    STATE(59), 1,
      sym_amount,
    STATE(86), 1,
      sym_price,
    STATE(105), 1,
      sym_quantity,
    STATE(118), 1,
      sym_balance_assertion,
    STATE(121), 1,
      sym_commodity,
    STATE(230), 1,
      sym_note,
    ACTIONS(318), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(328), 2,
      anon_sym_,
      anon_sym_TAB,
  [1794] = 16,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_EQ,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(316), 1,
      aux_sym_quantity_token1,
    ACTIONS(320), 1,
      anon_sym_AT,
    ACTIONS(322), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_LF,
    STATE(51), 1,
      aux_sym_whitespace_repeat1,
    STATE(57), 1,
      sym_amount,
    STATE(82), 1,
      sym_price,
    STATE(105), 1,
      sym_quantity,
    STATE(114), 1,
      sym_balance_assertion,
    STATE(121), 1,
      sym_commodity,
    STATE(220), 1,
      sym_note,
    ACTIONS(318), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(332), 2,
      anon_sym_,
      anon_sym_TAB,
  [1845] = 15,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_EQ,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(316), 1,
      aux_sym_quantity_token1,
    ACTIONS(320), 1,
      anon_sym_AT,
    ACTIONS(322), 1,
      anon_sym_AT_AT,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(61), 1,
      sym_amount,
    STATE(80), 1,
      sym_price,
    STATE(105), 1,
      sym_quantity,
    STATE(112), 1,
      sym_balance_assertion,
    STATE(121), 1,
      sym_commodity,
    STATE(219), 1,
      sym_note,
    ACTIONS(318), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(334), 2,
      anon_sym_,
      anon_sym_TAB,
  [1893] = 15,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_EQ,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(316), 1,
      aux_sym_quantity_token1,
    ACTIONS(320), 1,
      anon_sym_AT,
    ACTIONS(322), 1,
      anon_sym_AT_AT,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(57), 1,
      sym_amount,
    STATE(82), 1,
      sym_price,
    STATE(105), 1,
      sym_quantity,
    STATE(114), 1,
      sym_balance_assertion,
    STATE(121), 1,
      sym_commodity,
    STATE(220), 1,
      sym_note,
    ACTIONS(318), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(334), 2,
      anon_sym_,
      anon_sym_TAB,
  [1941] = 15,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_EQ,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(316), 1,
      aux_sym_quantity_token1,
    ACTIONS(320), 1,
      anon_sym_AT,
    ACTIONS(322), 1,
      anon_sym_AT_AT,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(59), 1,
      sym_amount,
    STATE(86), 1,
      sym_price,
    STATE(105), 1,
      sym_quantity,
    STATE(118), 1,
      sym_balance_assertion,
    STATE(121), 1,
      sym_commodity,
    STATE(230), 1,
      sym_note,
    ACTIONS(318), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(334), 2,
      anon_sym_,
      anon_sym_TAB,
  [1989] = 11,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    ACTIONS(342), 1,
      sym_account_name,
    ACTIONS(344), 1,
      anon_sym_,
    ACTIONS(346), 1,
      anon_sym_TAB,
    STATE(77), 1,
      aux_sym_whitespace_repeat1,
    STATE(90), 1,
      sym_status,
    STATE(177), 1,
      sym_account,
    STATE(258), 1,
      sym_note,
    ACTIONS(336), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [2024] = 4,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(348), 2,
      aux_sym_word_directive_token3,
      anon_sym_AT,
    ACTIONS(350), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(150), 7,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_single_date,
      sym_time,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
  [2045] = 4,
    ACTIONS(348), 1,
      anon_sym_AT,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(353), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(150), 7,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      aux_sym_quantity_token1,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
  [2065] = 10,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_EQ,
    ACTIONS(320), 1,
      anon_sym_AT,
    ACTIONS(322), 1,
      anon_sym_AT_AT,
    ACTIONS(356), 1,
      anon_sym_LF,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    STATE(80), 1,
      sym_price,
    STATE(112), 1,
      sym_balance_assertion,
    STATE(219), 1,
      sym_note,
    ACTIONS(358), 2,
      anon_sym_,
      anon_sym_TAB,
  [2097] = 2,
    ACTIONS(254), 1,
      anon_sym_AT,
    ACTIONS(252), 10,
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
  [2113] = 10,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_EQ,
    ACTIONS(320), 1,
      anon_sym_AT,
    ACTIONS(322), 1,
      anon_sym_AT_AT,
    ACTIONS(330), 1,
      anon_sym_LF,
    STATE(72), 1,
      aux_sym_whitespace_repeat1,
    STATE(82), 1,
      sym_price,
    STATE(114), 1,
      sym_balance_assertion,
    STATE(220), 1,
      sym_note,
    ACTIONS(360), 2,
      anon_sym_,
      anon_sym_TAB,
  [2145] = 10,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_EQ,
    ACTIONS(320), 1,
      anon_sym_AT,
    ACTIONS(322), 1,
      anon_sym_AT_AT,
    ACTIONS(326), 1,
      anon_sym_LF,
    STATE(76), 1,
      aux_sym_whitespace_repeat1,
    STATE(86), 1,
      sym_price,
    STATE(118), 1,
      sym_balance_assertion,
    STATE(230), 1,
      sym_note,
    ACTIONS(362), 2,
      anon_sym_,
      anon_sym_TAB,
  [2177] = 10,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_EQ,
    ACTIONS(320), 1,
      anon_sym_AT,
    ACTIONS(322), 1,
      anon_sym_AT_AT,
    ACTIONS(364), 1,
      anon_sym_LF,
    STATE(75), 1,
      aux_sym_whitespace_repeat1,
    STATE(84), 1,
      sym_price,
    STATE(107), 1,
      sym_balance_assertion,
    STATE(218), 1,
      sym_note,
    ACTIONS(366), 2,
      anon_sym_,
      anon_sym_TAB,
  [2209] = 9,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_EQ,
    ACTIONS(320), 1,
      anon_sym_AT,
    ACTIONS(322), 1,
      anon_sym_AT_AT,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    STATE(84), 1,
      sym_price,
    STATE(107), 1,
      sym_balance_assertion,
    STATE(218), 1,
      sym_note,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [2238] = 8,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(316), 1,
      aux_sym_quantity_token1,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(105), 1,
      sym_quantity,
    STATE(121), 1,
      sym_commodity,
    STATE(234), 1,
      sym_amount,
    ACTIONS(318), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(334), 2,
      anon_sym_,
      anon_sym_TAB,
  [2265] = 8,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(316), 1,
      aux_sym_quantity_token1,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(105), 1,
      sym_quantity,
    STATE(121), 1,
      sym_commodity,
    STATE(245), 1,
      sym_amount,
    ACTIONS(318), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(334), 2,
      anon_sym_,
      anon_sym_TAB,
  [2292] = 8,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(316), 1,
      aux_sym_quantity_token1,
    STATE(63), 1,
      aux_sym_whitespace_repeat1,
    STATE(105), 1,
      sym_quantity,
    STATE(121), 1,
      sym_commodity,
    STATE(245), 1,
      sym_amount,
    ACTIONS(318), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(370), 2,
      anon_sym_,
      anon_sym_TAB,
  [2319] = 8,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(316), 1,
      aux_sym_quantity_token1,
    STATE(29), 1,
      sym_amount,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(106), 1,
      sym_quantity,
    STATE(124), 1,
      sym_commodity,
    ACTIONS(318), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(334), 2,
      anon_sym_,
      anon_sym_TAB,
  [2346] = 8,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(316), 1,
      aux_sym_quantity_token1,
    STATE(64), 1,
      aux_sym_whitespace_repeat1,
    STATE(105), 1,
      sym_quantity,
    STATE(121), 1,
      sym_commodity,
    STATE(256), 1,
      sym_amount,
    ACTIONS(318), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(372), 2,
      anon_sym_,
      anon_sym_TAB,
  [2373] = 8,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(316), 1,
      aux_sym_quantity_token1,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(105), 1,
      sym_quantity,
    STATE(121), 1,
      sym_commodity,
    STATE(133), 1,
      sym_amount,
    ACTIONS(318), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(334), 2,
      anon_sym_,
      anon_sym_TAB,
  [2400] = 8,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(316), 1,
      aux_sym_quantity_token1,
    STATE(68), 1,
      aux_sym_whitespace_repeat1,
    STATE(105), 1,
      sym_quantity,
    STATE(121), 1,
      sym_commodity,
    STATE(142), 1,
      sym_amount,
    ACTIONS(318), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(374), 2,
      anon_sym_,
      anon_sym_TAB,
  [2427] = 6,
    ACTIONS(378), 1,
      anon_sym_alias,
    ACTIONS(380), 1,
      anon_sym_default,
    ACTIONS(382), 1,
      anon_sym_note,
    STATE(10), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(306), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(376), 4,
      anon_sym_assert,
      anon_sym_check,
      anon_sym_eval,
      anon_sym_payee,
  [2450] = 8,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(316), 1,
      aux_sym_quantity_token1,
    STATE(73), 1,
      aux_sym_whitespace_repeat1,
    STATE(105), 1,
      sym_quantity,
    STATE(121), 1,
      sym_commodity,
    STATE(180), 1,
      sym_amount,
    ACTIONS(318), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(384), 2,
      anon_sym_,
      anon_sym_TAB,
  [2477] = 9,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_EQ,
    ACTIONS(320), 1,
      anon_sym_AT,
    ACTIONS(322), 1,
      anon_sym_AT_AT,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    STATE(80), 1,
      sym_price,
    STATE(112), 1,
      sym_balance_assertion,
    STATE(219), 1,
      sym_note,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [2506] = 8,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(316), 1,
      aux_sym_quantity_token1,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(105), 1,
      sym_quantity,
    STATE(121), 1,
      sym_commodity,
    STATE(182), 1,
      sym_amount,
    ACTIONS(318), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(334), 2,
      anon_sym_,
      anon_sym_TAB,
  [2533] = 8,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(316), 1,
      aux_sym_quantity_token1,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(105), 1,
      sym_quantity,
    STATE(121), 1,
      sym_commodity,
    STATE(237), 1,
      sym_amount,
    ACTIONS(318), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(334), 2,
      anon_sym_,
      anon_sym_TAB,
  [2560] = 9,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_EQ,
    ACTIONS(320), 1,
      anon_sym_AT,
    ACTIONS(322), 1,
      anon_sym_AT_AT,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    STATE(83), 1,
      sym_price,
    STATE(119), 1,
      sym_balance_assertion,
    STATE(225), 1,
      sym_note,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [2589] = 9,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_EQ,
    ACTIONS(320), 1,
      anon_sym_AT,
    ACTIONS(322), 1,
      anon_sym_AT_AT,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    STATE(82), 1,
      sym_price,
    STATE(114), 1,
      sym_balance_assertion,
    STATE(220), 1,
      sym_note,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [2618] = 5,
    ACTIONS(150), 1,
      anon_sym_SEMI,
    ACTIONS(386), 1,
      anon_sym_,
    ACTIONS(389), 1,
      anon_sym_TAB,
    STATE(77), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(348), 5,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [2638] = 2,
    ACTIONS(242), 1,
      anon_sym_AT,
    ACTIONS(240), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [2652] = 2,
    ACTIONS(222), 1,
      anon_sym_AT,
    ACTIONS(220), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [2666] = 7,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_EQ,
    ACTIONS(364), 1,
      anon_sym_LF,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(107), 1,
      sym_balance_assertion,
    STATE(218), 1,
      sym_note,
    ACTIONS(392), 2,
      anon_sym_,
      anon_sym_TAB,
  [2689] = 7,
    ACTIONS(378), 1,
      anon_sym_alias,
    ACTIONS(380), 1,
      anon_sym_default,
    ACTIONS(382), 1,
      anon_sym_note,
    ACTIONS(394), 1,
      anon_sym_nomarket,
    ACTIONS(396), 1,
      anon_sym_format,
    STATE(10), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(306), 2,
      anon_sym_,
      anon_sym_TAB,
  [2712] = 7,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_EQ,
    ACTIONS(356), 1,
      anon_sym_LF,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(112), 1,
      sym_balance_assertion,
    STATE(219), 1,
      sym_note,
    ACTIONS(398), 2,
      anon_sym_,
      anon_sym_TAB,
  [2735] = 7,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_EQ,
    ACTIONS(400), 1,
      anon_sym_LF,
    STATE(104), 1,
      aux_sym_whitespace_repeat1,
    STATE(120), 1,
      sym_balance_assertion,
    STATE(231), 1,
      sym_note,
    ACTIONS(402), 2,
      anon_sym_,
      anon_sym_TAB,
  [2758] = 7,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_EQ,
    ACTIONS(404), 1,
      anon_sym_LF,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    STATE(119), 1,
      sym_balance_assertion,
    STATE(225), 1,
      sym_note,
    ACTIONS(406), 2,
      anon_sym_,
      anon_sym_TAB,
  [2781] = 7,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_EQ,
    ACTIONS(326), 1,
      anon_sym_LF,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    STATE(118), 1,
      sym_balance_assertion,
    STATE(230), 1,
      sym_note,
    ACTIONS(408), 2,
      anon_sym_,
      anon_sym_TAB,
  [2804] = 7,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_EQ,
    ACTIONS(330), 1,
      anon_sym_LF,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(114), 1,
      sym_balance_assertion,
    STATE(220), 1,
      sym_note,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [2827] = 5,
    ACTIONS(414), 1,
      sym_payee,
    STATE(117), 1,
      aux_sym_whitespace_repeat1,
    STATE(181), 1,
      sym_status,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(416), 2,
      anon_sym_,
      anon_sym_TAB,
  [2845] = 7,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    ACTIONS(342), 1,
      sym_account_name,
    ACTIONS(418), 1,
      anon_sym_,
    ACTIONS(420), 1,
      anon_sym_TAB,
    STATE(116), 1,
      aux_sym_whitespace_repeat1,
    STATE(153), 1,
      sym_account,
  [2867] = 7,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    ACTIONS(342), 1,
      sym_account_name,
    ACTIONS(422), 1,
      anon_sym_,
    ACTIONS(424), 1,
      anon_sym_TAB,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(170), 1,
      sym_account,
  [2889] = 7,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    ACTIONS(342), 1,
      sym_account_name,
    ACTIONS(426), 1,
      anon_sym_,
    ACTIONS(428), 1,
      anon_sym_TAB,
    STATE(93), 1,
      aux_sym_whitespace_repeat1,
    STATE(174), 1,
      sym_account,
  [2911] = 7,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    ACTIONS(342), 1,
      sym_account_name,
    ACTIONS(418), 1,
      anon_sym_,
    ACTIONS(420), 1,
      anon_sym_TAB,
    STATE(116), 1,
      aux_sym_whitespace_repeat1,
    STATE(227), 1,
      sym_account,
  [2933] = 6,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_EQ,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    STATE(107), 1,
      sym_balance_assertion,
    STATE(218), 1,
      sym_note,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [2953] = 7,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    ACTIONS(342), 1,
      sym_account_name,
    ACTIONS(418), 1,
      anon_sym_,
    ACTIONS(420), 1,
      anon_sym_TAB,
    STATE(116), 1,
      aux_sym_whitespace_repeat1,
    STATE(157), 1,
      sym_account,
  [2975] = 7,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    ACTIONS(342), 1,
      sym_account_name,
    ACTIONS(430), 1,
      anon_sym_,
    ACTIONS(432), 1,
      anon_sym_TAB,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    STATE(153), 1,
      sym_account,
  [2997] = 6,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_EQ,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    STATE(119), 1,
      sym_balance_assertion,
    STATE(225), 1,
      sym_note,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [3017] = 6,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_EQ,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    STATE(112), 1,
      sym_balance_assertion,
    STATE(219), 1,
      sym_note,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [3037] = 7,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    ACTIONS(342), 1,
      sym_account_name,
    ACTIONS(418), 1,
      anon_sym_,
    ACTIONS(420), 1,
      anon_sym_TAB,
    STATE(116), 1,
      aux_sym_whitespace_repeat1,
    STATE(167), 1,
      sym_account,
  [3059] = 7,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    ACTIONS(342), 1,
      sym_account_name,
    ACTIONS(434), 1,
      anon_sym_,
    ACTIONS(436), 1,
      anon_sym_TAB,
    STATE(88), 1,
      aux_sym_whitespace_repeat1,
    STATE(167), 1,
      sym_account,
  [3081] = 7,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    ACTIONS(342), 1,
      sym_account_name,
    ACTIONS(418), 1,
      anon_sym_,
    ACTIONS(420), 1,
      anon_sym_TAB,
    STATE(116), 1,
      aux_sym_whitespace_repeat1,
    STATE(232), 1,
      sym_account,
  [3103] = 7,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    ACTIONS(342), 1,
      sym_account_name,
    ACTIONS(418), 1,
      anon_sym_,
    ACTIONS(420), 1,
      anon_sym_TAB,
    STATE(116), 1,
      aux_sym_whitespace_repeat1,
    STATE(237), 1,
      sym_account,
  [3125] = 6,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_EQ,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    STATE(120), 1,
      sym_balance_assertion,
    STATE(231), 1,
      sym_note,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [3145] = 6,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_EQ,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    STATE(114), 1,
      sym_balance_assertion,
    STATE(220), 1,
      sym_note,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [3165] = 7,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    ACTIONS(342), 1,
      sym_account_name,
    ACTIONS(418), 1,
      anon_sym_,
    ACTIONS(420), 1,
      anon_sym_TAB,
    STATE(116), 1,
      aux_sym_whitespace_repeat1,
    STATE(172), 1,
      sym_account,
  [3187] = 6,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_EQ,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    STATE(125), 1,
      sym_balance_assertion,
    STATE(236), 1,
      sym_note,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [3207] = 4,
    STATE(15), 1,
      sym_commodity,
    STATE(108), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(318), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(438), 2,
      anon_sym_,
      anon_sym_TAB,
  [3222] = 4,
    STATE(15), 1,
      sym_commodity,
    STATE(126), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(440), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(442), 2,
      anon_sym_,
      anon_sym_TAB,
  [3237] = 5,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(404), 1,
      anon_sym_LF,
    STATE(143), 1,
      aux_sym_whitespace_repeat1,
    STATE(225), 1,
      sym_note,
    ACTIONS(444), 2,
      anon_sym_,
      anon_sym_TAB,
  [3254] = 4,
    STATE(17), 1,
      sym_commodity,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(318), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [3269] = 5,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(316), 1,
      aux_sym_quantity_token1,
    STATE(10), 1,
      aux_sym_whitespace_repeat1,
    STATE(17), 1,
      sym_quantity,
    ACTIONS(306), 2,
      anon_sym_,
      anon_sym_TAB,
  [3286] = 4,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    STATE(228), 1,
      sym_commodity,
    ACTIONS(318), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [3301] = 4,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    STATE(65), 1,
      sym_commodity,
    ACTIONS(318), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [3316] = 5,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(364), 1,
      anon_sym_LF,
    STATE(130), 1,
      aux_sym_whitespace_repeat1,
    STATE(218), 1,
      sym_note,
    ACTIONS(446), 2,
      anon_sym_,
      anon_sym_TAB,
  [3333] = 4,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    STATE(237), 1,
      sym_commodity,
    ACTIONS(318), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [3348] = 5,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(356), 1,
      anon_sym_LF,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    STATE(219), 1,
      sym_note,
    ACTIONS(448), 2,
      anon_sym_,
      anon_sym_TAB,
  [3365] = 4,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    STATE(161), 1,
      sym_commodity,
    ACTIONS(318), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [3380] = 4,
    ACTIONS(450), 1,
      anon_sym_,
    ACTIONS(453), 1,
      anon_sym_TAB,
    STATE(116), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(348), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [3395] = 4,
    ACTIONS(348), 1,
      sym_payee,
    STATE(117), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(150), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(456), 2,
      anon_sym_,
      anon_sym_TAB,
  [3410] = 5,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(330), 1,
      anon_sym_LF,
    STATE(134), 1,
      aux_sym_whitespace_repeat1,
    STATE(220), 1,
      sym_note,
    ACTIONS(459), 2,
      anon_sym_,
      anon_sym_TAB,
  [3427] = 5,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(400), 1,
      anon_sym_LF,
    STATE(148), 1,
      aux_sym_whitespace_repeat1,
    STATE(231), 1,
      sym_note,
    ACTIONS(461), 2,
      anon_sym_,
      anon_sym_TAB,
  [3444] = 5,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(463), 1,
      anon_sym_LF,
    STATE(146), 1,
      aux_sym_whitespace_repeat1,
    STATE(236), 1,
      sym_note,
    ACTIONS(465), 2,
      anon_sym_,
      anon_sym_TAB,
  [3461] = 5,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(316), 1,
      aux_sym_quantity_token1,
    STATE(15), 1,
      sym_quantity,
    STATE(109), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(467), 2,
      anon_sym_,
      anon_sym_TAB,
  [3478] = 5,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(326), 1,
      anon_sym_LF,
    STATE(140), 1,
      aux_sym_whitespace_repeat1,
    STATE(230), 1,
      sym_note,
    ACTIONS(469), 2,
      anon_sym_,
      anon_sym_TAB,
  [3495] = 5,
    ACTIONS(471), 1,
      anon_sym_DASH,
    ACTIONS(473), 1,
      aux_sym_quantity_token1,
    STATE(10), 1,
      aux_sym_whitespace_repeat1,
    STATE(17), 1,
      sym_quantity,
    ACTIONS(306), 2,
      anon_sym_,
      anon_sym_TAB,
  [3512] = 5,
    ACTIONS(471), 1,
      anon_sym_DASH,
    ACTIONS(473), 1,
      aux_sym_quantity_token1,
    STATE(15), 1,
      sym_quantity,
    STATE(123), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(475), 2,
      anon_sym_,
      anon_sym_TAB,
  [3529] = 5,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(477), 1,
      anon_sym_LF,
    STATE(147), 1,
      aux_sym_whitespace_repeat1,
    STATE(240), 1,
      sym_note,
    ACTIONS(479), 2,
      anon_sym_,
      anon_sym_TAB,
  [3546] = 4,
    STATE(17), 1,
      sym_commodity,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(440), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [3561] = 3,
    STATE(54), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(159), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [3573] = 3,
    STATE(54), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(159), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(12), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [3585] = 2,
    ACTIONS(483), 1,
      anon_sym_EQ,
    ACTIONS(481), 4,
      anon_sym_LF,
      sym_time,
      anon_sym_,
      anon_sym_TAB,
  [3595] = 4,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    STATE(225), 1,
      sym_note,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [3609] = 4,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    STATE(218), 1,
      sym_note,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [3623] = 4,
    ACTIONS(485), 1,
      aux_sym_word_directive_token2,
    STATE(173), 1,
      aux_sym_whitespace_repeat1,
    STATE(232), 1,
      sym_filename,
    ACTIONS(487), 2,
      anon_sym_,
      anon_sym_TAB,
  [3637] = 1,
    ACTIONS(489), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_,
      anon_sym_TAB,
  [3645] = 4,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    STATE(219), 1,
      sym_note,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [3659] = 2,
    ACTIONS(493), 1,
      anon_sym_,
    ACTIONS(491), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
      anon_sym_TAB,
  [3669] = 3,
    STATE(54), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(159), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(11), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [3681] = 4,
    ACTIONS(45), 1,
      sym_single_date,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    STATE(210), 1,
      sym_date,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [3695] = 4,
    ACTIONS(45), 1,
      sym_single_date,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    STATE(158), 1,
      sym_date,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [3709] = 4,
    ACTIONS(45), 1,
      sym_single_date,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    STATE(154), 1,
      sym_date,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [3723] = 4,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    STATE(220), 1,
      sym_note,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [3737] = 4,
    ACTIONS(45), 1,
      sym_single_date,
    STATE(139), 1,
      aux_sym_whitespace_repeat1,
    STATE(187), 1,
      sym_date,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [3751] = 1,
    ACTIONS(497), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_,
      anon_sym_TAB,
  [3759] = 4,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    STATE(231), 1,
      sym_note,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [3773] = 3,
    STATE(54), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(159), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(13), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [3785] = 4,
    ACTIONS(45), 1,
      sym_single_date,
    STATE(138), 1,
      aux_sym_whitespace_repeat1,
    STATE(189), 1,
      sym_date,
    ACTIONS(499), 2,
      anon_sym_,
      anon_sym_TAB,
  [3799] = 4,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    STATE(240), 1,
      sym_note,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [3813] = 4,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    STATE(243), 1,
      sym_note,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [3827] = 4,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    STATE(236), 1,
      sym_note,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [3841] = 3,
    ACTIONS(501), 1,
      sym_payee,
    STATE(117), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(416), 2,
      anon_sym_,
      anon_sym_TAB,
  [3852] = 1,
    ACTIONS(503), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [3859] = 3,
    ACTIONS(505), 1,
      sym_payee,
    STATE(117), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(416), 2,
      anon_sym_,
      anon_sym_TAB,
  [3870] = 3,
    ACTIONS(505), 1,
      sym_payee,
    STATE(149), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(507), 2,
      anon_sym_,
      anon_sym_TAB,
  [3881] = 2,
    ACTIONS(509), 1,
      anon_sym_LF,
    ACTIONS(511), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [3890] = 3,
    ACTIONS(513), 1,
      sym_time,
    STATE(186), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(515), 2,
      anon_sym_,
      anon_sym_TAB,
  [3901] = 3,
    ACTIONS(513), 1,
      sym_time,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [3912] = 3,
    ACTIONS(517), 1,
      sym_payee,
    STATE(151), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(519), 2,
      anon_sym_,
      anon_sym_TAB,
  [3923] = 2,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(521), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [3932] = 3,
    ACTIONS(523), 1,
      sym_time,
    STATE(176), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(525), 2,
      anon_sym_,
      anon_sym_TAB,
  [3943] = 3,
    ACTIONS(523), 1,
      sym_time,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [3954] = 3,
    ACTIONS(527), 1,
      anon_sym_EQ,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [3965] = 3,
    ACTIONS(529), 1,
      anon_sym_EQ,
    STATE(160), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(531), 2,
      anon_sym_,
      anon_sym_TAB,
  [3976] = 3,
    ACTIONS(150), 1,
      aux_sym_account_subdirective_token1,
    STATE(162), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(533), 2,
      anon_sym_,
      anon_sym_TAB,
  [3987] = 1,
    ACTIONS(536), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [3994] = 3,
    ACTIONS(538), 1,
      aux_sym_account_subdirective_token1,
    STATE(162), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [4005] = 3,
    ACTIONS(542), 1,
      aux_sym_account_subdirective_token1,
    STATE(162), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [4016] = 3,
    ACTIONS(544), 1,
      aux_sym_account_subdirective_token1,
    STATE(162), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [4027] = 2,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(548), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4036] = 3,
    ACTIONS(550), 1,
      anon_sym_LF,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(552), 2,
      anon_sym_,
      anon_sym_TAB,
  [4047] = 3,
    ACTIONS(554), 1,
      sym_payee,
    STATE(117), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(416), 2,
      anon_sym_,
      anon_sym_TAB,
  [4058] = 2,
    ACTIONS(556), 1,
      anon_sym_LF,
    ACTIONS(558), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4067] = 3,
    ACTIONS(501), 1,
      sym_payee,
    STATE(190), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(560), 2,
      anon_sym_,
      anon_sym_TAB,
  [4078] = 2,
    ACTIONS(562), 1,
      anon_sym_LF,
    ACTIONS(564), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4087] = 3,
    ACTIONS(348), 1,
      aux_sym_word_directive_token2,
    STATE(173), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(566), 2,
      anon_sym_,
      anon_sym_TAB,
  [4098] = 2,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(569), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4107] = 3,
    ACTIONS(348), 1,
      aux_sym_word_directive_token1,
    STATE(175), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(571), 2,
      anon_sym_,
      anon_sym_TAB,
  [4118] = 3,
    ACTIONS(574), 1,
      sym_time,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [4129] = 2,
    ACTIONS(576), 1,
      anon_sym_LF,
    ACTIONS(578), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4138] = 3,
    ACTIONS(580), 1,
      aux_sym_word_directive_token1,
    STATE(175), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(582), 2,
      anon_sym_,
      anon_sym_TAB,
  [4149] = 3,
    ACTIONS(584), 1,
      sym_payee,
    STATE(117), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(416), 2,
      anon_sym_,
      anon_sym_TAB,
  [4160] = 1,
    ACTIONS(586), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [4167] = 3,
    ACTIONS(588), 1,
      anon_sym_LF,
    STATE(169), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(590), 2,
      anon_sym_,
      anon_sym_TAB,
  [4178] = 1,
    ACTIONS(592), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [4185] = 3,
    ACTIONS(594), 1,
      aux_sym_word_directive_token2,
    STATE(173), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(487), 2,
      anon_sym_,
      anon_sym_TAB,
  [4196] = 3,
    ACTIONS(596), 1,
      aux_sym_word_directive_token3,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [4207] = 3,
    ACTIONS(598), 1,
      aux_sym_word_directive_token3,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [4218] = 3,
    ACTIONS(600), 1,
      sym_time,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
  [4229] = 3,
    ACTIONS(602), 1,
      sym_time,
    STATE(155), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(604), 2,
      anon_sym_,
      anon_sym_TAB,
  [4240] = 1,
    ACTIONS(606), 4,
      anon_sym_LF,
      sym_time,
      anon_sym_,
      anon_sym_TAB,
  [4247] = 3,
    ACTIONS(608), 1,
      sym_time,
    STATE(159), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(610), 2,
      anon_sym_,
      anon_sym_TAB,
  [4258] = 3,
    ACTIONS(612), 1,
      sym_payee,
    STATE(117), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(416), 2,
      anon_sym_,
      anon_sym_TAB,
  [4269] = 3,
    ACTIONS(612), 1,
      sym_payee,
    STATE(179), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(614), 2,
      anon_sym_,
      anon_sym_TAB,
  [4280] = 2,
    STATE(164), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(616), 2,
      anon_sym_,
      anon_sym_TAB,
  [4288] = 2,
    STATE(165), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(618), 2,
      anon_sym_,
      anon_sym_TAB,
  [4296] = 2,
    STATE(178), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(620), 2,
      anon_sym_,
      anon_sym_TAB,
  [4304] = 2,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(622), 2,
      anon_sym_,
      anon_sym_TAB,
  [4312] = 2,
    STATE(166), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(624), 2,
      anon_sym_,
      anon_sym_TAB,
  [4320] = 1,
    ACTIONS(493), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [4326] = 2,
    STATE(47), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(626), 2,
      anon_sym_,
      anon_sym_TAB,
  [4334] = 2,
    STATE(183), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(628), 2,
      anon_sym_,
      anon_sym_TAB,
  [4342] = 2,
    STATE(184), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(630), 2,
      anon_sym_,
      anon_sym_TAB,
  [4350] = 2,
    STATE(100), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(632), 2,
      anon_sym_,
      anon_sym_TAB,
  [4358] = 2,
    STATE(66), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(634), 2,
      anon_sym_,
      anon_sym_TAB,
  [4366] = 2,
    STATE(110), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(636), 2,
      anon_sym_,
      anon_sym_TAB,
  [4374] = 2,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(638), 2,
      anon_sym_,
      anon_sym_TAB,
  [4382] = 2,
    STATE(137), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(640), 2,
      anon_sym_,
      anon_sym_TAB,
  [4390] = 2,
    STATE(115), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(642), 2,
      anon_sym_,
      anon_sym_TAB,
  [4398] = 2,
    STATE(132), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(644), 2,
      anon_sym_,
      anon_sym_TAB,
  [4406] = 2,
    STATE(74), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(646), 2,
      anon_sym_,
      anon_sym_TAB,
  [4414] = 2,
    STATE(113), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(648), 2,
      anon_sym_,
      anon_sym_TAB,
  [4422] = 2,
    STATE(111), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(650), 2,
      anon_sym_,
      anon_sym_TAB,
  [4430] = 2,
    STATE(185), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(652), 2,
      anon_sym_,
      anon_sym_TAB,
  [4438] = 1,
    ACTIONS(654), 1,
      anon_sym_LF,
  [4442] = 1,
    ACTIONS(656), 1,
      sym_single_date,
  [4446] = 1,
    ACTIONS(658), 1,
      anon_sym_LF,
  [4450] = 1,
    ACTIONS(660), 1,
      anon_sym_LF,
  [4454] = 1,
    ACTIONS(662), 1,
      anon_sym_LF,
  [4458] = 1,
    ACTIONS(664), 1,
      anon_sym_LF,
  [4462] = 1,
    ACTIONS(404), 1,
      anon_sym_LF,
  [4466] = 1,
    ACTIONS(364), 1,
      anon_sym_LF,
  [4470] = 1,
    ACTIONS(356), 1,
      anon_sym_LF,
  [4474] = 1,
    ACTIONS(666), 1,
      ts_builtin_sym_end,
  [4478] = 1,
    ACTIONS(668), 1,
      sym_account_name,
  [4482] = 1,
    ACTIONS(670), 1,
      anon_sym_LF,
  [4486] = 1,
    ACTIONS(672), 1,
      aux_sym_word_directive_token2,
  [4490] = 1,
    ACTIONS(400), 1,
      anon_sym_LF,
  [4494] = 1,
    ACTIONS(674), 1,
      sym_account_name,
  [4498] = 1,
    ACTIONS(676), 1,
      anon_sym_LF,
  [4502] = 1,
    ACTIONS(678), 1,
      anon_sym_LF,
  [4506] = 1,
    ACTIONS(680), 1,
      anon_sym_LF,
  [4510] = 1,
    ACTIONS(330), 1,
      anon_sym_LF,
  [4514] = 1,
    ACTIONS(463), 1,
      anon_sym_LF,
  [4518] = 1,
    ACTIONS(682), 1,
      anon_sym_LF,
  [4522] = 1,
    ACTIONS(562), 1,
      anon_sym_LF,
  [4526] = 1,
    ACTIONS(684), 1,
      anon_sym_LF,
  [4530] = 1,
    ACTIONS(686), 1,
      anon_sym_EQ,
  [4534] = 1,
    ACTIONS(477), 1,
      anon_sym_LF,
  [4538] = 1,
    ACTIONS(688), 1,
      anon_sym_LF,
  [4542] = 1,
    ACTIONS(690), 1,
      aux_sym_quantity_token1,
  [4546] = 1,
    ACTIONS(326), 1,
      anon_sym_LF,
  [4550] = 1,
    ACTIONS(692), 1,
      anon_sym_LF,
  [4554] = 1,
    ACTIONS(694), 1,
      anon_sym_LF,
  [4558] = 1,
    ACTIONS(509), 1,
      anon_sym_LF,
  [4562] = 1,
    ACTIONS(696), 1,
      anon_sym_LF,
  [4566] = 1,
    ACTIONS(698), 1,
      anon_sym_RBRACK,
  [4570] = 1,
    ACTIONS(700), 1,
      anon_sym_LF,
  [4574] = 1,
    ACTIONS(702), 1,
      anon_sym_LF,
  [4578] = 1,
    ACTIONS(704), 1,
      anon_sym_LF,
  [4582] = 1,
    ACTIONS(706), 1,
      anon_sym_LF,
  [4586] = 1,
    ACTIONS(708), 1,
      anon_sym_LF,
  [4590] = 1,
    ACTIONS(588), 1,
      anon_sym_LF,
  [4594] = 1,
    ACTIONS(710), 1,
      anon_sym_LF,
  [4598] = 1,
    ACTIONS(712), 1,
      aux_sym_comment_token1,
  [4602] = 1,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
  [4606] = 1,
    ACTIONS(714), 1,
      anon_sym_LF,
  [4610] = 1,
    ACTIONS(716), 1,
      anon_sym_LF,
  [4614] = 1,
    ACTIONS(718), 1,
      anon_sym_LF,
  [4618] = 1,
    ACTIONS(720), 1,
      anon_sym_LF,
  [4622] = 1,
    ACTIONS(722), 1,
      anon_sym_LF,
  [4626] = 1,
    ACTIONS(724), 1,
      aux_sym_note_token1,
  [4630] = 1,
    ACTIONS(726), 1,
      anon_sym_LF,
  [4634] = 1,
    ACTIONS(728), 1,
      aux_sym_quantity_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 97,
  [SMALL_STATE(4)] = 194,
  [SMALL_STATE(5)] = 240,
  [SMALL_STATE(6)] = 286,
  [SMALL_STATE(7)] = 332,
  [SMALL_STATE(8)] = 377,
  [SMALL_STATE(9)] = 422,
  [SMALL_STATE(10)] = 467,
  [SMALL_STATE(11)] = 505,
  [SMALL_STATE(12)] = 545,
  [SMALL_STATE(13)] = 585,
  [SMALL_STATE(14)] = 625,
  [SMALL_STATE(15)] = 665,
  [SMALL_STATE(16)] = 699,
  [SMALL_STATE(17)] = 739,
  [SMALL_STATE(18)] = 773,
  [SMALL_STATE(19)] = 804,
  [SMALL_STATE(20)] = 835,
  [SMALL_STATE(21)] = 866,
  [SMALL_STATE(22)] = 897,
  [SMALL_STATE(23)] = 928,
  [SMALL_STATE(24)] = 959,
  [SMALL_STATE(25)] = 990,
  [SMALL_STATE(26)] = 1021,
  [SMALL_STATE(27)] = 1052,
  [SMALL_STATE(28)] = 1083,
  [SMALL_STATE(29)] = 1114,
  [SMALL_STATE(30)] = 1145,
  [SMALL_STATE(31)] = 1176,
  [SMALL_STATE(32)] = 1207,
  [SMALL_STATE(33)] = 1238,
  [SMALL_STATE(34)] = 1269,
  [SMALL_STATE(35)] = 1300,
  [SMALL_STATE(36)] = 1331,
  [SMALL_STATE(37)] = 1362,
  [SMALL_STATE(38)] = 1393,
  [SMALL_STATE(39)] = 1424,
  [SMALL_STATE(40)] = 1455,
  [SMALL_STATE(41)] = 1486,
  [SMALL_STATE(42)] = 1517,
  [SMALL_STATE(43)] = 1546,
  [SMALL_STATE(44)] = 1575,
  [SMALL_STATE(45)] = 1604,
  [SMALL_STATE(46)] = 1633,
  [SMALL_STATE(47)] = 1662,
  [SMALL_STATE(48)] = 1692,
  [SMALL_STATE(49)] = 1743,
  [SMALL_STATE(50)] = 1794,
  [SMALL_STATE(51)] = 1845,
  [SMALL_STATE(52)] = 1893,
  [SMALL_STATE(53)] = 1941,
  [SMALL_STATE(54)] = 1989,
  [SMALL_STATE(55)] = 2024,
  [SMALL_STATE(56)] = 2045,
  [SMALL_STATE(57)] = 2065,
  [SMALL_STATE(58)] = 2097,
  [SMALL_STATE(59)] = 2113,
  [SMALL_STATE(60)] = 2145,
  [SMALL_STATE(61)] = 2177,
  [SMALL_STATE(62)] = 2209,
  [SMALL_STATE(63)] = 2238,
  [SMALL_STATE(64)] = 2265,
  [SMALL_STATE(65)] = 2292,
  [SMALL_STATE(66)] = 2319,
  [SMALL_STATE(67)] = 2346,
  [SMALL_STATE(68)] = 2373,
  [SMALL_STATE(69)] = 2400,
  [SMALL_STATE(70)] = 2427,
  [SMALL_STATE(71)] = 2450,
  [SMALL_STATE(72)] = 2477,
  [SMALL_STATE(73)] = 2506,
  [SMALL_STATE(74)] = 2533,
  [SMALL_STATE(75)] = 2560,
  [SMALL_STATE(76)] = 2589,
  [SMALL_STATE(77)] = 2618,
  [SMALL_STATE(78)] = 2638,
  [SMALL_STATE(79)] = 2652,
  [SMALL_STATE(80)] = 2666,
  [SMALL_STATE(81)] = 2689,
  [SMALL_STATE(82)] = 2712,
  [SMALL_STATE(83)] = 2735,
  [SMALL_STATE(84)] = 2758,
  [SMALL_STATE(85)] = 2781,
  [SMALL_STATE(86)] = 2804,
  [SMALL_STATE(87)] = 2827,
  [SMALL_STATE(88)] = 2845,
  [SMALL_STATE(89)] = 2867,
  [SMALL_STATE(90)] = 2889,
  [SMALL_STATE(91)] = 2911,
  [SMALL_STATE(92)] = 2933,
  [SMALL_STATE(93)] = 2953,
  [SMALL_STATE(94)] = 2975,
  [SMALL_STATE(95)] = 2997,
  [SMALL_STATE(96)] = 3017,
  [SMALL_STATE(97)] = 3037,
  [SMALL_STATE(98)] = 3059,
  [SMALL_STATE(99)] = 3081,
  [SMALL_STATE(100)] = 3103,
  [SMALL_STATE(101)] = 3125,
  [SMALL_STATE(102)] = 3145,
  [SMALL_STATE(103)] = 3165,
  [SMALL_STATE(104)] = 3187,
  [SMALL_STATE(105)] = 3207,
  [SMALL_STATE(106)] = 3222,
  [SMALL_STATE(107)] = 3237,
  [SMALL_STATE(108)] = 3254,
  [SMALL_STATE(109)] = 3269,
  [SMALL_STATE(110)] = 3286,
  [SMALL_STATE(111)] = 3301,
  [SMALL_STATE(112)] = 3316,
  [SMALL_STATE(113)] = 3333,
  [SMALL_STATE(114)] = 3348,
  [SMALL_STATE(115)] = 3365,
  [SMALL_STATE(116)] = 3380,
  [SMALL_STATE(117)] = 3395,
  [SMALL_STATE(118)] = 3410,
  [SMALL_STATE(119)] = 3427,
  [SMALL_STATE(120)] = 3444,
  [SMALL_STATE(121)] = 3461,
  [SMALL_STATE(122)] = 3478,
  [SMALL_STATE(123)] = 3495,
  [SMALL_STATE(124)] = 3512,
  [SMALL_STATE(125)] = 3529,
  [SMALL_STATE(126)] = 3546,
  [SMALL_STATE(127)] = 3561,
  [SMALL_STATE(128)] = 3573,
  [SMALL_STATE(129)] = 3585,
  [SMALL_STATE(130)] = 3595,
  [SMALL_STATE(131)] = 3609,
  [SMALL_STATE(132)] = 3623,
  [SMALL_STATE(133)] = 3637,
  [SMALL_STATE(134)] = 3645,
  [SMALL_STATE(135)] = 3659,
  [SMALL_STATE(136)] = 3669,
  [SMALL_STATE(137)] = 3681,
  [SMALL_STATE(138)] = 3695,
  [SMALL_STATE(139)] = 3709,
  [SMALL_STATE(140)] = 3723,
  [SMALL_STATE(141)] = 3737,
  [SMALL_STATE(142)] = 3751,
  [SMALL_STATE(143)] = 3759,
  [SMALL_STATE(144)] = 3773,
  [SMALL_STATE(145)] = 3785,
  [SMALL_STATE(146)] = 3799,
  [SMALL_STATE(147)] = 3813,
  [SMALL_STATE(148)] = 3827,
  [SMALL_STATE(149)] = 3841,
  [SMALL_STATE(150)] = 3852,
  [SMALL_STATE(151)] = 3859,
  [SMALL_STATE(152)] = 3870,
  [SMALL_STATE(153)] = 3881,
  [SMALL_STATE(154)] = 3890,
  [SMALL_STATE(155)] = 3901,
  [SMALL_STATE(156)] = 3912,
  [SMALL_STATE(157)] = 3923,
  [SMALL_STATE(158)] = 3932,
  [SMALL_STATE(159)] = 3943,
  [SMALL_STATE(160)] = 3954,
  [SMALL_STATE(161)] = 3965,
  [SMALL_STATE(162)] = 3976,
  [SMALL_STATE(163)] = 3987,
  [SMALL_STATE(164)] = 3994,
  [SMALL_STATE(165)] = 4005,
  [SMALL_STATE(166)] = 4016,
  [SMALL_STATE(167)] = 4027,
  [SMALL_STATE(168)] = 4036,
  [SMALL_STATE(169)] = 4047,
  [SMALL_STATE(170)] = 4058,
  [SMALL_STATE(171)] = 4067,
  [SMALL_STATE(172)] = 4078,
  [SMALL_STATE(173)] = 4087,
  [SMALL_STATE(174)] = 4098,
  [SMALL_STATE(175)] = 4107,
  [SMALL_STATE(176)] = 4118,
  [SMALL_STATE(177)] = 4129,
  [SMALL_STATE(178)] = 4138,
  [SMALL_STATE(179)] = 4149,
  [SMALL_STATE(180)] = 4160,
  [SMALL_STATE(181)] = 4167,
  [SMALL_STATE(182)] = 4178,
  [SMALL_STATE(183)] = 4185,
  [SMALL_STATE(184)] = 4196,
  [SMALL_STATE(185)] = 4207,
  [SMALL_STATE(186)] = 4218,
  [SMALL_STATE(187)] = 4229,
  [SMALL_STATE(188)] = 4240,
  [SMALL_STATE(189)] = 4247,
  [SMALL_STATE(190)] = 4258,
  [SMALL_STATE(191)] = 4269,
  [SMALL_STATE(192)] = 4280,
  [SMALL_STATE(193)] = 4288,
  [SMALL_STATE(194)] = 4296,
  [SMALL_STATE(195)] = 4304,
  [SMALL_STATE(196)] = 4312,
  [SMALL_STATE(197)] = 4320,
  [SMALL_STATE(198)] = 4326,
  [SMALL_STATE(199)] = 4334,
  [SMALL_STATE(200)] = 4342,
  [SMALL_STATE(201)] = 4350,
  [SMALL_STATE(202)] = 4358,
  [SMALL_STATE(203)] = 4366,
  [SMALL_STATE(204)] = 4374,
  [SMALL_STATE(205)] = 4382,
  [SMALL_STATE(206)] = 4390,
  [SMALL_STATE(207)] = 4398,
  [SMALL_STATE(208)] = 4406,
  [SMALL_STATE(209)] = 4414,
  [SMALL_STATE(210)] = 4422,
  [SMALL_STATE(211)] = 4430,
  [SMALL_STATE(212)] = 4438,
  [SMALL_STATE(213)] = 4442,
  [SMALL_STATE(214)] = 4446,
  [SMALL_STATE(215)] = 4450,
  [SMALL_STATE(216)] = 4454,
  [SMALL_STATE(217)] = 4458,
  [SMALL_STATE(218)] = 4462,
  [SMALL_STATE(219)] = 4466,
  [SMALL_STATE(220)] = 4470,
  [SMALL_STATE(221)] = 4474,
  [SMALL_STATE(222)] = 4478,
  [SMALL_STATE(223)] = 4482,
  [SMALL_STATE(224)] = 4486,
  [SMALL_STATE(225)] = 4490,
  [SMALL_STATE(226)] = 4494,
  [SMALL_STATE(227)] = 4498,
  [SMALL_STATE(228)] = 4502,
  [SMALL_STATE(229)] = 4506,
  [SMALL_STATE(230)] = 4510,
  [SMALL_STATE(231)] = 4514,
  [SMALL_STATE(232)] = 4518,
  [SMALL_STATE(233)] = 4522,
  [SMALL_STATE(234)] = 4526,
  [SMALL_STATE(235)] = 4530,
  [SMALL_STATE(236)] = 4534,
  [SMALL_STATE(237)] = 4538,
  [SMALL_STATE(238)] = 4542,
  [SMALL_STATE(239)] = 4546,
  [SMALL_STATE(240)] = 4550,
  [SMALL_STATE(241)] = 4554,
  [SMALL_STATE(242)] = 4558,
  [SMALL_STATE(243)] = 4562,
  [SMALL_STATE(244)] = 4566,
  [SMALL_STATE(245)] = 4570,
  [SMALL_STATE(246)] = 4574,
  [SMALL_STATE(247)] = 4578,
  [SMALL_STATE(248)] = 4582,
  [SMALL_STATE(249)] = 4586,
  [SMALL_STATE(250)] = 4590,
  [SMALL_STATE(251)] = 4594,
  [SMALL_STATE(252)] = 4598,
  [SMALL_STATE(253)] = 4602,
  [SMALL_STATE(254)] = 4606,
  [SMALL_STATE(255)] = 4610,
  [SMALL_STATE(256)] = 4614,
  [SMALL_STATE(257)] = 4618,
  [SMALL_STATE(258)] = 4622,
  [SMALL_STATE(259)] = 4626,
  [SMALL_STATE(260)] = 4630,
  [SMALL_STATE(261)] = 4634,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(252),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(195),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(203),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(207),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(251),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(194),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(199),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(200),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(204),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(201),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(211),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(209),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(208),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(206),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(205),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(145),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(145),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(141),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(198),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(129),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2), SHIFT_REPEAT(81),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 5),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 5),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2), SHIFT_REPEAT(70),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(10),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_periodic_xact, 5),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_periodic_xact, 5),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(54),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 12),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 12),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 11),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 11),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 10),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 10),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 9),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 9),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_subdirective, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_subdirective, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 3),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_subdirective, 4),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_subdirective, 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 4),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_subdirective, 4),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_subdirective, 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_subdirective, 4),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_subdirective, 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 13),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 13),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 14),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 14),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(55),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(56),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(77),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(77),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(116),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(116),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(117),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 3),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [533] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(162),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 5),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 7),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [566] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(173),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(175),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 2),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 3),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval, 1),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 8),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 10),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [666] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 9),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 3),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 7),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 3),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 6),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 5),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 5),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 5),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 4),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
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
