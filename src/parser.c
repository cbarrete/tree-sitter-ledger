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

#define LANGUAGE_VERSION 14
#define STATE_COUNT 357
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 137
#define ALIAS_COUNT 0
#define TOKEN_COUNT 87
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LF = 1,
  sym_comment = 2,
  anon_sym_comment = 3,
  aux_sym_block_comment_token1 = 4,
  anon_sym_end = 5,
  anon_sym_endcomment = 6,
  anon_sym_test = 7,
  anon_sym_endtest = 8,
  anon_sym_DASH = 9,
  anon_sym_DASH_DASH = 10,
  aux_sym_option_token1 = 11,
  anon_sym_EQ = 12,
  aux_sym_option_value_token1 = 13,
  anon_sym_account = 14,
  anon_sym_eval = 15,
  aux_sym_account_subdirective_token1 = 16,
  anon_sym_payee = 17,
  anon_sym_commodity = 18,
  anon_sym_nomarket = 19,
  anon_sym_tag = 20,
  aux_sym_tag_directive_token1 = 21,
  anon_sym_include = 22,
  anon_sym_alias = 23,
  aux_sym_word_directive_token1 = 24,
  anon_sym_def = 25,
  anon_sym_year = 26,
  aux_sym_word_directive_token2 = 27,
  anon_sym_bucket = 28,
  anon_sym_A = 29,
  anon_sym_Y = 30,
  anon_sym_N = 31,
  anon_sym_D = 32,
  anon_sym_C = 33,
  anon_sym_P = 34,
  anon_sym_default = 35,
  anon_sym_format = 36,
  anon_sym_note = 37,
  anon_sym_assert = 38,
  anon_sym_check = 39,
  anon_sym_i = 40,
  anon_sym_I = 41,
  anon_sym_o = 42,
  anon_sym_O = 43,
  anon_sym_TILDE = 44,
  aux_sym_interval_token1 = 45,
  aux_sym_interval_token2 = 46,
  aux_sym_interval_token3 = 47,
  aux_sym_interval_token4 = 48,
  aux_sym_interval_token5 = 49,
  aux_sym_interval_token6 = 50,
  aux_sym_interval_token7 = 51,
  aux_sym_interval_token8 = 52,
  aux_sym_interval_token9 = 53,
  aux_sym_interval_token10 = 54,
  aux_sym_interval_token11 = 55,
  aux_sym_interval_token12 = 56,
  aux_sym_interval_token13 = 57,
  aux_sym_interval_token14 = 58,
  aux_sym_interval_token15 = 59,
  aux_sym_interval_token16 = 60,
  aux_sym_interval_token17 = 61,
  sym__dsep = 62,
  sym__2d = 63,
  sym_time = 64,
  anon_sym_STAR = 65,
  anon_sym_BANG = 66,
  anon_sym_LPAREN = 67,
  aux_sym_code_token1 = 68,
  anon_sym_RPAREN = 69,
  sym_payee = 70,
  anon_sym_SEMI = 71,
  anon_sym_LBRACK = 72,
  anon_sym_RBRACK = 73,
  aux_sym_note_token1 = 74,
  sym_account_name = 75,
  sym__quantity = 76,
  anon_sym_PLUS = 77,
  aux_sym_commodity_token1 = 78,
  aux_sym_commodity_token2 = 79,
  aux_sym_commodity_token3 = 80,
  anon_sym_AT = 81,
  anon_sym_AT_AT = 82,
  anon_sym_ = 83,
  anon_sym_TAB = 84,
  anon_sym_2 = 85,
  anon_sym_TAB2 = 86,
  sym_source_file = 87,
  sym_journal_item = 88,
  sym_block_comment = 89,
  sym_test = 90,
  sym_option = 91,
  sym_option_value = 92,
  sym_directive = 93,
  sym_account_directive = 94,
  sym_account_subdirective = 95,
  sym_commodity_directive = 96,
  sym_commodity_subdirective = 97,
  sym_tag_directive = 98,
  sym_word_directive = 99,
  sym_filename = 100,
  sym_char_directive = 101,
  sym_alias_subdirective = 102,
  sym_default_subdirective = 103,
  sym_format_subdirective = 104,
  sym_note_subdirective = 105,
  sym_assert_subdirective = 106,
  sym_check_subdirective = 107,
  sym_check_in = 108,
  sym_check_out = 109,
  sym_xact = 110,
  sym_plain_xact = 111,
  sym_periodic_xact = 112,
  sym_interval = 113,
  sym__xact_date = 114,
  sym_date = 115,
  sym_effective_date = 116,
  sym__4d = 117,
  sym__single_date = 118,
  sym_status = 119,
  sym_code = 120,
  sym_note = 121,
  sym_posting = 122,
  sym_account = 123,
  sym_amount = 124,
  sym_quantity = 125,
  sym_negative_quantity = 126,
  sym_commodity = 127,
  sym_price = 128,
  sym_balance_assertion = 129,
  aux_sym_source_file_repeat1 = 130,
  aux_sym_block_comment_repeat1 = 131,
  aux_sym_account_directive_repeat1 = 132,
  aux_sym_commodity_directive_repeat1 = 133,
  aux_sym_tag_directive_repeat1 = 134,
  aux_sym_plain_xact_repeat1 = 135,
  aux_sym_whitespace_repeat1 = 136,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [anon_sym_comment] = "comment",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_end] = "end",
  [anon_sym_endcomment] = "end comment",
  [anon_sym_test] = "test",
  [anon_sym_endtest] = "end test",
  [anon_sym_DASH] = "-",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_option_token1] = "option_token1",
  [anon_sym_EQ] = "=",
  [aux_sym_option_value_token1] = "option_value_token1",
  [anon_sym_account] = "account",
  [anon_sym_eval] = "eval",
  [aux_sym_account_subdirective_token1] = "account_subdirective_token1",
  [anon_sym_payee] = "payee",
  [anon_sym_commodity] = "commodity",
  [anon_sym_nomarket] = "nomarket",
  [anon_sym_tag] = "tag",
  [aux_sym_tag_directive_token1] = "tag_directive_token1",
  [anon_sym_include] = "include",
  [anon_sym_alias] = "alias",
  [aux_sym_word_directive_token1] = "word_directive_token1",
  [anon_sym_def] = "def",
  [anon_sym_year] = "year",
  [aux_sym_word_directive_token2] = "word_directive_token2",
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
  [anon_sym_assert] = "assert",
  [anon_sym_check] = "check",
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
  [sym__dsep] = "_dsep",
  [sym__2d] = "_2d",
  [sym_time] = "time",
  [anon_sym_STAR] = "*",
  [anon_sym_BANG] = "!",
  [anon_sym_LPAREN] = "(",
  [aux_sym_code_token1] = "code_token1",
  [anon_sym_RPAREN] = ")",
  [sym_payee] = "payee",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_note_token1] = "note_token1",
  [sym_account_name] = "",
  [sym__quantity] = "_quantity",
  [anon_sym_PLUS] = "+",
  [aux_sym_commodity_token1] = "commodity_token1",
  [aux_sym_commodity_token2] = "commodity_token2",
  [aux_sym_commodity_token3] = "commodity_token3",
  [anon_sym_AT] = "@",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_] = " ",
  [anon_sym_TAB] = "\t",
  [anon_sym_2] = "  ",
  [anon_sym_TAB2] = " \t",
  [sym_source_file] = "source_file",
  [sym_journal_item] = "journal_item",
  [sym_block_comment] = "block_comment",
  [sym_test] = "test",
  [sym_option] = "option",
  [sym_option_value] = "option_value",
  [sym_directive] = "directive",
  [sym_account_directive] = "account_directive",
  [sym_account_subdirective] = "account_subdirective",
  [sym_commodity_directive] = "commodity_directive",
  [sym_commodity_subdirective] = "commodity_subdirective",
  [sym_tag_directive] = "tag_directive",
  [sym_word_directive] = "word_directive",
  [sym_filename] = "filename",
  [sym_char_directive] = "char_directive",
  [sym_alias_subdirective] = "alias_subdirective",
  [sym_default_subdirective] = "default_subdirective",
  [sym_format_subdirective] = "format_subdirective",
  [sym_note_subdirective] = "note_subdirective",
  [sym_assert_subdirective] = "assert_subdirective",
  [sym_check_subdirective] = "check_subdirective",
  [sym_check_in] = "check_in",
  [sym_check_out] = "check_out",
  [sym_xact] = "xact",
  [sym_plain_xact] = "plain_xact",
  [sym_periodic_xact] = "periodic_xact",
  [sym_interval] = "interval",
  [sym__xact_date] = "_xact_date",
  [sym_date] = "date",
  [sym_effective_date] = "effective_date",
  [sym__4d] = "_4d",
  [sym__single_date] = "_single_date",
  [sym_status] = "status",
  [sym_code] = "code",
  [sym_note] = "note",
  [sym_posting] = "posting",
  [sym_account] = "account",
  [sym_amount] = "amount",
  [sym_quantity] = "quantity",
  [sym_negative_quantity] = "negative_quantity",
  [sym_commodity] = "commodity",
  [sym_price] = "price",
  [sym_balance_assertion] = "balance_assertion",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
  [aux_sym_account_directive_repeat1] = "account_directive_repeat1",
  [aux_sym_commodity_directive_repeat1] = "commodity_directive_repeat1",
  [aux_sym_tag_directive_repeat1] = "tag_directive_repeat1",
  [aux_sym_plain_xact_repeat1] = "plain_xact_repeat1",
  [aux_sym_whitespace_repeat1] = "whitespace_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_comment] = sym_comment,
  [anon_sym_comment] = anon_sym_comment,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_endcomment] = anon_sym_endcomment,
  [anon_sym_test] = anon_sym_test,
  [anon_sym_endtest] = anon_sym_endtest,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_option_token1] = aux_sym_option_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_option_value_token1] = aux_sym_option_value_token1,
  [anon_sym_account] = anon_sym_account,
  [anon_sym_eval] = anon_sym_eval,
  [aux_sym_account_subdirective_token1] = aux_sym_account_subdirective_token1,
  [anon_sym_payee] = anon_sym_payee,
  [anon_sym_commodity] = anon_sym_commodity,
  [anon_sym_nomarket] = anon_sym_nomarket,
  [anon_sym_tag] = anon_sym_tag,
  [aux_sym_tag_directive_token1] = aux_sym_tag_directive_token1,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_alias] = anon_sym_alias,
  [aux_sym_word_directive_token1] = aux_sym_word_directive_token1,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_year] = anon_sym_year,
  [aux_sym_word_directive_token2] = aux_sym_word_directive_token2,
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
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_check] = anon_sym_check,
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
  [sym__dsep] = sym__dsep,
  [sym__2d] = sym__2d,
  [sym_time] = sym_time,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_code_token1] = aux_sym_code_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_payee] = sym_payee,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_note_token1] = aux_sym_note_token1,
  [sym_account_name] = sym_account_name,
  [sym__quantity] = sym__quantity,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [aux_sym_commodity_token1] = aux_sym_commodity_token1,
  [aux_sym_commodity_token2] = aux_sym_commodity_token2,
  [aux_sym_commodity_token3] = aux_sym_commodity_token3,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym_] = anon_sym_,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_TAB2] = anon_sym_TAB2,
  [sym_source_file] = sym_source_file,
  [sym_journal_item] = sym_journal_item,
  [sym_block_comment] = sym_block_comment,
  [sym_test] = sym_test,
  [sym_option] = sym_option,
  [sym_option_value] = sym_option_value,
  [sym_directive] = sym_directive,
  [sym_account_directive] = sym_account_directive,
  [sym_account_subdirective] = sym_account_subdirective,
  [sym_commodity_directive] = sym_commodity_directive,
  [sym_commodity_subdirective] = sym_commodity_subdirective,
  [sym_tag_directive] = sym_tag_directive,
  [sym_word_directive] = sym_word_directive,
  [sym_filename] = sym_filename,
  [sym_char_directive] = sym_char_directive,
  [sym_alias_subdirective] = sym_alias_subdirective,
  [sym_default_subdirective] = sym_default_subdirective,
  [sym_format_subdirective] = sym_format_subdirective,
  [sym_note_subdirective] = sym_note_subdirective,
  [sym_assert_subdirective] = sym_assert_subdirective,
  [sym_check_subdirective] = sym_check_subdirective,
  [sym_check_in] = sym_check_in,
  [sym_check_out] = sym_check_out,
  [sym_xact] = sym_xact,
  [sym_plain_xact] = sym_plain_xact,
  [sym_periodic_xact] = sym_periodic_xact,
  [sym_interval] = sym_interval,
  [sym__xact_date] = sym__xact_date,
  [sym_date] = sym_date,
  [sym_effective_date] = sym_effective_date,
  [sym__4d] = sym__4d,
  [sym__single_date] = sym__single_date,
  [sym_status] = sym_status,
  [sym_code] = sym_code,
  [sym_note] = sym_note,
  [sym_posting] = sym_posting,
  [sym_account] = sym_account,
  [sym_amount] = sym_amount,
  [sym_quantity] = sym_quantity,
  [sym_negative_quantity] = sym_negative_quantity,
  [sym_commodity] = sym_commodity,
  [sym_price] = sym_price,
  [sym_balance_assertion] = sym_balance_assertion,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
  [aux_sym_account_directive_repeat1] = aux_sym_account_directive_repeat1,
  [aux_sym_commodity_directive_repeat1] = aux_sym_commodity_directive_repeat1,
  [aux_sym_tag_directive_repeat1] = aux_sym_tag_directive_repeat1,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_comment] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endcomment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_test] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endtest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_option_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_option_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_account] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eval] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_account_subdirective_token1] = {
    .visible = false,
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
  [anon_sym_tag] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tag_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_include] = {
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
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_year] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_word_directive_token2] = {
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
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_check] = {
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
  [sym__dsep] = {
    .visible = false,
    .named = true,
  },
  [sym__2d] = {
    .visible = false,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_code_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_payee] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
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
  [aux_sym_note_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_account_name] = {
    .visible = true,
    .named = false,
  },
  [sym__quantity] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
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
  [aux_sym_commodity_token3] = {
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
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_test] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_option_value] = {
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
  [sym_tag_directive] = {
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
  [sym_assert_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_check_subdirective] = {
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
  [sym__xact_date] = {
    .visible = false,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_effective_date] = {
    .visible = true,
    .named = true,
  },
  [sym__4d] = {
    .visible = false,
    .named = true,
  },
  [sym__single_date] = {
    .visible = false,
    .named = true,
  },
  [sym_status] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
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
  [sym_negative_quantity] = {
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
  [aux_sym_block_comment_repeat1] = {
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
  [aux_sym_tag_directive_repeat1] = {
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

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_account_name,
  },
  [2] = {
    [0] = sym_account_name,
    [2] = sym_account_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 57,
  [84] = 84,
  [85] = 85,
  [86] = 31,
  [87] = 57,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 39,
  [100] = 41,
  [101] = 101,
  [102] = 102,
  [103] = 42,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 57,
  [108] = 57,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 113,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 115,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 112,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 38,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 32,
  [161] = 150,
  [162] = 162,
  [163] = 140,
  [164] = 57,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 176,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 169,
  [184] = 57,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 57,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 57,
  [210] = 57,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 185,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 57,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 57,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 212,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 304,
  [353] = 345,
  [354] = 347,
  [355] = 305,
  [356] = 356,
};

static inline bool aux_sym_tag_directive_token1_character_set_1(int32_t c) {
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
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
              : (c <= 2136 || (c < 2185
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2544
            ? (c < 2474
              ? (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2654
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3200
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6103
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
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
    : (c <= 6740 || (c < 43261
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
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
        : (c <= 11492 || (c < 12704
          ? (c < 11720
            ? (c < 11631
              ? (c < 11559
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : c <= 11623)))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))))
            : (c <= 11726 || (c < 12353
              ? (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12294 || (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)))
              : (c <= 12438 || (c < 12540
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12735 || (c < 42786
            ? (c < 42240
              ? (c < 19968
                ? (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 13312 || c == 19903))
                : (c <= 19968 || (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : c <= 42237)))
              : (c <= 42508 || (c < 42623
                ? (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : c <= 42783)))))
            : (c <= 42888 || (c < 43015
              ? (c < 42965
                ? (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65345
        ? (c < 43816
          ? (c < 43646
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43503 || (c < 43588
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65136
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)
                : (c <= 65140 || (c < 65313
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66928
          ? (c < 66208
            ? (c < 65549
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 66176
                  ? (c >= 65664 && c <= 65786)
                  : c <= 66204)))))
            : (c <= 66256 || (c < 66504
              ? (c < 66384
                ? (c < 66349
                  ? (c >= 66304 && c <= 66335)
                  : (c <= 66368 || (c >= 66370 && c <= 66377)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66776
                ? (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)
                : (c <= 66811 || (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : c <= 66915)))))))
          : (c <= 66938 || (c < 67506
            ? (c < 67003
              ? (c < 66967
                ? (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : c <= 67001)))
              : (c <= 67004 || (c < 67424
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym_commodity_token1_character_set_1(int32_t c) {
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
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
              : (c <= 2136 || (c < 2185
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2544
            ? (c < 2474
              ? (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2654
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3200
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6103
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
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
    : (c <= 6740 || (c < 43261
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
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
        : (c <= 11492 || (c < 12704
          ? (c < 11720
            ? (c < 11631
              ? (c < 11559
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : c <= 11623)))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))))
            : (c <= 11726 || (c < 12353
              ? (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12294 || (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)))
              : (c <= 12438 || (c < 12540
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12735 || (c < 42786
            ? (c < 42240
              ? (c < 19968
                ? (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 13312 || c == 19903))
                : (c <= 19968 || (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : c <= 42237)))
              : (c <= 42508 || (c < 42623
                ? (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : c <= 42783)))))
            : (c <= 42888 || (c < 43015
              ? (c < 42965
                ? (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65345
        ? (c < 43816
          ? (c < 43646
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43503 || (c < 43588
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65136
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)
                : (c <= 65140 || (c < 65313
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66928
          ? (c < 66208
            ? (c < 65549
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 66176
                  ? (c >= 65664 && c <= 65786)
                  : c <= 66204)))))
            : (c <= 66256 || (c < 66504
              ? (c < 66384
                ? (c < 66349
                  ? (c >= 66304 && c <= 66335)
                  : (c <= 66368 || (c >= 66370 && c <= 66377)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66776
                ? (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)
                : (c <= 66811 || (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : c <= 66915)))))))
          : (c <= 66938 || (c < 67506
            ? (c < 67003
              ? (c < 66967
                ? (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : c <= 67001)))
              : (c <= 67004 || (c < 67424
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym_commodity_token2_character_set_1(int32_t c) {
  return (c < 3647
    ? (c < 2046
      ? (c < 1423
        ? (c < 162
          ? c == '$'
          : c <= 165)
        : (c <= 1423 || c == 1547))
      : (c <= 2047 || (c < 2801
        ? (c < 2555
          ? (c >= 2546 && c <= 2547)
          : c <= 2555)
        : (c <= 2801 || c == 3065))))
    : (c <= 3647 || (c < 65129
      ? (c < 43064
        ? (c < 8352
          ? c == 6107
          : c <= 8384)
        : (c <= 43064 || c == 65020))
      : (c <= 65129 || (c < 65504
        ? c == 65284
        : (c <= 65505 || (c >= 65509 && c <= 65510)))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(227);
      if (lookahead == '\t') ADVANCE(426);
      if (lookahead == '\n') ADVANCE(228);
      if (lookahead == ' ') ADVANCE(419);
      if (lookahead == '!') ADVANCE(398);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(') ADVANCE(400);
      if (lookahead == ')') ADVANCE(403);
      if (lookahead == '*') ADVANCE(396);
      if (lookahead == '+') ADVANCE(413);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '=') ADVANCE(313);
      if (lookahead == '@') ADVANCE(417);
      if (lookahead == 'A') ADVANCE(340);
      if (lookahead == 'B') ADVANCE(157);
      if (lookahead == 'C') ADVANCE(350);
      if (lookahead == 'D') ADVANCE(348);
      if (lookahead == 'E') ADVANCE(204);
      if (lookahead == 'I') ADVANCE(363);
      if (lookahead == 'N') ADVANCE(345);
      if (lookahead == 'O') ADVANCE(367);
      if (lookahead == 'P') ADVANCE(352);
      if (lookahead == 'Y') ADVANCE(343);
      if (lookahead == '[') ADVANCE(406);
      if (lookahead == ']') ADVANCE(408);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'b') ADVANCE(122);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(365);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == 'y') ADVANCE(33);
      if (lookahead == '~') ADVANCE(369);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(175);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(201);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(142);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(391);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(415);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(426);
      if (lookahead == '\n') ADVANCE(228);
      if (lookahead == ' ') ADVANCE(419);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '+') ADVANCE(413);
      if (lookahead == '-') ADVANCE(307);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '=') ADVANCE(313);
      if (lookahead == '@') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(415);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(426);
      if (lookahead == '\n') ADVANCE(228);
      if (lookahead == ' ') ADVANCE(419);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '=') ADVANCE(313);
      if (lookahead == ']') ADVANCE(408);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(426);
      if (lookahead == '\n') ADVANCE(228);
      if (lookahead == ' ') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(419);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '=') ADVANCE(313);
      if (lookahead == '@') ADVANCE(417);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(391);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(415);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(419);
      if (lookahead == '+') ADVANCE(413);
      if (lookahead == '-') ADVANCE(307);
      if (lookahead == 'D') ADVANCE(127);
      if (lookahead == 'E') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(157);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(175);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(201);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(142);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(419);
      if (lookahead == '+') ADVANCE(413);
      if (lookahead == '-') ADVANCE(307);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(419);
      if (lookahead == '!') ADVANCE(399);
      if (lookahead == '(') ADVANCE(401);
      if (lookahead == '*') ADVANCE(397);
      if (lookahead == ';') ADVANCE(405);
      if (lookahead == '[') ADVANCE(407);
      if (lookahead != 0) ADVANCE(411);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(419);
      if (lookahead == '(') ADVANCE(401);
      if (lookahead == '[') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(411);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(421);
      if (lookahead == '!') ADVANCE(398);
      if (lookahead == '(') ADVANCE(400);
      if (lookahead == '*') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(422);
      if (lookahead == '[') ADVANCE(406);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 11:
      if (lookahead == '\t') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == '\t') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(434);
      END_STATE();
    case 13:
      if (lookahead == '\t') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(330);
      END_STATE();
    case 14:
      if (lookahead == '\t') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(314);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(325);
      if (lookahead == 'c') ADVANCE(20);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(325);
      if (lookahead == 'e') ADVANCE(16);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(325);
      if (lookahead == 'e') ADVANCE(21);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(325);
      if (lookahead == 'h') ADVANCE(17);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(325);
      if (lookahead == 'k') ADVANCE(360);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(325);
      if (lookahead == 'r') ADVANCE(24);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(325);
      if (lookahead == 's') ADVANCE(23);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(325);
      if (lookahead == 's') ADVANCE(18);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(325);
      if (lookahead == 't') ADVANCE(358);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(325);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(318);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(219);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(220);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(185);
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == 'R') ADVANCE(164);
      if (lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 35:
      if (lookahead == 'V') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == 'v') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 'V') ADVANCE(139);
      if (lookahead == 'v') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(297);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(296);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(332);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(331);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(40);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(323);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(64);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 79:
      if (lookahead == 'k') ADVANCE(359);
      END_STATE();
    case 80:
      if (lookahead == 'k') ADVANCE(63);
      END_STATE();
    case 81:
      if (lookahead == 'k') ADVANCE(67);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(317);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(42);
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(328);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 122:
      if (lookahead == 'u') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 125:
      if (lookahead == 'y') ADVANCE(320);
      END_STATE();
    case 126:
      if (lookahead == 'y') ADVANCE(66);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 136:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(132);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(176);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(202);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(144);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 137:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(177);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(203);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(146);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(149);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 153:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(373);
      END_STATE();
    case 154:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(192);
      END_STATE();
    case 155:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(166);
      END_STATE();
    case 156:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(168);
      END_STATE();
    case 157:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 158:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 159:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(372);
      END_STATE();
    case 160:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(190);
      END_STATE();
    case 161:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(165);
      END_STATE();
    case 162:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(167);
      END_STATE();
    case 163:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 164:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 165:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 166:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 167:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 168:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 169:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 170:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(178);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(152);
      END_STATE();
    case 171:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 172:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 173:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 174:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 175:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 176:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 177:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 178:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 179:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(375);
      END_STATE();
    case 180:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(374);
      END_STATE();
    case 181:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 182:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 183:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 184:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 185:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 186:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 187:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 188:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 189:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(376);
      END_STATE();
    case 190:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(377);
      END_STATE();
    case 191:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(380);
      END_STATE();
    case 192:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(378);
      END_STATE();
    case 193:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(379);
      END_STATE();
    case 194:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(155);
      END_STATE();
    case 195:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(153);
      END_STATE();
    case 196:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(154);
      END_STATE();
    case 197:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      END_STATE();
    case 198:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      END_STATE();
    case 199:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(147);
      END_STATE();
    case 200:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(156);
      END_STATE();
    case 201:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 202:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 203:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 204:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(139);
      END_STATE();
    case 205:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(381);
      END_STATE();
    case 206:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(27);
      END_STATE();
    case 207:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(387);
      END_STATE();
    case 208:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(382);
      END_STATE();
    case 209:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(384);
      END_STATE();
    case 210:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(383);
      END_STATE();
    case 211:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(385);
      END_STATE();
    case 212:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(371);
      END_STATE();
    case 213:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(386);
      END_STATE();
    case 214:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(189);
      END_STATE();
    case 215:
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(395);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 222:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(411);
      END_STATE();
    case 223:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(312);
      END_STATE();
    case 224:
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(411);
      END_STATE();
    case 225:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(314);
      END_STATE();
    case 226:
      if (eof) ADVANCE(227);
      if (lookahead == '\t') ADVANCE(426);
      if (lookahead == '\n') ADVANCE(228);
      if (lookahead == ' ') ADVANCE(419);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(15);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead == 'A') ADVANCE(340);
      if (lookahead == 'C') ADVANCE(350);
      if (lookahead == 'D') ADVANCE(347);
      if (lookahead == 'I') ADVANCE(363);
      if (lookahead == 'N') ADVANCE(345);
      if (lookahead == 'O') ADVANCE(367);
      if (lookahead == 'P') ADVANCE(352);
      if (lookahead == 'Y') ADVANCE(342);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'b') ADVANCE(121);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == 'o') ADVANCE(365);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == 'y') ADVANCE(69);
      if (lookahead == '~') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(394);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(431);
      if (lookahead == '\n') ADVANCE(228);
      if (lookahead == ' ') ADVANCE(423);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(431);
      if (lookahead == '\n') ADVANCE(228);
      if (lookahead == ' ') ADVANCE(423);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(257);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == 'o') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'f') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'g') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'i') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'i') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'k') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'l') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'r') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'y') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (eof) ADVANCE(227);
      if (lookahead == '\n') ADVANCE(228);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(235);
      if (lookahead == '-') ADVANCE(309);
      if (lookahead == 'A') ADVANCE(341);
      if (lookahead == 'C') ADVANCE(351);
      if (lookahead == 'D') ADVANCE(349);
      if (lookahead == 'I') ADVANCE(364);
      if (lookahead == 'N') ADVANCE(346);
      if (lookahead == 'O') ADVANCE(368);
      if (lookahead == 'P') ADVANCE(353);
      if (lookahead == 'Y') ADVANCE(344);
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead == 'b') ADVANCE(288);
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead == 'd') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead == 'o') ADVANCE(366);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == 'y') ADVANCE(250);
      if (lookahead == '~') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ' ') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ' ') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_endcomment);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_endcomment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_endtest);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_endtest);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(310);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_option_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_option_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_account);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_eval);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_account_subdirective_token1);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_payee);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_nomarket);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_tag_directive_token1);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_word_directive_token1);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_word_directive_token2);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_bucket);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_N);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_C);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_assert);
      if (lookahead == '\n') ADVANCE(325);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(25);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_check);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '\n') ADVANCE(325);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(25);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_I);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_interval_token1);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_interval_token2);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_interval_token3);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_interval_token4);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_interval_token5);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_interval_token6);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_interval_token7);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_interval_token8);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_interval_token9);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_interval_token10);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_interval_token11);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_interval_token12);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_interval_token13);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_interval_token14);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_interval_token15);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_interval_token16);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_interval_token17);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__dsep);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__2d);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__2d);
      if (lookahead == ':') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(389);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(393);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(410);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(410);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(410);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(410);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '=') ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(410);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__quantity);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_commodity_token3);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(418);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(318);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(404);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '=') ADVANCE(409);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(314);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(330);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(318);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(410);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(404);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '=') ADVANCE(409);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(314);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(330);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 226},
  [2] = {.lex_state = 226},
  [3] = {.lex_state = 226},
  [4] = {.lex_state = 226},
  [5] = {.lex_state = 226},
  [6] = {.lex_state = 226},
  [7] = {.lex_state = 226},
  [8] = {.lex_state = 226},
  [9] = {.lex_state = 226},
  [10] = {.lex_state = 226},
  [11] = {.lex_state = 226},
  [12] = {.lex_state = 226},
  [13] = {.lex_state = 226},
  [14] = {.lex_state = 226},
  [15] = {.lex_state = 226},
  [16] = {.lex_state = 226},
  [17] = {.lex_state = 226},
  [18] = {.lex_state = 226},
  [19] = {.lex_state = 226},
  [20] = {.lex_state = 226},
  [21] = {.lex_state = 226},
  [22] = {.lex_state = 226},
  [23] = {.lex_state = 226},
  [24] = {.lex_state = 226},
  [25] = {.lex_state = 226},
  [26] = {.lex_state = 226},
  [27] = {.lex_state = 226},
  [28] = {.lex_state = 226},
  [29] = {.lex_state = 226},
  [30] = {.lex_state = 226},
  [31] = {.lex_state = 226},
  [32] = {.lex_state = 226},
  [33] = {.lex_state = 226},
  [34] = {.lex_state = 226},
  [35] = {.lex_state = 226},
  [36] = {.lex_state = 226},
  [37] = {.lex_state = 226},
  [38] = {.lex_state = 226},
  [39] = {.lex_state = 226},
  [40] = {.lex_state = 226},
  [41] = {.lex_state = 226},
  [42] = {.lex_state = 226},
  [43] = {.lex_state = 226},
  [44] = {.lex_state = 226},
  [45] = {.lex_state = 226},
  [46] = {.lex_state = 226},
  [47] = {.lex_state = 226},
  [48] = {.lex_state = 295},
  [49] = {.lex_state = 295},
  [50] = {.lex_state = 295},
  [51] = {.lex_state = 295},
  [52] = {.lex_state = 295},
  [53] = {.lex_state = 295},
  [54] = {.lex_state = 295},
  [55] = {.lex_state = 295},
  [56] = {.lex_state = 226},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 226},
  [59] = {.lex_state = 226},
  [60] = {.lex_state = 226},
  [61] = {.lex_state = 226},
  [62] = {.lex_state = 226},
  [63] = {.lex_state = 226},
  [64] = {.lex_state = 226},
  [65] = {.lex_state = 226},
  [66] = {.lex_state = 226},
  [67] = {.lex_state = 226},
  [68] = {.lex_state = 226},
  [69] = {.lex_state = 226},
  [70] = {.lex_state = 226},
  [71] = {.lex_state = 226},
  [72] = {.lex_state = 226},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 232},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 233},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 226},
  [118] = {.lex_state = 233},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 233},
  [121] = {.lex_state = 226},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 232},
  [124] = {.lex_state = 232},
  [125] = {.lex_state = 226},
  [126] = {.lex_state = 232},
  [127] = {.lex_state = 233},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 226},
  [130] = {.lex_state = 226},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 232},
  [133] = {.lex_state = 233},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 9},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 232},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 9},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 232},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 233},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 233},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 14},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 10},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 14},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 226},
  [209] = {.lex_state = 14},
  [210] = {.lex_state = 234},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 234},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 9},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 11},
  [218] = {.lex_state = 11},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 9},
  [221] = {.lex_state = 3},
  [222] = {.lex_state = 9},
  [223] = {.lex_state = 9},
  [224] = {.lex_state = 3},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 3},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 9},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 3},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 2},
  [234] = {.lex_state = 9},
  [235] = {.lex_state = 3},
  [236] = {.lex_state = 9},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 13},
  [239] = {.lex_state = 11},
  [240] = {.lex_state = 11},
  [241] = {.lex_state = 2},
  [242] = {.lex_state = 11},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 3},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 234},
  [248] = {.lex_state = 2},
  [249] = {.lex_state = 9},
  [250] = {.lex_state = 9},
  [251] = {.lex_state = 3},
  [252] = {.lex_state = 14},
  [253] = {.lex_state = 234},
  [254] = {.lex_state = 13},
  [255] = {.lex_state = 9},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 11},
  [258] = {.lex_state = 2},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 2},
  [261] = {.lex_state = 3},
  [262] = {.lex_state = 234},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 225},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 4},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 3},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 4},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 225},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 224},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 3},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 224},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 402},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 3},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 4},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 5},
  [346] = {.lex_state = 223},
  [347] = {.lex_state = 5},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 5},
  [354] = {.lex_state = 5},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_comment] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_endcomment] = ACTIONS(1),
    [anon_sym_test] = ACTIONS(1),
    [anon_sym_endtest] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_account] = ACTIONS(1),
    [anon_sym_eval] = ACTIONS(1),
    [anon_sym_payee] = ACTIONS(1),
    [anon_sym_commodity] = ACTIONS(1),
    [anon_sym_nomarket] = ACTIONS(1),
    [anon_sym_tag] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_year] = ACTIONS(1),
    [aux_sym_word_directive_token2] = ACTIONS(1),
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
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_check] = ACTIONS(1),
    [anon_sym_i] = ACTIONS(1),
    [anon_sym_I] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_O] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [aux_sym_interval_token1] = ACTIONS(1),
    [aux_sym_interval_token2] = ACTIONS(1),
    [aux_sym_interval_token3] = ACTIONS(1),
    [aux_sym_interval_token4] = ACTIONS(1),
    [aux_sym_interval_token5] = ACTIONS(1),
    [aux_sym_interval_token6] = ACTIONS(1),
    [aux_sym_interval_token7] = ACTIONS(1),
    [aux_sym_interval_token8] = ACTIONS(1),
    [aux_sym_interval_token9] = ACTIONS(1),
    [aux_sym_interval_token10] = ACTIONS(1),
    [aux_sym_interval_token11] = ACTIONS(1),
    [aux_sym_interval_token12] = ACTIONS(1),
    [aux_sym_interval_token13] = ACTIONS(1),
    [aux_sym_interval_token14] = ACTIONS(1),
    [aux_sym_interval_token15] = ACTIONS(1),
    [aux_sym_interval_token16] = ACTIONS(1),
    [aux_sym_interval_token17] = ACTIONS(1),
    [sym__dsep] = ACTIONS(1),
    [sym__2d] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [aux_sym_commodity_token2] = ACTIONS(1),
    [aux_sym_commodity_token3] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(298),
    [sym_journal_item] = STATE(3),
    [sym_block_comment] = STATE(71),
    [sym_test] = STATE(71),
    [sym_option] = STATE(64),
    [sym_directive] = STATE(71),
    [sym_account_directive] = STATE(64),
    [sym_commodity_directive] = STATE(64),
    [sym_tag_directive] = STATE(64),
    [sym_word_directive] = STATE(317),
    [sym_char_directive] = STATE(317),
    [sym_check_in] = STATE(296),
    [sym_check_out] = STATE(296),
    [sym_xact] = STATE(71),
    [sym_plain_xact] = STATE(70),
    [sym_periodic_xact] = STATE(70),
    [sym__xact_date] = STATE(177),
    [sym_date] = STATE(166),
    [sym__4d] = STATE(339),
    [sym__single_date] = STATE(175),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_comment] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_test] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_DASH_DASH] = ACTIONS(17),
    [anon_sym_account] = ACTIONS(19),
    [anon_sym_commodity] = ACTIONS(21),
    [anon_sym_tag] = ACTIONS(23),
    [anon_sym_include] = ACTIONS(25),
    [anon_sym_alias] = ACTIONS(27),
    [anon_sym_def] = ACTIONS(29),
    [anon_sym_year] = ACTIONS(31),
    [aux_sym_word_directive_token2] = ACTIONS(33),
    [anon_sym_bucket] = ACTIONS(35),
    [anon_sym_A] = ACTIONS(37),
    [anon_sym_Y] = ACTIONS(39),
    [anon_sym_N] = ACTIONS(41),
    [anon_sym_D] = ACTIONS(43),
    [anon_sym_C] = ACTIONS(45),
    [anon_sym_P] = ACTIONS(47),
    [anon_sym_i] = ACTIONS(49),
    [anon_sym_I] = ACTIONS(51),
    [anon_sym_o] = ACTIONS(53),
    [anon_sym_O] = ACTIONS(53),
    [anon_sym_TILDE] = ACTIONS(55),
    [sym__2d] = ACTIONS(57),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 38,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      anon_sym_LF,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_comment,
    ACTIONS(70), 1,
      anon_sym_end,
    ACTIONS(73), 1,
      anon_sym_test,
    ACTIONS(76), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_DASH_DASH,
    ACTIONS(82), 1,
      anon_sym_account,
    ACTIONS(85), 1,
      anon_sym_commodity,
    ACTIONS(88), 1,
      anon_sym_tag,
    ACTIONS(91), 1,
      anon_sym_include,
    ACTIONS(94), 1,
      anon_sym_alias,
    ACTIONS(97), 1,
      anon_sym_def,
    ACTIONS(100), 1,
      anon_sym_year,
    ACTIONS(103), 1,
      aux_sym_word_directive_token2,
    ACTIONS(106), 1,
      anon_sym_bucket,
    ACTIONS(109), 1,
      anon_sym_A,
    ACTIONS(112), 1,
      anon_sym_Y,
    ACTIONS(115), 1,
      anon_sym_N,
    ACTIONS(118), 1,
      anon_sym_D,
    ACTIONS(121), 1,
      anon_sym_C,
    ACTIONS(124), 1,
      anon_sym_P,
    ACTIONS(127), 1,
      anon_sym_i,
    ACTIONS(130), 1,
      anon_sym_I,
    ACTIONS(136), 1,
      anon_sym_TILDE,
    ACTIONS(139), 1,
      sym__2d,
    STATE(166), 1,
      sym_date,
    STATE(175), 1,
      sym__single_date,
    STATE(177), 1,
      sym__xact_date,
    STATE(339), 1,
      sym__4d,
    ACTIONS(133), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(70), 2,
      sym_plain_xact,
      sym_periodic_xact,
    STATE(296), 2,
      sym_check_in,
      sym_check_out,
    STATE(317), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(64), 4,
      sym_option,
      sym_account_directive,
      sym_commodity_directive,
      sym_tag_directive,
    STATE(71), 4,
      sym_block_comment,
      sym_test,
      sym_directive,
      sym_xact,
  [126] = 38,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_comment,
    ACTIONS(11), 1,
      anon_sym_end,
    ACTIONS(13), 1,
      anon_sym_test,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH,
    ACTIONS(19), 1,
      anon_sym_account,
    ACTIONS(21), 1,
      anon_sym_commodity,
    ACTIONS(23), 1,
      anon_sym_tag,
    ACTIONS(25), 1,
      anon_sym_include,
    ACTIONS(27), 1,
      anon_sym_alias,
    ACTIONS(29), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      anon_sym_year,
    ACTIONS(33), 1,
      aux_sym_word_directive_token2,
    ACTIONS(35), 1,
      anon_sym_bucket,
    ACTIONS(37), 1,
      anon_sym_A,
    ACTIONS(39), 1,
      anon_sym_Y,
    ACTIONS(41), 1,
      anon_sym_N,
    ACTIONS(43), 1,
      anon_sym_D,
    ACTIONS(45), 1,
      anon_sym_C,
    ACTIONS(47), 1,
      anon_sym_P,
    ACTIONS(49), 1,
      anon_sym_i,
    ACTIONS(51), 1,
      anon_sym_I,
    ACTIONS(55), 1,
      anon_sym_TILDE,
    ACTIONS(57), 1,
      sym__2d,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 1,
      anon_sym_LF,
    STATE(166), 1,
      sym_date,
    STATE(175), 1,
      sym__single_date,
    STATE(177), 1,
      sym__xact_date,
    STATE(339), 1,
      sym__4d,
    ACTIONS(53), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(70), 2,
      sym_plain_xact,
      sym_periodic_xact,
    STATE(296), 2,
      sym_check_in,
      sym_check_out,
    STATE(317), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(64), 4,
      sym_option,
      sym_account_directive,
      sym_commodity_directive,
      sym_tag_directive,
    STATE(71), 4,
      sym_block_comment,
      sym_test,
      sym_directive,
      sym_xact,
  [252] = 6,
    STATE(105), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(150), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    ACTIONS(148), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(47), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_note_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
    ACTIONS(146), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [304] = 6,
    STATE(105), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(157), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    ACTIONS(155), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(47), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_note_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
    ACTIONS(153), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [356] = 6,
    STATE(105), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(157), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    ACTIONS(161), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(47), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_note_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
    ACTIONS(159), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [408] = 6,
    STATE(109), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(167), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(8), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(165), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(26), 4,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_note_subdirective,
    ACTIONS(163), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [459] = 6,
    STATE(109), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(173), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(8), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(171), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(26), 4,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_note_subdirective,
    ACTIONS(169), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [510] = 6,
    STATE(109), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(167), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(178), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(26), 4,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_note_subdirective,
    ACTIONS(176), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [561] = 5,
    STATE(202), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(184), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(182), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(10), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(180), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [607] = 5,
    STATE(202), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(191), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(189), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(12), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(187), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [653] = 5,
    STATE(202), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(191), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(195), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(10), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(193), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [699] = 5,
    STATE(93), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(201), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(18), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(199), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(197), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [744] = 5,
    STATE(93), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(201), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(18), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(205), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(203), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [789] = 5,
    STATE(93), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(201), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(18), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(209), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(207), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [834] = 5,
    STATE(93), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(201), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(18), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(213), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(211), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [879] = 5,
    STATE(93), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(201), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(18), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(217), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(215), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [924] = 5,
    STATE(93), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(223), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(18), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(221), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(219), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [969] = 2,
    ACTIONS(228), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(226), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
      anon_sym_,
      anon_sym_TAB,
  [1005] = 2,
    ACTIONS(232), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(230), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
      anon_sym_,
      anon_sym_TAB,
  [1041] = 2,
    ACTIONS(236), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(234), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
      anon_sym_,
      anon_sym_TAB,
  [1077] = 2,
    ACTIONS(240), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(238), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
      anon_sym_,
      anon_sym_TAB,
  [1113] = 2,
    ACTIONS(244), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(242), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
      anon_sym_,
      anon_sym_TAB,
  [1149] = 2,
    ACTIONS(248), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(246), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
      anon_sym_,
      anon_sym_TAB,
  [1185] = 2,
    ACTIONS(252), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(250), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
      anon_sym_,
      anon_sym_TAB,
  [1221] = 2,
    ACTIONS(256), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(254), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
      anon_sym_,
      anon_sym_TAB,
  [1257] = 2,
    ACTIONS(260), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(258), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
      anon_sym_,
      anon_sym_TAB,
  [1293] = 2,
    ACTIONS(264), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(262), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
      anon_sym_,
      anon_sym_TAB,
  [1329] = 2,
    ACTIONS(268), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(266), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
      anon_sym_,
      anon_sym_TAB,
  [1365] = 2,
    ACTIONS(272), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(270), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
      anon_sym_,
      anon_sym_TAB,
  [1401] = 2,
    ACTIONS(276), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(274), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
      anon_sym_,
      anon_sym_TAB,
  [1437] = 2,
    ACTIONS(280), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(278), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
      anon_sym_,
      anon_sym_TAB,
  [1473] = 2,
    ACTIONS(284), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(282), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
      anon_sym_,
      anon_sym_TAB,
  [1509] = 2,
    ACTIONS(288), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(286), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
      anon_sym_,
      anon_sym_TAB,
  [1545] = 2,
    ACTIONS(292), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(290), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
      anon_sym_,
      anon_sym_TAB,
  [1581] = 2,
    ACTIONS(296), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(294), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
      anon_sym_,
      anon_sym_TAB,
  [1617] = 2,
    ACTIONS(300), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(298), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
      anon_sym_,
      anon_sym_TAB,
  [1653] = 2,
    ACTIONS(304), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(302), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
      anon_sym_,
      anon_sym_TAB,
  [1689] = 2,
    ACTIONS(308), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(306), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
      anon_sym_,
      anon_sym_TAB,
  [1725] = 2,
    ACTIONS(312), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(310), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
      anon_sym_,
      anon_sym_TAB,
  [1761] = 2,
    ACTIONS(316), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(314), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
      anon_sym_,
      anon_sym_TAB,
  [1797] = 2,
    ACTIONS(320), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(318), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
      anon_sym_,
      anon_sym_TAB,
  [1833] = 2,
    ACTIONS(324), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(322), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
      anon_sym_,
      anon_sym_TAB,
  [1869] = 2,
    ACTIONS(328), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(326), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
      anon_sym_,
      anon_sym_TAB,
  [1905] = 2,
    ACTIONS(332), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(330), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
      anon_sym_,
      anon_sym_TAB,
  [1941] = 2,
    ACTIONS(336), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(334), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
      anon_sym_,
      anon_sym_TAB,
  [1977] = 2,
    ACTIONS(340), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(338), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
      anon_sym_,
      anon_sym_TAB,
  [2013] = 3,
    ACTIONS(346), 1,
      aux_sym_block_comment_token1,
    ACTIONS(342), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(344), 26,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [2050] = 3,
    ACTIONS(352), 1,
      aux_sym_block_comment_token1,
    ACTIONS(348), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(350), 26,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [2087] = 3,
    ACTIONS(358), 1,
      aux_sym_block_comment_token1,
    ACTIONS(354), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(356), 26,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [2124] = 3,
    ACTIONS(364), 1,
      aux_sym_block_comment_token1,
    ACTIONS(360), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(362), 26,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [2161] = 3,
    ACTIONS(370), 1,
      aux_sym_block_comment_token1,
    ACTIONS(366), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(368), 26,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [2198] = 3,
    ACTIONS(376), 1,
      aux_sym_block_comment_token1,
    ACTIONS(372), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(374), 26,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [2235] = 3,
    ACTIONS(382), 1,
      aux_sym_block_comment_token1,
    ACTIONS(378), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(380), 26,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [2272] = 3,
    ACTIONS(388), 1,
      aux_sym_block_comment_token1,
    ACTIONS(384), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(386), 26,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [2309] = 2,
    ACTIONS(350), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(348), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [2343] = 3,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(392), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(390), 26,
      anon_sym_eval,
      anon_sym_payee,
      anon_sym_nomarket,
      anon_sym_alias,
      anon_sym_default,
      anon_sym_format,
      anon_sym_note,
      anon_sym_assert,
      anon_sym_check,
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
  [2379] = 2,
    ACTIONS(397), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(395), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [2413] = 2,
    ACTIONS(401), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(399), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [2447] = 2,
    ACTIONS(405), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(403), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [2481] = 2,
    ACTIONS(386), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(384), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [2515] = 2,
    ACTIONS(409), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(407), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [2549] = 2,
    ACTIONS(380), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(378), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [2583] = 2,
    ACTIONS(413), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(411), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [2617] = 2,
    ACTIONS(368), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(366), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [2651] = 2,
    ACTIONS(417), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(415), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [2685] = 2,
    ACTIONS(362), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(360), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [2719] = 2,
    ACTIONS(344), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(342), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [2753] = 2,
    ACTIONS(374), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(372), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [2787] = 2,
    ACTIONS(421), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(419), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [2821] = 2,
    ACTIONS(425), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(423), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [2855] = 2,
    ACTIONS(356), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(354), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
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
  [2889] = 17,
    ACTIONS(427), 1,
      anon_sym_LF,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    ACTIONS(441), 1,
      anon_sym_AT,
    ACTIONS(443), 1,
      anon_sym_AT_AT,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(95), 1,
      sym_amount,
    STATE(113), 1,
      sym_commodity,
    STATE(135), 1,
      sym_price,
    STATE(170), 1,
      sym_balance_assertion,
    STATE(356), 1,
      sym_note,
    ACTIONS(445), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(150), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2945] = 17,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    ACTIONS(441), 1,
      anon_sym_AT,
    ACTIONS(443), 1,
      anon_sym_AT_AT,
    ACTIONS(447), 1,
      anon_sym_LF,
    STATE(78), 1,
      aux_sym_whitespace_repeat1,
    STATE(94), 1,
      sym_amount,
    STATE(110), 1,
      sym_price,
    STATE(113), 1,
      sym_commodity,
    STATE(165), 1,
      sym_balance_assertion,
    STATE(336), 1,
      sym_note,
    ACTIONS(449), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(150), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3001] = 17,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    ACTIONS(441), 1,
      anon_sym_AT,
    ACTIONS(443), 1,
      anon_sym_AT_AT,
    ACTIONS(451), 1,
      anon_sym_LF,
    STATE(77), 1,
      aux_sym_whitespace_repeat1,
    STATE(97), 1,
      sym_amount,
    STATE(113), 1,
      sym_commodity,
    STATE(131), 1,
      sym_price,
    STATE(182), 1,
      sym_balance_assertion,
    STATE(337), 1,
      sym_note,
    ACTIONS(453), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(150), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3057] = 4,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(273), 1,
      sym_interval,
    ACTIONS(457), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(455), 17,
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
  [3087] = 16,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    ACTIONS(441), 1,
      anon_sym_AT,
    ACTIONS(443), 1,
      anon_sym_AT_AT,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    STATE(96), 1,
      sym_amount,
    STATE(113), 1,
      sym_commodity,
    STATE(128), 1,
      sym_price,
    STATE(171), 1,
      sym_balance_assertion,
    STATE(312), 1,
      sym_note,
    ACTIONS(459), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(150), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3140] = 16,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    ACTIONS(441), 1,
      anon_sym_AT,
    ACTIONS(443), 1,
      anon_sym_AT_AT,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    STATE(95), 1,
      sym_amount,
    STATE(113), 1,
      sym_commodity,
    STATE(135), 1,
      sym_price,
    STATE(170), 1,
      sym_balance_assertion,
    STATE(356), 1,
      sym_note,
    ACTIONS(459), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(150), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3193] = 16,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    ACTIONS(441), 1,
      anon_sym_AT,
    ACTIONS(443), 1,
      anon_sym_AT_AT,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    STATE(97), 1,
      sym_amount,
    STATE(113), 1,
      sym_commodity,
    STATE(131), 1,
      sym_price,
    STATE(182), 1,
      sym_balance_assertion,
    STATE(337), 1,
      sym_note,
    ACTIONS(459), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(150), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3246] = 9,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    STATE(113), 1,
      sym_commodity,
    STATE(204), 1,
      sym_amount,
    ACTIONS(461), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(150), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3278] = 9,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    STATE(113), 1,
      sym_commodity,
    STATE(328), 1,
      sym_amount,
    ACTIONS(459), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(150), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3310] = 9,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    STATE(113), 1,
      sym_commodity,
    STATE(259), 1,
      sym_amount,
    ACTIONS(463), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(150), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3342] = 4,
    ACTIONS(465), 1,
      anon_sym_AT,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(467), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(390), 9,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym__quantity,
      anon_sym_PLUS,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
  [3364] = 9,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    STATE(113), 1,
      sym_commodity,
    STATE(343), 1,
      sym_amount,
    ACTIONS(459), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(150), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3396] = 9,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    STATE(84), 1,
      aux_sym_whitespace_repeat1,
    STATE(113), 1,
      sym_commodity,
    STATE(328), 1,
      sym_amount,
    ACTIONS(470), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(150), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3428] = 2,
    ACTIONS(276), 1,
      anon_sym_AT,
    ACTIONS(274), 12,
      anon_sym_LF,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym__quantity,
      anon_sym_PLUS,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [3446] = 4,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(465), 2,
      sym__2d,
      anon_sym_AT,
    ACTIONS(472), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(390), 8,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      sym_time,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
  [3468] = 9,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    STATE(113), 1,
      sym_commodity,
    STATE(344), 1,
      sym_amount,
    ACTIONS(459), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(150), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3500] = 9,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    STATE(34), 1,
      sym_amount,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    STATE(116), 1,
      sym_commodity,
    ACTIONS(459), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(161), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3532] = 9,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    STATE(113), 1,
      sym_commodity,
    STATE(215), 1,
      sym_amount,
    ACTIONS(459), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(150), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3564] = 9,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    STATE(113), 1,
      sym_commodity,
    STATE(198), 1,
      sym_amount,
    ACTIONS(459), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(150), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3596] = 9,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    STATE(81), 1,
      aux_sym_whitespace_repeat1,
    STATE(113), 1,
      sym_commodity,
    STATE(316), 1,
      sym_amount,
    ACTIONS(475), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(150), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3628] = 11,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      sym_account_name,
    ACTIONS(485), 1,
      anon_sym_,
    ACTIONS(487), 1,
      anon_sym_TAB,
    STATE(107), 1,
      aux_sym_whitespace_repeat1,
    STATE(154), 1,
      sym_status,
    STATE(261), 1,
      sym_account,
    STATE(311), 1,
      sym_note,
    ACTIONS(477), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [3663] = 10,
    ACTIONS(427), 1,
      anon_sym_LF,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(441), 1,
      anon_sym_AT,
    ACTIONS(443), 1,
      anon_sym_AT_AT,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    STATE(135), 1,
      sym_price,
    STATE(170), 1,
      sym_balance_assertion,
    STATE(356), 1,
      sym_note,
    ACTIONS(489), 2,
      anon_sym_,
      anon_sym_TAB,
  [3695] = 10,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(441), 1,
      anon_sym_AT,
    ACTIONS(443), 1,
      anon_sym_AT_AT,
    ACTIONS(451), 1,
      anon_sym_LF,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    STATE(131), 1,
      sym_price,
    STATE(182), 1,
      sym_balance_assertion,
    STATE(337), 1,
      sym_note,
    ACTIONS(491), 2,
      anon_sym_,
      anon_sym_TAB,
  [3727] = 10,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(441), 1,
      anon_sym_AT,
    ACTIONS(443), 1,
      anon_sym_AT_AT,
    ACTIONS(493), 1,
      anon_sym_LF,
    STATE(104), 1,
      aux_sym_whitespace_repeat1,
    STATE(122), 1,
      sym_price,
    STATE(168), 1,
      sym_balance_assertion,
    STATE(302), 1,
      sym_note,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [3759] = 10,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(441), 1,
      anon_sym_AT,
    ACTIONS(443), 1,
      anon_sym_AT_AT,
    ACTIONS(497), 1,
      anon_sym_LF,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(128), 1,
      sym_price,
    STATE(171), 1,
      sym_balance_assertion,
    STATE(312), 1,
      sym_note,
    ACTIONS(499), 2,
      anon_sym_,
      anon_sym_TAB,
  [3791] = 9,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(441), 1,
      anon_sym_AT,
    ACTIONS(443), 1,
      anon_sym_AT_AT,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(122), 1,
      sym_price,
    STATE(168), 1,
      sym_balance_assertion,
    STATE(302), 1,
      sym_note,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
  [3820] = 2,
    ACTIONS(308), 1,
      anon_sym_AT,
    ACTIONS(306), 9,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [3835] = 2,
    ACTIONS(316), 1,
      anon_sym_AT,
    ACTIONS(314), 9,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [3850] = 9,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(441), 1,
      anon_sym_AT,
    ACTIONS(443), 1,
      anon_sym_AT_AT,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(128), 1,
      sym_price,
    STATE(171), 1,
      sym_balance_assertion,
    STATE(312), 1,
      sym_note,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
  [3879] = 9,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(441), 1,
      anon_sym_AT,
    ACTIONS(443), 1,
      anon_sym_AT_AT,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(131), 1,
      sym_price,
    STATE(182), 1,
      sym_balance_assertion,
    STATE(337), 1,
      sym_note,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
  [3908] = 2,
    ACTIONS(320), 1,
      anon_sym_AT,
    ACTIONS(318), 9,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [3923] = 9,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(441), 1,
      anon_sym_AT,
    ACTIONS(443), 1,
      anon_sym_AT_AT,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(119), 1,
      sym_price,
    STATE(172), 1,
      sym_balance_assertion,
    STATE(307), 1,
      sym_note,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
  [3952] = 8,
    ACTIONS(505), 1,
      anon_sym_alias,
    ACTIONS(507), 1,
      anon_sym_default,
    ACTIONS(509), 1,
      anon_sym_note,
    ACTIONS(511), 1,
      anon_sym_assert,
    ACTIONS(513), 1,
      anon_sym_check,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(457), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(503), 2,
      anon_sym_eval,
      anon_sym_payee,
  [3979] = 7,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      sym_payee,
    STATE(164), 1,
      aux_sym_whitespace_repeat1,
    STATE(173), 1,
      sym_code,
    STATE(180), 1,
      sym_status,
    ACTIONS(515), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(521), 2,
      anon_sym_,
      anon_sym_TAB,
  [4003] = 5,
    ACTIONS(390), 1,
      anon_sym_SEMI,
    ACTIONS(523), 1,
      anon_sym_,
    ACTIONS(526), 1,
      anon_sym_TAB,
    STATE(107), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(465), 5,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [4023] = 4,
    STATE(108), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(465), 2,
      anon_sym_assert,
      anon_sym_check,
    ACTIONS(529), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(390), 4,
      anon_sym_DASH,
      aux_sym_tag_directive_token1,
      sym__quantity,
      anon_sym_PLUS,
  [4041] = 7,
    ACTIONS(505), 1,
      anon_sym_alias,
    ACTIONS(507), 1,
      anon_sym_default,
    ACTIONS(509), 1,
      anon_sym_note,
    ACTIONS(532), 1,
      anon_sym_nomarket,
    ACTIONS(534), 1,
      anon_sym_format,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(457), 2,
      anon_sym_,
      anon_sym_TAB,
  [4064] = 7,
    ACTIONS(427), 1,
      anon_sym_LF,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(141), 1,
      aux_sym_whitespace_repeat1,
    STATE(170), 1,
      sym_balance_assertion,
    STATE(356), 1,
      sym_note,
    ACTIONS(536), 2,
      anon_sym_,
      anon_sym_TAB,
  [4087] = 7,
    ACTIONS(364), 1,
      anon_sym_endcomment,
    ACTIONS(538), 1,
      anon_sym_LF,
    ACTIONS(540), 1,
      aux_sym_block_comment_token1,
    ACTIONS(542), 1,
      anon_sym_end,
    STATE(124), 1,
      aux_sym_block_comment_repeat1,
    STATE(212), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(544), 2,
      anon_sym_,
      anon_sym_TAB,
  [4110] = 6,
    ACTIONS(546), 1,
      anon_sym_DASH,
    ACTIONS(548), 1,
      sym__quantity,
    ACTIONS(550), 1,
      anon_sym_PLUS,
    STATE(108), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(552), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(32), 2,
      sym_quantity,
      sym_negative_quantity,
  [4131] = 6,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    STATE(134), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(554), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(139), 2,
      sym_quantity,
      sym_negative_quantity,
  [4152] = 2,
    ACTIONS(558), 1,
      sym__dsep,
    ACTIONS(556), 7,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_TAB,
  [4165] = 6,
    ACTIONS(560), 1,
      anon_sym_LF,
    ACTIONS(563), 1,
      aux_sym_block_comment_token1,
    STATE(115), 1,
      aux_sym_block_comment_repeat1,
    STATE(262), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(566), 2,
      anon_sym_end,
      anon_sym_endtest,
    ACTIONS(568), 2,
      anon_sym_,
      anon_sym_TAB,
  [4186] = 6,
    ACTIONS(546), 1,
      anon_sym_DASH,
    ACTIONS(548), 1,
      sym__quantity,
    ACTIONS(550), 1,
      anon_sym_PLUS,
    STATE(112), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(571), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(38), 2,
      sym_quantity,
      sym_negative_quantity,
  [4207] = 7,
    ACTIONS(33), 1,
      aux_sym_word_directive_token2,
    ACTIONS(57), 1,
      sym__2d,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(175), 1,
      sym__single_date,
    STATE(230), 1,
      sym_date,
    STATE(339), 1,
      sym__4d,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
  [4230] = 7,
    ACTIONS(358), 1,
      anon_sym_endtest,
    ACTIONS(573), 1,
      anon_sym_LF,
    ACTIONS(575), 1,
      aux_sym_block_comment_token1,
    ACTIONS(577), 1,
      anon_sym_end,
    STATE(115), 1,
      aux_sym_block_comment_repeat1,
    STATE(262), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(579), 2,
      anon_sym_,
      anon_sym_TAB,
  [4253] = 7,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(581), 1,
      anon_sym_LF,
    STATE(159), 1,
      aux_sym_whitespace_repeat1,
    STATE(178), 1,
      sym_balance_assertion,
    STATE(313), 1,
      sym_note,
    ACTIONS(583), 2,
      anon_sym_,
      anon_sym_TAB,
  [4276] = 7,
    ACTIONS(352), 1,
      anon_sym_endtest,
    ACTIONS(573), 1,
      anon_sym_LF,
    ACTIONS(575), 1,
      aux_sym_block_comment_token1,
    ACTIONS(585), 1,
      anon_sym_end,
    STATE(115), 1,
      aux_sym_block_comment_repeat1,
    STATE(262), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(579), 2,
      anon_sym_,
      anon_sym_TAB,
  [4299] = 7,
    ACTIONS(33), 1,
      aux_sym_word_directive_token2,
    ACTIONS(57), 1,
      sym__2d,
    STATE(129), 1,
      aux_sym_whitespace_repeat1,
    STATE(175), 1,
      sym__single_date,
    STATE(233), 1,
      sym_date,
    STATE(339), 1,
      sym__4d,
    ACTIONS(587), 2,
      anon_sym_,
      anon_sym_TAB,
  [4322] = 7,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(589), 1,
      anon_sym_LF,
    STATE(156), 1,
      aux_sym_whitespace_repeat1,
    STATE(172), 1,
      sym_balance_assertion,
    STATE(307), 1,
      sym_note,
    ACTIONS(591), 2,
      anon_sym_,
      anon_sym_TAB,
  [4345] = 7,
    ACTIONS(370), 1,
      anon_sym_endcomment,
    ACTIONS(538), 1,
      anon_sym_LF,
    ACTIONS(540), 1,
      aux_sym_block_comment_token1,
    ACTIONS(593), 1,
      anon_sym_end,
    STATE(124), 1,
      aux_sym_block_comment_repeat1,
    STATE(212), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(544), 2,
      anon_sym_,
      anon_sym_TAB,
  [4368] = 6,
    ACTIONS(595), 1,
      anon_sym_LF,
    ACTIONS(598), 1,
      aux_sym_block_comment_token1,
    STATE(124), 1,
      aux_sym_block_comment_repeat1,
    STATE(212), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(566), 2,
      anon_sym_end,
      anon_sym_endcomment,
    ACTIONS(601), 2,
      anon_sym_,
      anon_sym_TAB,
  [4389] = 7,
    ACTIONS(33), 1,
      aux_sym_word_directive_token2,
    ACTIONS(57), 1,
      sym__2d,
    STATE(117), 1,
      aux_sym_whitespace_repeat1,
    STATE(175), 1,
      sym__single_date,
    STATE(228), 1,
      sym_date,
    STATE(339), 1,
      sym__4d,
    ACTIONS(604), 2,
      anon_sym_,
      anon_sym_TAB,
  [4412] = 7,
    ACTIONS(388), 1,
      anon_sym_endcomment,
    ACTIONS(540), 1,
      aux_sym_block_comment_token1,
    ACTIONS(606), 1,
      anon_sym_LF,
    ACTIONS(608), 1,
      anon_sym_end,
    STATE(123), 1,
      aux_sym_block_comment_repeat1,
    STATE(212), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(544), 2,
      anon_sym_,
      anon_sym_TAB,
  [4435] = 7,
    ACTIONS(376), 1,
      anon_sym_endtest,
    ACTIONS(575), 1,
      aux_sym_block_comment_token1,
    ACTIONS(610), 1,
      anon_sym_LF,
    ACTIONS(612), 1,
      anon_sym_end,
    STATE(120), 1,
      aux_sym_block_comment_repeat1,
    STATE(262), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(579), 2,
      anon_sym_,
      anon_sym_TAB,
  [4458] = 7,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(493), 1,
      anon_sym_LF,
    STATE(152), 1,
      aux_sym_whitespace_repeat1,
    STATE(168), 1,
      sym_balance_assertion,
    STATE(302), 1,
      sym_note,
    ACTIONS(614), 2,
      anon_sym_,
      anon_sym_TAB,
  [4481] = 7,
    ACTIONS(33), 1,
      aux_sym_word_directive_token2,
    ACTIONS(57), 1,
      sym__2d,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(175), 1,
      sym__single_date,
    STATE(248), 1,
      sym_date,
    STATE(339), 1,
      sym__4d,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
  [4504] = 7,
    ACTIONS(33), 1,
      aux_sym_word_directive_token2,
    ACTIONS(57), 1,
      sym__2d,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(175), 1,
      sym__single_date,
    STATE(266), 1,
      sym_date,
    STATE(339), 1,
      sym__4d,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
  [4527] = 7,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(497), 1,
      anon_sym_LF,
    STATE(151), 1,
      aux_sym_whitespace_repeat1,
    STATE(171), 1,
      sym_balance_assertion,
    STATE(312), 1,
      sym_note,
    ACTIONS(616), 2,
      anon_sym_,
      anon_sym_TAB,
  [4550] = 7,
    ACTIONS(540), 1,
      aux_sym_block_comment_token1,
    ACTIONS(618), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      anon_sym_end,
    ACTIONS(622), 1,
      anon_sym_endcomment,
    STATE(111), 1,
      aux_sym_block_comment_repeat1,
    STATE(212), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(544), 2,
      anon_sym_,
      anon_sym_TAB,
  [4573] = 7,
    ACTIONS(575), 1,
      aux_sym_block_comment_token1,
    ACTIONS(624), 1,
      anon_sym_LF,
    ACTIONS(626), 1,
      anon_sym_end,
    ACTIONS(628), 1,
      anon_sym_endtest,
    STATE(118), 1,
      aux_sym_block_comment_repeat1,
    STATE(262), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(579), 2,
      anon_sym_,
      anon_sym_TAB,
  [4596] = 6,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    STATE(108), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(552), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(160), 2,
      sym_quantity,
      sym_negative_quantity,
  [4617] = 7,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(451), 1,
      anon_sym_LF,
    STATE(149), 1,
      aux_sym_whitespace_repeat1,
    STATE(182), 1,
      sym_balance_assertion,
    STATE(337), 1,
      sym_note,
    ACTIONS(630), 2,
      anon_sym_,
      anon_sym_TAB,
  [4640] = 4,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(333), 1,
      sym_commodity,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4656] = 7,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      sym_account_name,
    ACTIONS(632), 1,
      anon_sym_,
    ACTIONS(634), 1,
      anon_sym_TAB,
    STATE(184), 1,
      aux_sym_whitespace_repeat1,
    STATE(332), 1,
      sym_account,
  [4678] = 7,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      sym_account_name,
    ACTIONS(636), 1,
      anon_sym_,
    ACTIONS(638), 1,
      anon_sym_TAB,
    STATE(146), 1,
      aux_sym_whitespace_repeat1,
    STATE(244), 1,
      sym_account,
  [4700] = 2,
    ACTIONS(304), 1,
      anon_sym_AT,
    ACTIONS(302), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [4712] = 4,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(160), 1,
      sym_commodity,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4728] = 6,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(182), 1,
      sym_balance_assertion,
    STATE(337), 1,
      sym_note,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
  [4748] = 7,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      sym_account_name,
    ACTIONS(632), 1,
      anon_sym_,
    ACTIONS(634), 1,
      anon_sym_TAB,
    STATE(184), 1,
      aux_sym_whitespace_repeat1,
    STATE(338), 1,
      sym_account,
  [4770] = 7,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      sym_account_name,
    ACTIONS(632), 1,
      anon_sym_,
    ACTIONS(634), 1,
      anon_sym_TAB,
    STATE(184), 1,
      aux_sym_whitespace_repeat1,
    STATE(344), 1,
      sym_account,
  [4792] = 4,
    STATE(85), 1,
      sym_commodity,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4808] = 4,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(344), 1,
      sym_commodity,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4824] = 7,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      sym_account_name,
    ACTIONS(632), 1,
      anon_sym_,
    ACTIONS(634), 1,
      anon_sym_TAB,
    STATE(184), 1,
      aux_sym_whitespace_repeat1,
    STATE(219), 1,
      sym_account,
  [4846] = 7,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      sym_account_name,
    ACTIONS(640), 1,
      anon_sym_,
    ACTIONS(642), 1,
      anon_sym_TAB,
    STATE(157), 1,
      aux_sym_whitespace_repeat1,
    STATE(219), 1,
      sym_account,
  [4868] = 4,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(216), 1,
      sym_commodity,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4884] = 6,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(171), 1,
      sym_balance_assertion,
    STATE(312), 1,
      sym_note,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
  [4904] = 4,
    STATE(139), 1,
      sym_commodity,
    STATE(140), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(644), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4920] = 6,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(168), 1,
      sym_balance_assertion,
    STATE(302), 1,
      sym_note,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
  [4940] = 6,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(172), 1,
      sym_balance_assertion,
    STATE(307), 1,
      sym_note,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
  [4960] = 7,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      sym_account_name,
    ACTIONS(632), 1,
      anon_sym_,
    ACTIONS(634), 1,
      anon_sym_TAB,
    STATE(184), 1,
      aux_sym_whitespace_repeat1,
    STATE(227), 1,
      sym_account,
  [4982] = 7,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      sym_account_name,
    ACTIONS(646), 1,
      anon_sym_,
    ACTIONS(648), 1,
      anon_sym_TAB,
    STATE(153), 1,
      aux_sym_whitespace_repeat1,
    STATE(235), 1,
      sym_account,
  [5004] = 7,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      sym_account_name,
    ACTIONS(632), 1,
      anon_sym_,
    ACTIONS(634), 1,
      anon_sym_TAB,
    STATE(184), 1,
      aux_sym_whitespace_repeat1,
    STATE(251), 1,
      sym_account,
  [5026] = 6,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(178), 1,
      sym_balance_assertion,
    STATE(313), 1,
      sym_note,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
  [5046] = 7,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      sym_account_name,
    ACTIONS(632), 1,
      anon_sym_,
    ACTIONS(634), 1,
      anon_sym_TAB,
    STATE(184), 1,
      aux_sym_whitespace_repeat1,
    STATE(224), 1,
      sym_account,
  [5068] = 7,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      sym_account_name,
    ACTIONS(650), 1,
      anon_sym_,
    ACTIONS(652), 1,
      anon_sym_TAB,
    STATE(155), 1,
      aux_sym_whitespace_repeat1,
    STATE(224), 1,
      sym_account,
  [5090] = 6,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(181), 1,
      sym_balance_assertion,
    STATE(318), 1,
      sym_note,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
  [5110] = 2,
    ACTIONS(280), 1,
      anon_sym_AT,
    ACTIONS(278), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [5122] = 4,
    STATE(38), 1,
      sym_commodity,
    STATE(163), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(656), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(654), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5138] = 1,
    ACTIONS(658), 7,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_TAB,
  [5148] = 4,
    STATE(32), 1,
      sym_commodity,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(654), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5164] = 4,
    ACTIONS(465), 1,
      sym_payee,
    STATE(164), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(660), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(390), 3,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
  [5180] = 5,
    ACTIONS(427), 1,
      anon_sym_LF,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(199), 1,
      aux_sym_whitespace_repeat1,
    STATE(356), 1,
      sym_note,
    ACTIONS(663), 2,
      anon_sym_,
      anon_sym_TAB,
  [5197] = 3,
    ACTIONS(667), 1,
      anon_sym_EQ,
    STATE(213), 1,
      sym_effective_date,
    ACTIONS(665), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5210] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(669), 1,
      anon_sym_LF,
    STATE(195), 1,
      sym_note,
    STATE(236), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(671), 2,
      anon_sym_,
      anon_sym_TAB,
  [5227] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(589), 1,
      anon_sym_LF,
    STATE(201), 1,
      aux_sym_whitespace_repeat1,
    STATE(307), 1,
      sym_note,
    ACTIONS(673), 2,
      anon_sym_,
      anon_sym_TAB,
  [5244] = 2,
    ACTIONS(675), 1,
      anon_sym_LF,
    ACTIONS(566), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endcomment,
      anon_sym_,
      anon_sym_TAB,
  [5255] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(451), 1,
      anon_sym_LF,
    STATE(194), 1,
      aux_sym_whitespace_repeat1,
    STATE(337), 1,
      sym_note,
    ACTIONS(677), 2,
      anon_sym_,
      anon_sym_TAB,
  [5272] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(493), 1,
      anon_sym_LF,
    STATE(207), 1,
      aux_sym_whitespace_repeat1,
    STATE(302), 1,
      sym_note,
    ACTIONS(679), 2,
      anon_sym_,
      anon_sym_TAB,
  [5289] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(581), 1,
      anon_sym_LF,
    STATE(192), 1,
      aux_sym_whitespace_repeat1,
    STATE(313), 1,
      sym_note,
    ACTIONS(681), 2,
      anon_sym_,
      anon_sym_TAB,
  [5306] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(683), 1,
      anon_sym_LF,
    STATE(196), 1,
      sym_note,
    STATE(255), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(685), 2,
      anon_sym_,
      anon_sym_TAB,
  [5323] = 5,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(687), 1,
      sym_payee,
    STATE(164), 1,
      aux_sym_whitespace_repeat1,
    STATE(167), 1,
      sym_code,
    ACTIONS(521), 2,
      anon_sym_,
      anon_sym_TAB,
  [5340] = 1,
    ACTIONS(689), 6,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5349] = 2,
    ACTIONS(691), 1,
      anon_sym_LF,
    ACTIONS(693), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endcomment,
      anon_sym_,
      anon_sym_TAB,
  [5360] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(695), 1,
      anon_sym_LF,
    STATE(106), 1,
      aux_sym_whitespace_repeat1,
    STATE(190), 1,
      sym_note,
    ACTIONS(697), 2,
      anon_sym_,
      anon_sym_TAB,
  [5377] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(699), 1,
      anon_sym_LF,
    STATE(189), 1,
      aux_sym_whitespace_repeat1,
    STATE(318), 1,
      sym_note,
    ACTIONS(701), 2,
      anon_sym_,
      anon_sym_TAB,
  [5394] = 2,
    ACTIONS(691), 1,
      anon_sym_LF,
    ACTIONS(693), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endtest,
      anon_sym_,
      anon_sym_TAB,
  [5405] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(683), 1,
      anon_sym_LF,
    STATE(174), 1,
      aux_sym_whitespace_repeat1,
    STATE(196), 1,
      sym_note,
    ACTIONS(703), 2,
      anon_sym_,
      anon_sym_TAB,
  [5422] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(705), 1,
      anon_sym_LF,
    STATE(187), 1,
      aux_sym_whitespace_repeat1,
    STATE(322), 1,
      sym_note,
    ACTIONS(707), 2,
      anon_sym_,
      anon_sym_TAB,
  [5439] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(497), 1,
      anon_sym_LF,
    STATE(186), 1,
      aux_sym_whitespace_repeat1,
    STATE(312), 1,
      sym_note,
    ACTIONS(709), 2,
      anon_sym_,
      anon_sym_TAB,
  [5456] = 2,
    ACTIONS(675), 1,
      anon_sym_LF,
    ACTIONS(566), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endtest,
      anon_sym_,
      anon_sym_TAB,
  [5467] = 4,
    ACTIONS(711), 1,
      anon_sym_,
    ACTIONS(714), 1,
      anon_sym_TAB,
    STATE(184), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(465), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [5482] = 2,
    ACTIONS(719), 1,
      anon_sym_,
    ACTIONS(717), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
      anon_sym_TAB,
  [5492] = 4,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(302), 1,
      sym_note,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
  [5506] = 4,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(325), 1,
      sym_note,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
  [5520] = 4,
    ACTIONS(721), 1,
      anon_sym_LBRACK,
    ACTIONS(723), 1,
      aux_sym_note_token1,
    STATE(200), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(725), 2,
      anon_sym_,
      anon_sym_TAB,
  [5534] = 4,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(322), 1,
      sym_note,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
  [5548] = 3,
    STATE(93), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(201), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(16), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5560] = 3,
    STATE(93), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(201), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5572] = 4,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(318), 1,
      sym_note,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
  [5586] = 4,
    ACTIONS(727), 1,
      aux_sym_option_value_token1,
    STATE(209), 1,
      aux_sym_whitespace_repeat1,
    STATE(297), 1,
      sym_option_value,
    ACTIONS(729), 2,
      anon_sym_,
      anon_sym_TAB,
  [5600] = 4,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(312), 1,
      sym_note,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
  [5614] = 3,
    STATE(93), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(201), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(13), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5626] = 3,
    STATE(93), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(201), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(15), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5638] = 1,
    ACTIONS(731), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_TAB,
  [5646] = 1,
    ACTIONS(733), 5,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5654] = 4,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(337), 1,
      sym_note,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
  [5668] = 4,
    ACTIONS(390), 1,
      anon_sym_LBRACK,
    ACTIONS(465), 1,
      aux_sym_note_token1,
    STATE(200), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(735), 2,
      anon_sym_,
      anon_sym_TAB,
  [5682] = 4,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(313), 1,
      sym_note,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
  [5696] = 4,
    ACTIONS(511), 1,
      anon_sym_assert,
    ACTIONS(513), 1,
      anon_sym_check,
    STATE(108), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(552), 2,
      anon_sym_,
      anon_sym_TAB,
  [5710] = 4,
    ACTIONS(738), 1,
      aux_sym_option_value_token1,
    STATE(209), 1,
      aux_sym_whitespace_repeat1,
    STATE(338), 1,
      sym_filename,
    ACTIONS(729), 2,
      anon_sym_,
      anon_sym_TAB,
  [5724] = 1,
    ACTIONS(740), 5,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5732] = 4,
    ACTIONS(742), 1,
      anon_sym_LF,
    ACTIONS(744), 1,
      anon_sym_EQ,
    STATE(193), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(746), 2,
      anon_sym_,
      anon_sym_TAB,
  [5746] = 3,
    STATE(93), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(201), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(17), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5758] = 4,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(307), 1,
      sym_note,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
  [5772] = 4,
    ACTIONS(33), 1,
      aux_sym_word_directive_token2,
    ACTIONS(57), 1,
      sym__2d,
    STATE(197), 1,
      sym__single_date,
    STATE(339), 1,
      sym__4d,
  [5785] = 3,
    ACTIONS(465), 1,
      aux_sym_option_value_token1,
    STATE(209), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(748), 2,
      anon_sym_,
      anon_sym_TAB,
  [5796] = 3,
    ACTIONS(465), 1,
      aux_sym_block_comment_token1,
    STATE(210), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(751), 2,
      anon_sym_,
      anon_sym_TAB,
  [5807] = 1,
    ACTIONS(754), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5814] = 3,
    ACTIONS(756), 1,
      aux_sym_block_comment_token1,
    STATE(210), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(758), 2,
      anon_sym_,
      anon_sym_TAB,
  [5825] = 1,
    ACTIONS(760), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5832] = 3,
    ACTIONS(762), 1,
      sym_payee,
    STATE(164), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(521), 2,
      anon_sym_,
      anon_sym_TAB,
  [5843] = 1,
    ACTIONS(764), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5850] = 3,
    ACTIONS(766), 1,
      anon_sym_EQ,
    STATE(245), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(768), 2,
      anon_sym_,
      anon_sym_TAB,
  [5861] = 3,
    ACTIONS(770), 1,
      aux_sym_account_subdirective_token1,
    STATE(257), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(772), 2,
      anon_sym_,
      anon_sym_TAB,
  [5872] = 3,
    ACTIONS(774), 1,
      aux_sym_account_subdirective_token1,
    STATE(257), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(772), 2,
      anon_sym_,
      anon_sym_TAB,
  [5883] = 2,
    ACTIONS(776), 1,
      anon_sym_LF,
    ACTIONS(778), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [5892] = 3,
    ACTIONS(780), 1,
      sym_payee,
    STATE(222), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(782), 2,
      anon_sym_,
      anon_sym_TAB,
  [5903] = 1,
    ACTIONS(784), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [5910] = 3,
    ACTIONS(786), 1,
      sym_payee,
    STATE(164), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(521), 2,
      anon_sym_,
      anon_sym_TAB,
  [5921] = 3,
    ACTIONS(786), 1,
      sym_payee,
    STATE(249), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(788), 2,
      anon_sym_,
      anon_sym_TAB,
  [5932] = 2,
    ACTIONS(790), 1,
      anon_sym_LF,
    ACTIONS(792), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [5941] = 3,
    ACTIONS(794), 1,
      anon_sym_LF,
    STATE(247), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(796), 2,
      anon_sym_,
      anon_sym_TAB,
  [5952] = 1,
    ACTIONS(719), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5959] = 2,
    ACTIONS(427), 1,
      anon_sym_LF,
    ACTIONS(798), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [5968] = 3,
    ACTIONS(800), 1,
      sym_time,
    STATE(232), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(802), 2,
      anon_sym_,
      anon_sym_TAB,
  [5979] = 3,
    ACTIONS(804), 1,
      sym_payee,
    STATE(214), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(806), 2,
      anon_sym_,
      anon_sym_TAB,
  [5990] = 3,
    ACTIONS(808), 1,
      sym_time,
    STATE(237), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(810), 2,
      anon_sym_,
      anon_sym_TAB,
  [6001] = 1,
    ACTIONS(812), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6008] = 3,
    ACTIONS(808), 1,
      sym_time,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
  [6019] = 3,
    ACTIONS(814), 1,
      sym_time,
    STATE(260), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(816), 2,
      anon_sym_,
      anon_sym_TAB,
  [6030] = 3,
    ACTIONS(804), 1,
      sym_payee,
    STATE(164), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(521), 2,
      anon_sym_,
      anon_sym_TAB,
  [6041] = 2,
    ACTIONS(447), 1,
      anon_sym_LF,
    ACTIONS(818), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6050] = 3,
    ACTIONS(820), 1,
      sym_payee,
    STATE(164), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(521), 2,
      anon_sym_,
      anon_sym_TAB,
  [6061] = 3,
    ACTIONS(822), 1,
      sym_time,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
  [6072] = 3,
    ACTIONS(465), 1,
      aux_sym_word_directive_token1,
    STATE(238), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(824), 2,
      anon_sym_,
      anon_sym_TAB,
  [6083] = 3,
    ACTIONS(827), 1,
      aux_sym_account_subdirective_token1,
    STATE(257), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(772), 2,
      anon_sym_,
      anon_sym_TAB,
  [6094] = 3,
    ACTIONS(829), 1,
      aux_sym_account_subdirective_token1,
    STATE(257), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(772), 2,
      anon_sym_,
      anon_sym_TAB,
  [6105] = 3,
    ACTIONS(831), 1,
      sym_time,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
  [6116] = 3,
    ACTIONS(833), 1,
      aux_sym_account_subdirective_token1,
    STATE(257), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(772), 2,
      anon_sym_,
      anon_sym_TAB,
  [6127] = 3,
    ACTIONS(835), 1,
      aux_sym_word_directive_token2,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
  [6138] = 2,
    ACTIONS(837), 1,
      anon_sym_LF,
    ACTIONS(839), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6147] = 3,
    ACTIONS(841), 1,
      anon_sym_EQ,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
  [6158] = 3,
    ACTIONS(843), 1,
      aux_sym_word_directive_token2,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
  [6169] = 3,
    ACTIONS(845), 1,
      aux_sym_block_comment_token1,
    STATE(210), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(758), 2,
      anon_sym_,
      anon_sym_TAB,
  [6180] = 3,
    ACTIONS(847), 1,
      sym_time,
    STATE(241), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(849), 2,
      anon_sym_,
      anon_sym_TAB,
  [6191] = 3,
    ACTIONS(851), 1,
      sym_payee,
    STATE(164), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(521), 2,
      anon_sym_,
      anon_sym_TAB,
  [6202] = 3,
    ACTIONS(851), 1,
      sym_payee,
    STATE(234), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(853), 2,
      anon_sym_,
      anon_sym_TAB,
  [6213] = 2,
    ACTIONS(855), 1,
      anon_sym_LF,
    ACTIONS(857), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6222] = 3,
    ACTIONS(859), 1,
      aux_sym_option_value_token1,
    STATE(209), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(729), 2,
      anon_sym_,
      anon_sym_TAB,
  [6233] = 3,
    ACTIONS(861), 1,
      aux_sym_block_comment_token1,
    STATE(210), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(758), 2,
      anon_sym_,
      anon_sym_TAB,
  [6244] = 3,
    ACTIONS(863), 1,
      aux_sym_word_directive_token1,
    STATE(238), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(865), 2,
      anon_sym_,
      anon_sym_TAB,
  [6255] = 3,
    ACTIONS(687), 1,
      sym_payee,
    STATE(164), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(521), 2,
      anon_sym_,
      anon_sym_TAB,
  [6266] = 3,
    ACTIONS(867), 1,
      anon_sym_LF,
    STATE(253), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(869), 2,
      anon_sym_,
      anon_sym_TAB,
  [6277] = 3,
    ACTIONS(390), 1,
      aux_sym_account_subdirective_token1,
    STATE(257), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(871), 2,
      anon_sym_,
      anon_sym_TAB,
  [6288] = 3,
    ACTIONS(874), 1,
      aux_sym_tag_directive_token1,
    STATE(108), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(552), 2,
      anon_sym_,
      anon_sym_TAB,
  [6299] = 1,
    ACTIONS(876), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [6306] = 3,
    ACTIONS(847), 1,
      sym_time,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(501), 2,
      anon_sym_,
      anon_sym_TAB,
  [6317] = 2,
    ACTIONS(878), 1,
      anon_sym_LF,
    ACTIONS(880), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6326] = 3,
    ACTIONS(882), 1,
      aux_sym_block_comment_token1,
    STATE(210), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(758), 2,
      anon_sym_,
      anon_sym_TAB,
  [6337] = 2,
    STATE(242), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(884), 2,
      anon_sym_,
      anon_sym_TAB,
  [6345] = 3,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(683), 1,
      anon_sym_LF,
    STATE(196), 1,
      sym_note,
  [6355] = 2,
    STATE(76), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(886), 2,
      anon_sym_,
      anon_sym_TAB,
  [6363] = 2,
    STATE(144), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(888), 2,
      anon_sym_,
      anon_sym_TAB,
  [6371] = 3,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(890), 1,
      anon_sym_LF,
    STATE(206), 1,
      sym_note,
  [6381] = 1,
    ACTIONS(892), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [6387] = 2,
    STATE(239), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(894), 2,
      anon_sym_,
      anon_sym_TAB,
  [6395] = 2,
    STATE(137), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(896), 2,
      anon_sym_,
      anon_sym_TAB,
  [6403] = 2,
    STATE(136), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(898), 2,
      anon_sym_,
      anon_sym_TAB,
  [6411] = 2,
    STATE(258), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(900), 2,
      anon_sym_,
      anon_sym_TAB,
  [6419] = 3,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(902), 1,
      anon_sym_LF,
    STATE(191), 1,
      sym_note,
  [6429] = 1,
    ACTIONS(904), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [6435] = 2,
    STATE(203), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(906), 2,
      anon_sym_,
      anon_sym_TAB,
  [6443] = 2,
    STATE(254), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(908), 2,
      anon_sym_,
      anon_sym_TAB,
  [6451] = 2,
    STATE(252), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(910), 2,
      anon_sym_,
      anon_sym_TAB,
  [6459] = 3,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(669), 1,
      anon_sym_LF,
    STATE(195), 1,
      sym_note,
  [6469] = 2,
    STATE(246), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(912), 2,
      anon_sym_,
      anon_sym_TAB,
  [6477] = 2,
    STATE(142), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(914), 2,
      anon_sym_,
      anon_sym_TAB,
  [6485] = 2,
    STATE(188), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(916), 2,
      anon_sym_,
      anon_sym_TAB,
  [6493] = 2,
    STATE(143), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(918), 2,
      anon_sym_,
      anon_sym_TAB,
  [6501] = 2,
    STATE(243), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(920), 2,
      anon_sym_,
      anon_sym_TAB,
  [6509] = 2,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(922), 2,
      anon_sym_,
      anon_sym_TAB,
  [6517] = 2,
    STATE(217), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(924), 2,
      anon_sym_,
      anon_sym_TAB,
  [6525] = 2,
    STATE(145), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(926), 2,
      anon_sym_,
      anon_sym_TAB,
  [6533] = 2,
    STATE(218), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(928), 2,
      anon_sym_,
      anon_sym_TAB,
  [6541] = 2,
    STATE(88), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(930), 2,
      anon_sym_,
      anon_sym_TAB,
  [6549] = 2,
    STATE(148), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(932), 2,
      anon_sym_,
      anon_sym_TAB,
  [6557] = 2,
    STATE(130), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(934), 2,
      anon_sym_,
      anon_sym_TAB,
  [6565] = 2,
    STATE(240), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(936), 2,
      anon_sym_,
      anon_sym_TAB,
  [6573] = 2,
    ACTIONS(938), 1,
      aux_sym_option_value_token1,
    STATE(297), 1,
      sym_option_value,
  [6580] = 1,
    ACTIONS(940), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [6585] = 2,
    ACTIONS(667), 1,
      anon_sym_EQ,
    STATE(295), 1,
      sym_effective_date,
  [6592] = 1,
    ACTIONS(942), 1,
      anon_sym_RBRACK,
  [6596] = 1,
    ACTIONS(944), 1,
      anon_sym_LF,
  [6600] = 1,
    ACTIONS(946), 1,
      anon_sym_LF,
  [6604] = 1,
    ACTIONS(948), 1,
      ts_builtin_sym_end,
  [6608] = 1,
    ACTIONS(950), 1,
      sym__dsep,
  [6612] = 1,
    ACTIONS(952), 1,
      anon_sym_LF,
  [6616] = 1,
    ACTIONS(954), 1,
      anon_sym_LF,
  [6620] = 1,
    ACTIONS(589), 1,
      anon_sym_LF,
  [6624] = 1,
    ACTIONS(956), 1,
      sym__2d,
  [6628] = 1,
    ACTIONS(958), 1,
      anon_sym_LF,
  [6632] = 1,
    ACTIONS(960), 1,
      anon_sym_LF,
  [6636] = 1,
    ACTIONS(558), 1,
      sym__dsep,
  [6640] = 1,
    ACTIONS(581), 1,
      anon_sym_LF,
  [6644] = 1,
    ACTIONS(962), 1,
      anon_sym_LF,
  [6648] = 1,
    ACTIONS(964), 1,
      aux_sym_option_value_token1,
  [6652] = 1,
    ACTIONS(966), 1,
      anon_sym_LF,
  [6656] = 1,
    ACTIONS(968), 1,
      anon_sym_LF,
  [6660] = 1,
    ACTIONS(493), 1,
      anon_sym_LF,
  [6664] = 1,
    ACTIONS(699), 1,
      anon_sym_LF,
  [6668] = 1,
    ACTIONS(970), 1,
      anon_sym_LF,
  [6672] = 1,
    ACTIONS(972), 1,
      sym_account_name,
  [6676] = 1,
    ACTIONS(974), 1,
      anon_sym_LF,
  [6680] = 1,
    ACTIONS(976), 1,
      anon_sym_LF,
  [6684] = 1,
    ACTIONS(705), 1,
      anon_sym_LF,
  [6688] = 1,
    ACTIONS(978), 1,
      anon_sym_LF,
  [6692] = 1,
    ACTIONS(980), 1,
      anon_sym_LF,
  [6696] = 1,
    ACTIONS(982), 1,
      anon_sym_LF,
  [6700] = 1,
    ACTIONS(984), 1,
      anon_sym_LF,
  [6704] = 1,
    ACTIONS(986), 1,
      sym__2d,
  [6708] = 1,
    ACTIONS(988), 1,
      anon_sym_LF,
  [6712] = 1,
    ACTIONS(990), 1,
      anon_sym_LF,
  [6716] = 1,
    ACTIONS(992), 1,
      anon_sym_RPAREN,
  [6720] = 1,
    ACTIONS(994), 1,
      sym_account_name,
  [6724] = 1,
    ACTIONS(996), 1,
      anon_sym_LF,
  [6728] = 1,
    ACTIONS(992), 1,
      anon_sym_RBRACK,
  [6732] = 1,
    ACTIONS(790), 1,
      anon_sym_LF,
  [6736] = 1,
    ACTIONS(998), 1,
      aux_sym_code_token1,
  [6740] = 1,
    ACTIONS(1000), 1,
      anon_sym_LF,
  [6744] = 1,
    ACTIONS(1002), 1,
      anon_sym_LF,
  [6748] = 1,
    ACTIONS(1004), 1,
      anon_sym_LF,
  [6752] = 1,
    ACTIONS(1006), 1,
      sym__2d,
  [6756] = 1,
    ACTIONS(427), 1,
      anon_sym_LF,
  [6760] = 1,
    ACTIONS(497), 1,
      anon_sym_LF,
  [6764] = 1,
    ACTIONS(1008), 1,
      anon_sym_LF,
  [6768] = 1,
    ACTIONS(1010), 1,
      sym__dsep,
  [6772] = 1,
    ACTIONS(1012), 1,
      anon_sym_EQ,
  [6776] = 1,
    ACTIONS(1014), 1,
      anon_sym_LF,
  [6780] = 1,
    ACTIONS(1016), 1,
      anon_sym_LF,
  [6784] = 1,
    ACTIONS(1018), 1,
      anon_sym_LF,
  [6788] = 1,
    ACTIONS(1020), 1,
      anon_sym_LF,
  [6792] = 1,
    ACTIONS(1022), 1,
      sym__quantity,
  [6796] = 1,
    ACTIONS(1024), 1,
      aux_sym_option_token1,
  [6800] = 1,
    ACTIONS(1026), 1,
      sym__quantity,
  [6804] = 1,
    ACTIONS(1028), 1,
      anon_sym_LF,
  [6808] = 1,
    ACTIONS(1030), 1,
      anon_sym_LF,
  [6812] = 1,
    ACTIONS(1032), 1,
      anon_sym_RPAREN,
  [6816] = 1,
    ACTIONS(855), 1,
      anon_sym_LF,
  [6820] = 1,
    ACTIONS(1034), 1,
      anon_sym_LF,
  [6824] = 1,
    ACTIONS(1036), 1,
      sym__quantity,
  [6828] = 1,
    ACTIONS(1038), 1,
      sym__quantity,
  [6832] = 1,
    ACTIONS(1040), 1,
      anon_sym_LF,
  [6836] = 1,
    ACTIONS(451), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 126,
  [SMALL_STATE(4)] = 252,
  [SMALL_STATE(5)] = 304,
  [SMALL_STATE(6)] = 356,
  [SMALL_STATE(7)] = 408,
  [SMALL_STATE(8)] = 459,
  [SMALL_STATE(9)] = 510,
  [SMALL_STATE(10)] = 561,
  [SMALL_STATE(11)] = 607,
  [SMALL_STATE(12)] = 653,
  [SMALL_STATE(13)] = 699,
  [SMALL_STATE(14)] = 744,
  [SMALL_STATE(15)] = 789,
  [SMALL_STATE(16)] = 834,
  [SMALL_STATE(17)] = 879,
  [SMALL_STATE(18)] = 924,
  [SMALL_STATE(19)] = 969,
  [SMALL_STATE(20)] = 1005,
  [SMALL_STATE(21)] = 1041,
  [SMALL_STATE(22)] = 1077,
  [SMALL_STATE(23)] = 1113,
  [SMALL_STATE(24)] = 1149,
  [SMALL_STATE(25)] = 1185,
  [SMALL_STATE(26)] = 1221,
  [SMALL_STATE(27)] = 1257,
  [SMALL_STATE(28)] = 1293,
  [SMALL_STATE(29)] = 1329,
  [SMALL_STATE(30)] = 1365,
  [SMALL_STATE(31)] = 1401,
  [SMALL_STATE(32)] = 1437,
  [SMALL_STATE(33)] = 1473,
  [SMALL_STATE(34)] = 1509,
  [SMALL_STATE(35)] = 1545,
  [SMALL_STATE(36)] = 1581,
  [SMALL_STATE(37)] = 1617,
  [SMALL_STATE(38)] = 1653,
  [SMALL_STATE(39)] = 1689,
  [SMALL_STATE(40)] = 1725,
  [SMALL_STATE(41)] = 1761,
  [SMALL_STATE(42)] = 1797,
  [SMALL_STATE(43)] = 1833,
  [SMALL_STATE(44)] = 1869,
  [SMALL_STATE(45)] = 1905,
  [SMALL_STATE(46)] = 1941,
  [SMALL_STATE(47)] = 1977,
  [SMALL_STATE(48)] = 2013,
  [SMALL_STATE(49)] = 2050,
  [SMALL_STATE(50)] = 2087,
  [SMALL_STATE(51)] = 2124,
  [SMALL_STATE(52)] = 2161,
  [SMALL_STATE(53)] = 2198,
  [SMALL_STATE(54)] = 2235,
  [SMALL_STATE(55)] = 2272,
  [SMALL_STATE(56)] = 2309,
  [SMALL_STATE(57)] = 2343,
  [SMALL_STATE(58)] = 2379,
  [SMALL_STATE(59)] = 2413,
  [SMALL_STATE(60)] = 2447,
  [SMALL_STATE(61)] = 2481,
  [SMALL_STATE(62)] = 2515,
  [SMALL_STATE(63)] = 2549,
  [SMALL_STATE(64)] = 2583,
  [SMALL_STATE(65)] = 2617,
  [SMALL_STATE(66)] = 2651,
  [SMALL_STATE(67)] = 2685,
  [SMALL_STATE(68)] = 2719,
  [SMALL_STATE(69)] = 2753,
  [SMALL_STATE(70)] = 2787,
  [SMALL_STATE(71)] = 2821,
  [SMALL_STATE(72)] = 2855,
  [SMALL_STATE(73)] = 2889,
  [SMALL_STATE(74)] = 2945,
  [SMALL_STATE(75)] = 3001,
  [SMALL_STATE(76)] = 3057,
  [SMALL_STATE(77)] = 3087,
  [SMALL_STATE(78)] = 3140,
  [SMALL_STATE(79)] = 3193,
  [SMALL_STATE(80)] = 3246,
  [SMALL_STATE(81)] = 3278,
  [SMALL_STATE(82)] = 3310,
  [SMALL_STATE(83)] = 3342,
  [SMALL_STATE(84)] = 3364,
  [SMALL_STATE(85)] = 3396,
  [SMALL_STATE(86)] = 3428,
  [SMALL_STATE(87)] = 3446,
  [SMALL_STATE(88)] = 3468,
  [SMALL_STATE(89)] = 3500,
  [SMALL_STATE(90)] = 3532,
  [SMALL_STATE(91)] = 3564,
  [SMALL_STATE(92)] = 3596,
  [SMALL_STATE(93)] = 3628,
  [SMALL_STATE(94)] = 3663,
  [SMALL_STATE(95)] = 3695,
  [SMALL_STATE(96)] = 3727,
  [SMALL_STATE(97)] = 3759,
  [SMALL_STATE(98)] = 3791,
  [SMALL_STATE(99)] = 3820,
  [SMALL_STATE(100)] = 3835,
  [SMALL_STATE(101)] = 3850,
  [SMALL_STATE(102)] = 3879,
  [SMALL_STATE(103)] = 3908,
  [SMALL_STATE(104)] = 3923,
  [SMALL_STATE(105)] = 3952,
  [SMALL_STATE(106)] = 3979,
  [SMALL_STATE(107)] = 4003,
  [SMALL_STATE(108)] = 4023,
  [SMALL_STATE(109)] = 4041,
  [SMALL_STATE(110)] = 4064,
  [SMALL_STATE(111)] = 4087,
  [SMALL_STATE(112)] = 4110,
  [SMALL_STATE(113)] = 4131,
  [SMALL_STATE(114)] = 4152,
  [SMALL_STATE(115)] = 4165,
  [SMALL_STATE(116)] = 4186,
  [SMALL_STATE(117)] = 4207,
  [SMALL_STATE(118)] = 4230,
  [SMALL_STATE(119)] = 4253,
  [SMALL_STATE(120)] = 4276,
  [SMALL_STATE(121)] = 4299,
  [SMALL_STATE(122)] = 4322,
  [SMALL_STATE(123)] = 4345,
  [SMALL_STATE(124)] = 4368,
  [SMALL_STATE(125)] = 4389,
  [SMALL_STATE(126)] = 4412,
  [SMALL_STATE(127)] = 4435,
  [SMALL_STATE(128)] = 4458,
  [SMALL_STATE(129)] = 4481,
  [SMALL_STATE(130)] = 4504,
  [SMALL_STATE(131)] = 4527,
  [SMALL_STATE(132)] = 4550,
  [SMALL_STATE(133)] = 4573,
  [SMALL_STATE(134)] = 4596,
  [SMALL_STATE(135)] = 4617,
  [SMALL_STATE(136)] = 4640,
  [SMALL_STATE(137)] = 4656,
  [SMALL_STATE(138)] = 4678,
  [SMALL_STATE(139)] = 4700,
  [SMALL_STATE(140)] = 4712,
  [SMALL_STATE(141)] = 4728,
  [SMALL_STATE(142)] = 4748,
  [SMALL_STATE(143)] = 4770,
  [SMALL_STATE(144)] = 4792,
  [SMALL_STATE(145)] = 4808,
  [SMALL_STATE(146)] = 4824,
  [SMALL_STATE(147)] = 4846,
  [SMALL_STATE(148)] = 4868,
  [SMALL_STATE(149)] = 4884,
  [SMALL_STATE(150)] = 4904,
  [SMALL_STATE(151)] = 4920,
  [SMALL_STATE(152)] = 4940,
  [SMALL_STATE(153)] = 4960,
  [SMALL_STATE(154)] = 4982,
  [SMALL_STATE(155)] = 5004,
  [SMALL_STATE(156)] = 5026,
  [SMALL_STATE(157)] = 5046,
  [SMALL_STATE(158)] = 5068,
  [SMALL_STATE(159)] = 5090,
  [SMALL_STATE(160)] = 5110,
  [SMALL_STATE(161)] = 5122,
  [SMALL_STATE(162)] = 5138,
  [SMALL_STATE(163)] = 5148,
  [SMALL_STATE(164)] = 5164,
  [SMALL_STATE(165)] = 5180,
  [SMALL_STATE(166)] = 5197,
  [SMALL_STATE(167)] = 5210,
  [SMALL_STATE(168)] = 5227,
  [SMALL_STATE(169)] = 5244,
  [SMALL_STATE(170)] = 5255,
  [SMALL_STATE(171)] = 5272,
  [SMALL_STATE(172)] = 5289,
  [SMALL_STATE(173)] = 5306,
  [SMALL_STATE(174)] = 5323,
  [SMALL_STATE(175)] = 5340,
  [SMALL_STATE(176)] = 5349,
  [SMALL_STATE(177)] = 5360,
  [SMALL_STATE(178)] = 5377,
  [SMALL_STATE(179)] = 5394,
  [SMALL_STATE(180)] = 5405,
  [SMALL_STATE(181)] = 5422,
  [SMALL_STATE(182)] = 5439,
  [SMALL_STATE(183)] = 5456,
  [SMALL_STATE(184)] = 5467,
  [SMALL_STATE(185)] = 5482,
  [SMALL_STATE(186)] = 5492,
  [SMALL_STATE(187)] = 5506,
  [SMALL_STATE(188)] = 5520,
  [SMALL_STATE(189)] = 5534,
  [SMALL_STATE(190)] = 5548,
  [SMALL_STATE(191)] = 5560,
  [SMALL_STATE(192)] = 5572,
  [SMALL_STATE(193)] = 5586,
  [SMALL_STATE(194)] = 5600,
  [SMALL_STATE(195)] = 5614,
  [SMALL_STATE(196)] = 5626,
  [SMALL_STATE(197)] = 5638,
  [SMALL_STATE(198)] = 5646,
  [SMALL_STATE(199)] = 5654,
  [SMALL_STATE(200)] = 5668,
  [SMALL_STATE(201)] = 5682,
  [SMALL_STATE(202)] = 5696,
  [SMALL_STATE(203)] = 5710,
  [SMALL_STATE(204)] = 5724,
  [SMALL_STATE(205)] = 5732,
  [SMALL_STATE(206)] = 5746,
  [SMALL_STATE(207)] = 5758,
  [SMALL_STATE(208)] = 5772,
  [SMALL_STATE(209)] = 5785,
  [SMALL_STATE(210)] = 5796,
  [SMALL_STATE(211)] = 5807,
  [SMALL_STATE(212)] = 5814,
  [SMALL_STATE(213)] = 5825,
  [SMALL_STATE(214)] = 5832,
  [SMALL_STATE(215)] = 5843,
  [SMALL_STATE(216)] = 5850,
  [SMALL_STATE(217)] = 5861,
  [SMALL_STATE(218)] = 5872,
  [SMALL_STATE(219)] = 5883,
  [SMALL_STATE(220)] = 5892,
  [SMALL_STATE(221)] = 5903,
  [SMALL_STATE(222)] = 5910,
  [SMALL_STATE(223)] = 5921,
  [SMALL_STATE(224)] = 5932,
  [SMALL_STATE(225)] = 5941,
  [SMALL_STATE(226)] = 5952,
  [SMALL_STATE(227)] = 5959,
  [SMALL_STATE(228)] = 5968,
  [SMALL_STATE(229)] = 5979,
  [SMALL_STATE(230)] = 5990,
  [SMALL_STATE(231)] = 6001,
  [SMALL_STATE(232)] = 6008,
  [SMALL_STATE(233)] = 6019,
  [SMALL_STATE(234)] = 6030,
  [SMALL_STATE(235)] = 6041,
  [SMALL_STATE(236)] = 6050,
  [SMALL_STATE(237)] = 6061,
  [SMALL_STATE(238)] = 6072,
  [SMALL_STATE(239)] = 6083,
  [SMALL_STATE(240)] = 6094,
  [SMALL_STATE(241)] = 6105,
  [SMALL_STATE(242)] = 6116,
  [SMALL_STATE(243)] = 6127,
  [SMALL_STATE(244)] = 6138,
  [SMALL_STATE(245)] = 6147,
  [SMALL_STATE(246)] = 6158,
  [SMALL_STATE(247)] = 6169,
  [SMALL_STATE(248)] = 6180,
  [SMALL_STATE(249)] = 6191,
  [SMALL_STATE(250)] = 6202,
  [SMALL_STATE(251)] = 6213,
  [SMALL_STATE(252)] = 6222,
  [SMALL_STATE(253)] = 6233,
  [SMALL_STATE(254)] = 6244,
  [SMALL_STATE(255)] = 6255,
  [SMALL_STATE(256)] = 6266,
  [SMALL_STATE(257)] = 6277,
  [SMALL_STATE(258)] = 6288,
  [SMALL_STATE(259)] = 6299,
  [SMALL_STATE(260)] = 6306,
  [SMALL_STATE(261)] = 6317,
  [SMALL_STATE(262)] = 6326,
  [SMALL_STATE(263)] = 6337,
  [SMALL_STATE(264)] = 6345,
  [SMALL_STATE(265)] = 6355,
  [SMALL_STATE(266)] = 6363,
  [SMALL_STATE(267)] = 6371,
  [SMALL_STATE(268)] = 6381,
  [SMALL_STATE(269)] = 6387,
  [SMALL_STATE(270)] = 6395,
  [SMALL_STATE(271)] = 6403,
  [SMALL_STATE(272)] = 6411,
  [SMALL_STATE(273)] = 6419,
  [SMALL_STATE(274)] = 6429,
  [SMALL_STATE(275)] = 6435,
  [SMALL_STATE(276)] = 6443,
  [SMALL_STATE(277)] = 6451,
  [SMALL_STATE(278)] = 6459,
  [SMALL_STATE(279)] = 6469,
  [SMALL_STATE(280)] = 6477,
  [SMALL_STATE(281)] = 6485,
  [SMALL_STATE(282)] = 6493,
  [SMALL_STATE(283)] = 6501,
  [SMALL_STATE(284)] = 6509,
  [SMALL_STATE(285)] = 6517,
  [SMALL_STATE(286)] = 6525,
  [SMALL_STATE(287)] = 6533,
  [SMALL_STATE(288)] = 6541,
  [SMALL_STATE(289)] = 6549,
  [SMALL_STATE(290)] = 6557,
  [SMALL_STATE(291)] = 6565,
  [SMALL_STATE(292)] = 6573,
  [SMALL_STATE(293)] = 6580,
  [SMALL_STATE(294)] = 6585,
  [SMALL_STATE(295)] = 6592,
  [SMALL_STATE(296)] = 6596,
  [SMALL_STATE(297)] = 6600,
  [SMALL_STATE(298)] = 6604,
  [SMALL_STATE(299)] = 6608,
  [SMALL_STATE(300)] = 6612,
  [SMALL_STATE(301)] = 6616,
  [SMALL_STATE(302)] = 6620,
  [SMALL_STATE(303)] = 6624,
  [SMALL_STATE(304)] = 6628,
  [SMALL_STATE(305)] = 6632,
  [SMALL_STATE(306)] = 6636,
  [SMALL_STATE(307)] = 6640,
  [SMALL_STATE(308)] = 6644,
  [SMALL_STATE(309)] = 6648,
  [SMALL_STATE(310)] = 6652,
  [SMALL_STATE(311)] = 6656,
  [SMALL_STATE(312)] = 6660,
  [SMALL_STATE(313)] = 6664,
  [SMALL_STATE(314)] = 6668,
  [SMALL_STATE(315)] = 6672,
  [SMALL_STATE(316)] = 6676,
  [SMALL_STATE(317)] = 6680,
  [SMALL_STATE(318)] = 6684,
  [SMALL_STATE(319)] = 6688,
  [SMALL_STATE(320)] = 6692,
  [SMALL_STATE(321)] = 6696,
  [SMALL_STATE(322)] = 6700,
  [SMALL_STATE(323)] = 6704,
  [SMALL_STATE(324)] = 6708,
  [SMALL_STATE(325)] = 6712,
  [SMALL_STATE(326)] = 6716,
  [SMALL_STATE(327)] = 6720,
  [SMALL_STATE(328)] = 6724,
  [SMALL_STATE(329)] = 6728,
  [SMALL_STATE(330)] = 6732,
  [SMALL_STATE(331)] = 6736,
  [SMALL_STATE(332)] = 6740,
  [SMALL_STATE(333)] = 6744,
  [SMALL_STATE(334)] = 6748,
  [SMALL_STATE(335)] = 6752,
  [SMALL_STATE(336)] = 6756,
  [SMALL_STATE(337)] = 6760,
  [SMALL_STATE(338)] = 6764,
  [SMALL_STATE(339)] = 6768,
  [SMALL_STATE(340)] = 6772,
  [SMALL_STATE(341)] = 6776,
  [SMALL_STATE(342)] = 6780,
  [SMALL_STATE(343)] = 6784,
  [SMALL_STATE(344)] = 6788,
  [SMALL_STATE(345)] = 6792,
  [SMALL_STATE(346)] = 6796,
  [SMALL_STATE(347)] = 6800,
  [SMALL_STATE(348)] = 6804,
  [SMALL_STATE(349)] = 6808,
  [SMALL_STATE(350)] = 6812,
  [SMALL_STATE(351)] = 6816,
  [SMALL_STATE(352)] = 6820,
  [SMALL_STATE(353)] = 6824,
  [SMALL_STATE(354)] = 6828,
  [SMALL_STATE(355)] = 6832,
  [SMALL_STATE(356)] = 6836,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(225),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(349),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(256),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(346),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(346),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(270),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(271),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(272),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(275),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(276),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(277),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(279),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(339),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(280),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(282),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(283),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(286),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(288),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(289),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(290),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(121),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(121),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(125),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(265),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(299),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2), SHIFT_REPEAT(105),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 5),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 5),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 4),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 5),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 5),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2), SHIFT_REPEAT(109),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_directive_repeat1, 2),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2), SHIFT_REPEAT(202),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_periodic_xact, 5),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_periodic_xact, 5),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 9),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 9),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(93),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 9),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 9),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 14),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 14),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 13),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 13),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 12),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 12),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 11),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 11),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 10),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 10),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_subdirective, 4),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_subdirective, 4),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_subdirective, 4),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_subdirective, 4),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_subdirective, 4),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_subdirective, 4),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 4),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 4),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_quantity, 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_quantity, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_subdirective, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_subdirective, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_subdirective, 4),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_subdirective, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_subdirective, 4),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_subdirective, 4),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 1),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 6),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 6),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 5),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 5),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 3),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 5),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 5),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 4),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 4),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 6),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 6),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 4),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 4),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(57),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 5),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 7),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 7),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 7),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 7),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(83),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(87),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(107),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(107),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(108),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 3),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(115),
  [563] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(352),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(262),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(124),
  [598] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(304),
  [601] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(212),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 5),
  [660] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(164),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xact_date, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 3),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 3),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [711] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(184),
  [714] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(184),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_date, 2),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 3),
  [735] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(200),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [748] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(209),
  [751] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(210),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xact_date, 2),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 3),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 5),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1, .production_id = 1),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3, .production_id = 2),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [824] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(238),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 7),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [871] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(257),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 2),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 5),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval, 1),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [948] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 10),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_value, 1),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 5),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 5),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 5),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 9),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 6),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 3),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 4),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 8),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 7),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 3),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ledger(void) {
  static const TSLanguage language = {
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
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
