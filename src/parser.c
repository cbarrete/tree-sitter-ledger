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
#define STATE_COUNT 389
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 142
#define ALIAS_COUNT 0
#define TOKEN_COUNT 89
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
  aux_sym_note_token1 = 73,
  anon_sym_LBRACK = 74,
  anon_sym_RBRACK = 75,
  aux_sym_note_token2 = 76,
  sym_account_name = 77,
  sym__quantity = 78,
  anon_sym_PLUS = 79,
  aux_sym_commodity_token1 = 80,
  aux_sym_commodity_token2 = 81,
  aux_sym_commodity_token3 = 82,
  anon_sym_AT = 83,
  anon_sym_AT_AT = 84,
  anon_sym_ = 85,
  anon_sym_TAB = 86,
  anon_sym_2 = 87,
  anon_sym_TAB2 = 88,
  sym_source_file = 89,
  sym_journal_item = 90,
  sym_block_comment = 91,
  sym_test = 92,
  sym_option = 93,
  sym_option_value = 94,
  sym_directive = 95,
  sym_account_directive = 96,
  sym_account_subdirective = 97,
  sym_commodity_directive = 98,
  sym_commodity_subdirective = 99,
  sym_tag_directive = 100,
  sym_word_directive = 101,
  sym_filename = 102,
  sym_char_directive = 103,
  sym_alias_subdirective = 104,
  sym_default_subdirective = 105,
  sym_format_subdirective = 106,
  sym_note_subdirective = 107,
  sym_assert_subdirective = 108,
  sym_check_subdirective = 109,
  sym_check_in = 110,
  sym_check_out = 111,
  sym_xact = 112,
  sym_plain_xact = 113,
  sym_periodic_xact = 114,
  sym_interval = 115,
  sym_automated_xact = 116,
  sym__xact_date = 117,
  sym_date = 118,
  sym_effective_date = 119,
  sym__4d = 120,
  sym__single_date = 121,
  sym_status = 122,
  sym_code = 123,
  sym_note = 124,
  sym_posting = 125,
  sym_account = 126,
  sym_amount = 127,
  sym_quantity = 128,
  sym_negative_quantity = 129,
  sym_commodity = 130,
  sym_price = 131,
  sym_balance_assertion = 132,
  aux_sym_source_file_repeat1 = 133,
  aux_sym_block_comment_repeat1 = 134,
  aux_sym_account_directive_repeat1 = 135,
  aux_sym_commodity_directive_repeat1 = 136,
  aux_sym_tag_directive_repeat1 = 137,
  aux_sym_plain_xact_repeat1 = 138,
  aux_sym_note_repeat1 = 139,
  aux_sym_note_repeat2 = 140,
  aux_sym_whitespace_repeat1 = 141,
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
  [aux_sym_note_token1] = "note_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_note_token2] = "note_token2",
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
  [aux_sym_note_repeat1] = "note_repeat1",
  [aux_sym_note_repeat2] = "note_repeat2",
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
  [aux_sym_note_token1] = aux_sym_note_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_note_token2] = aux_sym_note_token2,
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
  [aux_sym_note_repeat1] = aux_sym_note_repeat1,
  [aux_sym_note_repeat2] = aux_sym_note_repeat2,
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
  [aux_sym_note_token1] = {
    .visible = false,
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
  [aux_sym_note_token2] = {
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
  [aux_sym_note_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_note_repeat2] = {
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
  [37] = 16,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 20,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 18,
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
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 77,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 27,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 77,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 10,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 20,
  [106] = 18,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 16,
  [111] = 111,
  [112] = 112,
  [113] = 77,
  [114] = 77,
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
  [127] = 127,
  [128] = 116,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 133,
  [136] = 136,
  [137] = 137,
  [138] = 136,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 36,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 35,
  [155] = 149,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 77,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 142,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 151,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 183,
  [188] = 188,
  [189] = 189,
  [190] = 180,
  [191] = 191,
  [192] = 77,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 172,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 77,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 77,
  [229] = 229,
  [230] = 230,
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
  [243] = 77,
  [244] = 77,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 210,
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
  [277] = 77,
  [278] = 278,
  [279] = 221,
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
  [293] = 275,
  [294] = 294,
  [295] = 246,
  [296] = 245,
  [297] = 265,
  [298] = 298,
  [299] = 299,
  [300] = 224,
  [301] = 301,
  [302] = 302,
  [303] = 225,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 255,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 319,
  [321] = 316,
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
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 362,
  [379] = 333,
  [380] = 334,
  [381] = 374,
  [382] = 345,
  [383] = 322,
  [384] = 333,
  [385] = 334,
  [386] = 386,
  [387] = 387,
  [388] = 388,
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
                ? (c < 'g'
                  ? (c >= 'F' && c <= 'Z')
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

static inline bool aux_sym_commodity_token1_character_set_2(int32_t c) {
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

static inline bool aux_sym_commodity_token1_character_set_3(int32_t c) {
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'f'
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

static inline bool aux_sym_commodity_token1_character_set_4(int32_t c) {
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
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
      if (eof) ADVANCE(223);
      if (lookahead == '\t') ADVANCE(632);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == '!') ADVANCE(447);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '(') ADVANCE(449);
      if (lookahead == ')') ADVANCE(452);
      if (lookahead == '*') ADVANCE(445);
      if (lookahead == '+') ADVANCE(465);
      if (lookahead == '-') ADVANCE(309);
      if (lookahead == ';') ADVANCE(455);
      if (lookahead == '=') ADVANCE(314);
      if (lookahead == '@') ADVANCE(623);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'B') ADVANCE(546);
      if (lookahead == 'C') ADVANCE(376);
      if (lookahead == 'D') ADVANCE(372);
      if (lookahead == 'E') ADVANCE(570);
      if (lookahead == 'I') ADVANCE(400);
      if (lookahead == 'N') ADVANCE(368);
      if (lookahead == 'O') ADVANCE(408);
      if (lookahead == 'P') ADVANCE(380);
      if (lookahead == 'Y') ADVANCE(364);
      if (lookahead == '[') ADVANCE(457);
      if (lookahead == ']') ADVANCE(459);
      if (lookahead == 'a') ADVANCE(477);
      if (lookahead == 'b') ADVANCE(531);
      if (lookahead == 'c') ADVANCE(497);
      if (lookahead == 'd') ADVANCE(485);
      if (lookahead == 'e') ADVANCE(470);
      if (lookahead == 'f') ADVANCE(512);
      if (lookahead == 'i') ADVANCE(395);
      if (lookahead == 'n') ADVANCE(513);
      if (lookahead == 'o') ADVANCE(404);
      if (lookahead == 'p') ADVANCE(471);
      if (lookahead == 't') ADVANCE(472);
      if (lookahead == 'y') ADVANCE(468);
      if (lookahead == '~') ADVANCE(411);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(560);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(569);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(540);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(440);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(621);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(579);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(632);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '+') ADVANCE(465);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead == ';') ADVANCE(455);
      if (lookahead == '=') ADVANCE(314);
      if (lookahead == '@') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(621);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(632);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == ';') ADVANCE(455);
      if (lookahead == '=') ADVANCE(314);
      if (lookahead == 'D') ADVANCE(125);
      if (lookahead == 'E') ADVANCE(198);
      if (lookahead == ']') ADVANCE(459);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 'p') ADVANCE(40);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(151);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(171);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(197);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(142);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(141);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(632);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == ' ') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(632);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == ';') ADVANCE(455);
      if (lookahead == '=') ADVANCE(314);
      if (lookahead == '@') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(440);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(621);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(632);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == '+') ADVANCE(465);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'c') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(632);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == '[') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(456);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(632);
      if (lookahead == ' ') ADVANCE(625);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(632);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(460);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(634);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == '!') ADVANCE(448);
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == '*') ADVANCE(446);
      if (lookahead == ';') ADVANCE(455);
      if (lookahead == '[') ADVANCE(458);
      if (lookahead != 0) ADVANCE(463);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(634);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == '[') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(463);
      END_STATE();
    case 11:
      if (lookahead == '\t') ADVANCE(635);
      if (lookahead == ' ') ADVANCE(627);
      if (lookahead == '!') ADVANCE(447);
      if (lookahead == '(') ADVANCE(449);
      if (lookahead == '*') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 12:
      if (lookahead == '\t') ADVANCE(641);
      if (lookahead == ' ') ADVANCE(640);
      END_STATE();
    case 13:
      if (lookahead == '\t') ADVANCE(633);
      if (lookahead == ' ') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead == '\t') ADVANCE(639);
      if (lookahead == ' ') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(345);
      END_STATE();
    case 15:
      if (lookahead == '\t') ADVANCE(637);
      if (lookahead == ' ') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 16:
      if (lookahead == '\t') ADVANCE(638);
      if (lookahead == ' ') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '[') ADVANCE(457);
      if (lookahead != 0) ADVANCE(456);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'c') ADVANCE(23);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(19);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(24);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'h') ADVANCE(20);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'k') ADVANCE(394);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'r') ADVANCE(27);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 's') ADVANCE(26);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 's') ADVANCE(21);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(391);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(323);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(213);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(214);
      END_STATE();
    case 36:
      if (lookahead == 'V') ADVANCE(140);
      if (lookahead == 'v') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(294);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(346);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(332);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(63);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 75:
      if (lookahead == 'k') ADVANCE(392);
      END_STATE();
    case 76:
      if (lookahead == 'k') ADVANCE(64);
      END_STATE();
    case 77:
      if (lookahead == 'k') ADVANCE(66);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(321);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(350);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(341);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(385);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(383);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(330);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 119:
      if (lookahead == 'y') ADVANCE(326);
      END_STATE();
    case 120:
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 130:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(121);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(169);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(195);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(135);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 131:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(170);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(196);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(138);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(137);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 147:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(415);
      END_STATE();
    case 148:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(186);
      END_STATE();
    case 149:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(160);
      END_STATE();
    case 150:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(162);
      END_STATE();
    case 151:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 152:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 153:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(414);
      END_STATE();
    case 154:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(184);
      END_STATE();
    case 155:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(158);
      END_STATE();
    case 156:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(161);
      END_STATE();
    case 157:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 158:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 159:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 160:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 161:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 162:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 163:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 164:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(172);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(146);
      END_STATE();
    case 165:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 166:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 167:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 168:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 169:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 170:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 171:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 172:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 173:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 174:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(416);
      END_STATE();
    case 175:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 176:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 177:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 178:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 179:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 180:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 181:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 182:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 183:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(418);
      END_STATE();
    case 184:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(419);
      END_STATE();
    case 185:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(422);
      END_STATE();
    case 186:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(420);
      END_STATE();
    case 187:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(421);
      END_STATE();
    case 188:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(147);
      END_STATE();
    case 189:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(148);
      END_STATE();
    case 190:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      END_STATE();
    case 191:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(139);
      END_STATE();
    case 192:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      END_STATE();
    case 193:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      END_STATE();
    case 194:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(150);
      END_STATE();
    case 195:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 196:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 197:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 198:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(140);
      END_STATE();
    case 199:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(413);
      END_STATE();
    case 200:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(183);
      END_STATE();
    case 201:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(423);
      END_STATE();
    case 202:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(31);
      END_STATE();
    case 203:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(425);
      END_STATE();
    case 204:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(435);
      END_STATE();
    case 205:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(429);
      END_STATE();
    case 206:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(427);
      END_STATE();
    case 207:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(431);
      END_STATE();
    case 208:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(433);
      END_STATE();
    case 209:
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 216:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(463);
      END_STATE();
    case 217:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(462);
      END_STATE();
    case 218:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(313);
      END_STATE();
    case 219:
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(463);
      END_STATE();
    case 220:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 221:
      if (eof) ADVANCE(223);
      if (lookahead == '\t') ADVANCE(632);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(29);
      if (lookahead == '-') ADVANCE(309);
      if (lookahead == '=') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(361);
      if (lookahead == 'C') ADVANCE(377);
      if (lookahead == 'D') ADVANCE(373);
      if (lookahead == 'I') ADVANCE(401);
      if (lookahead == 'N') ADVANCE(369);
      if (lookahead == 'O') ADVANCE(409);
      if (lookahead == 'P') ADVANCE(381);
      if (lookahead == 'Y') ADVANCE(365);
      if (lookahead == 'a') ADVANCE(583);
      if (lookahead == 'b') ADVANCE(617);
      if (lookahead == 'c') ADVANCE(606);
      if (lookahead == 'd') ADVANCE(590);
      if (lookahead == 'e') ADVANCE(603);
      if (lookahead == 'i') ADVANCE(397);
      if (lookahead == 'o') ADVANCE(405);
      if (lookahead == 't') ADVANCE(580);
      if (lookahead == 'y') ADVANCE(591);
      if (lookahead == '~') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(621);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(620);
      END_STATE();
    case 222:
      if (eof) ADVANCE(223);
      if (lookahead == '\t') ADVANCE(632);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == ' ') ADVANCE(625);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(29);
      if (lookahead == '-') ADVANCE(309);
      if (lookahead == '=') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(359);
      if (lookahead == 'C') ADVANCE(375);
      if (lookahead == 'D') ADVANCE(371);
      if (lookahead == 'I') ADVANCE(399);
      if (lookahead == 'N') ADVANCE(367);
      if (lookahead == 'O') ADVANCE(407);
      if (lookahead == 'P') ADVANCE(379);
      if (lookahead == 'Y') ADVANCE(363);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'b') ADVANCE(115);
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(396);
      if (lookahead == 'o') ADVANCE(403);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == 'y') ADVANCE(57);
      if (lookahead == '~') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_comment);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(636);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == ' ') ADVANCE(628);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(636);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == ' ') ADVANCE(628);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(636);
      if (lookahead == ' ') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(240);
      if (lookahead == 'l') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'f') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'g') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'i') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'k') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'r') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'y') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (eof) ADVANCE(223);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(233);
      if (lookahead == '-') ADVANCE(310);
      if (lookahead == '=') ADVANCE(315);
      if (lookahead == 'A') ADVANCE(362);
      if (lookahead == 'C') ADVANCE(378);
      if (lookahead == 'D') ADVANCE(374);
      if (lookahead == 'I') ADVANCE(402);
      if (lookahead == 'N') ADVANCE(370);
      if (lookahead == 'O') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(382);
      if (lookahead == 'Y') ADVANCE(366);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'b') ADVANCE(286);
      if (lookahead == 'c') ADVANCE(270);
      if (lookahead == 'd') ADVANCE(247);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == 'i') ADVANCE(398);
      if (lookahead == 'o') ADVANCE(406);
      if (lookahead == 't') ADVANCE(234);
      if (lookahead == 'y') ADVANCE(248);
      if (lookahead == '~') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == ' ') ADVANCE(45);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ' ') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_end);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_endcomment);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_endcomment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_test);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_endtest);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_endtest);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
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
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
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
          lookahead != '\n') ADVANCE(292);
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
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_account);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_account);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_eval);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_eval);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_account_subdirective_token1);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_payee);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_payee);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_nomarket);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_nomarket);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_tag);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_tag_directive_token1);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_include);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_alias);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_word_directive_token1);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'a') ADVANCE(533);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(579);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_def);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(573);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_year);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_word_directive_token2);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_bucket);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_A);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(536);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_Y);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_N);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_N);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_N);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(547);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(579);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_D);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_C);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_C);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_C);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_P);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_format);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_note);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_assert);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_assert);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_check);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'n') ADVANCE(480);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(585);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_I);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_I);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_I);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_o);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_O);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_interval_token1);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_interval_token2);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_interval_token3);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_interval_token4);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_interval_token5);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_interval_token6);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_interval_token7);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_interval_token8);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_interval_token9);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_interval_token10);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_interval_token11);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_interval_token11);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_interval_token12);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_interval_token12);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_interval_token13);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_interval_token13);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_interval_token14);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_interval_token14);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_interval_token15);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_interval_token15);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_interval_token16);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_interval_token16);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_interval_token17);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_interval_token17);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__dsep);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__2d);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__2d);
      if (lookahead == ':') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(439);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(438);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(442);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(461);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(461);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(461);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_query);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_note_token1);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(461);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_note_token2);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(461);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(461);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(461);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__quantity);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == ' ') ADVANCE(130);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'A') ADVANCE(564);
      if (lookahead == 'a') ADVANCE(469);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(579);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'E') ADVANCE(536);
      if (lookahead == 'e') ADVANCE(467);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'R') ADVANCE(551);
      if (lookahead == 'r') ADVANCE(351);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'V') ADVANCE(538);
      if (lookahead == 'n') ADVANCE(482);
      if (lookahead == 'v') ADVANCE(473);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'a') ADVANCE(535);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(579);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead == 'e') ADVANCE(518);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(579);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'a') ADVANCE(503);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(563);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(579);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'a') ADVANCE(519);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(579);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'a') ADVANCE(517);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(579);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'a') ADVANCE(524);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(579);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'c') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(498);
      if (lookahead == 's') ADVANCE(520);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'c') ADVANCE(501);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'c') ADVANCE(500);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'c') ADVANCE(504);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'c') ADVANCE(514);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'd') ADVANCE(295);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'd') ADVANCE(499);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'd') ADVANCE(488);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(495);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(547);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(579);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(388);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(325);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(338);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(515);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(523);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(479);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(487);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(528);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(511);
      if (lookahead == 'o') ADVANCE(483);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'f') ADVANCE(347);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'g') ADVANCE(333);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'h') ADVANCE(491);
      if (lookahead == 'o') ADVANCE(507);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'i') ADVANCE(474);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'i') ADVANCE(529);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'k') ADVANCE(393);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'k') ADVANCE(490);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'k') ADVANCE(493);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'l') ADVANCE(322);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'l') ADVANCE(532);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'l') ADVANCE(527);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'm') ADVANCE(494);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'm') ADVANCE(506);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'm') ADVANCE(475);
      if (lookahead == 't') ADVANCE(486);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'm') ADVANCE(476);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'n') ADVANCE(525);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'n') ADVANCE(526);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'o') ADVANCE(516);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'o') ADVANCE(508);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'o') ADVANCE(530);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'r') ADVANCE(522);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'r') ADVANCE(509);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'r') ADVANCE(502);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 's') ADVANCE(521);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 's') ADVANCE(342);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 's') ADVANCE(489);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(303);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(390);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(356);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(386);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(318);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(227);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(384);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(331);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 't') ADVANCE(534);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'u') ADVANCE(510);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'u') ADVANCE(478);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(557);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'u') ADVANCE(484);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'u') ADVANCE(505);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'y') ADVANCE(327);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'y') ADVANCE(492);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(564);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(579);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(562);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(579);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(563);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(548);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(539);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(549);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(565);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(541);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(553);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(555);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(557);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(550);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(552);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(554);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(571);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(573);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(574);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(575);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(576);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(577);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(578);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(561);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(543);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(566);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(568);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(558);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(559);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(567);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(572);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(551);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(556);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(544);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(542);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(545);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(537);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(538);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(424);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(466);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(436);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(426);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(430);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(428);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(432);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(434);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(579);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(596);
      if (lookahead == 'e') ADVANCE(609);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(620);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(608);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(620);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(610);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(620);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(586);
      if (lookahead == 'l') ADVANCE(597);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(599);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(600);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(607);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(298);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(598);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(592);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(595);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(581);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(339);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(612);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(605);
      if (lookahead == 'o') ADVANCE(588);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'f') ADVANCE(348);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'g') ADVANCE(334);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(582);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(615);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(593);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(618);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(594);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(601);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(587);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(613);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(614);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(602);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(616);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(352);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(611);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(343);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(304);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(357);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(319);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(228);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(619);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(604);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(584);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(589);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'y') ADVANCE(328);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(620);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_commodity_token3);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(624);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(323);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(453);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(345);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(323);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(461);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(453);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(454);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(345);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 222},
  [2] = {.lex_state = 222},
  [3] = {.lex_state = 222},
  [4] = {.lex_state = 222},
  [5] = {.lex_state = 222},
  [6] = {.lex_state = 222},
  [7] = {.lex_state = 222},
  [8] = {.lex_state = 222},
  [9] = {.lex_state = 222},
  [10] = {.lex_state = 221},
  [11] = {.lex_state = 222},
  [12] = {.lex_state = 222},
  [13] = {.lex_state = 222},
  [14] = {.lex_state = 222},
  [15] = {.lex_state = 222},
  [16] = {.lex_state = 221},
  [17] = {.lex_state = 222},
  [18] = {.lex_state = 221},
  [19] = {.lex_state = 222},
  [20] = {.lex_state = 221},
  [21] = {.lex_state = 222},
  [22] = {.lex_state = 222},
  [23] = {.lex_state = 222},
  [24] = {.lex_state = 222},
  [25] = {.lex_state = 222},
  [26] = {.lex_state = 222},
  [27] = {.lex_state = 222},
  [28] = {.lex_state = 222},
  [29] = {.lex_state = 222},
  [30] = {.lex_state = 222},
  [31] = {.lex_state = 222},
  [32] = {.lex_state = 222},
  [33] = {.lex_state = 222},
  [34] = {.lex_state = 222},
  [35] = {.lex_state = 222},
  [36] = {.lex_state = 222},
  [37] = {.lex_state = 222},
  [38] = {.lex_state = 222},
  [39] = {.lex_state = 222},
  [40] = {.lex_state = 222},
  [41] = {.lex_state = 222},
  [42] = {.lex_state = 222},
  [43] = {.lex_state = 222},
  [44] = {.lex_state = 222},
  [45] = {.lex_state = 222},
  [46] = {.lex_state = 222},
  [47] = {.lex_state = 222},
  [48] = {.lex_state = 222},
  [49] = {.lex_state = 222},
  [50] = {.lex_state = 222},
  [51] = {.lex_state = 222},
  [52] = {.lex_state = 222},
  [53] = {.lex_state = 293},
  [54] = {.lex_state = 293},
  [55] = {.lex_state = 293},
  [56] = {.lex_state = 293},
  [57] = {.lex_state = 293},
  [58] = {.lex_state = 293},
  [59] = {.lex_state = 293},
  [60] = {.lex_state = 293},
  [61] = {.lex_state = 222},
  [62] = {.lex_state = 222},
  [63] = {.lex_state = 222},
  [64] = {.lex_state = 222},
  [65] = {.lex_state = 222},
  [66] = {.lex_state = 222},
  [67] = {.lex_state = 222},
  [68] = {.lex_state = 222},
  [69] = {.lex_state = 222},
  [70] = {.lex_state = 222},
  [71] = {.lex_state = 222},
  [72] = {.lex_state = 222},
  [73] = {.lex_state = 222},
  [74] = {.lex_state = 222},
  [75] = {.lex_state = 222},
  [76] = {.lex_state = 222},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 11},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 230},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 222},
  [119] = {.lex_state = 222},
  [120] = {.lex_state = 222},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 230},
  [123] = {.lex_state = 231},
  [124] = {.lex_state = 231},
  [125] = {.lex_state = 230},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 231},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 231},
  [131] = {.lex_state = 231},
  [132] = {.lex_state = 230},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 222},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 230},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 222},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 10},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 10},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 11},
  [164] = {.lex_state = 10},
  [165] = {.lex_state = 10},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 17},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 11},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 231},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 17},
  [183] = {.lex_state = 231},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 230},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 230},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 17},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 15},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 222},
  [207] = {.lex_state = 15},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 11},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 232},
  [221] = {.lex_state = 232},
  [222] = {.lex_state = 11},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 8},
  [225] = {.lex_state = 8},
  [226] = {.lex_state = 13},
  [227] = {.lex_state = 13},
  [228] = {.lex_state = 16},
  [229] = {.lex_state = 3},
  [230] = {.lex_state = 232},
  [231] = {.lex_state = 11},
  [232] = {.lex_state = 11},
  [233] = {.lex_state = 3},
  [234] = {.lex_state = 2},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 222},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 11},
  [239] = {.lex_state = 3},
  [240] = {.lex_state = 11},
  [241] = {.lex_state = 11},
  [242] = {.lex_state = 2},
  [243] = {.lex_state = 15},
  [244] = {.lex_state = 13},
  [245] = {.lex_state = 8},
  [246] = {.lex_state = 8},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 2},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 13},
  [252] = {.lex_state = 13},
  [253] = {.lex_state = 2},
  [254] = {.lex_state = 13},
  [255] = {.lex_state = 8},
  [256] = {.lex_state = 2},
  [257] = {.lex_state = 3},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 11},
  [260] = {.lex_state = 11},
  [261] = {.lex_state = 3},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 2},
  [264] = {.lex_state = 2},
  [265] = {.lex_state = 8},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 15},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 14},
  [270] = {.lex_state = 3},
  [271] = {.lex_state = 3},
  [272] = {.lex_state = 7},
  [273] = {.lex_state = 2},
  [274] = {.lex_state = 11},
  [275] = {.lex_state = 8},
  [276] = {.lex_state = 3},
  [277] = {.lex_state = 14},
  [278] = {.lex_state = 16},
  [279] = {.lex_state = 232},
  [280] = {.lex_state = 232},
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
  [293] = {.lex_state = 18},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 18},
  [296] = {.lex_state = 18},
  [297] = {.lex_state = 18},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 18},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 18},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 18},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 220},
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
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 1},
  [334] = {.lex_state = 1},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 2},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 219},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 219},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 3},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 220},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 2},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 3},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 218},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 2},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 3},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 1},
  [380] = {.lex_state = 1},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 1},
  [385] = {.lex_state = 1},
  [386] = {.lex_state = 451},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
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
    [aux_sym_tag_directive_token1] = ACTIONS(1),
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
    [aux_sym_commodity_token1] = ACTIONS(1),
    [aux_sym_commodity_token2] = ACTIONS(1),
    [aux_sym_commodity_token3] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(347),
    [sym_journal_item] = STATE(3),
    [sym_block_comment] = STATE(71),
    [sym_test] = STATE(71),
    [sym_option] = STATE(64),
    [sym_directive] = STATE(71),
    [sym_account_directive] = STATE(64),
    [sym_commodity_directive] = STATE(64),
    [sym_tag_directive] = STATE(64),
    [sym_word_directive] = STATE(352),
    [sym_char_directive] = STATE(352),
    [sym_check_in] = STATE(353),
    [sym_check_out] = STATE(353),
    [sym_xact] = STATE(71),
    [sym_plain_xact] = STATE(68),
    [sym_periodic_xact] = STATE(68),
    [sym_automated_xact] = STATE(68),
    [sym__xact_date] = STATE(193),
    [sym_date] = STATE(174),
    [sym__4d] = STATE(363),
    [sym__single_date] = STATE(173),
    [aux_sym_source_file_repeat1] = STATE(3),
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
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      anon_sym_LF,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_comment,
    ACTIONS(72), 1,
      anon_sym_end,
    ACTIONS(75), 1,
      anon_sym_test,
    ACTIONS(78), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      anon_sym_DASH_DASH,
    ACTIONS(84), 1,
      anon_sym_EQ,
    ACTIONS(87), 1,
      anon_sym_account,
    ACTIONS(90), 1,
      anon_sym_commodity,
    ACTIONS(93), 1,
      anon_sym_tag,
    ACTIONS(96), 1,
      anon_sym_include,
    ACTIONS(99), 1,
      anon_sym_alias,
    ACTIONS(102), 1,
      anon_sym_def,
    ACTIONS(105), 1,
      anon_sym_year,
    ACTIONS(108), 1,
      aux_sym_word_directive_token2,
    ACTIONS(111), 1,
      anon_sym_bucket,
    ACTIONS(114), 1,
      anon_sym_A,
    ACTIONS(117), 1,
      anon_sym_Y,
    ACTIONS(120), 1,
      anon_sym_N,
    ACTIONS(123), 1,
      anon_sym_D,
    ACTIONS(126), 1,
      anon_sym_C,
    ACTIONS(129), 1,
      anon_sym_P,
    ACTIONS(132), 1,
      anon_sym_i,
    ACTIONS(135), 1,
      anon_sym_I,
    ACTIONS(141), 1,
      anon_sym_TILDE,
    ACTIONS(144), 1,
      sym__2d,
    STATE(173), 1,
      sym__single_date,
    STATE(174), 1,
      sym_date,
    STATE(193), 1,
      sym__xact_date,
    STATE(363), 1,
      sym__4d,
    ACTIONS(138), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(352), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(353), 2,
      sym_check_in,
      sym_check_out,
    STATE(68), 3,
      sym_plain_xact,
      sym_periodic_xact,
      sym_automated_xact,
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
  [130] = 39,
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
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 1,
      anon_sym_LF,
    STATE(173), 1,
      sym__single_date,
    STATE(174), 1,
      sym_date,
    STATE(193), 1,
      sym__xact_date,
    STATE(363), 1,
      sym__4d,
    ACTIONS(55), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(352), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(353), 2,
      sym_check_in,
      sym_check_out,
    STATE(68), 3,
      sym_plain_xact,
      sym_periodic_xact,
      sym_automated_xact,
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
  [260] = 6,
    STATE(104), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(155), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    ACTIONS(153), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(30), 5,
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
    STATE(104), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(162), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    ACTIONS(160), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(30), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_note_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
    ACTIONS(158), 27,
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
    STATE(104), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(162), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    ACTIONS(166), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(30), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_note_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
    ACTIONS(164), 27,
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
    STATE(141), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(172), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(170), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(34), 4,
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
    STATE(141), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(179), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(9), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(177), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(34), 4,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_note_subdirective,
    ACTIONS(175), 27,
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
    STATE(141), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(179), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(183), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(34), 4,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_note_subdirective,
    ACTIONS(181), 27,
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
  [575] = 7,
    ACTIONS(189), 1,
      aux_sym_commodity_token1,
    STATE(35), 1,
      sym_commodity,
    STATE(149), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(191), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
    ACTIONS(193), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(185), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      anon_sym_TILDE,
    ACTIONS(187), 23,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
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
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym__2d,
  [627] = 5,
    STATE(206), 1,
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
  [674] = 5,
    STATE(206), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(205), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(203), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(12), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(201), 27,
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
  [721] = 5,
    STATE(206), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(199), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(210), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(11), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
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
  [768] = 5,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(23), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(214), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(212), 27,
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
  [814] = 5,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(23), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(220), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(218), 27,
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
  [860] = 2,
    ACTIONS(222), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      anon_sym_TILDE,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(224), 24,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
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
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym__2d,
      aux_sym_commodity_token1,
  [900] = 5,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(23), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(228), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(226), 27,
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
  [946] = 2,
    ACTIONS(230), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      anon_sym_TILDE,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(232), 24,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
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
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym__2d,
      aux_sym_commodity_token1,
  [986] = 5,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(23), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(236), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(234), 27,
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
  [1032] = 2,
    ACTIONS(238), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      anon_sym_TILDE,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(240), 24,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
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
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym__2d,
      aux_sym_commodity_token1,
  [1072] = 5,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(23), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(244), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(242), 27,
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
  [1118] = 5,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(23), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(248), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(246), 27,
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
  [1164] = 5,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(254), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(23), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(252), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(250), 27,
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
  [1210] = 2,
    ACTIONS(259), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(257), 29,
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
  [1247] = 2,
    ACTIONS(263), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(261), 29,
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
  [1284] = 2,
    ACTIONS(267), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(265), 29,
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
  [1321] = 2,
    ACTIONS(271), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(269), 29,
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
  [1358] = 2,
    ACTIONS(275), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(273), 29,
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
  [1395] = 2,
    ACTIONS(279), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(277), 29,
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
  [1432] = 2,
    ACTIONS(283), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(281), 29,
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
  [1469] = 2,
    ACTIONS(287), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(285), 29,
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
  [1506] = 2,
    ACTIONS(291), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(289), 29,
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
  [1543] = 2,
    ACTIONS(295), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(293), 29,
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
  [1580] = 2,
    ACTIONS(299), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(297), 29,
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
  [1617] = 2,
    ACTIONS(303), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(301), 29,
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
  [1654] = 2,
    ACTIONS(307), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(305), 29,
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
  [1691] = 2,
    ACTIONS(224), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(222), 29,
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
  [1728] = 2,
    ACTIONS(311), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(309), 29,
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
  [1765] = 2,
    ACTIONS(315), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(313), 29,
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
  [1802] = 2,
    ACTIONS(319), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(317), 29,
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
  [1839] = 2,
    ACTIONS(323), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(321), 29,
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
  [1876] = 2,
    ACTIONS(327), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(325), 29,
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
  [1913] = 2,
    ACTIONS(331), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(329), 29,
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
  [1950] = 2,
    ACTIONS(335), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(333), 29,
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
  [1987] = 2,
    ACTIONS(240), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(238), 29,
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
  [2024] = 2,
    ACTIONS(339), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(337), 29,
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
  [2061] = 2,
    ACTIONS(343), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(341), 29,
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
  [2098] = 2,
    ACTIONS(347), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(345), 29,
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
  [2135] = 2,
    ACTIONS(351), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(349), 29,
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
  [2172] = 2,
    ACTIONS(355), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(353), 29,
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
  [2209] = 2,
    ACTIONS(232), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(230), 29,
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
  [2246] = 2,
    ACTIONS(359), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(357), 29,
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
  [2283] = 3,
    ACTIONS(365), 1,
      aux_sym_block_comment_token1,
    ACTIONS(361), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(363), 27,
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
  [2321] = 3,
    ACTIONS(371), 1,
      aux_sym_block_comment_token1,
    ACTIONS(367), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(369), 27,
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
  [2359] = 3,
    ACTIONS(377), 1,
      aux_sym_block_comment_token1,
    ACTIONS(373), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(375), 27,
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
  [2397] = 3,
    ACTIONS(383), 1,
      aux_sym_block_comment_token1,
    ACTIONS(379), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(381), 27,
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
  [2435] = 3,
    ACTIONS(389), 1,
      aux_sym_block_comment_token1,
    ACTIONS(385), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(387), 27,
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
  [2473] = 3,
    ACTIONS(395), 1,
      aux_sym_block_comment_token1,
    ACTIONS(391), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(393), 27,
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
  [2511] = 3,
    ACTIONS(401), 1,
      aux_sym_block_comment_token1,
    ACTIONS(397), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(399), 27,
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
  [2549] = 3,
    ACTIONS(407), 1,
      aux_sym_block_comment_token1,
    ACTIONS(403), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(405), 27,
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
  [2587] = 2,
    ACTIONS(411), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(409), 27,
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
  [2622] = 2,
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
  [2657] = 2,
    ACTIONS(393), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(391), 27,
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
  [2692] = 2,
    ACTIONS(415), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(413), 27,
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
  [2727] = 2,
    ACTIONS(419), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(417), 27,
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
  [2762] = 2,
    ACTIONS(399), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(397), 27,
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
  [2797] = 2,
    ACTIONS(423), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(421), 27,
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
  [2832] = 2,
    ACTIONS(427), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(425), 27,
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
  [2867] = 2,
    ACTIONS(431), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(429), 27,
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
  [2902] = 2,
    ACTIONS(369), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(367), 27,
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
  [2937] = 2,
    ACTIONS(435), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(433), 27,
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
  [2972] = 2,
    ACTIONS(387), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(385), 27,
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
  [3007] = 2,
    ACTIONS(439), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(437), 27,
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
  [3042] = 2,
    ACTIONS(381), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(379), 27,
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
  [3077] = 2,
    ACTIONS(375), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(373), 27,
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
  [3112] = 2,
    ACTIONS(363), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(361), 27,
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
  [3147] = 3,
    STATE(77), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(443), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(441), 26,
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
  [3183] = 17,
    ACTIONS(446), 1,
      anon_sym_LF,
    ACTIONS(448), 1,
      anon_sym_DASH,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(454), 1,
      sym__quantity,
    ACTIONS(456), 1,
      anon_sym_PLUS,
    ACTIONS(460), 1,
      anon_sym_AT,
    ACTIONS(462), 1,
      anon_sym_AT_AT,
    STATE(84), 1,
      aux_sym_whitespace_repeat1,
    STATE(103), 1,
      sym_amount,
    STATE(117), 1,
      sym_price,
    STATE(135), 1,
      sym_commodity,
    STATE(188), 1,
      sym_balance_assertion,
    STATE(387), 1,
      sym_note,
    ACTIONS(464), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(458), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3239] = 17,
    ACTIONS(448), 1,
      anon_sym_DASH,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(454), 1,
      sym__quantity,
    ACTIONS(456), 1,
      anon_sym_PLUS,
    ACTIONS(460), 1,
      anon_sym_AT,
    ACTIONS(462), 1,
      anon_sym_AT_AT,
    ACTIONS(466), 1,
      anon_sym_LF,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    STATE(101), 1,
      sym_amount,
    STATE(121), 1,
      sym_price,
    STATE(135), 1,
      sym_commodity,
    STATE(185), 1,
      sym_balance_assertion,
    STATE(369), 1,
      sym_note,
    ACTIONS(468), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(458), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3295] = 4,
    STATE(77), 1,
      aux_sym_whitespace_repeat1,
    STATE(304), 1,
      sym_interval,
    ACTIONS(472), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(470), 17,
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
  [3325] = 17,
    ACTIONS(448), 1,
      anon_sym_DASH,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(454), 1,
      sym__quantity,
    ACTIONS(456), 1,
      anon_sym_PLUS,
    ACTIONS(460), 1,
      anon_sym_AT,
    ACTIONS(462), 1,
      anon_sym_AT_AT,
    ACTIONS(474), 1,
      anon_sym_LF,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    STATE(100), 1,
      sym_amount,
    STATE(115), 1,
      sym_price,
    STATE(135), 1,
      sym_commodity,
    STATE(179), 1,
      sym_balance_assertion,
    STATE(370), 1,
      sym_note,
    ACTIONS(476), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(458), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3381] = 16,
    ACTIONS(448), 1,
      anon_sym_DASH,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(454), 1,
      sym__quantity,
    ACTIONS(456), 1,
      anon_sym_PLUS,
    ACTIONS(460), 1,
      anon_sym_AT,
    ACTIONS(462), 1,
      anon_sym_AT_AT,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(102), 1,
      sym_amount,
    STATE(126), 1,
      sym_price,
    STATE(135), 1,
      sym_commodity,
    STATE(176), 1,
      sym_balance_assertion,
    STATE(358), 1,
      sym_note,
    ACTIONS(478), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(458), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3434] = 16,
    ACTIONS(448), 1,
      anon_sym_DASH,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(454), 1,
      sym__quantity,
    ACTIONS(456), 1,
      anon_sym_PLUS,
    ACTIONS(460), 1,
      anon_sym_AT,
    ACTIONS(462), 1,
      anon_sym_AT_AT,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(103), 1,
      sym_amount,
    STATE(117), 1,
      sym_price,
    STATE(135), 1,
      sym_commodity,
    STATE(188), 1,
      sym_balance_assertion,
    STATE(387), 1,
      sym_note,
    ACTIONS(478), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(458), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3487] = 16,
    ACTIONS(448), 1,
      anon_sym_DASH,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(454), 1,
      sym__quantity,
    ACTIONS(456), 1,
      anon_sym_PLUS,
    ACTIONS(460), 1,
      anon_sym_AT,
    ACTIONS(462), 1,
      anon_sym_AT_AT,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(100), 1,
      sym_amount,
    STATE(115), 1,
      sym_price,
    STATE(135), 1,
      sym_commodity,
    STATE(179), 1,
      sym_balance_assertion,
    STATE(370), 1,
      sym_note,
    ACTIONS(478), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(458), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3540] = 9,
    ACTIONS(448), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      sym__quantity,
    ACTIONS(456), 1,
      anon_sym_PLUS,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(135), 1,
      sym_commodity,
    STATE(337), 1,
      sym_amount,
    ACTIONS(480), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(458), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3572] = 4,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(482), 2,
      sym__2d,
      anon_sym_AT,
    ACTIONS(484), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(441), 8,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      sym_time,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
  [3594] = 9,
    ACTIONS(448), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      sym__quantity,
    ACTIONS(456), 1,
      anon_sym_PLUS,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(135), 1,
      sym_commodity,
    STATE(366), 1,
      sym_amount,
    ACTIONS(478), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(458), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3626] = 9,
    ACTIONS(448), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      sym__quantity,
    ACTIONS(456), 1,
      anon_sym_PLUS,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(135), 1,
      sym_commodity,
    STATE(223), 1,
      sym_amount,
    ACTIONS(478), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(458), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3658] = 9,
    ACTIONS(448), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      sym__quantity,
    ACTIONS(456), 1,
      anon_sym_PLUS,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(135), 1,
      sym_commodity,
    STATE(195), 1,
      sym_amount,
    ACTIONS(478), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(458), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3690] = 2,
    ACTIONS(271), 1,
      anon_sym_AT,
    ACTIONS(269), 12,
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
  [3708] = 9,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(489), 1,
      sym__quantity,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    STATE(38), 1,
      sym_amount,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(133), 1,
      sym_commodity,
    ACTIONS(478), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(10), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(458), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3740] = 9,
    ACTIONS(448), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      sym__quantity,
    ACTIONS(456), 1,
      anon_sym_PLUS,
    STATE(93), 1,
      aux_sym_whitespace_repeat1,
    STATE(135), 1,
      sym_commodity,
    STATE(366), 1,
      sym_amount,
    ACTIONS(493), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(458), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3772] = 9,
    ACTIONS(448), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      sym__quantity,
    ACTIONS(456), 1,
      anon_sym_PLUS,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(135), 1,
      sym_commodity,
    STATE(323), 1,
      sym_amount,
    ACTIONS(478), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(458), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3804] = 9,
    ACTIONS(448), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      sym__quantity,
    ACTIONS(456), 1,
      anon_sym_PLUS,
    STATE(88), 1,
      aux_sym_whitespace_repeat1,
    STATE(135), 1,
      sym_commodity,
    STATE(268), 1,
      sym_amount,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(458), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3836] = 4,
    ACTIONS(482), 1,
      anon_sym_AT,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(497), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(441), 9,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym__quantity,
      anon_sym_PLUS,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
  [3858] = 9,
    ACTIONS(448), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      sym__quantity,
    ACTIONS(456), 1,
      anon_sym_PLUS,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(135), 1,
      sym_commodity,
    STATE(204), 1,
      sym_amount,
    ACTIONS(500), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(458), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3890] = 9,
    ACTIONS(448), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      sym__quantity,
    ACTIONS(456), 1,
      anon_sym_PLUS,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(135), 1,
      sym_commodity,
    STATE(331), 1,
      sym_amount,
    ACTIONS(478), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(458), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3922] = 11,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      sym_account_name,
    ACTIONS(510), 1,
      anon_sym_,
    ACTIONS(512), 1,
      anon_sym_TAB,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    STATE(168), 1,
      sym_status,
    STATE(229), 1,
      sym_account,
    STATE(346), 1,
      sym_note,
    ACTIONS(502), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [3957] = 6,
    ACTIONS(187), 1,
      anon_sym_AT,
    STATE(154), 1,
      sym_commodity,
    STATE(155), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(514), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(458), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
    ACTIONS(185), 4,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
  [3982] = 10,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(460), 1,
      anon_sym_AT,
    ACTIONS(462), 1,
      anon_sym_AT_AT,
    ACTIONS(516), 1,
      anon_sym_LF,
    STATE(109), 1,
      aux_sym_whitespace_repeat1,
    STATE(126), 1,
      sym_price,
    STATE(176), 1,
      sym_balance_assertion,
    STATE(358), 1,
      sym_note,
    ACTIONS(518), 2,
      anon_sym_,
      anon_sym_TAB,
  [4014] = 10,
    ACTIONS(446), 1,
      anon_sym_LF,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(460), 1,
      anon_sym_AT,
    ACTIONS(462), 1,
      anon_sym_AT_AT,
    STATE(108), 1,
      aux_sym_whitespace_repeat1,
    STATE(117), 1,
      sym_price,
    STATE(188), 1,
      sym_balance_assertion,
    STATE(387), 1,
      sym_note,
    ACTIONS(520), 2,
      anon_sym_,
      anon_sym_TAB,
  [4046] = 10,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(460), 1,
      anon_sym_AT,
    ACTIONS(462), 1,
      anon_sym_AT_AT,
    ACTIONS(522), 1,
      anon_sym_LF,
    STATE(107), 1,
      aux_sym_whitespace_repeat1,
    STATE(127), 1,
      sym_price,
    STATE(191), 1,
      sym_balance_assertion,
    STATE(344), 1,
      sym_note,
    ACTIONS(524), 2,
      anon_sym_,
      anon_sym_TAB,
  [4078] = 10,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(460), 1,
      anon_sym_AT,
    ACTIONS(462), 1,
      anon_sym_AT_AT,
    ACTIONS(474), 1,
      anon_sym_LF,
    STATE(111), 1,
      aux_sym_whitespace_repeat1,
    STATE(115), 1,
      sym_price,
    STATE(179), 1,
      sym_balance_assertion,
    STATE(370), 1,
      sym_note,
    ACTIONS(526), 2,
      anon_sym_,
      anon_sym_TAB,
  [4110] = 8,
    ACTIONS(530), 1,
      anon_sym_alias,
    ACTIONS(532), 1,
      anon_sym_default,
    ACTIONS(534), 1,
      anon_sym_note,
    ACTIONS(536), 1,
      anon_sym_assert,
    ACTIONS(538), 1,
      anon_sym_check,
    STATE(77), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(472), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(528), 2,
      anon_sym_eval,
      anon_sym_payee,
  [4137] = 2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(238), 9,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [4152] = 2,
    ACTIONS(232), 1,
      anon_sym_AT,
    ACTIONS(230), 9,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [4167] = 9,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(460), 1,
      anon_sym_AT,
    ACTIONS(462), 1,
      anon_sym_AT_AT,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(139), 1,
      sym_price,
    STATE(189), 1,
      sym_balance_assertion,
    STATE(355), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [4196] = 9,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(460), 1,
      anon_sym_AT,
    ACTIONS(462), 1,
      anon_sym_AT_AT,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(115), 1,
      sym_price,
    STATE(179), 1,
      sym_balance_assertion,
    STATE(370), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [4225] = 9,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(460), 1,
      anon_sym_AT,
    ACTIONS(462), 1,
      anon_sym_AT_AT,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(127), 1,
      sym_price,
    STATE(191), 1,
      sym_balance_assertion,
    STATE(344), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [4254] = 2,
    ACTIONS(224), 1,
      anon_sym_AT,
    ACTIONS(222), 9,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [4269] = 9,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(460), 1,
      anon_sym_AT,
    ACTIONS(462), 1,
      anon_sym_AT_AT,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(126), 1,
      sym_price,
    STATE(176), 1,
      sym_balance_assertion,
    STATE(358), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [4298] = 7,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
    ACTIONS(546), 1,
      sym_payee,
    STATE(163), 1,
      aux_sym_whitespace_repeat1,
    STATE(178), 1,
      sym_code,
    STATE(184), 1,
      sym_status,
    ACTIONS(542), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(548), 2,
      anon_sym_,
      anon_sym_TAB,
  [4322] = 4,
    STATE(113), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(482), 2,
      anon_sym_assert,
      anon_sym_check,
    ACTIONS(550), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(441), 4,
      anon_sym_DASH,
      aux_sym_tag_directive_token1,
      sym__quantity,
      anon_sym_PLUS,
  [4340] = 5,
    ACTIONS(441), 1,
      anon_sym_SEMI,
    ACTIONS(553), 1,
      anon_sym_,
    ACTIONS(556), 1,
      anon_sym_TAB,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(482), 5,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [4360] = 7,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(516), 1,
      anon_sym_LF,
    STATE(169), 1,
      aux_sym_whitespace_repeat1,
    STATE(176), 1,
      sym_balance_assertion,
    STATE(358), 1,
      sym_note,
    ACTIONS(559), 2,
      anon_sym_,
      anon_sym_TAB,
  [4383] = 6,
    ACTIONS(561), 1,
      anon_sym_LF,
    ACTIONS(564), 1,
      aux_sym_block_comment_token1,
    STATE(116), 1,
      aux_sym_block_comment_repeat1,
    STATE(279), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(567), 2,
      anon_sym_end,
      anon_sym_endtest,
    ACTIONS(569), 2,
      anon_sym_,
      anon_sym_TAB,
  [4404] = 7,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(474), 1,
      anon_sym_LF,
    STATE(170), 1,
      aux_sym_whitespace_repeat1,
    STATE(179), 1,
      sym_balance_assertion,
    STATE(370), 1,
      sym_note,
    ACTIONS(572), 2,
      anon_sym_,
      anon_sym_TAB,
  [4427] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(173), 1,
      sym__single_date,
    STATE(287), 1,
      sym_date,
    STATE(363), 1,
      sym__4d,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [4450] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(173), 1,
      sym__single_date,
    STATE(263), 1,
      sym_date,
    STATE(363), 1,
      sym__4d,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [4473] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(173), 1,
      sym__single_date,
    STATE(273), 1,
      sym_date,
    STATE(363), 1,
      sym__4d,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [4496] = 7,
    ACTIONS(446), 1,
      anon_sym_LF,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    STATE(148), 1,
      aux_sym_whitespace_repeat1,
    STATE(188), 1,
      sym_balance_assertion,
    STATE(387), 1,
      sym_note,
    ACTIONS(574), 2,
      anon_sym_,
      anon_sym_TAB,
  [4519] = 7,
    ACTIONS(576), 1,
      anon_sym_LF,
    ACTIONS(578), 1,
      aux_sym_block_comment_token1,
    ACTIONS(580), 1,
      anon_sym_end,
    ACTIONS(582), 1,
      anon_sym_endtest,
    STATE(125), 1,
      aux_sym_block_comment_repeat1,
    STATE(279), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(584), 2,
      anon_sym_,
      anon_sym_TAB,
  [4542] = 7,
    ACTIONS(586), 1,
      anon_sym_LF,
    ACTIONS(588), 1,
      aux_sym_block_comment_token1,
    ACTIONS(590), 1,
      anon_sym_end,
    ACTIONS(592), 1,
      anon_sym_endcomment,
    STATE(124), 1,
      aux_sym_block_comment_repeat1,
    STATE(221), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(594), 2,
      anon_sym_,
      anon_sym_TAB,
  [4565] = 7,
    ACTIONS(389), 1,
      anon_sym_endcomment,
    ACTIONS(588), 1,
      aux_sym_block_comment_token1,
    ACTIONS(596), 1,
      anon_sym_LF,
    ACTIONS(598), 1,
      anon_sym_end,
    STATE(128), 1,
      aux_sym_block_comment_repeat1,
    STATE(221), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(594), 2,
      anon_sym_,
      anon_sym_TAB,
  [4588] = 7,
    ACTIONS(371), 1,
      anon_sym_endtest,
    ACTIONS(578), 1,
      aux_sym_block_comment_token1,
    ACTIONS(600), 1,
      anon_sym_LF,
    ACTIONS(602), 1,
      anon_sym_end,
    STATE(116), 1,
      aux_sym_block_comment_repeat1,
    STATE(279), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(584), 2,
      anon_sym_,
      anon_sym_TAB,
  [4611] = 7,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(522), 1,
      anon_sym_LF,
    STATE(166), 1,
      aux_sym_whitespace_repeat1,
    STATE(191), 1,
      sym_balance_assertion,
    STATE(344), 1,
      sym_note,
    ACTIONS(604), 2,
      anon_sym_,
      anon_sym_TAB,
  [4634] = 7,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(606), 1,
      anon_sym_LF,
    STATE(150), 1,
      aux_sym_whitespace_repeat1,
    STATE(189), 1,
      sym_balance_assertion,
    STATE(355), 1,
      sym_note,
    ACTIONS(608), 2,
      anon_sym_,
      anon_sym_TAB,
  [4657] = 6,
    ACTIONS(610), 1,
      anon_sym_LF,
    ACTIONS(613), 1,
      aux_sym_block_comment_token1,
    STATE(128), 1,
      aux_sym_block_comment_repeat1,
    STATE(221), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(567), 2,
      anon_sym_end,
      anon_sym_endcomment,
    ACTIONS(616), 2,
      anon_sym_,
      anon_sym_TAB,
  [4678] = 2,
    ACTIONS(621), 1,
      sym__dsep,
    ACTIONS(619), 7,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_TAB,
  [4691] = 7,
    ACTIONS(395), 1,
      anon_sym_endcomment,
    ACTIONS(588), 1,
      aux_sym_block_comment_token1,
    ACTIONS(623), 1,
      anon_sym_LF,
    ACTIONS(625), 1,
      anon_sym_end,
    STATE(131), 1,
      aux_sym_block_comment_repeat1,
    STATE(221), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(594), 2,
      anon_sym_,
      anon_sym_TAB,
  [4714] = 7,
    ACTIONS(407), 1,
      anon_sym_endcomment,
    ACTIONS(588), 1,
      aux_sym_block_comment_token1,
    ACTIONS(596), 1,
      anon_sym_LF,
    ACTIONS(627), 1,
      anon_sym_end,
    STATE(128), 1,
      aux_sym_block_comment_repeat1,
    STATE(221), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(594), 2,
      anon_sym_,
      anon_sym_TAB,
  [4737] = 7,
    ACTIONS(377), 1,
      anon_sym_endtest,
    ACTIONS(578), 1,
      aux_sym_block_comment_token1,
    ACTIONS(629), 1,
      anon_sym_LF,
    ACTIONS(631), 1,
      anon_sym_end,
    STATE(137), 1,
      aux_sym_block_comment_repeat1,
    STATE(279), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(584), 2,
      anon_sym_,
      anon_sym_TAB,
  [4760] = 6,
    ACTIONS(633), 1,
      anon_sym_DASH,
    ACTIONS(635), 1,
      sym__quantity,
    ACTIONS(637), 1,
      anon_sym_PLUS,
    STATE(138), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(639), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(35), 2,
      sym_quantity,
      sym_negative_quantity,
  [4781] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    STATE(173), 1,
      sym__single_date,
    STATE(248), 1,
      sym_date,
    STATE(363), 1,
      sym__4d,
    ACTIONS(641), 2,
      anon_sym_,
      anon_sym_TAB,
  [4804] = 6,
    ACTIONS(448), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      sym__quantity,
    ACTIONS(456), 1,
      anon_sym_PLUS,
    STATE(136), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(643), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(154), 2,
      sym_quantity,
      sym_negative_quantity,
  [4825] = 6,
    ACTIONS(448), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      sym__quantity,
    ACTIONS(456), 1,
      anon_sym_PLUS,
    STATE(113), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(645), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(145), 2,
      sym_quantity,
      sym_negative_quantity,
  [4846] = 7,
    ACTIONS(401), 1,
      anon_sym_endtest,
    ACTIONS(578), 1,
      aux_sym_block_comment_token1,
    ACTIONS(600), 1,
      anon_sym_LF,
    ACTIONS(647), 1,
      anon_sym_end,
    STATE(116), 1,
      aux_sym_block_comment_repeat1,
    STATE(279), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(584), 2,
      anon_sym_,
      anon_sym_TAB,
  [4869] = 6,
    ACTIONS(633), 1,
      anon_sym_DASH,
    ACTIONS(635), 1,
      sym__quantity,
    ACTIONS(637), 1,
      anon_sym_PLUS,
    STATE(113), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(645), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(36), 2,
      sym_quantity,
      sym_negative_quantity,
  [4890] = 7,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(649), 1,
      anon_sym_LF,
    STATE(162), 1,
      aux_sym_whitespace_repeat1,
    STATE(186), 1,
      sym_balance_assertion,
    STATE(327), 1,
      sym_note,
    ACTIONS(651), 2,
      anon_sym_,
      anon_sym_TAB,
  [4913] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(119), 1,
      aux_sym_whitespace_repeat1,
    STATE(173), 1,
      sym__single_date,
    STATE(253), 1,
      sym_date,
    STATE(363), 1,
      sym__4d,
    ACTIONS(653), 2,
      anon_sym_,
      anon_sym_TAB,
  [4936] = 7,
    ACTIONS(530), 1,
      anon_sym_alias,
    ACTIONS(532), 1,
      anon_sym_default,
    ACTIONS(534), 1,
      anon_sym_note,
    ACTIONS(655), 1,
      anon_sym_nomarket,
    ACTIONS(657), 1,
      anon_sym_format,
    STATE(77), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(472), 2,
      anon_sym_,
      anon_sym_TAB,
  [4959] = 6,
    ACTIONS(659), 1,
      aux_sym_note_token1,
    ACTIONS(661), 1,
      anon_sym_LBRACK,
    ACTIONS(663), 1,
      aux_sym_note_token2,
    STATE(151), 1,
      aux_sym_note_repeat1,
    STATE(255), 1,
      aux_sym_note_repeat2,
    ACTIONS(665), 2,
      anon_sym_,
      anon_sym_TAB,
  [4979] = 7,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      sym_account_name,
    ACTIONS(667), 1,
      anon_sym_,
    ACTIONS(669), 1,
      anon_sym_TAB,
    STATE(160), 1,
      aux_sym_whitespace_repeat1,
    STATE(257), 1,
      sym_account,
  [5001] = 7,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      sym_account_name,
    ACTIONS(671), 1,
      anon_sym_,
    ACTIONS(673), 1,
      anon_sym_TAB,
    STATE(192), 1,
      aux_sym_whitespace_repeat1,
    STATE(325), 1,
      sym_account,
  [5023] = 2,
    ACTIONS(307), 1,
      anon_sym_AT,
    ACTIONS(305), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [5035] = 4,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(326), 1,
      sym_commodity,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(458), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5051] = 7,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      sym_account_name,
    ACTIONS(675), 1,
      anon_sym_,
    ACTIONS(677), 1,
      anon_sym_TAB,
    STATE(165), 1,
      aux_sym_whitespace_repeat1,
    STATE(233), 1,
      sym_account,
  [5073] = 6,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(179), 1,
      sym_balance_assertion,
    STATE(370), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [5093] = 4,
    STATE(36), 1,
      sym_commodity,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(191), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5109] = 6,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(186), 1,
      sym_balance_assertion,
    STATE(327), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [5129] = 6,
    ACTIONS(679), 1,
      aux_sym_note_token1,
    ACTIONS(681), 1,
      anon_sym_LBRACK,
    ACTIONS(683), 1,
      aux_sym_note_token2,
    STATE(172), 1,
      aux_sym_note_repeat1,
    STATE(225), 1,
      aux_sym_note_repeat2,
    ACTIONS(685), 2,
      anon_sym_,
      anon_sym_TAB,
  [5149] = 7,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      sym_account_name,
    ACTIONS(671), 1,
      anon_sym_,
    ACTIONS(673), 1,
      anon_sym_TAB,
    STATE(192), 1,
      aux_sym_whitespace_repeat1,
    STATE(329), 1,
      sym_account,
  [5171] = 7,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      sym_account_name,
    ACTIONS(671), 1,
      anon_sym_,
    ACTIONS(673), 1,
      anon_sym_TAB,
    STATE(192), 1,
      aux_sym_whitespace_repeat1,
    STATE(233), 1,
      sym_account,
  [5193] = 2,
    ACTIONS(303), 1,
      anon_sym_AT,
    ACTIONS(301), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [5205] = 4,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(145), 1,
      sym_commodity,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(458), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5221] = 7,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      sym_account_name,
    ACTIONS(671), 1,
      anon_sym_,
    ACTIONS(673), 1,
      anon_sym_TAB,
    STATE(192), 1,
      aux_sym_whitespace_repeat1,
    STATE(331), 1,
      sym_account,
  [5243] = 4,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(331), 1,
      sym_commodity,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(458), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5259] = 4,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(92), 1,
      sym_commodity,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(458), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5275] = 4,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(237), 1,
      sym_commodity,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(458), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5291] = 7,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      sym_account_name,
    ACTIONS(671), 1,
      anon_sym_,
    ACTIONS(673), 1,
      anon_sym_TAB,
    STATE(192), 1,
      aux_sym_whitespace_repeat1,
    STATE(271), 1,
      sym_account,
  [5313] = 7,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      sym_account_name,
    ACTIONS(687), 1,
      anon_sym_,
    ACTIONS(689), 1,
      anon_sym_TAB,
    STATE(153), 1,
      aux_sym_whitespace_repeat1,
    STATE(271), 1,
      sym_account,
  [5335] = 6,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(181), 1,
      sym_balance_assertion,
    STATE(332), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [5355] = 4,
    ACTIONS(482), 1,
      sym_payee,
    STATE(163), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(691), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(441), 3,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
  [5371] = 7,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      sym_account_name,
    ACTIONS(671), 1,
      anon_sym_,
    ACTIONS(673), 1,
      anon_sym_TAB,
    STATE(192), 1,
      aux_sym_whitespace_repeat1,
    STATE(217), 1,
      sym_account,
  [5393] = 7,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      sym_account_name,
    ACTIONS(671), 1,
      anon_sym_,
    ACTIONS(673), 1,
      anon_sym_TAB,
    STATE(192), 1,
      aux_sym_whitespace_repeat1,
    STATE(261), 1,
      sym_account,
  [5415] = 6,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(189), 1,
      sym_balance_assertion,
    STATE(355), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [5435] = 1,
    ACTIONS(694), 7,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_TAB,
  [5445] = 7,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      sym_account_name,
    ACTIONS(696), 1,
      anon_sym_,
    ACTIONS(698), 1,
      anon_sym_TAB,
    STATE(164), 1,
      aux_sym_whitespace_repeat1,
    STATE(270), 1,
      sym_account,
  [5467] = 6,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(191), 1,
      sym_balance_assertion,
    STATE(344), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [5487] = 6,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(176), 1,
      sym_balance_assertion,
    STATE(358), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [5507] = 6,
    ACTIONS(665), 1,
      anon_sym_LF,
    ACTIONS(700), 1,
      aux_sym_note_token1,
    ACTIONS(702), 1,
      anon_sym_LBRACK,
    ACTIONS(704), 1,
      aux_sym_note_token2,
    STATE(182), 1,
      aux_sym_note_repeat1,
    STATE(311), 1,
      aux_sym_note_repeat2,
  [5526] = 4,
    ACTIONS(706), 1,
      aux_sym_note_token1,
    ACTIONS(711), 1,
      aux_sym_note_token2,
    STATE(172), 1,
      aux_sym_note_repeat1,
    ACTIONS(709), 3,
      anon_sym_LBRACK,
      anon_sym_,
      anon_sym_TAB,
  [5541] = 1,
    ACTIONS(713), 6,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5550] = 3,
    ACTIONS(717), 1,
      anon_sym_EQ,
    STATE(235), 1,
      sym_effective_date,
    ACTIONS(715), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5563] = 5,
    ACTIONS(719), 1,
      anon_sym_LF,
    ACTIONS(721), 1,
      anon_sym_SEMI,
    STATE(208), 1,
      sym_note,
    STATE(218), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(723), 2,
      anon_sym_,
      anon_sym_TAB,
  [5580] = 5,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(522), 1,
      anon_sym_LF,
    STATE(205), 1,
      aux_sym_whitespace_repeat1,
    STATE(344), 1,
      sym_note,
    ACTIONS(725), 2,
      anon_sym_,
      anon_sym_TAB,
  [5597] = 5,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
    ACTIONS(727), 1,
      sym_payee,
    STATE(163), 1,
      aux_sym_whitespace_repeat1,
    STATE(175), 1,
      sym_code,
    ACTIONS(548), 2,
      anon_sym_,
      anon_sym_TAB,
  [5614] = 5,
    ACTIONS(721), 1,
      anon_sym_SEMI,
    ACTIONS(729), 1,
      anon_sym_LF,
    STATE(194), 1,
      sym_note,
    STATE(240), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(731), 2,
      anon_sym_,
      anon_sym_TAB,
  [5631] = 5,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(516), 1,
      anon_sym_LF,
    STATE(209), 1,
      aux_sym_whitespace_repeat1,
    STATE(358), 1,
      sym_note,
    ACTIONS(733), 2,
      anon_sym_,
      anon_sym_TAB,
  [5648] = 2,
    ACTIONS(735), 1,
      anon_sym_LF,
    ACTIONS(737), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endcomment,
      anon_sym_,
      anon_sym_TAB,
  [5659] = 5,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(739), 1,
      anon_sym_LF,
    STATE(216), 1,
      aux_sym_whitespace_repeat1,
    STATE(335), 1,
      sym_note,
    ACTIONS(741), 2,
      anon_sym_,
      anon_sym_TAB,
  [5676] = 6,
    ACTIONS(685), 1,
      anon_sym_LF,
    ACTIONS(743), 1,
      aux_sym_note_token1,
    ACTIONS(745), 1,
      anon_sym_LBRACK,
    ACTIONS(747), 1,
      aux_sym_note_token2,
    STATE(201), 1,
      aux_sym_note_repeat1,
    STATE(303), 1,
      aux_sym_note_repeat2,
  [5695] = 2,
    ACTIONS(749), 1,
      anon_sym_LF,
    ACTIONS(567), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endcomment,
      anon_sym_,
      anon_sym_TAB,
  [5706] = 5,
    ACTIONS(721), 1,
      anon_sym_SEMI,
    ACTIONS(729), 1,
      anon_sym_LF,
    STATE(177), 1,
      aux_sym_whitespace_repeat1,
    STATE(194), 1,
      sym_note,
    ACTIONS(751), 2,
      anon_sym_,
      anon_sym_TAB,
  [5723] = 5,
    ACTIONS(446), 1,
      anon_sym_LF,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    STATE(202), 1,
      aux_sym_whitespace_repeat1,
    STATE(387), 1,
      sym_note,
    ACTIONS(753), 2,
      anon_sym_,
      anon_sym_TAB,
  [5740] = 5,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(755), 1,
      anon_sym_LF,
    STATE(196), 1,
      aux_sym_whitespace_repeat1,
    STATE(332), 1,
      sym_note,
    ACTIONS(757), 2,
      anon_sym_,
      anon_sym_TAB,
  [5757] = 2,
    ACTIONS(749), 1,
      anon_sym_LF,
    ACTIONS(567), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endtest,
      anon_sym_,
      anon_sym_TAB,
  [5768] = 5,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(474), 1,
      anon_sym_LF,
    STATE(214), 1,
      aux_sym_whitespace_repeat1,
    STATE(370), 1,
      sym_note,
    ACTIONS(759), 2,
      anon_sym_,
      anon_sym_TAB,
  [5785] = 5,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(649), 1,
      anon_sym_LF,
    STATE(198), 1,
      aux_sym_whitespace_repeat1,
    STATE(327), 1,
      sym_note,
    ACTIONS(761), 2,
      anon_sym_,
      anon_sym_TAB,
  [5802] = 2,
    ACTIONS(735), 1,
      anon_sym_LF,
    ACTIONS(737), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endtest,
      anon_sym_,
      anon_sym_TAB,
  [5813] = 5,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(606), 1,
      anon_sym_LF,
    STATE(199), 1,
      aux_sym_whitespace_repeat1,
    STATE(355), 1,
      sym_note,
    ACTIONS(763), 2,
      anon_sym_,
      anon_sym_TAB,
  [5830] = 4,
    ACTIONS(765), 1,
      anon_sym_,
    ACTIONS(768), 1,
      anon_sym_TAB,
    STATE(192), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(482), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [5845] = 5,
    ACTIONS(721), 1,
      anon_sym_SEMI,
    ACTIONS(771), 1,
      anon_sym_LF,
    STATE(112), 1,
      aux_sym_whitespace_repeat1,
    STATE(212), 1,
      sym_note,
    ACTIONS(773), 2,
      anon_sym_,
      anon_sym_TAB,
  [5862] = 3,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(15), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5874] = 1,
    ACTIONS(775), 5,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5882] = 4,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(335), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [5896] = 4,
    ACTIONS(777), 1,
      anon_sym_LF,
    ACTIONS(779), 1,
      anon_sym_EQ,
    STATE(207), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(781), 2,
      anon_sym_,
      anon_sym_TAB,
  [5910] = 4,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(332), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [5924] = 4,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(327), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [5938] = 3,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(21), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5950] = 4,
    ACTIONS(711), 1,
      aux_sym_note_token2,
    ACTIONS(783), 1,
      aux_sym_note_token1,
    STATE(201), 1,
      aux_sym_note_repeat1,
    ACTIONS(709), 2,
      anon_sym_LF,
      anon_sym_LBRACK,
  [5964] = 4,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(370), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [5978] = 4,
    ACTIONS(786), 1,
      aux_sym_option_value_token1,
    STATE(243), 1,
      aux_sym_whitespace_repeat1,
    STATE(329), 1,
      sym_filename,
    ACTIONS(788), 2,
      anon_sym_,
      anon_sym_TAB,
  [5992] = 1,
    ACTIONS(790), 5,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [6000] = 4,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(355), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [6014] = 4,
    ACTIONS(536), 1,
      anon_sym_assert,
    ACTIONS(538), 1,
      anon_sym_check,
    STATE(113), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(645), 2,
      anon_sym_,
      anon_sym_TAB,
  [6028] = 4,
    ACTIONS(792), 1,
      aux_sym_option_value_token1,
    STATE(243), 1,
      aux_sym_whitespace_repeat1,
    STATE(371), 1,
      sym_option_value,
    ACTIONS(788), 2,
      anon_sym_,
      anon_sym_TAB,
  [6042] = 3,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(19), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6054] = 4,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(344), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [6068] = 2,
    ACTIONS(796), 1,
      anon_sym_,
    ACTIONS(794), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
      anon_sym_TAB,
  [6078] = 3,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6090] = 3,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(17), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6102] = 1,
    ACTIONS(798), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_TAB,
  [6110] = 4,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(358), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [6124] = 3,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(22), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6136] = 4,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(338), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [6150] = 2,
    ACTIONS(446), 1,
      anon_sym_LF,
    ACTIONS(800), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6159] = 3,
    ACTIONS(802), 1,
      sym_payee,
    STATE(163), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(548), 2,
      anon_sym_,
      anon_sym_TAB,
  [6170] = 3,
    ACTIONS(804), 1,
      anon_sym_LF,
    STATE(280), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(806), 2,
      anon_sym_,
      anon_sym_TAB,
  [6181] = 3,
    ACTIONS(482), 1,
      aux_sym_block_comment_token1,
    STATE(220), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(808), 2,
      anon_sym_,
      anon_sym_TAB,
  [6192] = 3,
    ACTIONS(811), 1,
      aux_sym_block_comment_token1,
    STATE(220), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(813), 2,
      anon_sym_,
      anon_sym_TAB,
  [6203] = 3,
    ACTIONS(815), 1,
      sym_payee,
    STATE(163), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(548), 2,
      anon_sym_,
      anon_sym_TAB,
  [6214] = 1,
    ACTIONS(817), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [6221] = 3,
    ACTIONS(819), 1,
      aux_sym_note_token2,
    STATE(224), 1,
      aux_sym_note_repeat2,
    ACTIONS(822), 2,
      anon_sym_,
      anon_sym_TAB,
  [6232] = 3,
    ACTIONS(824), 1,
      aux_sym_note_token2,
    STATE(224), 1,
      aux_sym_note_repeat2,
    ACTIONS(826), 2,
      anon_sym_,
      anon_sym_TAB,
  [6243] = 3,
    ACTIONS(828), 1,
      aux_sym_account_subdirective_token1,
    STATE(244), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(830), 2,
      anon_sym_,
      anon_sym_TAB,
  [6254] = 3,
    ACTIONS(832), 1,
      aux_sym_account_subdirective_token1,
    STATE(244), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(830), 2,
      anon_sym_,
      anon_sym_TAB,
  [6265] = 3,
    ACTIONS(482), 1,
      sym_query,
    STATE(228), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(834), 2,
      anon_sym_,
      anon_sym_TAB,
  [6276] = 2,
    ACTIONS(837), 1,
      anon_sym_LF,
    ACTIONS(839), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6285] = 3,
    ACTIONS(841), 1,
      aux_sym_block_comment_token1,
    STATE(220), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(813), 2,
      anon_sym_,
      anon_sym_TAB,
  [6296] = 3,
    ACTIONS(843), 1,
      sym_payee,
    STATE(163), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(548), 2,
      anon_sym_,
      anon_sym_TAB,
  [6307] = 3,
    ACTIONS(843), 1,
      sym_payee,
    STATE(259), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(845), 2,
      anon_sym_,
      anon_sym_TAB,
  [6318] = 2,
    ACTIONS(847), 1,
      anon_sym_LF,
    ACTIONS(849), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6327] = 3,
    ACTIONS(851), 1,
      sym_time,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [6338] = 1,
    ACTIONS(853), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [6345] = 4,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(213), 1,
      sym__single_date,
    STATE(363), 1,
      sym__4d,
  [6358] = 3,
    ACTIONS(855), 1,
      anon_sym_EQ,
    STATE(262), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(857), 2,
      anon_sym_,
      anon_sym_TAB,
  [6369] = 3,
    ACTIONS(859), 1,
      sym_payee,
    STATE(163), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(548), 2,
      anon_sym_,
      anon_sym_TAB,
  [6380] = 1,
    ACTIONS(861), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6387] = 3,
    ACTIONS(727), 1,
      sym_payee,
    STATE(163), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(548), 2,
      anon_sym_,
      anon_sym_TAB,
  [6398] = 3,
    ACTIONS(859), 1,
      sym_payee,
    STATE(222), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(863), 2,
      anon_sym_,
      anon_sym_TAB,
  [6409] = 3,
    ACTIONS(865), 1,
      sym_time,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [6420] = 3,
    ACTIONS(482), 1,
      aux_sym_option_value_token1,
    STATE(243), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(867), 2,
      anon_sym_,
      anon_sym_TAB,
  [6431] = 3,
    ACTIONS(441), 1,
      aux_sym_account_subdirective_token1,
    STATE(244), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(870), 2,
      anon_sym_,
      anon_sym_TAB,
  [6442] = 3,
    ACTIONS(824), 1,
      aux_sym_note_token2,
    STATE(224), 1,
      aux_sym_note_repeat2,
    ACTIONS(873), 2,
      anon_sym_,
      anon_sym_TAB,
  [6453] = 3,
    ACTIONS(875), 1,
      aux_sym_note_token2,
    STATE(275), 1,
      aux_sym_note_repeat2,
    ACTIONS(873), 2,
      anon_sym_,
      anon_sym_TAB,
  [6464] = 1,
    ACTIONS(877), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [6471] = 3,
    ACTIONS(879), 1,
      sym_time,
    STATE(264), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(881), 2,
      anon_sym_,
      anon_sym_TAB,
  [6482] = 3,
    ACTIONS(883), 1,
      anon_sym_LF,
    STATE(230), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(885), 2,
      anon_sym_,
      anon_sym_TAB,
  [6493] = 1,
    ACTIONS(796), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [6500] = 3,
    ACTIONS(887), 1,
      aux_sym_account_subdirective_token1,
    STATE(244), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(830), 2,
      anon_sym_,
      anon_sym_TAB,
  [6511] = 3,
    ACTIONS(889), 1,
      aux_sym_account_subdirective_token1,
    STATE(244), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(830), 2,
      anon_sym_,
      anon_sym_TAB,
  [6522] = 3,
    ACTIONS(891), 1,
      sym_time,
    STATE(234), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(893), 2,
      anon_sym_,
      anon_sym_TAB,
  [6533] = 3,
    ACTIONS(895), 1,
      aux_sym_account_subdirective_token1,
    STATE(244), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(830), 2,
      anon_sym_,
      anon_sym_TAB,
  [6544] = 3,
    ACTIONS(824), 1,
      aux_sym_note_token2,
    STATE(224), 1,
      aux_sym_note_repeat2,
    ACTIONS(685), 2,
      anon_sym_,
      anon_sym_TAB,
  [6555] = 3,
    ACTIONS(897), 1,
      sym_time,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [6566] = 2,
    ACTIONS(899), 1,
      anon_sym_LF,
    ACTIONS(901), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6575] = 3,
    ACTIONS(903), 1,
      aux_sym_word_directive_token2,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [6586] = 3,
    ACTIONS(905), 1,
      sym_payee,
    STATE(163), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(548), 2,
      anon_sym_,
      anon_sym_TAB,
  [6597] = 3,
    ACTIONS(905), 1,
      sym_payee,
    STATE(238), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(907), 2,
      anon_sym_,
      anon_sym_TAB,
  [6608] = 2,
    ACTIONS(909), 1,
      anon_sym_LF,
    ACTIONS(911), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6617] = 3,
    ACTIONS(913), 1,
      anon_sym_EQ,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [6628] = 3,
    ACTIONS(851), 1,
      sym_time,
    STATE(256), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(915), 2,
      anon_sym_,
      anon_sym_TAB,
  [6639] = 3,
    ACTIONS(917), 1,
      sym_time,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [6650] = 3,
    ACTIONS(919), 1,
      aux_sym_note_token2,
    STATE(245), 1,
      aux_sym_note_repeat2,
    ACTIONS(921), 2,
      anon_sym_,
      anon_sym_TAB,
  [6661] = 3,
    ACTIONS(923), 1,
      aux_sym_word_directive_token2,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [6672] = 3,
    ACTIONS(925), 1,
      aux_sym_option_value_token1,
    STATE(243), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(788), 2,
      anon_sym_,
      anon_sym_TAB,
  [6683] = 1,
    ACTIONS(927), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [6690] = 3,
    ACTIONS(929), 1,
      aux_sym_word_directive_token1,
    STATE(277), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(931), 2,
      anon_sym_,
      anon_sym_TAB,
  [6701] = 2,
    ACTIONS(466), 1,
      anon_sym_LF,
    ACTIONS(933), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6710] = 2,
    ACTIONS(935), 1,
      anon_sym_LF,
    ACTIONS(937), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6719] = 3,
    ACTIONS(939), 1,
      aux_sym_tag_directive_token1,
    STATE(113), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(645), 2,
      anon_sym_,
      anon_sym_TAB,
  [6730] = 3,
    ACTIONS(917), 1,
      sym_time,
    STATE(242), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(941), 2,
      anon_sym_,
      anon_sym_TAB,
  [6741] = 3,
    ACTIONS(943), 1,
      sym_payee,
    STATE(231), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(945), 2,
      anon_sym_,
      anon_sym_TAB,
  [6752] = 3,
    ACTIONS(824), 1,
      aux_sym_note_token2,
    STATE(224), 1,
      aux_sym_note_repeat2,
    ACTIONS(947), 2,
      anon_sym_,
      anon_sym_TAB,
  [6763] = 1,
    ACTIONS(949), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6770] = 3,
    ACTIONS(482), 1,
      aux_sym_word_directive_token1,
    STATE(277), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(951), 2,
      anon_sym_,
      anon_sym_TAB,
  [6781] = 3,
    ACTIONS(954), 1,
      sym_query,
    STATE(228), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(956), 2,
      anon_sym_,
      anon_sym_TAB,
  [6792] = 3,
    ACTIONS(958), 1,
      aux_sym_block_comment_token1,
    STATE(220), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(813), 2,
      anon_sym_,
      anon_sym_TAB,
  [6803] = 3,
    ACTIONS(960), 1,
      aux_sym_block_comment_token1,
    STATE(220), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(813), 2,
      anon_sym_,
      anon_sym_TAB,
  [6814] = 2,
    STATE(80), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(962), 2,
      anon_sym_,
      anon_sym_TAB,
  [6822] = 2,
    STATE(251), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(964), 2,
      anon_sym_,
      anon_sym_TAB,
  [6830] = 2,
    STATE(118), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(966), 2,
      anon_sym_,
      anon_sym_TAB,
  [6838] = 3,
    ACTIONS(721), 1,
      anon_sym_SEMI,
    ACTIONS(968), 1,
      anon_sym_LF,
    STATE(215), 1,
      sym_note,
  [6848] = 2,
    STATE(226), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(970), 2,
      anon_sym_,
      anon_sym_TAB,
  [6856] = 3,
    ACTIONS(721), 1,
      anon_sym_SEMI,
    ACTIONS(729), 1,
      anon_sym_LF,
    STATE(194), 1,
      sym_note,
  [6866] = 2,
    STATE(158), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(972), 2,
      anon_sym_,
      anon_sym_TAB,
  [6874] = 2,
    STATE(278), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(974), 2,
      anon_sym_,
      anon_sym_TAB,
  [6882] = 2,
    STATE(144), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(976), 2,
      anon_sym_,
      anon_sym_TAB,
  [6890] = 2,
    STATE(146), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(978), 2,
      anon_sym_,
      anon_sym_TAB,
  [6898] = 2,
    STATE(272), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(980), 2,
      anon_sym_,
      anon_sym_TAB,
  [6906] = 2,
    STATE(203), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(982), 2,
      anon_sym_,
      anon_sym_TAB,
  [6914] = 3,
    ACTIONS(947), 1,
      anon_sym_LF,
    ACTIONS(984), 1,
      aux_sym_note_token2,
    STATE(300), 1,
      aux_sym_note_repeat2,
  [6924] = 2,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(986), 2,
      anon_sym_,
      anon_sym_TAB,
  [6932] = 3,
    ACTIONS(873), 1,
      anon_sym_LF,
    ACTIONS(988), 1,
      aux_sym_note_token2,
    STATE(293), 1,
      aux_sym_note_repeat2,
  [6942] = 3,
    ACTIONS(873), 1,
      anon_sym_LF,
    ACTIONS(984), 1,
      aux_sym_note_token2,
    STATE(300), 1,
      aux_sym_note_repeat2,
  [6952] = 3,
    ACTIONS(921), 1,
      anon_sym_LF,
    ACTIONS(990), 1,
      aux_sym_note_token2,
    STATE(296), 1,
      aux_sym_note_repeat2,
  [6962] = 2,
    STATE(254), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(992), 2,
      anon_sym_,
      anon_sym_TAB,
  [6970] = 2,
    STATE(269), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(994), 2,
      anon_sym_,
      anon_sym_TAB,
  [6978] = 3,
    ACTIONS(822), 1,
      anon_sym_LF,
    ACTIONS(996), 1,
      aux_sym_note_token2,
    STATE(300), 1,
      aux_sym_note_repeat2,
  [6988] = 2,
    STATE(252), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(999), 2,
      anon_sym_,
      anon_sym_TAB,
  [6996] = 2,
    STATE(227), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1001), 2,
      anon_sym_,
      anon_sym_TAB,
  [7004] = 3,
    ACTIONS(826), 1,
      anon_sym_LF,
    ACTIONS(984), 1,
      aux_sym_note_token2,
    STATE(300), 1,
      aux_sym_note_repeat2,
  [7014] = 3,
    ACTIONS(721), 1,
      anon_sym_SEMI,
    ACTIONS(1003), 1,
      anon_sym_LF,
    STATE(211), 1,
      sym_note,
  [7024] = 3,
    ACTIONS(719), 1,
      anon_sym_LF,
    ACTIONS(721), 1,
      anon_sym_SEMI,
    STATE(208), 1,
      sym_note,
  [7034] = 2,
    STATE(159), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1005), 2,
      anon_sym_,
      anon_sym_TAB,
  [7042] = 2,
    STATE(267), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1007), 2,
      anon_sym_,
      anon_sym_TAB,
  [7050] = 2,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1009), 2,
      anon_sym_,
      anon_sym_TAB,
  [7058] = 2,
    STATE(266), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1011), 2,
      anon_sym_,
      anon_sym_TAB,
  [7066] = 2,
    STATE(152), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1013), 2,
      anon_sym_,
      anon_sym_TAB,
  [7074] = 3,
    ACTIONS(685), 1,
      anon_sym_LF,
    ACTIONS(984), 1,
      aux_sym_note_token2,
    STATE(300), 1,
      aux_sym_note_repeat2,
  [7084] = 2,
    STATE(156), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1015), 2,
      anon_sym_,
      anon_sym_TAB,
  [7092] = 2,
    STATE(258), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1017), 2,
      anon_sym_,
      anon_sym_TAB,
  [7100] = 3,
    ACTIONS(721), 1,
      anon_sym_SEMI,
    ACTIONS(1019), 1,
      anon_sym_LF,
    STATE(200), 1,
      sym_note,
  [7110] = 2,
    STATE(157), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1021), 2,
      anon_sym_,
      anon_sym_TAB,
  [7118] = 2,
    ACTIONS(717), 1,
      anon_sym_EQ,
    STATE(322), 1,
      sym_effective_date,
  [7125] = 2,
    ACTIONS(1023), 1,
      aux_sym_option_value_token1,
    STATE(371), 1,
      sym_option_value,
  [7132] = 1,
    ACTIONS(1025), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [7137] = 2,
    ACTIONS(717), 1,
      anon_sym_EQ,
    STATE(345), 1,
      sym_effective_date,
  [7144] = 2,
    ACTIONS(717), 1,
      anon_sym_EQ,
    STATE(382), 1,
      sym_effective_date,
  [7151] = 2,
    ACTIONS(717), 1,
      anon_sym_EQ,
    STATE(383), 1,
      sym_effective_date,
  [7158] = 1,
    ACTIONS(1027), 1,
      anon_sym_RBRACK,
  [7162] = 1,
    ACTIONS(1029), 1,
      anon_sym_LF,
  [7166] = 1,
    ACTIONS(1031), 1,
      anon_sym_LF,
  [7170] = 1,
    ACTIONS(1033), 1,
      anon_sym_LF,
  [7174] = 1,
    ACTIONS(1035), 1,
      anon_sym_LF,
  [7178] = 1,
    ACTIONS(755), 1,
      anon_sym_LF,
  [7182] = 1,
    ACTIONS(1037), 1,
      anon_sym_LF,
  [7186] = 1,
    ACTIONS(1039), 1,
      anon_sym_LF,
  [7190] = 1,
    ACTIONS(1041), 1,
      anon_sym_EQ,
  [7194] = 1,
    ACTIONS(1043), 1,
      anon_sym_LF,
  [7198] = 1,
    ACTIONS(739), 1,
      anon_sym_LF,
  [7202] = 1,
    ACTIONS(1045), 1,
      sym__quantity,
  [7206] = 1,
    ACTIONS(1047), 1,
      sym__quantity,
  [7210] = 1,
    ACTIONS(1049), 1,
      anon_sym_LF,
  [7214] = 1,
    ACTIONS(909), 1,
      anon_sym_LF,
  [7218] = 1,
    ACTIONS(1051), 1,
      anon_sym_LF,
  [7222] = 1,
    ACTIONS(1053), 1,
      anon_sym_LF,
  [7226] = 1,
    ACTIONS(1055), 1,
      sym__dsep,
  [7230] = 1,
    ACTIONS(1057), 1,
      anon_sym_RPAREN,
  [7234] = 1,
    ACTIONS(1059), 1,
      sym_account_name,
  [7238] = 1,
    ACTIONS(1061), 1,
      anon_sym_LF,
  [7242] = 1,
    ACTIONS(1063), 1,
      sym_account_name,
  [7246] = 1,
    ACTIONS(606), 1,
      anon_sym_LF,
  [7250] = 1,
    ACTIONS(1065), 1,
      anon_sym_RBRACK,
  [7254] = 1,
    ACTIONS(1067), 1,
      anon_sym_LF,
  [7258] = 1,
    ACTIONS(1069), 1,
      ts_builtin_sym_end,
  [7262] = 1,
    ACTIONS(1071), 1,
      sym__2d,
  [7266] = 1,
    ACTIONS(1073), 1,
      anon_sym_LF,
  [7270] = 1,
    ACTIONS(1075), 1,
      anon_sym_LF,
  [7274] = 1,
    ACTIONS(1077), 1,
      anon_sym_LF,
  [7278] = 1,
    ACTIONS(1079), 1,
      anon_sym_LF,
  [7282] = 1,
    ACTIONS(1081), 1,
      anon_sym_LF,
  [7286] = 1,
    ACTIONS(1083), 1,
      aux_sym_option_value_token1,
  [7290] = 1,
    ACTIONS(649), 1,
      anon_sym_LF,
  [7294] = 1,
    ACTIONS(1085), 1,
      anon_sym_LF,
  [7298] = 1,
    ACTIONS(1087), 1,
      anon_sym_LF,
  [7302] = 1,
    ACTIONS(522), 1,
      anon_sym_LF,
  [7306] = 1,
    ACTIONS(1089), 1,
      anon_sym_RBRACK,
  [7310] = 1,
    ACTIONS(1091), 1,
      anon_sym_LF,
  [7314] = 1,
    ACTIONS(1093), 1,
      anon_sym_LF,
  [7318] = 1,
    ACTIONS(1095), 1,
      anon_sym_LF,
  [7322] = 1,
    ACTIONS(1097), 1,
      sym__dsep,
  [7326] = 1,
    ACTIONS(1099), 1,
      anon_sym_LF,
  [7330] = 1,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
  [7334] = 1,
    ACTIONS(1101), 1,
      anon_sym_LF,
  [7338] = 1,
    ACTIONS(1103), 1,
      sym__2d,
  [7342] = 1,
    ACTIONS(847), 1,
      anon_sym_LF,
  [7346] = 1,
    ACTIONS(446), 1,
      anon_sym_LF,
  [7350] = 1,
    ACTIONS(516), 1,
      anon_sym_LF,
  [7354] = 1,
    ACTIONS(1105), 1,
      anon_sym_LF,
  [7358] = 1,
    ACTIONS(1107), 1,
      anon_sym_LF,
  [7362] = 1,
    ACTIONS(1109), 1,
      aux_sym_option_token1,
  [7366] = 1,
    ACTIONS(1111), 1,
      anon_sym_LF,
  [7370] = 1,
    ACTIONS(621), 1,
      sym__dsep,
  [7374] = 1,
    ACTIONS(1113), 1,
      anon_sym_LF,
  [7378] = 1,
    ACTIONS(1115), 1,
      sym__2d,
  [7382] = 1,
    ACTIONS(1117), 1,
      anon_sym_LF,
  [7386] = 1,
    ACTIONS(1119), 1,
      sym__quantity,
  [7390] = 1,
    ACTIONS(1121), 1,
      sym__quantity,
  [7394] = 1,
    ACTIONS(1123), 1,
      anon_sym_LF,
  [7398] = 1,
    ACTIONS(1125), 1,
      anon_sym_RBRACK,
  [7402] = 1,
    ACTIONS(1127), 1,
      anon_sym_RBRACK,
  [7406] = 1,
    ACTIONS(1129), 1,
      sym__quantity,
  [7410] = 1,
    ACTIONS(1131), 1,
      sym__quantity,
  [7414] = 1,
    ACTIONS(1133), 1,
      aux_sym_code_token1,
  [7418] = 1,
    ACTIONS(474), 1,
      anon_sym_LF,
  [7422] = 1,
    ACTIONS(1135), 1,
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
  [SMALL_STATE(11)] = 627,
  [SMALL_STATE(12)] = 674,
  [SMALL_STATE(13)] = 721,
  [SMALL_STATE(14)] = 768,
  [SMALL_STATE(15)] = 814,
  [SMALL_STATE(16)] = 860,
  [SMALL_STATE(17)] = 900,
  [SMALL_STATE(18)] = 946,
  [SMALL_STATE(19)] = 986,
  [SMALL_STATE(20)] = 1032,
  [SMALL_STATE(21)] = 1072,
  [SMALL_STATE(22)] = 1118,
  [SMALL_STATE(23)] = 1164,
  [SMALL_STATE(24)] = 1210,
  [SMALL_STATE(25)] = 1247,
  [SMALL_STATE(26)] = 1284,
  [SMALL_STATE(27)] = 1321,
  [SMALL_STATE(28)] = 1358,
  [SMALL_STATE(29)] = 1395,
  [SMALL_STATE(30)] = 1432,
  [SMALL_STATE(31)] = 1469,
  [SMALL_STATE(32)] = 1506,
  [SMALL_STATE(33)] = 1543,
  [SMALL_STATE(34)] = 1580,
  [SMALL_STATE(35)] = 1617,
  [SMALL_STATE(36)] = 1654,
  [SMALL_STATE(37)] = 1691,
  [SMALL_STATE(38)] = 1728,
  [SMALL_STATE(39)] = 1765,
  [SMALL_STATE(40)] = 1802,
  [SMALL_STATE(41)] = 1839,
  [SMALL_STATE(42)] = 1876,
  [SMALL_STATE(43)] = 1913,
  [SMALL_STATE(44)] = 1950,
  [SMALL_STATE(45)] = 1987,
  [SMALL_STATE(46)] = 2024,
  [SMALL_STATE(47)] = 2061,
  [SMALL_STATE(48)] = 2098,
  [SMALL_STATE(49)] = 2135,
  [SMALL_STATE(50)] = 2172,
  [SMALL_STATE(51)] = 2209,
  [SMALL_STATE(52)] = 2246,
  [SMALL_STATE(53)] = 2283,
  [SMALL_STATE(54)] = 2321,
  [SMALL_STATE(55)] = 2359,
  [SMALL_STATE(56)] = 2397,
  [SMALL_STATE(57)] = 2435,
  [SMALL_STATE(58)] = 2473,
  [SMALL_STATE(59)] = 2511,
  [SMALL_STATE(60)] = 2549,
  [SMALL_STATE(61)] = 2587,
  [SMALL_STATE(62)] = 2622,
  [SMALL_STATE(63)] = 2657,
  [SMALL_STATE(64)] = 2692,
  [SMALL_STATE(65)] = 2727,
  [SMALL_STATE(66)] = 2762,
  [SMALL_STATE(67)] = 2797,
  [SMALL_STATE(68)] = 2832,
  [SMALL_STATE(69)] = 2867,
  [SMALL_STATE(70)] = 2902,
  [SMALL_STATE(71)] = 2937,
  [SMALL_STATE(72)] = 2972,
  [SMALL_STATE(73)] = 3007,
  [SMALL_STATE(74)] = 3042,
  [SMALL_STATE(75)] = 3077,
  [SMALL_STATE(76)] = 3112,
  [SMALL_STATE(77)] = 3147,
  [SMALL_STATE(78)] = 3183,
  [SMALL_STATE(79)] = 3239,
  [SMALL_STATE(80)] = 3295,
  [SMALL_STATE(81)] = 3325,
  [SMALL_STATE(82)] = 3381,
  [SMALL_STATE(83)] = 3434,
  [SMALL_STATE(84)] = 3487,
  [SMALL_STATE(85)] = 3540,
  [SMALL_STATE(86)] = 3572,
  [SMALL_STATE(87)] = 3594,
  [SMALL_STATE(88)] = 3626,
  [SMALL_STATE(89)] = 3658,
  [SMALL_STATE(90)] = 3690,
  [SMALL_STATE(91)] = 3708,
  [SMALL_STATE(92)] = 3740,
  [SMALL_STATE(93)] = 3772,
  [SMALL_STATE(94)] = 3804,
  [SMALL_STATE(95)] = 3836,
  [SMALL_STATE(96)] = 3858,
  [SMALL_STATE(97)] = 3890,
  [SMALL_STATE(98)] = 3922,
  [SMALL_STATE(99)] = 3957,
  [SMALL_STATE(100)] = 3982,
  [SMALL_STATE(101)] = 4014,
  [SMALL_STATE(102)] = 4046,
  [SMALL_STATE(103)] = 4078,
  [SMALL_STATE(104)] = 4110,
  [SMALL_STATE(105)] = 4137,
  [SMALL_STATE(106)] = 4152,
  [SMALL_STATE(107)] = 4167,
  [SMALL_STATE(108)] = 4196,
  [SMALL_STATE(109)] = 4225,
  [SMALL_STATE(110)] = 4254,
  [SMALL_STATE(111)] = 4269,
  [SMALL_STATE(112)] = 4298,
  [SMALL_STATE(113)] = 4322,
  [SMALL_STATE(114)] = 4340,
  [SMALL_STATE(115)] = 4360,
  [SMALL_STATE(116)] = 4383,
  [SMALL_STATE(117)] = 4404,
  [SMALL_STATE(118)] = 4427,
  [SMALL_STATE(119)] = 4450,
  [SMALL_STATE(120)] = 4473,
  [SMALL_STATE(121)] = 4496,
  [SMALL_STATE(122)] = 4519,
  [SMALL_STATE(123)] = 4542,
  [SMALL_STATE(124)] = 4565,
  [SMALL_STATE(125)] = 4588,
  [SMALL_STATE(126)] = 4611,
  [SMALL_STATE(127)] = 4634,
  [SMALL_STATE(128)] = 4657,
  [SMALL_STATE(129)] = 4678,
  [SMALL_STATE(130)] = 4691,
  [SMALL_STATE(131)] = 4714,
  [SMALL_STATE(132)] = 4737,
  [SMALL_STATE(133)] = 4760,
  [SMALL_STATE(134)] = 4781,
  [SMALL_STATE(135)] = 4804,
  [SMALL_STATE(136)] = 4825,
  [SMALL_STATE(137)] = 4846,
  [SMALL_STATE(138)] = 4869,
  [SMALL_STATE(139)] = 4890,
  [SMALL_STATE(140)] = 4913,
  [SMALL_STATE(141)] = 4936,
  [SMALL_STATE(142)] = 4959,
  [SMALL_STATE(143)] = 4979,
  [SMALL_STATE(144)] = 5001,
  [SMALL_STATE(145)] = 5023,
  [SMALL_STATE(146)] = 5035,
  [SMALL_STATE(147)] = 5051,
  [SMALL_STATE(148)] = 5073,
  [SMALL_STATE(149)] = 5093,
  [SMALL_STATE(150)] = 5109,
  [SMALL_STATE(151)] = 5129,
  [SMALL_STATE(152)] = 5149,
  [SMALL_STATE(153)] = 5171,
  [SMALL_STATE(154)] = 5193,
  [SMALL_STATE(155)] = 5205,
  [SMALL_STATE(156)] = 5221,
  [SMALL_STATE(157)] = 5243,
  [SMALL_STATE(158)] = 5259,
  [SMALL_STATE(159)] = 5275,
  [SMALL_STATE(160)] = 5291,
  [SMALL_STATE(161)] = 5313,
  [SMALL_STATE(162)] = 5335,
  [SMALL_STATE(163)] = 5355,
  [SMALL_STATE(164)] = 5371,
  [SMALL_STATE(165)] = 5393,
  [SMALL_STATE(166)] = 5415,
  [SMALL_STATE(167)] = 5435,
  [SMALL_STATE(168)] = 5445,
  [SMALL_STATE(169)] = 5467,
  [SMALL_STATE(170)] = 5487,
  [SMALL_STATE(171)] = 5507,
  [SMALL_STATE(172)] = 5526,
  [SMALL_STATE(173)] = 5541,
  [SMALL_STATE(174)] = 5550,
  [SMALL_STATE(175)] = 5563,
  [SMALL_STATE(176)] = 5580,
  [SMALL_STATE(177)] = 5597,
  [SMALL_STATE(178)] = 5614,
  [SMALL_STATE(179)] = 5631,
  [SMALL_STATE(180)] = 5648,
  [SMALL_STATE(181)] = 5659,
  [SMALL_STATE(182)] = 5676,
  [SMALL_STATE(183)] = 5695,
  [SMALL_STATE(184)] = 5706,
  [SMALL_STATE(185)] = 5723,
  [SMALL_STATE(186)] = 5740,
  [SMALL_STATE(187)] = 5757,
  [SMALL_STATE(188)] = 5768,
  [SMALL_STATE(189)] = 5785,
  [SMALL_STATE(190)] = 5802,
  [SMALL_STATE(191)] = 5813,
  [SMALL_STATE(192)] = 5830,
  [SMALL_STATE(193)] = 5845,
  [SMALL_STATE(194)] = 5862,
  [SMALL_STATE(195)] = 5874,
  [SMALL_STATE(196)] = 5882,
  [SMALL_STATE(197)] = 5896,
  [SMALL_STATE(198)] = 5910,
  [SMALL_STATE(199)] = 5924,
  [SMALL_STATE(200)] = 5938,
  [SMALL_STATE(201)] = 5950,
  [SMALL_STATE(202)] = 5964,
  [SMALL_STATE(203)] = 5978,
  [SMALL_STATE(204)] = 5992,
  [SMALL_STATE(205)] = 6000,
  [SMALL_STATE(206)] = 6014,
  [SMALL_STATE(207)] = 6028,
  [SMALL_STATE(208)] = 6042,
  [SMALL_STATE(209)] = 6054,
  [SMALL_STATE(210)] = 6068,
  [SMALL_STATE(211)] = 6078,
  [SMALL_STATE(212)] = 6090,
  [SMALL_STATE(213)] = 6102,
  [SMALL_STATE(214)] = 6110,
  [SMALL_STATE(215)] = 6124,
  [SMALL_STATE(216)] = 6136,
  [SMALL_STATE(217)] = 6150,
  [SMALL_STATE(218)] = 6159,
  [SMALL_STATE(219)] = 6170,
  [SMALL_STATE(220)] = 6181,
  [SMALL_STATE(221)] = 6192,
  [SMALL_STATE(222)] = 6203,
  [SMALL_STATE(223)] = 6214,
  [SMALL_STATE(224)] = 6221,
  [SMALL_STATE(225)] = 6232,
  [SMALL_STATE(226)] = 6243,
  [SMALL_STATE(227)] = 6254,
  [SMALL_STATE(228)] = 6265,
  [SMALL_STATE(229)] = 6276,
  [SMALL_STATE(230)] = 6285,
  [SMALL_STATE(231)] = 6296,
  [SMALL_STATE(232)] = 6307,
  [SMALL_STATE(233)] = 6318,
  [SMALL_STATE(234)] = 6327,
  [SMALL_STATE(235)] = 6338,
  [SMALL_STATE(236)] = 6345,
  [SMALL_STATE(237)] = 6358,
  [SMALL_STATE(238)] = 6369,
  [SMALL_STATE(239)] = 6380,
  [SMALL_STATE(240)] = 6387,
  [SMALL_STATE(241)] = 6398,
  [SMALL_STATE(242)] = 6409,
  [SMALL_STATE(243)] = 6420,
  [SMALL_STATE(244)] = 6431,
  [SMALL_STATE(245)] = 6442,
  [SMALL_STATE(246)] = 6453,
  [SMALL_STATE(247)] = 6464,
  [SMALL_STATE(248)] = 6471,
  [SMALL_STATE(249)] = 6482,
  [SMALL_STATE(250)] = 6493,
  [SMALL_STATE(251)] = 6500,
  [SMALL_STATE(252)] = 6511,
  [SMALL_STATE(253)] = 6522,
  [SMALL_STATE(254)] = 6533,
  [SMALL_STATE(255)] = 6544,
  [SMALL_STATE(256)] = 6555,
  [SMALL_STATE(257)] = 6566,
  [SMALL_STATE(258)] = 6575,
  [SMALL_STATE(259)] = 6586,
  [SMALL_STATE(260)] = 6597,
  [SMALL_STATE(261)] = 6608,
  [SMALL_STATE(262)] = 6617,
  [SMALL_STATE(263)] = 6628,
  [SMALL_STATE(264)] = 6639,
  [SMALL_STATE(265)] = 6650,
  [SMALL_STATE(266)] = 6661,
  [SMALL_STATE(267)] = 6672,
  [SMALL_STATE(268)] = 6683,
  [SMALL_STATE(269)] = 6690,
  [SMALL_STATE(270)] = 6701,
  [SMALL_STATE(271)] = 6710,
  [SMALL_STATE(272)] = 6719,
  [SMALL_STATE(273)] = 6730,
  [SMALL_STATE(274)] = 6741,
  [SMALL_STATE(275)] = 6752,
  [SMALL_STATE(276)] = 6763,
  [SMALL_STATE(277)] = 6770,
  [SMALL_STATE(278)] = 6781,
  [SMALL_STATE(279)] = 6792,
  [SMALL_STATE(280)] = 6803,
  [SMALL_STATE(281)] = 6814,
  [SMALL_STATE(282)] = 6822,
  [SMALL_STATE(283)] = 6830,
  [SMALL_STATE(284)] = 6838,
  [SMALL_STATE(285)] = 6848,
  [SMALL_STATE(286)] = 6856,
  [SMALL_STATE(287)] = 6866,
  [SMALL_STATE(288)] = 6874,
  [SMALL_STATE(289)] = 6882,
  [SMALL_STATE(290)] = 6890,
  [SMALL_STATE(291)] = 6898,
  [SMALL_STATE(292)] = 6906,
  [SMALL_STATE(293)] = 6914,
  [SMALL_STATE(294)] = 6924,
  [SMALL_STATE(295)] = 6932,
  [SMALL_STATE(296)] = 6942,
  [SMALL_STATE(297)] = 6952,
  [SMALL_STATE(298)] = 6962,
  [SMALL_STATE(299)] = 6970,
  [SMALL_STATE(300)] = 6978,
  [SMALL_STATE(301)] = 6988,
  [SMALL_STATE(302)] = 6996,
  [SMALL_STATE(303)] = 7004,
  [SMALL_STATE(304)] = 7014,
  [SMALL_STATE(305)] = 7024,
  [SMALL_STATE(306)] = 7034,
  [SMALL_STATE(307)] = 7042,
  [SMALL_STATE(308)] = 7050,
  [SMALL_STATE(309)] = 7058,
  [SMALL_STATE(310)] = 7066,
  [SMALL_STATE(311)] = 7074,
  [SMALL_STATE(312)] = 7084,
  [SMALL_STATE(313)] = 7092,
  [SMALL_STATE(314)] = 7100,
  [SMALL_STATE(315)] = 7110,
  [SMALL_STATE(316)] = 7118,
  [SMALL_STATE(317)] = 7125,
  [SMALL_STATE(318)] = 7132,
  [SMALL_STATE(319)] = 7137,
  [SMALL_STATE(320)] = 7144,
  [SMALL_STATE(321)] = 7151,
  [SMALL_STATE(322)] = 7158,
  [SMALL_STATE(323)] = 7162,
  [SMALL_STATE(324)] = 7166,
  [SMALL_STATE(325)] = 7170,
  [SMALL_STATE(326)] = 7174,
  [SMALL_STATE(327)] = 7178,
  [SMALL_STATE(328)] = 7182,
  [SMALL_STATE(329)] = 7186,
  [SMALL_STATE(330)] = 7190,
  [SMALL_STATE(331)] = 7194,
  [SMALL_STATE(332)] = 7198,
  [SMALL_STATE(333)] = 7202,
  [SMALL_STATE(334)] = 7206,
  [SMALL_STATE(335)] = 7210,
  [SMALL_STATE(336)] = 7214,
  [SMALL_STATE(337)] = 7218,
  [SMALL_STATE(338)] = 7222,
  [SMALL_STATE(339)] = 7226,
  [SMALL_STATE(340)] = 7230,
  [SMALL_STATE(341)] = 7234,
  [SMALL_STATE(342)] = 7238,
  [SMALL_STATE(343)] = 7242,
  [SMALL_STATE(344)] = 7246,
  [SMALL_STATE(345)] = 7250,
  [SMALL_STATE(346)] = 7254,
  [SMALL_STATE(347)] = 7258,
  [SMALL_STATE(348)] = 7262,
  [SMALL_STATE(349)] = 7266,
  [SMALL_STATE(350)] = 7270,
  [SMALL_STATE(351)] = 7274,
  [SMALL_STATE(352)] = 7278,
  [SMALL_STATE(353)] = 7282,
  [SMALL_STATE(354)] = 7286,
  [SMALL_STATE(355)] = 7290,
  [SMALL_STATE(356)] = 7294,
  [SMALL_STATE(357)] = 7298,
  [SMALL_STATE(358)] = 7302,
  [SMALL_STATE(359)] = 7306,
  [SMALL_STATE(360)] = 7310,
  [SMALL_STATE(361)] = 7314,
  [SMALL_STATE(362)] = 7318,
  [SMALL_STATE(363)] = 7322,
  [SMALL_STATE(364)] = 7326,
  [SMALL_STATE(365)] = 7330,
  [SMALL_STATE(366)] = 7334,
  [SMALL_STATE(367)] = 7338,
  [SMALL_STATE(368)] = 7342,
  [SMALL_STATE(369)] = 7346,
  [SMALL_STATE(370)] = 7350,
  [SMALL_STATE(371)] = 7354,
  [SMALL_STATE(372)] = 7358,
  [SMALL_STATE(373)] = 7362,
  [SMALL_STATE(374)] = 7366,
  [SMALL_STATE(375)] = 7370,
  [SMALL_STATE(376)] = 7374,
  [SMALL_STATE(377)] = 7378,
  [SMALL_STATE(378)] = 7382,
  [SMALL_STATE(379)] = 7386,
  [SMALL_STATE(380)] = 7390,
  [SMALL_STATE(381)] = 7394,
  [SMALL_STATE(382)] = 7398,
  [SMALL_STATE(383)] = 7402,
  [SMALL_STATE(384)] = 7406,
  [SMALL_STATE(385)] = 7410,
  [SMALL_STATE(386)] = 7414,
  [SMALL_STATE(387)] = 7418,
  [SMALL_STATE(388)] = 7422,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(249),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(376),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(219),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(373),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(373),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(288),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(289),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(290),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(291),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(292),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(299),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(307),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(309),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(363),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(310),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(312),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(313),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(315),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(308),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(306),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(283),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(140),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(140),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(134),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(281),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(339),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2), SHIFT_REPEAT(104),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 4),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 5),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 5),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2), SHIFT_REPEAT(141),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 5),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 5),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 4),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_directive_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2), SHIFT_REPEAT(206),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_periodic_xact, 5),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_periodic_xact, 5),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_quantity, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_quantity, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automated_xact, 5),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automated_xact, 5),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 9),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 9),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(98),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 13),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 13),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 10),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 10),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 9),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 9),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 11),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 11),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 12),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 12),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_subdirective, 4),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_subdirective, 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_subdirective, 4),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_subdirective, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_subdirective, 4),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_subdirective, 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 4),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_subdirective, 3),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_subdirective, 3),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_subdirective, 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_subdirective, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 14),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 14),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_subdirective, 4),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_subdirective, 4),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 3),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 6),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 6),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 4),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 4),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 6),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 6),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 4),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 4),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 5),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 5),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 5),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 5),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 7),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 7),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 5),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 7),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 7),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(77),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(86),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(95),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(113),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(114),
  [556] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(114),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(116),
  [564] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(378),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [569] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(279),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(128),
  [613] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(362),
  [616] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(221),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 3),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [691] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(163),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 5),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [706] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_repeat1, 2), SHIFT_REPEAT(172),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_repeat1, 2),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_note_repeat1, 2),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xact_date, 1),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 3),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 3),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(192),
  [768] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(192),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 3),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [783] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_repeat1, 2), SHIFT_REPEAT(201),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_date, 2),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [808] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(220),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 3),
  [819] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_repeat2, 2), SHIFT_REPEAT(224),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_repeat2, 2),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [834] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(228),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xact_date, 2),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3, .production_id = 2),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [867] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(243),
  [870] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(244),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 5),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 7),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 4),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 2),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 5),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 6),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1, .production_id = 1),
  [951] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(277),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [996] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_repeat2, 2), SHIFT_REPEAT(300),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval, 1),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 7),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 5),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 3),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 3),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 5),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 5),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1069] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 4),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 10),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 9),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 6),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_value, 1),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 8),
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
