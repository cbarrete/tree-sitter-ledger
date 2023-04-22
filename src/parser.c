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
#define STATE_COUNT 363
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 139
#define ALIAS_COUNT 0
#define TOKEN_COUNT 88
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
  sym_query = 71,
  anon_sym_SEMI = 72,
  anon_sym_LBRACK = 73,
  anon_sym_RBRACK = 74,
  aux_sym_note_token1 = 75,
  sym_account_name = 76,
  sym__quantity = 77,
  anon_sym_PLUS = 78,
  aux_sym_commodity_token1 = 79,
  aux_sym_commodity_token2 = 80,
  aux_sym_commodity_token3 = 81,
  anon_sym_AT = 82,
  anon_sym_AT_AT = 83,
  anon_sym_ = 84,
  anon_sym_TAB = 85,
  anon_sym_2 = 86,
  anon_sym_TAB2 = 87,
  sym_source_file = 88,
  sym_journal_item = 89,
  sym_block_comment = 90,
  sym_test = 91,
  sym_option = 92,
  sym_option_value = 93,
  sym_directive = 94,
  sym_account_directive = 95,
  sym_account_subdirective = 96,
  sym_commodity_directive = 97,
  sym_commodity_subdirective = 98,
  sym_tag_directive = 99,
  sym_word_directive = 100,
  sym_filename = 101,
  sym_char_directive = 102,
  sym_alias_subdirective = 103,
  sym_default_subdirective = 104,
  sym_format_subdirective = 105,
  sym_note_subdirective = 106,
  sym_assert_subdirective = 107,
  sym_check_subdirective = 108,
  sym_check_in = 109,
  sym_check_out = 110,
  sym_xact = 111,
  sym_plain_xact = 112,
  sym_periodic_xact = 113,
  sym_interval = 114,
  sym_automated_xact = 115,
  sym__xact_date = 116,
  sym_date = 117,
  sym_effective_date = 118,
  sym__4d = 119,
  sym__single_date = 120,
  sym_status = 121,
  sym_code = 122,
  sym_note = 123,
  sym_posting = 124,
  sym_account = 125,
  sym_amount = 126,
  sym_quantity = 127,
  sym_negative_quantity = 128,
  sym_commodity = 129,
  sym_price = 130,
  sym_balance_assertion = 131,
  aux_sym_source_file_repeat1 = 132,
  aux_sym_block_comment_repeat1 = 133,
  aux_sym_account_directive_repeat1 = 134,
  aux_sym_commodity_directive_repeat1 = 135,
  aux_sym_tag_directive_repeat1 = 136,
  aux_sym_plain_xact_repeat1 = 137,
  aux_sym_whitespace_repeat1 = 138,
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
  [sym_query] = "query",
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
  [sym_automated_xact] = "automated_xact",
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
  [sym_query] = sym_query,
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
  [sym_automated_xact] = sym_automated_xact,
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
  [sym_query] = {
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
  [sym_automated_xact] = {
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
  [81] = 21,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 73,
  [88] = 88,
  [89] = 89,
  [90] = 73,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 36,
  [103] = 29,
  [104] = 104,
  [105] = 105,
  [106] = 31,
  [107] = 107,
  [108] = 73,
  [109] = 73,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 112,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 120,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 111,
  [137] = 137,
  [138] = 138,
  [139] = 27,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 144,
  [147] = 73,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 142,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 28,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 73,
  [174] = 168,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 175,
  [183] = 183,
  [184] = 184,
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
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 73,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 73,
  [215] = 73,
  [216] = 73,
  [217] = 217,
  [218] = 73,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 73,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 213,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 194,
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
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
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
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 346,
  [359] = 335,
  [360] = 328,
  [361] = 310,
  [362] = 362,
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
      if (eof) ADVANCE(228);
      if (lookahead == '\t') ADVANCE(430);
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead == ' ') ADVANCE(422);
      if (lookahead == '!') ADVANCE(400);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '(') ADVANCE(402);
      if (lookahead == ')') ADVANCE(405);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(416);
      if (lookahead == '-') ADVANCE(309);
      if (lookahead == ';') ADVANCE(408);
      if (lookahead == '=') ADVANCE(314);
      if (lookahead == '@') ADVANCE(420);
      if (lookahead == 'A') ADVANCE(342);
      if (lookahead == 'B') ADVANCE(158);
      if (lookahead == 'C') ADVANCE(352);
      if (lookahead == 'D') ADVANCE(350);
      if (lookahead == 'E') ADVANCE(205);
      if (lookahead == 'I') ADVANCE(365);
      if (lookahead == 'N') ADVANCE(347);
      if (lookahead == 'O') ADVANCE(369);
      if (lookahead == 'P') ADVANCE(354);
      if (lookahead == 'Y') ADVANCE(345);
      if (lookahead == '[') ADVANCE(409);
      if (lookahead == ']') ADVANCE(411);
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'b') ADVANCE(123);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(363);
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(367);
      if (lookahead == 'p') ADVANCE(38);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == 'y') ADVANCE(34);
      if (lookahead == '~') ADVANCE(371);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(176);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(202);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(143);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(393);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(418);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(430);
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead == ' ') ADVANCE(422);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '+') ADVANCE(416);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead == ';') ADVANCE(408);
      if (lookahead == '=') ADVANCE(314);
      if (lookahead == '@') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(415);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(418);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(417);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(430);
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead == ' ') ADVANCE(422);
      if (lookahead == ';') ADVANCE(408);
      if (lookahead == '=') ADVANCE(314);
      if (lookahead == ']') ADVANCE(411);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(430);
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead == ' ') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(394);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(422);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == ';') ADVANCE(408);
      if (lookahead == '=') ADVANCE(314);
      if (lookahead == '@') ADVANCE(420);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(393);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(418);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(417);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(422);
      if (lookahead == '+') ADVANCE(416);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead == 'D') ADVANCE(128);
      if (lookahead == 'E') ADVANCE(205);
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == 'p') ADVANCE(38);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(158);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(176);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(202);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(143);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(415);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(422);
      if (lookahead == '+') ADVANCE(416);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(415);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(422);
      if (lookahead == '!') ADVANCE(401);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == '*') ADVANCE(399);
      if (lookahead == ';') ADVANCE(408);
      if (lookahead == '[') ADVANCE(410);
      if (lookahead != 0) ADVANCE(414);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(422);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == '[') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(414);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(424);
      if (lookahead == '!') ADVANCE(400);
      if (lookahead == '(') ADVANCE(402);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(406);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(425);
      if (lookahead == '[') ADVANCE(409);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 11:
      if (lookahead == '\t') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == '\t') ADVANCE(440);
      if (lookahead == ' ') ADVANCE(439);
      END_STATE();
    case 13:
      if (lookahead == '\t') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(332);
      END_STATE();
    case 14:
      if (lookahead == '\t') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 15:
      if (lookahead == '\t') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(407);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(327);
      if (lookahead == 'c') ADVANCE(21);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(327);
      if (lookahead == 'e') ADVANCE(17);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(327);
      if (lookahead == 'e') ADVANCE(22);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(327);
      if (lookahead == 'h') ADVANCE(18);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(327);
      if (lookahead == 'k') ADVANCE(362);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(327);
      if (lookahead == 'r') ADVANCE(25);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(327);
      if (lookahead == 's') ADVANCE(24);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(327);
      if (lookahead == 's') ADVANCE(19);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(327);
      if (lookahead == 't') ADVANCE(360);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(327);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(320);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(137);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(220);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(221);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(186);
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(129);
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == 'R') ADVANCE(165);
      if (lookahead == 'r') ADVANCE(337);
      END_STATE();
    case 36:
      if (lookahead == 'V') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == 'V') ADVANCE(140);
      if (lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(298);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(297);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(334);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(333);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(41);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(325);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(65);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 80:
      if (lookahead == 'k') ADVANCE(361);
      END_STATE();
    case 81:
      if (lookahead == 'k') ADVANCE(64);
      END_STATE();
    case 82:
      if (lookahead == 'k') ADVANCE(68);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(319);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 122:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 125:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 126:
      if (lookahead == 'y') ADVANCE(322);
      END_STATE();
    case 127:
      if (lookahead == 'y') ADVANCE(67);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 137:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(177);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(203);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(145);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 138:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(134);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(178);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(204);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(147);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(150);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 154:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(375);
      END_STATE();
    case 155:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(193);
      END_STATE();
    case 156:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(167);
      END_STATE();
    case 157:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(169);
      END_STATE();
    case 158:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 159:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 160:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(374);
      END_STATE();
    case 161:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(191);
      END_STATE();
    case 162:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(166);
      END_STATE();
    case 163:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(168);
      END_STATE();
    case 164:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(206);
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
          lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 170:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 171:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(179);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(153);
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
          lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 175:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(201);
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
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 180:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(377);
      END_STATE();
    case 181:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(376);
      END_STATE();
    case 182:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 183:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 184:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 185:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 186:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 187:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 188:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 189:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 190:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(378);
      END_STATE();
    case 191:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(379);
      END_STATE();
    case 192:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(382);
      END_STATE();
    case 193:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(380);
      END_STATE();
    case 194:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(381);
      END_STATE();
    case 195:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(156);
      END_STATE();
    case 196:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(154);
      END_STATE();
    case 197:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(155);
      END_STATE();
    case 198:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(152);
      END_STATE();
    case 199:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 200:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(148);
      END_STATE();
    case 201:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(157);
      END_STATE();
    case 202:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 203:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 204:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 205:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(140);
      END_STATE();
    case 206:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(383);
      END_STATE();
    case 207:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(28);
      END_STATE();
    case 208:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(389);
      END_STATE();
    case 209:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(384);
      END_STATE();
    case 210:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(386);
      END_STATE();
    case 211:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(385);
      END_STATE();
    case 212:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(387);
      END_STATE();
    case 213:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(373);
      END_STATE();
    case 214:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(388);
      END_STATE();
    case 215:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(190);
      END_STATE();
    case 216:
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(415);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(397);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 223:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(414);
      END_STATE();
    case 224:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(313);
      END_STATE();
    case 225:
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(414);
      END_STATE();
    case 226:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 227:
      if (eof) ADVANCE(228);
      if (lookahead == '\t') ADVANCE(430);
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead == ' ') ADVANCE(422);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(16);
      if (lookahead == '-') ADVANCE(309);
      if (lookahead == '=') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(342);
      if (lookahead == 'C') ADVANCE(352);
      if (lookahead == 'D') ADVANCE(349);
      if (lookahead == 'I') ADVANCE(365);
      if (lookahead == 'N') ADVANCE(347);
      if (lookahead == 'O') ADVANCE(369);
      if (lookahead == 'P') ADVANCE(354);
      if (lookahead == 'Y') ADVANCE(344);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'b') ADVANCE(122);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(363);
      if (lookahead == 'o') ADVANCE(367);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == 'y') ADVANCE(70);
      if (lookahead == '~') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(396);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(435);
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead == ' ') ADVANCE(426);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(435);
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead == ' ') ADVANCE(426);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead == 'l') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'f') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'g') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'i') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'k') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'r') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'y') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (eof) ADVANCE(228);
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(236);
      if (lookahead == '-') ADVANCE(310);
      if (lookahead == '=') ADVANCE(315);
      if (lookahead == 'A') ADVANCE(343);
      if (lookahead == 'C') ADVANCE(353);
      if (lookahead == 'D') ADVANCE(351);
      if (lookahead == 'I') ADVANCE(366);
      if (lookahead == 'N') ADVANCE(348);
      if (lookahead == 'O') ADVANCE(370);
      if (lookahead == 'P') ADVANCE(355);
      if (lookahead == 'Y') ADVANCE(346);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'b') ADVANCE(289);
      if (lookahead == 'c') ADVANCE(273);
      if (lookahead == 'd') ADVANCE(250);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(364);
      if (lookahead == 'o') ADVANCE(368);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == 'y') ADVANCE(251);
      if (lookahead == '~') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ' ') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_endcomment);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_endcomment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_endtest);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_endtest);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(311);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_option_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_option_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_account);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_eval);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_account_subdirective_token1);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_payee);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_nomarket);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_tag_directive_token1);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_word_directive_token1);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_word_directive_token2);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_bucket);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_N);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_C);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_assert);
      if (lookahead == '\n') ADVANCE(327);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_check);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '\n') ADVANCE(327);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_I);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_interval_token1);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_interval_token2);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_interval_token3);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_interval_token4);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_interval_token5);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_interval_token6);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_interval_token7);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_interval_token8);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_interval_token9);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_interval_token10);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_interval_token11);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_interval_token12);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_interval_token13);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_interval_token14);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_interval_token15);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_interval_token16);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_interval_token17);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__dsep);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__2d);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__2d);
      if (lookahead == ':') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(391);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(395);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(413);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(413);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(413);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_query);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(413);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '=') ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(413);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__quantity);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_commodity_token3);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(421);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(320);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(406);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '=') ADVANCE(412);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(407);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(332);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(320);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(413);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(406);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '=') ADVANCE(412);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(407);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(332);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 227},
  [2] = {.lex_state = 227},
  [3] = {.lex_state = 227},
  [4] = {.lex_state = 227},
  [5] = {.lex_state = 227},
  [6] = {.lex_state = 227},
  [7] = {.lex_state = 227},
  [8] = {.lex_state = 227},
  [9] = {.lex_state = 227},
  [10] = {.lex_state = 227},
  [11] = {.lex_state = 227},
  [12] = {.lex_state = 227},
  [13] = {.lex_state = 227},
  [14] = {.lex_state = 227},
  [15] = {.lex_state = 227},
  [16] = {.lex_state = 227},
  [17] = {.lex_state = 227},
  [18] = {.lex_state = 227},
  [19] = {.lex_state = 227},
  [20] = {.lex_state = 227},
  [21] = {.lex_state = 227},
  [22] = {.lex_state = 227},
  [23] = {.lex_state = 227},
  [24] = {.lex_state = 227},
  [25] = {.lex_state = 227},
  [26] = {.lex_state = 227},
  [27] = {.lex_state = 227},
  [28] = {.lex_state = 227},
  [29] = {.lex_state = 227},
  [30] = {.lex_state = 227},
  [31] = {.lex_state = 227},
  [32] = {.lex_state = 227},
  [33] = {.lex_state = 227},
  [34] = {.lex_state = 227},
  [35] = {.lex_state = 227},
  [36] = {.lex_state = 227},
  [37] = {.lex_state = 227},
  [38] = {.lex_state = 227},
  [39] = {.lex_state = 227},
  [40] = {.lex_state = 227},
  [41] = {.lex_state = 227},
  [42] = {.lex_state = 227},
  [43] = {.lex_state = 227},
  [44] = {.lex_state = 227},
  [45] = {.lex_state = 227},
  [46] = {.lex_state = 227},
  [47] = {.lex_state = 227},
  [48] = {.lex_state = 227},
  [49] = {.lex_state = 296},
  [50] = {.lex_state = 296},
  [51] = {.lex_state = 296},
  [52] = {.lex_state = 296},
  [53] = {.lex_state = 296},
  [54] = {.lex_state = 296},
  [55] = {.lex_state = 296},
  [56] = {.lex_state = 296},
  [57] = {.lex_state = 227},
  [58] = {.lex_state = 227},
  [59] = {.lex_state = 227},
  [60] = {.lex_state = 227},
  [61] = {.lex_state = 227},
  [62] = {.lex_state = 227},
  [63] = {.lex_state = 227},
  [64] = {.lex_state = 227},
  [65] = {.lex_state = 227},
  [66] = {.lex_state = 227},
  [67] = {.lex_state = 227},
  [68] = {.lex_state = 227},
  [69] = {.lex_state = 227},
  [70] = {.lex_state = 227},
  [71] = {.lex_state = 227},
  [72] = {.lex_state = 227},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 227},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 233},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 233},
  [116] = {.lex_state = 234},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 227},
  [120] = {.lex_state = 233},
  [121] = {.lex_state = 227},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 233},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 234},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 227},
  [129] = {.lex_state = 227},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 234},
  [132] = {.lex_state = 234},
  [133] = {.lex_state = 234},
  [134] = {.lex_state = 233},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 9},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 234},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 233},
  [175] = {.lex_state = 233},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 234},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 14},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 14},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 11},
  [211] = {.lex_state = 3},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 235},
  [214] = {.lex_state = 11},
  [215] = {.lex_state = 235},
  [216] = {.lex_state = 13},
  [217] = {.lex_state = 13},
  [218] = {.lex_state = 14},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 11},
  [221] = {.lex_state = 3},
  [222] = {.lex_state = 15},
  [223] = {.lex_state = 14},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 9},
  [226] = {.lex_state = 9},
  [227] = {.lex_state = 3},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 235},
  [231] = {.lex_state = 3},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 2},
  [234] = {.lex_state = 2},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 3},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 235},
  [239] = {.lex_state = 2},
  [240] = {.lex_state = 3},
  [241] = {.lex_state = 9},
  [242] = {.lex_state = 9},
  [243] = {.lex_state = 235},
  [244] = {.lex_state = 11},
  [245] = {.lex_state = 11},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 11},
  [248] = {.lex_state = 15},
  [249] = {.lex_state = 9},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 227},
  [253] = {.lex_state = 2},
  [254] = {.lex_state = 9},
  [255] = {.lex_state = 9},
  [256] = {.lex_state = 3},
  [257] = {.lex_state = 2},
  [258] = {.lex_state = 3},
  [259] = {.lex_state = 3},
  [260] = {.lex_state = 2},
  [261] = {.lex_state = 9},
  [262] = {.lex_state = 9},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 2},
  [266] = {.lex_state = 9},
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
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 226},
  [301] = {.lex_state = 226},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 3},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 4},
  [312] = {.lex_state = 404},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 4},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 5},
  [329] = {.lex_state = 3},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 5},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 4},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 224},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 225},
  [348] = {.lex_state = 225},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 3},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 5},
  [360] = {.lex_state = 5},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
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
    [sym_source_file] = STATE(341),
    [sym_journal_item] = STATE(2),
    [sym_block_comment] = STATE(68),
    [sym_test] = STATE(68),
    [sym_option] = STATE(70),
    [sym_directive] = STATE(68),
    [sym_account_directive] = STATE(70),
    [sym_commodity_directive] = STATE(70),
    [sym_tag_directive] = STATE(70),
    [sym_word_directive] = STATE(350),
    [sym_char_directive] = STATE(350),
    [sym_check_in] = STATE(352),
    [sym_check_out] = STATE(352),
    [sym_xact] = STATE(68),
    [sym_plain_xact] = STATE(58),
    [sym_periodic_xact] = STATE(58),
    [sym_automated_xact] = STATE(58),
    [sym__xact_date] = STATE(166),
    [sym_date] = STATE(177),
    [sym__4d] = STATE(317),
    [sym__single_date] = STATE(183),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_comment] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_test] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_DASH_DASH] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_account] = ACTIONS(21),
    [anon_sym_commodity] = ACTIONS(23),
    [anon_sym_tag] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(27),
    [anon_sym_alias] = ACTIONS(29),
    [anon_sym_def] = ACTIONS(31),
    [anon_sym_year] = ACTIONS(33),
    [aux_sym_word_directive_token2] = ACTIONS(35),
    [anon_sym_bucket] = ACTIONS(37),
    [anon_sym_A] = ACTIONS(39),
    [anon_sym_Y] = ACTIONS(41),
    [anon_sym_N] = ACTIONS(43),
    [anon_sym_D] = ACTIONS(45),
    [anon_sym_C] = ACTIONS(47),
    [anon_sym_P] = ACTIONS(49),
    [anon_sym_i] = ACTIONS(51),
    [anon_sym_I] = ACTIONS(53),
    [anon_sym_o] = ACTIONS(55),
    [anon_sym_O] = ACTIONS(55),
    [anon_sym_TILDE] = ACTIONS(57),
    [sym__2d] = ACTIONS(59),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 39,
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
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_account,
    ACTIONS(23), 1,
      anon_sym_commodity,
    ACTIONS(25), 1,
      anon_sym_tag,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_alias,
    ACTIONS(31), 1,
      anon_sym_def,
    ACTIONS(33), 1,
      anon_sym_year,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(37), 1,
      anon_sym_bucket,
    ACTIONS(39), 1,
      anon_sym_A,
    ACTIONS(41), 1,
      anon_sym_Y,
    ACTIONS(43), 1,
      anon_sym_N,
    ACTIONS(45), 1,
      anon_sym_D,
    ACTIONS(47), 1,
      anon_sym_C,
    ACTIONS(49), 1,
      anon_sym_P,
    ACTIONS(51), 1,
      anon_sym_i,
    ACTIONS(53), 1,
      anon_sym_I,
    ACTIONS(57), 1,
      anon_sym_TILDE,
    ACTIONS(59), 1,
      sym__2d,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      anon_sym_LF,
    STATE(166), 1,
      sym__xact_date,
    STATE(177), 1,
      sym_date,
    STATE(183), 1,
      sym__single_date,
    STATE(317), 1,
      sym__4d,
    ACTIONS(55), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(350), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(352), 2,
      sym_check_in,
      sym_check_out,
    STATE(58), 3,
      sym_plain_xact,
      sym_periodic_xact,
      sym_automated_xact,
    STATE(68), 4,
      sym_block_comment,
      sym_test,
      sym_directive,
      sym_xact,
    STATE(70), 4,
      sym_option,
      sym_account_directive,
      sym_commodity_directive,
      sym_tag_directive,
  [130] = 39,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      anon_sym_LF,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_comment,
    ACTIONS(76), 1,
      anon_sym_end,
    ACTIONS(79), 1,
      anon_sym_test,
    ACTIONS(82), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_DASH_DASH,
    ACTIONS(88), 1,
      anon_sym_EQ,
    ACTIONS(91), 1,
      anon_sym_account,
    ACTIONS(94), 1,
      anon_sym_commodity,
    ACTIONS(97), 1,
      anon_sym_tag,
    ACTIONS(100), 1,
      anon_sym_include,
    ACTIONS(103), 1,
      anon_sym_alias,
    ACTIONS(106), 1,
      anon_sym_def,
    ACTIONS(109), 1,
      anon_sym_year,
    ACTIONS(112), 1,
      aux_sym_word_directive_token2,
    ACTIONS(115), 1,
      anon_sym_bucket,
    ACTIONS(118), 1,
      anon_sym_A,
    ACTIONS(121), 1,
      anon_sym_Y,
    ACTIONS(124), 1,
      anon_sym_N,
    ACTIONS(127), 1,
      anon_sym_D,
    ACTIONS(130), 1,
      anon_sym_C,
    ACTIONS(133), 1,
      anon_sym_P,
    ACTIONS(136), 1,
      anon_sym_i,
    ACTIONS(139), 1,
      anon_sym_I,
    ACTIONS(145), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      sym__2d,
    STATE(166), 1,
      sym__xact_date,
    STATE(177), 1,
      sym_date,
    STATE(183), 1,
      sym__single_date,
    STATE(317), 1,
      sym__4d,
    ACTIONS(142), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(350), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(352), 2,
      sym_check_in,
      sym_check_out,
    STATE(58), 3,
      sym_plain_xact,
      sym_periodic_xact,
      sym_automated_xact,
    STATE(68), 4,
      sym_block_comment,
      sym_test,
      sym_directive,
      sym_xact,
    STATE(70), 4,
      sym_option,
      sym_account_directive,
      sym_commodity_directive,
      sym_tag_directive,
  [260] = 6,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(155), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    ACTIONS(153), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(39), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_note_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
    ACTIONS(151), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [313] = 6,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(155), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    ACTIONS(159), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(39), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_note_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
    ACTIONS(157), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [366] = 6,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(165), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    ACTIONS(163), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(39), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_note_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
    ACTIONS(161), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [419] = 6,
    STATE(117), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(172), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(8), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(170), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(41), 4,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_note_subdirective,
    ACTIONS(168), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [471] = 6,
    STATE(117), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(172), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(9), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(176), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(41), 4,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_note_subdirective,
    ACTIONS(174), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [523] = 6,
    STATE(117), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(182), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(9), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(180), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(41), 4,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_note_subdirective,
    ACTIONS(178), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [575] = 5,
    STATE(208), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(189), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(187), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(11), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(185), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [622] = 5,
    STATE(208), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(189), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(193), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(12), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(191), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [669] = 5,
    STATE(208), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(199), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(197), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(12), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(195), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [716] = 5,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(206), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(204), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(202), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [762] = 5,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(212), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(210), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(208), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [808] = 5,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(206), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(217), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(215), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [854] = 5,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(206), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(221), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(219), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [900] = 5,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(206), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(225), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(223), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [946] = 5,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(206), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(229), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(227), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [992] = 5,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(206), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(233), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(231), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [1038] = 2,
    ACTIONS(237), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(235), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [1075] = 2,
    ACTIONS(241), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(239), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [1112] = 2,
    ACTIONS(245), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(243), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
    ACTIONS(249), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(247), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [1186] = 2,
    ACTIONS(253), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(251), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [1223] = 2,
    ACTIONS(257), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(255), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [1260] = 2,
    ACTIONS(261), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(259), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [1297] = 2,
    ACTIONS(265), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(263), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [1334] = 2,
    ACTIONS(269), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(267), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [1371] = 2,
    ACTIONS(273), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(271), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [1408] = 2,
    ACTIONS(277), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(275), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [1445] = 2,
    ACTIONS(281), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(279), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [1482] = 2,
    ACTIONS(285), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(283), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [1519] = 2,
    ACTIONS(289), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(287), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [1556] = 2,
    ACTIONS(293), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(291), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [1593] = 2,
    ACTIONS(297), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(295), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [1630] = 2,
    ACTIONS(301), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(299), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [1667] = 2,
    ACTIONS(305), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(303), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [1704] = 2,
    ACTIONS(309), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(307), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [1741] = 2,
    ACTIONS(313), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(311), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [1778] = 2,
    ACTIONS(317), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(315), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [1815] = 2,
    ACTIONS(321), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(319), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [1852] = 2,
    ACTIONS(325), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(323), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [1889] = 2,
    ACTIONS(329), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(327), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [1926] = 2,
    ACTIONS(333), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(331), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [1963] = 2,
    ACTIONS(337), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(335), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [2000] = 2,
    ACTIONS(341), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(339), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [2037] = 2,
    ACTIONS(345), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(343), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [2074] = 2,
    ACTIONS(349), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(347), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [2111] = 3,
    ACTIONS(355), 1,
      aux_sym_block_comment_token1,
    ACTIONS(351), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(353), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [2149] = 3,
    ACTIONS(361), 1,
      aux_sym_block_comment_token1,
    ACTIONS(357), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(359), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [2187] = 3,
    ACTIONS(367), 1,
      aux_sym_block_comment_token1,
    ACTIONS(363), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(365), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [2225] = 3,
    ACTIONS(373), 1,
      aux_sym_block_comment_token1,
    ACTIONS(369), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(371), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [2263] = 3,
    ACTIONS(379), 1,
      aux_sym_block_comment_token1,
    ACTIONS(375), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(377), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [2301] = 3,
    ACTIONS(385), 1,
      aux_sym_block_comment_token1,
    ACTIONS(381), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(383), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [2339] = 3,
    ACTIONS(391), 1,
      aux_sym_block_comment_token1,
    ACTIONS(387), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(389), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [2377] = 3,
    ACTIONS(397), 1,
      aux_sym_block_comment_token1,
    ACTIONS(393), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(395), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [2415] = 2,
    ACTIONS(401), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(399), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [2450] = 2,
    ACTIONS(405), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(403), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [2485] = 2,
    ACTIONS(383), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(381), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [2520] = 2,
    ACTIONS(409), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(407), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [2555] = 2,
    ACTIONS(371), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(369), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [2590] = 2,
    ACTIONS(353), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(351), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [2625] = 2,
    ACTIONS(413), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(411), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [2660] = 2,
    ACTIONS(395), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(393), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [2695] = 2,
    ACTIONS(359), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(357), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [2730] = 2,
    ACTIONS(377), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(375), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [2765] = 2,
    ACTIONS(417), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(415), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [2800] = 2,
    ACTIONS(421), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(419), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [2835] = 2,
    ACTIONS(425), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(423), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [2870] = 2,
    ACTIONS(429), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(427), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [2905] = 2,
    ACTIONS(365), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(363), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [2940] = 2,
    ACTIONS(389), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(387), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
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
  [2975] = 3,
    STATE(73), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(433), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(431), 26,
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
  [3011] = 17,
    ACTIONS(436), 1,
      anon_sym_LF,
    ACTIONS(438), 1,
      anon_sym_DASH,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(444), 1,
      sym__quantity,
    ACTIONS(446), 1,
      anon_sym_PLUS,
    ACTIONS(450), 1,
      anon_sym_AT,
    ACTIONS(452), 1,
      anon_sym_AT_AT,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(98), 1,
      sym_amount,
    STATE(112), 1,
      sym_commodity,
    STATE(130), 1,
      sym_price,
    STATE(180), 1,
      sym_balance_assertion,
    STATE(331), 1,
      sym_note,
    ACTIONS(454), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(142), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(448), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3067] = 17,
    ACTIONS(438), 1,
      anon_sym_DASH,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(444), 1,
      sym__quantity,
    ACTIONS(446), 1,
      anon_sym_PLUS,
    ACTIONS(450), 1,
      anon_sym_AT,
    ACTIONS(452), 1,
      anon_sym_AT_AT,
    ACTIONS(456), 1,
      anon_sym_LF,
    STATE(78), 1,
      aux_sym_whitespace_repeat1,
    STATE(95), 1,
      sym_amount,
    STATE(112), 1,
      sym_commodity,
    STATE(125), 1,
      sym_price,
    STATE(169), 1,
      sym_balance_assertion,
    STATE(362), 1,
      sym_note,
    ACTIONS(458), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(142), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(448), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3123] = 17,
    ACTIONS(438), 1,
      anon_sym_DASH,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(444), 1,
      sym__quantity,
    ACTIONS(446), 1,
      anon_sym_PLUS,
    ACTIONS(450), 1,
      anon_sym_AT,
    ACTIONS(452), 1,
      anon_sym_AT_AT,
    ACTIONS(460), 1,
      anon_sym_LF,
    STATE(80), 1,
      aux_sym_whitespace_repeat1,
    STATE(96), 1,
      sym_amount,
    STATE(112), 1,
      sym_commodity,
    STATE(114), 1,
      sym_price,
    STATE(171), 1,
      sym_balance_assertion,
    STATE(321), 1,
      sym_note,
    ACTIONS(462), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(142), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(448), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3179] = 4,
    STATE(73), 1,
      aux_sym_whitespace_repeat1,
    STATE(271), 1,
      sym_interval,
    ACTIONS(466), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(464), 17,
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
  [3209] = 16,
    ACTIONS(438), 1,
      anon_sym_DASH,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(444), 1,
      sym__quantity,
    ACTIONS(446), 1,
      anon_sym_PLUS,
    ACTIONS(450), 1,
      anon_sym_AT,
    ACTIONS(452), 1,
      anon_sym_AT_AT,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(98), 1,
      sym_amount,
    STATE(112), 1,
      sym_commodity,
    STATE(130), 1,
      sym_price,
    STATE(180), 1,
      sym_balance_assertion,
    STATE(331), 1,
      sym_note,
    ACTIONS(468), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(142), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(448), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3262] = 16,
    ACTIONS(438), 1,
      anon_sym_DASH,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(444), 1,
      sym__quantity,
    ACTIONS(446), 1,
      anon_sym_PLUS,
    ACTIONS(450), 1,
      anon_sym_AT,
    ACTIONS(452), 1,
      anon_sym_AT_AT,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(97), 1,
      sym_amount,
    STATE(112), 1,
      sym_commodity,
    STATE(135), 1,
      sym_price,
    STATE(176), 1,
      sym_balance_assertion,
    STATE(332), 1,
      sym_note,
    ACTIONS(468), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(142), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(448), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3315] = 16,
    ACTIONS(438), 1,
      anon_sym_DASH,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(444), 1,
      sym__quantity,
    ACTIONS(446), 1,
      anon_sym_PLUS,
    ACTIONS(450), 1,
      anon_sym_AT,
    ACTIONS(452), 1,
      anon_sym_AT_AT,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(95), 1,
      sym_amount,
    STATE(112), 1,
      sym_commodity,
    STATE(125), 1,
      sym_price,
    STATE(169), 1,
      sym_balance_assertion,
    STATE(362), 1,
      sym_note,
    ACTIONS(468), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(142), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(448), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3368] = 2,
    ACTIONS(241), 1,
      anon_sym_AT,
    ACTIONS(239), 12,
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
  [3386] = 9,
    ACTIONS(438), 1,
      anon_sym_DASH,
    ACTIONS(444), 1,
      sym__quantity,
    ACTIONS(446), 1,
      anon_sym_PLUS,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(112), 1,
      sym_commodity,
    STATE(325), 1,
      sym_amount,
    ACTIONS(468), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(142), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(448), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3418] = 9,
    ACTIONS(438), 1,
      anon_sym_DASH,
    ACTIONS(444), 1,
      sym__quantity,
    ACTIONS(446), 1,
      anon_sym_PLUS,
    STATE(88), 1,
      aux_sym_whitespace_repeat1,
    STATE(112), 1,
      sym_commodity,
    STATE(264), 1,
      sym_amount,
    ACTIONS(470), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(142), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(448), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3450] = 9,
    ACTIONS(438), 1,
      anon_sym_DASH,
    ACTIONS(444), 1,
      sym__quantity,
    ACTIONS(446), 1,
      anon_sym_PLUS,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    STATE(112), 1,
      sym_commodity,
    STATE(315), 1,
      sym_amount,
    ACTIONS(472), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(142), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(448), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3482] = 9,
    ACTIONS(438), 1,
      anon_sym_DASH,
    ACTIONS(444), 1,
      sym__quantity,
    ACTIONS(446), 1,
      anon_sym_PLUS,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(112), 1,
      sym_commodity,
    STATE(196), 1,
      sym_amount,
    ACTIONS(474), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(142), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(448), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3514] = 9,
    ACTIONS(438), 1,
      anon_sym_DASH,
    ACTIONS(444), 1,
      sym__quantity,
    ACTIONS(446), 1,
      anon_sym_PLUS,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(112), 1,
      sym_commodity,
    STATE(209), 1,
      sym_amount,
    ACTIONS(468), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(142), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(448), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3546] = 4,
    ACTIONS(476), 1,
      anon_sym_AT,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(478), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(431), 9,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym__quantity,
      anon_sym_PLUS,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
  [3568] = 9,
    ACTIONS(438), 1,
      anon_sym_DASH,
    ACTIONS(444), 1,
      sym__quantity,
    ACTIONS(446), 1,
      anon_sym_PLUS,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(112), 1,
      sym_commodity,
    STATE(251), 1,
      sym_amount,
    ACTIONS(468), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(142), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(448), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3600] = 9,
    ACTIONS(438), 1,
      anon_sym_DASH,
    ACTIONS(444), 1,
      sym__quantity,
    ACTIONS(446), 1,
      anon_sym_PLUS,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    STATE(112), 1,
      sym_commodity,
    STATE(345), 1,
      sym_amount,
    ACTIONS(481), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(142), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(448), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3632] = 4,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(476), 2,
      sym__2d,
      anon_sym_AT,
    ACTIONS(483), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(431), 8,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      sym_time,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
  [3654] = 9,
    ACTIONS(438), 1,
      anon_sym_DASH,
    ACTIONS(444), 1,
      sym__quantity,
    ACTIONS(446), 1,
      anon_sym_PLUS,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(112), 1,
      sym_commodity,
    STATE(345), 1,
      sym_amount,
    ACTIONS(468), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(142), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(448), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3686] = 9,
    ACTIONS(438), 1,
      anon_sym_DASH,
    ACTIONS(444), 1,
      sym__quantity,
    ACTIONS(446), 1,
      anon_sym_PLUS,
    STATE(23), 1,
      sym_amount,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(127), 1,
      sym_commodity,
    ACTIONS(468), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(157), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(448), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3718] = 9,
    ACTIONS(438), 1,
      anon_sym_DASH,
    ACTIONS(444), 1,
      sym__quantity,
    ACTIONS(446), 1,
      anon_sym_PLUS,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(112), 1,
      sym_commodity,
    STATE(336), 1,
      sym_amount,
    ACTIONS(468), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(142), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(448), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3750] = 11,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      sym_account_name,
    ACTIONS(494), 1,
      anon_sym_,
    ACTIONS(496), 1,
      anon_sym_TAB,
    STATE(108), 1,
      aux_sym_whitespace_repeat1,
    STATE(158), 1,
      sym_status,
    STATE(258), 1,
      sym_account,
    STATE(334), 1,
      sym_note,
    ACTIONS(486), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [3785] = 10,
    ACTIONS(436), 1,
      anon_sym_LF,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(450), 1,
      anon_sym_AT,
    ACTIONS(452), 1,
      anon_sym_AT_AT,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    STATE(130), 1,
      sym_price,
    STATE(180), 1,
      sym_balance_assertion,
    STATE(331), 1,
      sym_note,
    ACTIONS(498), 2,
      anon_sym_,
      anon_sym_TAB,
  [3817] = 10,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(450), 1,
      anon_sym_AT,
    ACTIONS(452), 1,
      anon_sym_AT_AT,
    ACTIONS(456), 1,
      anon_sym_LF,
    STATE(100), 1,
      aux_sym_whitespace_repeat1,
    STATE(125), 1,
      sym_price,
    STATE(169), 1,
      sym_balance_assertion,
    STATE(362), 1,
      sym_note,
    ACTIONS(500), 2,
      anon_sym_,
      anon_sym_TAB,
  [3849] = 10,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(450), 1,
      anon_sym_AT,
    ACTIONS(452), 1,
      anon_sym_AT_AT,
    ACTIONS(502), 1,
      anon_sym_LF,
    STATE(105), 1,
      aux_sym_whitespace_repeat1,
    STATE(124), 1,
      sym_price,
    STATE(170), 1,
      sym_balance_assertion,
    STATE(309), 1,
      sym_note,
    ACTIONS(504), 2,
      anon_sym_,
      anon_sym_TAB,
  [3881] = 10,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(450), 1,
      anon_sym_AT,
    ACTIONS(452), 1,
      anon_sym_AT_AT,
    ACTIONS(506), 1,
      anon_sym_LF,
    STATE(104), 1,
      aux_sym_whitespace_repeat1,
    STATE(135), 1,
      sym_price,
    STATE(176), 1,
      sym_balance_assertion,
    STATE(332), 1,
      sym_note,
    ACTIONS(508), 2,
      anon_sym_,
      anon_sym_TAB,
  [3913] = 8,
    ACTIONS(512), 1,
      anon_sym_alias,
    ACTIONS(514), 1,
      anon_sym_default,
    ACTIONS(516), 1,
      anon_sym_note,
    ACTIONS(518), 1,
      anon_sym_assert,
    ACTIONS(520), 1,
      anon_sym_check,
    STATE(73), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(466), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(510), 2,
      anon_sym_eval,
      anon_sym_payee,
  [3940] = 9,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(450), 1,
      anon_sym_AT,
    ACTIONS(452), 1,
      anon_sym_AT_AT,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    STATE(130), 1,
      sym_price,
    STATE(180), 1,
      sym_balance_assertion,
    STATE(331), 1,
      sym_note,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [3969] = 9,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(450), 1,
      anon_sym_AT,
    ACTIONS(452), 1,
      anon_sym_AT_AT,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    STATE(135), 1,
      sym_price,
    STATE(176), 1,
      sym_balance_assertion,
    STATE(332), 1,
      sym_note,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [3998] = 2,
    ACTIONS(301), 1,
      anon_sym_AT,
    ACTIONS(299), 9,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [4013] = 2,
    ACTIONS(273), 1,
      anon_sym_AT,
    ACTIONS(271), 9,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [4028] = 9,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(450), 1,
      anon_sym_AT,
    ACTIONS(452), 1,
      anon_sym_AT_AT,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    STATE(124), 1,
      sym_price,
    STATE(170), 1,
      sym_balance_assertion,
    STATE(309), 1,
      sym_note,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [4057] = 9,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(450), 1,
      anon_sym_AT,
    ACTIONS(452), 1,
      anon_sym_AT_AT,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    STATE(118), 1,
      sym_price,
    STATE(178), 1,
      sym_balance_assertion,
    STATE(314), 1,
      sym_note,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [4086] = 2,
    ACTIONS(281), 1,
      anon_sym_AT,
    ACTIONS(279), 9,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [4101] = 7,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(528), 1,
      sym_payee,
    STATE(147), 1,
      aux_sym_whitespace_repeat1,
    STATE(172), 1,
      sym_status,
    STATE(179), 1,
      sym_code,
    ACTIONS(524), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [4125] = 5,
    ACTIONS(431), 1,
      anon_sym_SEMI,
    ACTIONS(532), 1,
      anon_sym_,
    ACTIONS(535), 1,
      anon_sym_TAB,
    STATE(108), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(476), 5,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [4145] = 4,
    STATE(109), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(476), 2,
      anon_sym_assert,
      anon_sym_check,
    ACTIONS(538), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(431), 4,
      anon_sym_DASH,
      aux_sym_tag_directive_token1,
      sym__quantity,
      anon_sym_PLUS,
  [4163] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    STATE(183), 1,
      sym__single_date,
    STATE(234), 1,
      sym_date,
    STATE(317), 1,
      sym__4d,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [4186] = 6,
    ACTIONS(541), 1,
      anon_sym_DASH,
    ACTIONS(543), 1,
      sym__quantity,
    ACTIONS(545), 1,
      anon_sym_PLUS,
    STATE(109), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(547), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(27), 2,
      sym_quantity,
      sym_negative_quantity,
  [4207] = 6,
    ACTIONS(438), 1,
      anon_sym_DASH,
    ACTIONS(444), 1,
      sym__quantity,
    ACTIONS(446), 1,
      anon_sym_PLUS,
    STATE(136), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(549), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(161), 2,
      sym_quantity,
      sym_negative_quantity,
  [4228] = 7,
    ACTIONS(361), 1,
      anon_sym_endtest,
    ACTIONS(551), 1,
      anon_sym_LF,
    ACTIONS(553), 1,
      aux_sym_block_comment_token1,
    ACTIONS(555), 1,
      anon_sym_end,
    STATE(120), 1,
      aux_sym_block_comment_repeat1,
    STATE(213), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(557), 2,
      anon_sym_,
      anon_sym_TAB,
  [4251] = 7,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(456), 1,
      anon_sym_LF,
    STATE(160), 1,
      aux_sym_whitespace_repeat1,
    STATE(169), 1,
      sym_balance_assertion,
    STATE(362), 1,
      sym_note,
    ACTIONS(559), 2,
      anon_sym_,
      anon_sym_TAB,
  [4274] = 7,
    ACTIONS(553), 1,
      aux_sym_block_comment_token1,
    ACTIONS(561), 1,
      anon_sym_LF,
    ACTIONS(563), 1,
      anon_sym_end,
    ACTIONS(565), 1,
      anon_sym_endtest,
    STATE(113), 1,
      aux_sym_block_comment_repeat1,
    STATE(213), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(557), 2,
      anon_sym_,
      anon_sym_TAB,
  [4297] = 7,
    ACTIONS(567), 1,
      anon_sym_LF,
    ACTIONS(569), 1,
      aux_sym_block_comment_token1,
    ACTIONS(571), 1,
      anon_sym_end,
    ACTIONS(573), 1,
      anon_sym_endcomment,
    STATE(131), 1,
      aux_sym_block_comment_repeat1,
    STATE(230), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(575), 2,
      anon_sym_,
      anon_sym_TAB,
  [4320] = 7,
    ACTIONS(512), 1,
      anon_sym_alias,
    ACTIONS(514), 1,
      anon_sym_default,
    ACTIONS(516), 1,
      anon_sym_note,
    ACTIONS(577), 1,
      anon_sym_nomarket,
    ACTIONS(579), 1,
      anon_sym_format,
    STATE(73), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(466), 2,
      anon_sym_,
      anon_sym_TAB,
  [4343] = 7,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(581), 1,
      anon_sym_LF,
    STATE(165), 1,
      aux_sym_whitespace_repeat1,
    STATE(184), 1,
      sym_balance_assertion,
    STATE(318), 1,
      sym_note,
    ACTIONS(583), 2,
      anon_sym_,
      anon_sym_TAB,
  [4366] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    STATE(183), 1,
      sym__single_date,
    STATE(267), 1,
      sym_date,
    STATE(317), 1,
      sym__4d,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [4389] = 6,
    ACTIONS(585), 1,
      anon_sym_LF,
    ACTIONS(588), 1,
      aux_sym_block_comment_token1,
    STATE(120), 1,
      aux_sym_block_comment_repeat1,
    STATE(213), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(591), 2,
      anon_sym_end,
      anon_sym_endtest,
    ACTIONS(593), 2,
      anon_sym_,
      anon_sym_TAB,
  [4410] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    STATE(183), 1,
      sym__single_date,
    STATE(239), 1,
      sym_date,
    STATE(317), 1,
      sym__4d,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [4433] = 2,
    ACTIONS(598), 1,
      sym__dsep,
    ACTIONS(596), 7,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_TAB,
  [4446] = 7,
    ACTIONS(355), 1,
      anon_sym_endtest,
    ACTIONS(551), 1,
      anon_sym_LF,
    ACTIONS(553), 1,
      aux_sym_block_comment_token1,
    ACTIONS(600), 1,
      anon_sym_end,
    STATE(120), 1,
      aux_sym_block_comment_repeat1,
    STATE(213), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(557), 2,
      anon_sym_,
      anon_sym_TAB,
  [4469] = 7,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(602), 1,
      anon_sym_LF,
    STATE(153), 1,
      aux_sym_whitespace_repeat1,
    STATE(178), 1,
      sym_balance_assertion,
    STATE(314), 1,
      sym_note,
    ACTIONS(604), 2,
      anon_sym_,
      anon_sym_TAB,
  [4492] = 7,
    ACTIONS(436), 1,
      anon_sym_LF,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    STATE(149), 1,
      aux_sym_whitespace_repeat1,
    STATE(180), 1,
      sym_balance_assertion,
    STATE(331), 1,
      sym_note,
    ACTIONS(606), 2,
      anon_sym_,
      anon_sym_TAB,
  [4515] = 7,
    ACTIONS(397), 1,
      anon_sym_endcomment,
    ACTIONS(569), 1,
      aux_sym_block_comment_token1,
    ACTIONS(608), 1,
      anon_sym_LF,
    ACTIONS(610), 1,
      anon_sym_end,
    STATE(132), 1,
      aux_sym_block_comment_repeat1,
    STATE(230), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(575), 2,
      anon_sym_,
      anon_sym_TAB,
  [4538] = 6,
    ACTIONS(541), 1,
      anon_sym_DASH,
    ACTIONS(543), 1,
      sym__quantity,
    ACTIONS(545), 1,
      anon_sym_PLUS,
    STATE(111), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(612), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(28), 2,
      sym_quantity,
      sym_negative_quantity,
  [4559] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    STATE(183), 1,
      sym__single_date,
    STATE(260), 1,
      sym_date,
    STATE(317), 1,
      sym__4d,
    ACTIONS(614), 2,
      anon_sym_,
      anon_sym_TAB,
  [4582] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(110), 1,
      aux_sym_whitespace_repeat1,
    STATE(183), 1,
      sym__single_date,
    STATE(257), 1,
      sym_date,
    STATE(317), 1,
      sym__4d,
    ACTIONS(616), 2,
      anon_sym_,
      anon_sym_TAB,
  [4605] = 7,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(506), 1,
      anon_sym_LF,
    STATE(162), 1,
      aux_sym_whitespace_repeat1,
    STATE(176), 1,
      sym_balance_assertion,
    STATE(332), 1,
      sym_note,
    ACTIONS(618), 2,
      anon_sym_,
      anon_sym_TAB,
  [4628] = 7,
    ACTIONS(391), 1,
      anon_sym_endcomment,
    ACTIONS(569), 1,
      aux_sym_block_comment_token1,
    ACTIONS(608), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      anon_sym_end,
    STATE(132), 1,
      aux_sym_block_comment_repeat1,
    STATE(230), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(575), 2,
      anon_sym_,
      anon_sym_TAB,
  [4651] = 6,
    ACTIONS(622), 1,
      anon_sym_LF,
    ACTIONS(625), 1,
      aux_sym_block_comment_token1,
    STATE(132), 1,
      aux_sym_block_comment_repeat1,
    STATE(230), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(591), 2,
      anon_sym_end,
      anon_sym_endcomment,
    ACTIONS(628), 2,
      anon_sym_,
      anon_sym_TAB,
  [4672] = 7,
    ACTIONS(385), 1,
      anon_sym_endcomment,
    ACTIONS(569), 1,
      aux_sym_block_comment_token1,
    ACTIONS(631), 1,
      anon_sym_LF,
    ACTIONS(633), 1,
      anon_sym_end,
    STATE(126), 1,
      aux_sym_block_comment_repeat1,
    STATE(230), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(575), 2,
      anon_sym_,
      anon_sym_TAB,
  [4695] = 7,
    ACTIONS(373), 1,
      anon_sym_endtest,
    ACTIONS(553), 1,
      aux_sym_block_comment_token1,
    ACTIONS(635), 1,
      anon_sym_LF,
    ACTIONS(637), 1,
      anon_sym_end,
    STATE(123), 1,
      aux_sym_block_comment_repeat1,
    STATE(213), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(557), 2,
      anon_sym_,
      anon_sym_TAB,
  [4718] = 7,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(502), 1,
      anon_sym_LF,
    STATE(152), 1,
      aux_sym_whitespace_repeat1,
    STATE(170), 1,
      sym_balance_assertion,
    STATE(309), 1,
      sym_note,
    ACTIONS(639), 2,
      anon_sym_,
      anon_sym_TAB,
  [4741] = 6,
    ACTIONS(438), 1,
      anon_sym_DASH,
    ACTIONS(444), 1,
      sym__quantity,
    ACTIONS(446), 1,
      anon_sym_PLUS,
    STATE(109), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(547), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(139), 2,
      sym_quantity,
      sym_negative_quantity,
  [4762] = 4,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    STATE(336), 1,
      sym_commodity,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(448), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4778] = 4,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    STATE(224), 1,
      sym_commodity,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(448), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4794] = 2,
    ACTIONS(265), 1,
      anon_sym_AT,
    ACTIONS(263), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [4806] = 4,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    STATE(343), 1,
      sym_commodity,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(448), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4822] = 7,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      sym_account_name,
    ACTIONS(641), 1,
      anon_sym_,
    ACTIONS(643), 1,
      anon_sym_TAB,
    STATE(173), 1,
      aux_sym_whitespace_repeat1,
    STATE(344), 1,
      sym_account,
  [4844] = 4,
    STATE(144), 1,
      aux_sym_whitespace_repeat1,
    STATE(161), 1,
      sym_commodity,
    ACTIONS(645), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(448), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4860] = 7,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      sym_account_name,
    ACTIONS(647), 1,
      anon_sym_,
    ACTIONS(649), 1,
      anon_sym_TAB,
    STATE(150), 1,
      aux_sym_whitespace_repeat1,
    STATE(211), 1,
      sym_account,
  [4882] = 4,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    STATE(139), 1,
      sym_commodity,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(448), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4898] = 7,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      sym_account_name,
    ACTIONS(641), 1,
      anon_sym_,
    ACTIONS(643), 1,
      anon_sym_TAB,
    STATE(173), 1,
      aux_sym_whitespace_repeat1,
    STATE(256), 1,
      sym_account,
  [4920] = 4,
    STATE(27), 1,
      sym_commodity,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(651), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4936] = 4,
    ACTIONS(476), 1,
      sym_payee,
    STATE(147), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(653), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(431), 3,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
  [4952] = 4,
    STATE(89), 1,
      sym_commodity,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(448), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4968] = 6,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    STATE(176), 1,
      sym_balance_assertion,
    STATE(332), 1,
      sym_note,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [4988] = 7,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      sym_account_name,
    ACTIONS(641), 1,
      anon_sym_,
    ACTIONS(643), 1,
      anon_sym_TAB,
    STATE(173), 1,
      aux_sym_whitespace_repeat1,
    STATE(240), 1,
      sym_account,
  [5010] = 7,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      sym_account_name,
    ACTIONS(656), 1,
      anon_sym_,
    ACTIONS(658), 1,
      anon_sym_TAB,
    STATE(163), 1,
      aux_sym_whitespace_repeat1,
    STATE(240), 1,
      sym_account,
  [5032] = 6,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    STATE(178), 1,
      sym_balance_assertion,
    STATE(314), 1,
      sym_note,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [5052] = 6,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    STATE(184), 1,
      sym_balance_assertion,
    STATE(318), 1,
      sym_note,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [5072] = 7,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      sym_account_name,
    ACTIONS(641), 1,
      anon_sym_,
    ACTIONS(643), 1,
      anon_sym_TAB,
    STATE(173), 1,
      aux_sym_whitespace_repeat1,
    STATE(338), 1,
      sym_account,
  [5094] = 7,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      sym_account_name,
    ACTIONS(641), 1,
      anon_sym_,
    ACTIONS(643), 1,
      anon_sym_TAB,
    STATE(173), 1,
      aux_sym_whitespace_repeat1,
    STATE(336), 1,
      sym_account,
  [5116] = 7,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      sym_account_name,
    ACTIONS(641), 1,
      anon_sym_,
    ACTIONS(643), 1,
      anon_sym_TAB,
    STATE(173), 1,
      aux_sym_whitespace_repeat1,
    STATE(231), 1,
      sym_account,
  [5138] = 4,
    STATE(28), 1,
      sym_commodity,
    STATE(146), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(660), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(651), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5154] = 7,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      sym_account_name,
    ACTIONS(662), 1,
      anon_sym_,
    ACTIONS(664), 1,
      anon_sym_TAB,
    STATE(156), 1,
      aux_sym_whitespace_repeat1,
    STATE(236), 1,
      sym_account,
  [5176] = 1,
    ACTIONS(666), 7,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_TAB,
  [5186] = 6,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    STATE(180), 1,
      sym_balance_assertion,
    STATE(331), 1,
      sym_note,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [5206] = 2,
    ACTIONS(269), 1,
      anon_sym_AT,
    ACTIONS(267), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [5218] = 6,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    STATE(170), 1,
      sym_balance_assertion,
    STATE(309), 1,
      sym_note,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [5238] = 7,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      sym_account_name,
    ACTIONS(641), 1,
      anon_sym_,
    ACTIONS(643), 1,
      anon_sym_TAB,
    STATE(173), 1,
      aux_sym_whitespace_repeat1,
    STATE(227), 1,
      sym_account,
  [5260] = 7,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      sym_account_name,
    ACTIONS(668), 1,
      anon_sym_,
    ACTIONS(670), 1,
      anon_sym_TAB,
    STATE(145), 1,
      aux_sym_whitespace_repeat1,
    STATE(227), 1,
      sym_account,
  [5282] = 6,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    STATE(181), 1,
      sym_balance_assertion,
    STATE(323), 1,
      sym_note,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [5302] = 5,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(672), 1,
      anon_sym_LF,
    STATE(107), 1,
      aux_sym_whitespace_repeat1,
    STATE(193), 1,
      sym_note,
    ACTIONS(674), 2,
      anon_sym_,
      anon_sym_TAB,
  [5319] = 5,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      sym_payee,
    STATE(147), 1,
      aux_sym_whitespace_repeat1,
    STATE(185), 1,
      sym_code,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [5336] = 2,
    ACTIONS(678), 1,
      anon_sym_LF,
    ACTIONS(680), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endcomment,
      anon_sym_,
      anon_sym_TAB,
  [5347] = 5,
    ACTIONS(436), 1,
      anon_sym_LF,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    STATE(205), 1,
      aux_sym_whitespace_repeat1,
    STATE(331), 1,
      sym_note,
    ACTIONS(682), 2,
      anon_sym_,
      anon_sym_TAB,
  [5364] = 5,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(602), 1,
      anon_sym_LF,
    STATE(190), 1,
      aux_sym_whitespace_repeat1,
    STATE(314), 1,
      sym_note,
    ACTIONS(684), 2,
      anon_sym_,
      anon_sym_TAB,
  [5381] = 5,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(456), 1,
      anon_sym_LF,
    STATE(199), 1,
      aux_sym_whitespace_repeat1,
    STATE(362), 1,
      sym_note,
    ACTIONS(686), 2,
      anon_sym_,
      anon_sym_TAB,
  [5398] = 5,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(688), 1,
      anon_sym_LF,
    STATE(167), 1,
      aux_sym_whitespace_repeat1,
    STATE(195), 1,
      sym_note,
    ACTIONS(690), 2,
      anon_sym_,
      anon_sym_TAB,
  [5415] = 4,
    ACTIONS(692), 1,
      anon_sym_,
    ACTIONS(695), 1,
      anon_sym_TAB,
    STATE(173), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(476), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [5430] = 2,
    ACTIONS(678), 1,
      anon_sym_LF,
    ACTIONS(680), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endtest,
      anon_sym_,
      anon_sym_TAB,
  [5441] = 2,
    ACTIONS(698), 1,
      anon_sym_LF,
    ACTIONS(591), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endtest,
      anon_sym_,
      anon_sym_TAB,
  [5452] = 5,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(502), 1,
      anon_sym_LF,
    STATE(203), 1,
      aux_sym_whitespace_repeat1,
    STATE(309), 1,
      sym_note,
    ACTIONS(700), 2,
      anon_sym_,
      anon_sym_TAB,
  [5469] = 3,
    ACTIONS(704), 1,
      anon_sym_EQ,
    STATE(250), 1,
      sym_effective_date,
    ACTIONS(702), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5482] = 5,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(581), 1,
      anon_sym_LF,
    STATE(188), 1,
      aux_sym_whitespace_repeat1,
    STATE(318), 1,
      sym_note,
    ACTIONS(706), 2,
      anon_sym_,
      anon_sym_TAB,
  [5499] = 5,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(688), 1,
      anon_sym_LF,
    STATE(195), 1,
      sym_note,
    STATE(266), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(708), 2,
      anon_sym_,
      anon_sym_TAB,
  [5516] = 5,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(506), 1,
      anon_sym_LF,
    STATE(202), 1,
      aux_sym_whitespace_repeat1,
    STATE(332), 1,
      sym_note,
    ACTIONS(710), 2,
      anon_sym_,
      anon_sym_TAB,
  [5533] = 5,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(712), 1,
      anon_sym_LF,
    STATE(197), 1,
      aux_sym_whitespace_repeat1,
    STATE(327), 1,
      sym_note,
    ACTIONS(714), 2,
      anon_sym_,
      anon_sym_TAB,
  [5550] = 2,
    ACTIONS(698), 1,
      anon_sym_LF,
    ACTIONS(591), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endcomment,
      anon_sym_,
      anon_sym_TAB,
  [5561] = 1,
    ACTIONS(716), 6,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5570] = 5,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(718), 1,
      anon_sym_LF,
    STATE(200), 1,
      aux_sym_whitespace_repeat1,
    STATE(323), 1,
      sym_note,
    ACTIONS(720), 2,
      anon_sym_,
      anon_sym_TAB,
  [5587] = 5,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(722), 1,
      anon_sym_LF,
    STATE(191), 1,
      sym_note,
    STATE(241), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(724), 2,
      anon_sym_,
      anon_sym_TAB,
  [5604] = 3,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(206), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(16), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5616] = 4,
    ACTIONS(726), 1,
      aux_sym_option_value_token1,
    STATE(218), 1,
      aux_sym_whitespace_repeat1,
    STATE(338), 1,
      sym_filename,
    ACTIONS(728), 2,
      anon_sym_,
      anon_sym_TAB,
  [5630] = 4,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    STATE(323), 1,
      sym_note,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [5644] = 3,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(206), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(18), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5656] = 4,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    STATE(318), 1,
      sym_note,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [5670] = 3,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(206), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(19), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5682] = 4,
    ACTIONS(730), 1,
      anon_sym_LBRACK,
    ACTIONS(732), 1,
      aux_sym_note_token1,
    STATE(206), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(734), 2,
      anon_sym_,
      anon_sym_TAB,
  [5696] = 3,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(206), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(13), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5708] = 2,
    ACTIONS(738), 1,
      anon_sym_,
    ACTIONS(736), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
      anon_sym_TAB,
  [5718] = 3,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(206), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(17), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5730] = 1,
    ACTIONS(740), 5,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5738] = 4,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    STATE(330), 1,
      sym_note,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [5752] = 4,
    ACTIONS(742), 1,
      aux_sym_option_value_token1,
    STATE(218), 1,
      aux_sym_whitespace_repeat1,
    STATE(306), 1,
      sym_option_value,
    ACTIONS(728), 2,
      anon_sym_,
      anon_sym_TAB,
  [5766] = 4,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    STATE(331), 1,
      sym_note,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [5780] = 4,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    STATE(327), 1,
      sym_note,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [5794] = 1,
    ACTIONS(744), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_TAB,
  [5802] = 4,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    STATE(309), 1,
      sym_note,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [5816] = 4,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    STATE(314), 1,
      sym_note,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [5830] = 4,
    ACTIONS(746), 1,
      anon_sym_LF,
    ACTIONS(748), 1,
      anon_sym_EQ,
    STATE(198), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(750), 2,
      anon_sym_,
      anon_sym_TAB,
  [5844] = 4,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    STATE(332), 1,
      sym_note,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [5858] = 4,
    ACTIONS(431), 1,
      anon_sym_LBRACK,
    ACTIONS(476), 1,
      aux_sym_note_token1,
    STATE(206), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(752), 2,
      anon_sym_,
      anon_sym_TAB,
  [5872] = 3,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(206), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(15), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5884] = 4,
    ACTIONS(518), 1,
      anon_sym_assert,
    ACTIONS(520), 1,
      anon_sym_check,
    STATE(109), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(547), 2,
      anon_sym_,
      anon_sym_TAB,
  [5898] = 1,
    ACTIONS(755), 5,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5906] = 3,
    ACTIONS(757), 1,
      aux_sym_account_subdirective_token1,
    STATE(214), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(759), 2,
      anon_sym_,
      anon_sym_TAB,
  [5917] = 2,
    ACTIONS(761), 1,
      anon_sym_LF,
    ACTIONS(763), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [5926] = 3,
    ACTIONS(765), 1,
      aux_sym_word_directive_token2,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [5937] = 3,
    ACTIONS(767), 1,
      aux_sym_block_comment_token1,
    STATE(215), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(769), 2,
      anon_sym_,
      anon_sym_TAB,
  [5948] = 3,
    ACTIONS(431), 1,
      aux_sym_account_subdirective_token1,
    STATE(214), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(771), 2,
      anon_sym_,
      anon_sym_TAB,
  [5959] = 3,
    ACTIONS(476), 1,
      aux_sym_block_comment_token1,
    STATE(215), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(774), 2,
      anon_sym_,
      anon_sym_TAB,
  [5970] = 3,
    ACTIONS(476), 1,
      aux_sym_word_directive_token1,
    STATE(216), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(777), 2,
      anon_sym_,
      anon_sym_TAB,
  [5981] = 3,
    ACTIONS(780), 1,
      aux_sym_word_directive_token1,
    STATE(216), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(782), 2,
      anon_sym_,
      anon_sym_TAB,
  [5992] = 3,
    ACTIONS(476), 1,
      aux_sym_option_value_token1,
    STATE(218), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(784), 2,
      anon_sym_,
      anon_sym_TAB,
  [6003] = 3,
    ACTIONS(787), 1,
      anon_sym_LF,
    STATE(238), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(789), 2,
      anon_sym_,
      anon_sym_TAB,
  [6014] = 3,
    ACTIONS(791), 1,
      aux_sym_account_subdirective_token1,
    STATE(214), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(759), 2,
      anon_sym_,
      anon_sym_TAB,
  [6025] = 1,
    ACTIONS(793), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6032] = 3,
    ACTIONS(476), 1,
      sym_query,
    STATE(222), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(795), 2,
      anon_sym_,
      anon_sym_TAB,
  [6043] = 3,
    ACTIONS(798), 1,
      aux_sym_option_value_token1,
    STATE(218), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(728), 2,
      anon_sym_,
      anon_sym_TAB,
  [6054] = 3,
    ACTIONS(800), 1,
      anon_sym_EQ,
    STATE(263), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(802), 2,
      anon_sym_,
      anon_sym_TAB,
  [6065] = 3,
    ACTIONS(804), 1,
      sym_payee,
    STATE(147), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [6076] = 3,
    ACTIONS(804), 1,
      sym_payee,
    STATE(254), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(806), 2,
      anon_sym_,
      anon_sym_TAB,
  [6087] = 2,
    ACTIONS(808), 1,
      anon_sym_LF,
    ACTIONS(810), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6096] = 3,
    ACTIONS(812), 1,
      aux_sym_tag_directive_token1,
    STATE(109), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(547), 2,
      anon_sym_,
      anon_sym_TAB,
  [6107] = 3,
    ACTIONS(814), 1,
      anon_sym_LF,
    STATE(243), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(816), 2,
      anon_sym_,
      anon_sym_TAB,
  [6118] = 3,
    ACTIONS(818), 1,
      aux_sym_block_comment_token1,
    STATE(215), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(769), 2,
      anon_sym_,
      anon_sym_TAB,
  [6129] = 2,
    ACTIONS(456), 1,
      anon_sym_LF,
    ACTIONS(820), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6138] = 1,
    ACTIONS(822), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [6145] = 3,
    ACTIONS(824), 1,
      sym_time,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [6156] = 3,
    ACTIONS(824), 1,
      sym_time,
    STATE(265), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(826), 2,
      anon_sym_,
      anon_sym_TAB,
  [6167] = 3,
    ACTIONS(828), 1,
      aux_sym_word_directive_token2,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [6178] = 2,
    ACTIONS(460), 1,
      anon_sym_LF,
    ACTIONS(830), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6187] = 3,
    ACTIONS(832), 1,
      sym_time,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [6198] = 3,
    ACTIONS(834), 1,
      aux_sym_block_comment_token1,
    STATE(215), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(769), 2,
      anon_sym_,
      anon_sym_TAB,
  [6209] = 3,
    ACTIONS(832), 1,
      sym_time,
    STATE(253), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(836), 2,
      anon_sym_,
      anon_sym_TAB,
  [6220] = 2,
    ACTIONS(838), 1,
      anon_sym_LF,
    ACTIONS(840), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6229] = 3,
    ACTIONS(842), 1,
      sym_payee,
    STATE(147), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [6240] = 3,
    ACTIONS(844), 1,
      sym_payee,
    STATE(225), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(846), 2,
      anon_sym_,
      anon_sym_TAB,
  [6251] = 3,
    ACTIONS(848), 1,
      aux_sym_block_comment_token1,
    STATE(215), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(769), 2,
      anon_sym_,
      anon_sym_TAB,
  [6262] = 3,
    ACTIONS(850), 1,
      aux_sym_account_subdirective_token1,
    STATE(214), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(759), 2,
      anon_sym_,
      anon_sym_TAB,
  [6273] = 3,
    ACTIONS(852), 1,
      aux_sym_account_subdirective_token1,
    STATE(214), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(759), 2,
      anon_sym_,
      anon_sym_TAB,
  [6284] = 1,
    ACTIONS(738), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [6291] = 3,
    ACTIONS(854), 1,
      aux_sym_account_subdirective_token1,
    STATE(214), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(759), 2,
      anon_sym_,
      anon_sym_TAB,
  [6302] = 3,
    ACTIONS(856), 1,
      sym_query,
    STATE(222), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(858), 2,
      anon_sym_,
      anon_sym_TAB,
  [6313] = 3,
    ACTIONS(860), 1,
      sym_payee,
    STATE(147), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [6324] = 1,
    ACTIONS(862), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [6331] = 1,
    ACTIONS(864), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [6338] = 4,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(201), 1,
      sym__single_date,
    STATE(317), 1,
      sym__4d,
  [6351] = 3,
    ACTIONS(866), 1,
      sym_time,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [6362] = 3,
    ACTIONS(868), 1,
      sym_payee,
    STATE(147), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [6373] = 3,
    ACTIONS(868), 1,
      sym_payee,
    STATE(261), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(870), 2,
      anon_sym_,
      anon_sym_TAB,
  [6384] = 2,
    ACTIONS(872), 1,
      anon_sym_LF,
    ACTIONS(874), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6393] = 3,
    ACTIONS(876), 1,
      sym_time,
    STATE(233), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(878), 2,
      anon_sym_,
      anon_sym_TAB,
  [6404] = 2,
    ACTIONS(880), 1,
      anon_sym_LF,
    ACTIONS(882), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6413] = 1,
    ACTIONS(884), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6420] = 3,
    ACTIONS(886), 1,
      sym_time,
    STATE(237), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(888), 2,
      anon_sym_,
      anon_sym_TAB,
  [6431] = 3,
    ACTIONS(890), 1,
      sym_payee,
    STATE(147), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [6442] = 3,
    ACTIONS(890), 1,
      sym_payee,
    STATE(249), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(892), 2,
      anon_sym_,
      anon_sym_TAB,
  [6453] = 3,
    ACTIONS(894), 1,
      anon_sym_EQ,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [6464] = 1,
    ACTIONS(896), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [6471] = 3,
    ACTIONS(898), 1,
      sym_time,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [6482] = 3,
    ACTIONS(676), 1,
      sym_payee,
    STATE(147), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [6493] = 2,
    STATE(148), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(900), 2,
      anon_sym_,
      anon_sym_TAB,
  [6501] = 2,
    STATE(119), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(902), 2,
      anon_sym_,
      anon_sym_TAB,
  [6509] = 2,
    STATE(245), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(904), 2,
      anon_sym_,
      anon_sym_TAB,
  [6517] = 2,
    STATE(247), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(906), 2,
      anon_sym_,
      anon_sym_TAB,
  [6525] = 3,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(908), 1,
      anon_sym_LF,
    STATE(186), 1,
      sym_note,
  [6535] = 2,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(910), 2,
      anon_sym_,
      anon_sym_TAB,
  [6543] = 3,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(912), 1,
      anon_sym_LF,
    STATE(207), 1,
      sym_note,
  [6553] = 2,
    STATE(192), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(914), 2,
      anon_sym_,
      anon_sym_TAB,
  [6561] = 2,
    STATE(248), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(916), 2,
      anon_sym_,
      anon_sym_TAB,
  [6569] = 1,
    ACTIONS(918), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [6575] = 2,
    STATE(235), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(920), 2,
      anon_sym_,
      anon_sym_TAB,
  [6583] = 2,
    STATE(141), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(922), 2,
      anon_sym_,
      anon_sym_TAB,
  [6591] = 3,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(924), 1,
      anon_sym_LF,
    STATE(189), 1,
      sym_note,
  [6601] = 2,
    STATE(140), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(926), 2,
      anon_sym_,
      anon_sym_TAB,
  [6609] = 2,
    STATE(77), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(928), 2,
      anon_sym_,
      anon_sym_TAB,
  [6617] = 2,
    STATE(228), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(930), 2,
      anon_sym_,
      anon_sym_TAB,
  [6625] = 2,
    STATE(187), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(932), 2,
      anon_sym_,
      anon_sym_TAB,
  [6633] = 2,
    STATE(155), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(934), 2,
      anon_sym_,
      anon_sym_TAB,
  [6641] = 2,
    STATE(217), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(936), 2,
      anon_sym_,
      anon_sym_TAB,
  [6649] = 2,
    STATE(223), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(938), 2,
      anon_sym_,
      anon_sym_TAB,
  [6657] = 3,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(722), 1,
      anon_sym_LF,
    STATE(191), 1,
      sym_note,
  [6667] = 2,
    STATE(138), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(940), 2,
      anon_sym_,
      anon_sym_TAB,
  [6675] = 2,
    STATE(244), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(942), 2,
      anon_sym_,
      anon_sym_TAB,
  [6683] = 2,
    STATE(212), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(944), 2,
      anon_sym_,
      anon_sym_TAB,
  [6691] = 2,
    STATE(220), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(946), 2,
      anon_sym_,
      anon_sym_TAB,
  [6699] = 2,
    STATE(154), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(948), 2,
      anon_sym_,
      anon_sym_TAB,
  [6707] = 1,
    ACTIONS(950), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [6713] = 2,
    STATE(93), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(952), 2,
      anon_sym_,
      anon_sym_TAB,
  [6721] = 2,
    STATE(137), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(954), 2,
      anon_sym_,
      anon_sym_TAB,
  [6729] = 3,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(688), 1,
      anon_sym_LF,
    STATE(195), 1,
      sym_note,
  [6739] = 2,
    STATE(210), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(956), 2,
      anon_sym_,
      anon_sym_TAB,
  [6747] = 2,
    ACTIONS(704), 1,
      anon_sym_EQ,
    STATE(324), 1,
      sym_effective_date,
  [6754] = 1,
    ACTIONS(958), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [6759] = 2,
    ACTIONS(960), 1,
      aux_sym_option_value_token1,
    STATE(306), 1,
      sym_option_value,
  [6766] = 1,
    ACTIONS(962), 1,
      aux_sym_option_value_token1,
  [6770] = 1,
    ACTIONS(808), 1,
      anon_sym_LF,
  [6774] = 1,
    ACTIONS(964), 1,
      sym__2d,
  [6778] = 1,
    ACTIONS(966), 1,
      anon_sym_RBRACK,
  [6782] = 1,
    ACTIONS(966), 1,
      anon_sym_RPAREN,
  [6786] = 1,
    ACTIONS(968), 1,
      anon_sym_LF,
  [6790] = 1,
    ACTIONS(970), 1,
      anon_sym_LF,
  [6794] = 1,
    ACTIONS(972), 1,
      anon_sym_LF,
  [6798] = 1,
    ACTIONS(602), 1,
      anon_sym_LF,
  [6802] = 1,
    ACTIONS(974), 1,
      anon_sym_LF,
  [6806] = 1,
    ACTIONS(598), 1,
      sym__dsep,
  [6810] = 1,
    ACTIONS(976), 1,
      aux_sym_code_token1,
  [6814] = 1,
    ACTIONS(978), 1,
      anon_sym_LF,
  [6818] = 1,
    ACTIONS(581), 1,
      anon_sym_LF,
  [6822] = 1,
    ACTIONS(980), 1,
      anon_sym_LF,
  [6826] = 1,
    ACTIONS(872), 1,
      anon_sym_LF,
  [6830] = 1,
    ACTIONS(982), 1,
      sym__dsep,
  [6834] = 1,
    ACTIONS(718), 1,
      anon_sym_LF,
  [6838] = 1,
    ACTIONS(984), 1,
      anon_sym_LF,
  [6842] = 1,
    ACTIONS(986), 1,
      anon_sym_LF,
  [6846] = 1,
    ACTIONS(456), 1,
      anon_sym_LF,
  [6850] = 1,
    ACTIONS(988), 1,
      anon_sym_LF,
  [6854] = 1,
    ACTIONS(712), 1,
      anon_sym_LF,
  [6858] = 1,
    ACTIONS(990), 1,
      anon_sym_RBRACK,
  [6862] = 1,
    ACTIONS(992), 1,
      anon_sym_LF,
  [6866] = 1,
    ACTIONS(994), 1,
      anon_sym_LF,
  [6870] = 1,
    ACTIONS(996), 1,
      anon_sym_LF,
  [6874] = 1,
    ACTIONS(998), 1,
      sym__quantity,
  [6878] = 1,
    ACTIONS(1000), 1,
      sym__2d,
  [6882] = 1,
    ACTIONS(1002), 1,
      anon_sym_LF,
  [6886] = 1,
    ACTIONS(506), 1,
      anon_sym_LF,
  [6890] = 1,
    ACTIONS(502), 1,
      anon_sym_LF,
  [6894] = 1,
    ACTIONS(1004), 1,
      anon_sym_LF,
  [6898] = 1,
    ACTIONS(1006), 1,
      anon_sym_LF,
  [6902] = 1,
    ACTIONS(1008), 1,
      sym__quantity,
  [6906] = 1,
    ACTIONS(1010), 1,
      anon_sym_LF,
  [6910] = 1,
    ACTIONS(1012), 1,
      anon_sym_EQ,
  [6914] = 1,
    ACTIONS(1014), 1,
      anon_sym_LF,
  [6918] = 1,
    ACTIONS(1016), 1,
      anon_sym_LF,
  [6922] = 1,
    ACTIONS(1018), 1,
      sym__dsep,
  [6926] = 1,
    ACTIONS(1020), 1,
      ts_builtin_sym_end,
  [6930] = 1,
    ACTIONS(1022), 1,
      aux_sym_option_token1,
  [6934] = 1,
    ACTIONS(1024), 1,
      anon_sym_LF,
  [6938] = 1,
    ACTIONS(1026), 1,
      anon_sym_LF,
  [6942] = 1,
    ACTIONS(1028), 1,
      anon_sym_LF,
  [6946] = 1,
    ACTIONS(1030), 1,
      anon_sym_LF,
  [6950] = 1,
    ACTIONS(1032), 1,
      sym_account_name,
  [6954] = 1,
    ACTIONS(1034), 1,
      sym_account_name,
  [6958] = 1,
    ACTIONS(1036), 1,
      anon_sym_RPAREN,
  [6962] = 1,
    ACTIONS(1038), 1,
      anon_sym_LF,
  [6966] = 1,
    ACTIONS(1040), 1,
      anon_sym_LF,
  [6970] = 1,
    ACTIONS(1042), 1,
      anon_sym_LF,
  [6974] = 1,
    ACTIONS(1044), 1,
      anon_sym_LF,
  [6978] = 1,
    ACTIONS(1046), 1,
      anon_sym_LF,
  [6982] = 1,
    ACTIONS(1048), 1,
      sym__2d,
  [6986] = 1,
    ACTIONS(1050), 1,
      anon_sym_LF,
  [6990] = 1,
    ACTIONS(1052), 1,
      anon_sym_LF,
  [6994] = 1,
    ACTIONS(1054), 1,
      anon_sym_LF,
  [6998] = 1,
    ACTIONS(1056), 1,
      sym__quantity,
  [7002] = 1,
    ACTIONS(1058), 1,
      sym__quantity,
  [7006] = 1,
    ACTIONS(1060), 1,
      anon_sym_LF,
  [7010] = 1,
    ACTIONS(436), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 130,
  [SMALL_STATE(4)] = 260,
  [SMALL_STATE(5)] = 313,
  [SMALL_STATE(6)] = 366,
  [SMALL_STATE(7)] = 419,
  [SMALL_STATE(8)] = 471,
  [SMALL_STATE(9)] = 523,
  [SMALL_STATE(10)] = 575,
  [SMALL_STATE(11)] = 622,
  [SMALL_STATE(12)] = 669,
  [SMALL_STATE(13)] = 716,
  [SMALL_STATE(14)] = 762,
  [SMALL_STATE(15)] = 808,
  [SMALL_STATE(16)] = 854,
  [SMALL_STATE(17)] = 900,
  [SMALL_STATE(18)] = 946,
  [SMALL_STATE(19)] = 992,
  [SMALL_STATE(20)] = 1038,
  [SMALL_STATE(21)] = 1075,
  [SMALL_STATE(22)] = 1112,
  [SMALL_STATE(23)] = 1149,
  [SMALL_STATE(24)] = 1186,
  [SMALL_STATE(25)] = 1223,
  [SMALL_STATE(26)] = 1260,
  [SMALL_STATE(27)] = 1297,
  [SMALL_STATE(28)] = 1334,
  [SMALL_STATE(29)] = 1371,
  [SMALL_STATE(30)] = 1408,
  [SMALL_STATE(31)] = 1445,
  [SMALL_STATE(32)] = 1482,
  [SMALL_STATE(33)] = 1519,
  [SMALL_STATE(34)] = 1556,
  [SMALL_STATE(35)] = 1593,
  [SMALL_STATE(36)] = 1630,
  [SMALL_STATE(37)] = 1667,
  [SMALL_STATE(38)] = 1704,
  [SMALL_STATE(39)] = 1741,
  [SMALL_STATE(40)] = 1778,
  [SMALL_STATE(41)] = 1815,
  [SMALL_STATE(42)] = 1852,
  [SMALL_STATE(43)] = 1889,
  [SMALL_STATE(44)] = 1926,
  [SMALL_STATE(45)] = 1963,
  [SMALL_STATE(46)] = 2000,
  [SMALL_STATE(47)] = 2037,
  [SMALL_STATE(48)] = 2074,
  [SMALL_STATE(49)] = 2111,
  [SMALL_STATE(50)] = 2149,
  [SMALL_STATE(51)] = 2187,
  [SMALL_STATE(52)] = 2225,
  [SMALL_STATE(53)] = 2263,
  [SMALL_STATE(54)] = 2301,
  [SMALL_STATE(55)] = 2339,
  [SMALL_STATE(56)] = 2377,
  [SMALL_STATE(57)] = 2415,
  [SMALL_STATE(58)] = 2450,
  [SMALL_STATE(59)] = 2485,
  [SMALL_STATE(60)] = 2520,
  [SMALL_STATE(61)] = 2555,
  [SMALL_STATE(62)] = 2590,
  [SMALL_STATE(63)] = 2625,
  [SMALL_STATE(64)] = 2660,
  [SMALL_STATE(65)] = 2695,
  [SMALL_STATE(66)] = 2730,
  [SMALL_STATE(67)] = 2765,
  [SMALL_STATE(68)] = 2800,
  [SMALL_STATE(69)] = 2835,
  [SMALL_STATE(70)] = 2870,
  [SMALL_STATE(71)] = 2905,
  [SMALL_STATE(72)] = 2940,
  [SMALL_STATE(73)] = 2975,
  [SMALL_STATE(74)] = 3011,
  [SMALL_STATE(75)] = 3067,
  [SMALL_STATE(76)] = 3123,
  [SMALL_STATE(77)] = 3179,
  [SMALL_STATE(78)] = 3209,
  [SMALL_STATE(79)] = 3262,
  [SMALL_STATE(80)] = 3315,
  [SMALL_STATE(81)] = 3368,
  [SMALL_STATE(82)] = 3386,
  [SMALL_STATE(83)] = 3418,
  [SMALL_STATE(84)] = 3450,
  [SMALL_STATE(85)] = 3482,
  [SMALL_STATE(86)] = 3514,
  [SMALL_STATE(87)] = 3546,
  [SMALL_STATE(88)] = 3568,
  [SMALL_STATE(89)] = 3600,
  [SMALL_STATE(90)] = 3632,
  [SMALL_STATE(91)] = 3654,
  [SMALL_STATE(92)] = 3686,
  [SMALL_STATE(93)] = 3718,
  [SMALL_STATE(94)] = 3750,
  [SMALL_STATE(95)] = 3785,
  [SMALL_STATE(96)] = 3817,
  [SMALL_STATE(97)] = 3849,
  [SMALL_STATE(98)] = 3881,
  [SMALL_STATE(99)] = 3913,
  [SMALL_STATE(100)] = 3940,
  [SMALL_STATE(101)] = 3969,
  [SMALL_STATE(102)] = 3998,
  [SMALL_STATE(103)] = 4013,
  [SMALL_STATE(104)] = 4028,
  [SMALL_STATE(105)] = 4057,
  [SMALL_STATE(106)] = 4086,
  [SMALL_STATE(107)] = 4101,
  [SMALL_STATE(108)] = 4125,
  [SMALL_STATE(109)] = 4145,
  [SMALL_STATE(110)] = 4163,
  [SMALL_STATE(111)] = 4186,
  [SMALL_STATE(112)] = 4207,
  [SMALL_STATE(113)] = 4228,
  [SMALL_STATE(114)] = 4251,
  [SMALL_STATE(115)] = 4274,
  [SMALL_STATE(116)] = 4297,
  [SMALL_STATE(117)] = 4320,
  [SMALL_STATE(118)] = 4343,
  [SMALL_STATE(119)] = 4366,
  [SMALL_STATE(120)] = 4389,
  [SMALL_STATE(121)] = 4410,
  [SMALL_STATE(122)] = 4433,
  [SMALL_STATE(123)] = 4446,
  [SMALL_STATE(124)] = 4469,
  [SMALL_STATE(125)] = 4492,
  [SMALL_STATE(126)] = 4515,
  [SMALL_STATE(127)] = 4538,
  [SMALL_STATE(128)] = 4559,
  [SMALL_STATE(129)] = 4582,
  [SMALL_STATE(130)] = 4605,
  [SMALL_STATE(131)] = 4628,
  [SMALL_STATE(132)] = 4651,
  [SMALL_STATE(133)] = 4672,
  [SMALL_STATE(134)] = 4695,
  [SMALL_STATE(135)] = 4718,
  [SMALL_STATE(136)] = 4741,
  [SMALL_STATE(137)] = 4762,
  [SMALL_STATE(138)] = 4778,
  [SMALL_STATE(139)] = 4794,
  [SMALL_STATE(140)] = 4806,
  [SMALL_STATE(141)] = 4822,
  [SMALL_STATE(142)] = 4844,
  [SMALL_STATE(143)] = 4860,
  [SMALL_STATE(144)] = 4882,
  [SMALL_STATE(145)] = 4898,
  [SMALL_STATE(146)] = 4920,
  [SMALL_STATE(147)] = 4936,
  [SMALL_STATE(148)] = 4952,
  [SMALL_STATE(149)] = 4968,
  [SMALL_STATE(150)] = 4988,
  [SMALL_STATE(151)] = 5010,
  [SMALL_STATE(152)] = 5032,
  [SMALL_STATE(153)] = 5052,
  [SMALL_STATE(154)] = 5072,
  [SMALL_STATE(155)] = 5094,
  [SMALL_STATE(156)] = 5116,
  [SMALL_STATE(157)] = 5138,
  [SMALL_STATE(158)] = 5154,
  [SMALL_STATE(159)] = 5176,
  [SMALL_STATE(160)] = 5186,
  [SMALL_STATE(161)] = 5206,
  [SMALL_STATE(162)] = 5218,
  [SMALL_STATE(163)] = 5238,
  [SMALL_STATE(164)] = 5260,
  [SMALL_STATE(165)] = 5282,
  [SMALL_STATE(166)] = 5302,
  [SMALL_STATE(167)] = 5319,
  [SMALL_STATE(168)] = 5336,
  [SMALL_STATE(169)] = 5347,
  [SMALL_STATE(170)] = 5364,
  [SMALL_STATE(171)] = 5381,
  [SMALL_STATE(172)] = 5398,
  [SMALL_STATE(173)] = 5415,
  [SMALL_STATE(174)] = 5430,
  [SMALL_STATE(175)] = 5441,
  [SMALL_STATE(176)] = 5452,
  [SMALL_STATE(177)] = 5469,
  [SMALL_STATE(178)] = 5482,
  [SMALL_STATE(179)] = 5499,
  [SMALL_STATE(180)] = 5516,
  [SMALL_STATE(181)] = 5533,
  [SMALL_STATE(182)] = 5550,
  [SMALL_STATE(183)] = 5561,
  [SMALL_STATE(184)] = 5570,
  [SMALL_STATE(185)] = 5587,
  [SMALL_STATE(186)] = 5604,
  [SMALL_STATE(187)] = 5616,
  [SMALL_STATE(188)] = 5630,
  [SMALL_STATE(189)] = 5644,
  [SMALL_STATE(190)] = 5656,
  [SMALL_STATE(191)] = 5670,
  [SMALL_STATE(192)] = 5682,
  [SMALL_STATE(193)] = 5696,
  [SMALL_STATE(194)] = 5708,
  [SMALL_STATE(195)] = 5718,
  [SMALL_STATE(196)] = 5730,
  [SMALL_STATE(197)] = 5738,
  [SMALL_STATE(198)] = 5752,
  [SMALL_STATE(199)] = 5766,
  [SMALL_STATE(200)] = 5780,
  [SMALL_STATE(201)] = 5794,
  [SMALL_STATE(202)] = 5802,
  [SMALL_STATE(203)] = 5816,
  [SMALL_STATE(204)] = 5830,
  [SMALL_STATE(205)] = 5844,
  [SMALL_STATE(206)] = 5858,
  [SMALL_STATE(207)] = 5872,
  [SMALL_STATE(208)] = 5884,
  [SMALL_STATE(209)] = 5898,
  [SMALL_STATE(210)] = 5906,
  [SMALL_STATE(211)] = 5917,
  [SMALL_STATE(212)] = 5926,
  [SMALL_STATE(213)] = 5937,
  [SMALL_STATE(214)] = 5948,
  [SMALL_STATE(215)] = 5959,
  [SMALL_STATE(216)] = 5970,
  [SMALL_STATE(217)] = 5981,
  [SMALL_STATE(218)] = 5992,
  [SMALL_STATE(219)] = 6003,
  [SMALL_STATE(220)] = 6014,
  [SMALL_STATE(221)] = 6025,
  [SMALL_STATE(222)] = 6032,
  [SMALL_STATE(223)] = 6043,
  [SMALL_STATE(224)] = 6054,
  [SMALL_STATE(225)] = 6065,
  [SMALL_STATE(226)] = 6076,
  [SMALL_STATE(227)] = 6087,
  [SMALL_STATE(228)] = 6096,
  [SMALL_STATE(229)] = 6107,
  [SMALL_STATE(230)] = 6118,
  [SMALL_STATE(231)] = 6129,
  [SMALL_STATE(232)] = 6138,
  [SMALL_STATE(233)] = 6145,
  [SMALL_STATE(234)] = 6156,
  [SMALL_STATE(235)] = 6167,
  [SMALL_STATE(236)] = 6178,
  [SMALL_STATE(237)] = 6187,
  [SMALL_STATE(238)] = 6198,
  [SMALL_STATE(239)] = 6209,
  [SMALL_STATE(240)] = 6220,
  [SMALL_STATE(241)] = 6229,
  [SMALL_STATE(242)] = 6240,
  [SMALL_STATE(243)] = 6251,
  [SMALL_STATE(244)] = 6262,
  [SMALL_STATE(245)] = 6273,
  [SMALL_STATE(246)] = 6284,
  [SMALL_STATE(247)] = 6291,
  [SMALL_STATE(248)] = 6302,
  [SMALL_STATE(249)] = 6313,
  [SMALL_STATE(250)] = 6324,
  [SMALL_STATE(251)] = 6331,
  [SMALL_STATE(252)] = 6338,
  [SMALL_STATE(253)] = 6351,
  [SMALL_STATE(254)] = 6362,
  [SMALL_STATE(255)] = 6373,
  [SMALL_STATE(256)] = 6384,
  [SMALL_STATE(257)] = 6393,
  [SMALL_STATE(258)] = 6404,
  [SMALL_STATE(259)] = 6413,
  [SMALL_STATE(260)] = 6420,
  [SMALL_STATE(261)] = 6431,
  [SMALL_STATE(262)] = 6442,
  [SMALL_STATE(263)] = 6453,
  [SMALL_STATE(264)] = 6464,
  [SMALL_STATE(265)] = 6471,
  [SMALL_STATE(266)] = 6482,
  [SMALL_STATE(267)] = 6493,
  [SMALL_STATE(268)] = 6501,
  [SMALL_STATE(269)] = 6509,
  [SMALL_STATE(270)] = 6517,
  [SMALL_STATE(271)] = 6525,
  [SMALL_STATE(272)] = 6535,
  [SMALL_STATE(273)] = 6543,
  [SMALL_STATE(274)] = 6553,
  [SMALL_STATE(275)] = 6561,
  [SMALL_STATE(276)] = 6569,
  [SMALL_STATE(277)] = 6575,
  [SMALL_STATE(278)] = 6583,
  [SMALL_STATE(279)] = 6591,
  [SMALL_STATE(280)] = 6601,
  [SMALL_STATE(281)] = 6609,
  [SMALL_STATE(282)] = 6617,
  [SMALL_STATE(283)] = 6625,
  [SMALL_STATE(284)] = 6633,
  [SMALL_STATE(285)] = 6641,
  [SMALL_STATE(286)] = 6649,
  [SMALL_STATE(287)] = 6657,
  [SMALL_STATE(288)] = 6667,
  [SMALL_STATE(289)] = 6675,
  [SMALL_STATE(290)] = 6683,
  [SMALL_STATE(291)] = 6691,
  [SMALL_STATE(292)] = 6699,
  [SMALL_STATE(293)] = 6707,
  [SMALL_STATE(294)] = 6713,
  [SMALL_STATE(295)] = 6721,
  [SMALL_STATE(296)] = 6729,
  [SMALL_STATE(297)] = 6739,
  [SMALL_STATE(298)] = 6747,
  [SMALL_STATE(299)] = 6754,
  [SMALL_STATE(300)] = 6759,
  [SMALL_STATE(301)] = 6766,
  [SMALL_STATE(302)] = 6770,
  [SMALL_STATE(303)] = 6774,
  [SMALL_STATE(304)] = 6778,
  [SMALL_STATE(305)] = 6782,
  [SMALL_STATE(306)] = 6786,
  [SMALL_STATE(307)] = 6790,
  [SMALL_STATE(308)] = 6794,
  [SMALL_STATE(309)] = 6798,
  [SMALL_STATE(310)] = 6802,
  [SMALL_STATE(311)] = 6806,
  [SMALL_STATE(312)] = 6810,
  [SMALL_STATE(313)] = 6814,
  [SMALL_STATE(314)] = 6818,
  [SMALL_STATE(315)] = 6822,
  [SMALL_STATE(316)] = 6826,
  [SMALL_STATE(317)] = 6830,
  [SMALL_STATE(318)] = 6834,
  [SMALL_STATE(319)] = 6838,
  [SMALL_STATE(320)] = 6842,
  [SMALL_STATE(321)] = 6846,
  [SMALL_STATE(322)] = 6850,
  [SMALL_STATE(323)] = 6854,
  [SMALL_STATE(324)] = 6858,
  [SMALL_STATE(325)] = 6862,
  [SMALL_STATE(326)] = 6866,
  [SMALL_STATE(327)] = 6870,
  [SMALL_STATE(328)] = 6874,
  [SMALL_STATE(329)] = 6878,
  [SMALL_STATE(330)] = 6882,
  [SMALL_STATE(331)] = 6886,
  [SMALL_STATE(332)] = 6890,
  [SMALL_STATE(333)] = 6894,
  [SMALL_STATE(334)] = 6898,
  [SMALL_STATE(335)] = 6902,
  [SMALL_STATE(336)] = 6906,
  [SMALL_STATE(337)] = 6910,
  [SMALL_STATE(338)] = 6914,
  [SMALL_STATE(339)] = 6918,
  [SMALL_STATE(340)] = 6922,
  [SMALL_STATE(341)] = 6926,
  [SMALL_STATE(342)] = 6930,
  [SMALL_STATE(343)] = 6934,
  [SMALL_STATE(344)] = 6938,
  [SMALL_STATE(345)] = 6942,
  [SMALL_STATE(346)] = 6946,
  [SMALL_STATE(347)] = 6950,
  [SMALL_STATE(348)] = 6954,
  [SMALL_STATE(349)] = 6958,
  [SMALL_STATE(350)] = 6962,
  [SMALL_STATE(351)] = 6966,
  [SMALL_STATE(352)] = 6970,
  [SMALL_STATE(353)] = 6974,
  [SMALL_STATE(354)] = 6978,
  [SMALL_STATE(355)] = 6982,
  [SMALL_STATE(356)] = 6986,
  [SMALL_STATE(357)] = 6990,
  [SMALL_STATE(358)] = 6994,
  [SMALL_STATE(359)] = 6998,
  [SMALL_STATE(360)] = 7002,
  [SMALL_STATE(361)] = 7006,
  [SMALL_STATE(362)] = 7010,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(229),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(353),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(219),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(342),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(342),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(275),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(278),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(280),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(282),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(283),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(285),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(286),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(290),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(317),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(292),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(284),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(277),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(295),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(294),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(288),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(268),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(129),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(129),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(128),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(281),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(340),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 5),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 5),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2), SHIFT_REPEAT(99),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 5),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2), SHIFT_REPEAT(117),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 4),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 4),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_directive_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2), SHIFT_REPEAT(208),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(94),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automated_xact, 5),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automated_xact, 5),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_periodic_xact, 5),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_periodic_xact, 5),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 9),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 9),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_subdirective, 4),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_subdirective, 4),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_subdirective, 4),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_subdirective, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_subdirective, 4),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_subdirective, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 4),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_quantity, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_quantity, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_subdirective, 4),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_subdirective, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_subdirective, 4),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_subdirective, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 3),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_subdirective, 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_subdirective, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 14),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 14),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 13),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 13),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 12),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 12),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 11),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 11),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 10),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 10),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 9),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 9),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 5),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 5),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 3),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 6),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 6),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 4),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 4),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 6),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 6),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 4),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 4),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 5),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 5),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 7),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 7),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 5),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 7),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 7),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(73),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(87),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(90),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(108),
  [535] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(108),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(109),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(120),
  [588] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(358),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [593] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(213),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 3),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(132),
  [625] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(346),
  [628] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(230),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [653] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(147),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 5),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 3),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 3),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(173),
  [695] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(173),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xact_date, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_date, 2),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [752] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(206),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 3),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [771] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(214),
  [774] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(215),
  [777] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(216),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [784] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(218),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1, .production_id = 1),
  [795] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(222),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 5),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xact_date, 2),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 3),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 7),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3, .production_id = 2),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 2),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 5),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval, 1),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_value, 1),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 10),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 5),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 5),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 5),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 9),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 7),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 4),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 8),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 3),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 3),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1020] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 6),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
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
