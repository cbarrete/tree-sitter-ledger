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
#define STATE_COUNT 350
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 134
#define ALIAS_COUNT 0
#define TOKEN_COUNT 86
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
  sym_account_name = 74,
  sym__quantity = 75,
  anon_sym_PLUS = 76,
  aux_sym_commodity_token1 = 77,
  aux_sym_commodity_token2 = 78,
  aux_sym_commodity_token3 = 79,
  anon_sym_AT = 80,
  anon_sym_AT_AT = 81,
  anon_sym_ = 82,
  anon_sym_TAB = 83,
  anon_sym_2 = 84,
  anon_sym_TAB2 = 85,
  sym_source_file = 86,
  sym_journal_item = 87,
  sym_block_comment = 88,
  sym_test = 89,
  sym_option = 90,
  sym_option_value = 91,
  sym_directive = 92,
  sym_account_directive = 93,
  sym_account_subdirective = 94,
  sym_commodity_directive = 95,
  sym_commodity_subdirective = 96,
  sym_tag_directive = 97,
  sym_word_directive = 98,
  sym_filename = 99,
  sym_char_directive = 100,
  sym_alias_subdirective = 101,
  sym_default_subdirective = 102,
  sym_format_subdirective = 103,
  sym_note_subdirective = 104,
  sym_assert_subdirective = 105,
  sym_check_subdirective = 106,
  sym_check_in = 107,
  sym_check_out = 108,
  sym_xact = 109,
  sym_plain_xact = 110,
  sym_periodic_xact = 111,
  sym_interval = 112,
  sym_date = 113,
  sym__4d = 114,
  sym__single_date = 115,
  sym_status = 116,
  sym_code = 117,
  sym_note = 118,
  sym_posting = 119,
  sym_account = 120,
  sym_amount = 121,
  sym_quantity = 122,
  sym_negative_quantity = 123,
  sym_commodity = 124,
  sym_price = 125,
  sym_balance_assertion = 126,
  aux_sym_source_file_repeat1 = 127,
  aux_sym_block_comment_repeat1 = 128,
  aux_sym_account_directive_repeat1 = 129,
  aux_sym_commodity_directive_repeat1 = 130,
  aux_sym_tag_directive_repeat1 = 131,
  aux_sym_plain_xact_repeat1 = 132,
  aux_sym_whitespace_repeat1 = 133,
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
  [anon_sym_LBRACK] = "",
  [anon_sym_RBRACK] = "",
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
  [sym_date] = "date",
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
  [anon_sym_RBRACK] = anon_sym_LBRACK,
  [sym_account_name] = anon_sym_LBRACK,
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
  [sym_date] = sym_date,
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
  [sym_date] = {
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
    [0] = anon_sym_LBRACK,
  },
  [2] = {
    [0] = anon_sym_LBRACK,
    [2] = anon_sym_LBRACK,
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
  [82] = 41,
  [83] = 83,
  [84] = 84,
  [85] = 60,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 60,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 40,
  [100] = 47,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 27,
  [106] = 106,
  [107] = 60,
  [108] = 60,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 116,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 117,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 131,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 39,
  [140] = 136,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 29,
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
  [160] = 160,
  [161] = 161,
  [162] = 60,
  [163] = 157,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 167,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 60,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 164,
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
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 189,
  [210] = 210,
  [211] = 211,
  [212] = 208,
  [213] = 60,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 60,
  [219] = 219,
  [220] = 60,
  [221] = 221,
  [222] = 60,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
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
  [238] = 238,
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
  [345] = 314,
  [346] = 329,
  [347] = 330,
  [348] = 344,
  [349] = 349,
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
      if (eof) ADVANCE(229);
      if (lookahead == '\t') ADVANCE(423);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == ' ') ADVANCE(417);
      if (lookahead == '!') ADVANCE(397);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == ')') ADVANCE(402);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == '+') ADVANCE(411);
      if (lookahead == '-') ADVANCE(310);
      if (lookahead == ';') ADVANCE(404);
      if (lookahead == '=') ADVANCE(315);
      if (lookahead == '@') ADVANCE(415);
      if (lookahead == 'A') ADVANCE(342);
      if (lookahead == 'B') ADVANCE(156);
      if (lookahead == 'C') ADVANCE(352);
      if (lookahead == 'D') ADVANCE(350);
      if (lookahead == 'E') ADVANCE(203);
      if (lookahead == 'I') ADVANCE(365);
      if (lookahead == 'N') ADVANCE(347);
      if (lookahead == 'O') ADVANCE(369);
      if (lookahead == 'P') ADVANCE(354);
      if (lookahead == 'Y') ADVANCE(345);
      if (lookahead == '[') ADVANCE(405);
      if (lookahead == ']') ADVANCE(407);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'b') ADVANCE(121);
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(363);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(367);
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == 'y') ADVANCE(32);
      if (lookahead == '~') ADVANCE(371);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(174);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(200);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(141);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(413);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(423);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == ' ') ADVANCE(417);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '+') ADVANCE(411);
      if (lookahead == '-') ADVANCE(309);
      if (lookahead == ';') ADVANCE(404);
      if (lookahead == '=') ADVANCE(315);
      if (lookahead == '@') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(413);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(412);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(423);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == ' ') ADVANCE(417);
      if (lookahead == ';') ADVANCE(404);
      if (lookahead == '=') ADVANCE(315);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(423);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == ' ') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(417);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == ';') ADVANCE(404);
      if (lookahead == '=') ADVANCE(315);
      if (lookahead == '@') ADVANCE(415);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(413);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(412);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(417);
      if (lookahead == '+') ADVANCE(411);
      if (lookahead == '-') ADVANCE(309);
      if (lookahead == 'D') ADVANCE(126);
      if (lookahead == 'E') ADVANCE(203);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(156);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(174);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(200);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(141);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(417);
      if (lookahead == '+') ADVANCE(411);
      if (lookahead == '-') ADVANCE(309);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'c') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(417);
      if (lookahead == '!') ADVANCE(398);
      if (lookahead == '(') ADVANCE(400);
      if (lookahead == '*') ADVANCE(396);
      if (lookahead == ';') ADVANCE(404);
      if (lookahead == '[') ADVANCE(406);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(417);
      if (lookahead == '(') ADVANCE(400);
      if (lookahead == '[') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(409);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(419);
      if (lookahead == '!') ADVANCE(397);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(430);
      END_STATE();
    case 11:
      if (lookahead == '\t') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == '\t') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(332);
      END_STATE();
    case 13:
      if (lookahead == '\t') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(327);
      if (lookahead == 'c') ADVANCE(19);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(327);
      if (lookahead == 'e') ADVANCE(15);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(327);
      if (lookahead == 'e') ADVANCE(20);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(327);
      if (lookahead == 'h') ADVANCE(16);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(327);
      if (lookahead == 'k') ADVANCE(362);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(327);
      if (lookahead == 'r') ADVANCE(23);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(327);
      if (lookahead == 's') ADVANCE(22);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(327);
      if (lookahead == 's') ADVANCE(17);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(327);
      if (lookahead == 't') ADVANCE(360);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(327);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(320);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(221);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(222);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == 'R') ADVANCE(163);
      if (lookahead == 'r') ADVANCE(337);
      END_STATE();
    case 34:
      if (lookahead == 'V') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == 'v') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 'V') ADVANCE(138);
      if (lookahead == 'v') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(299);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(298);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(334);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(333);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(325);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(63);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 78:
      if (lookahead == 'k') ADVANCE(361);
      END_STATE();
    case 79:
      if (lookahead == 'k') ADVANCE(62);
      END_STATE();
    case 80:
      if (lookahead == 'k') ADVANCE(66);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(319);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 122:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 124:
      if (lookahead == 'y') ADVANCE(322);
      END_STATE();
    case 125:
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 135:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(131);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(175);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(201);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(143);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 136:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(132);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(176);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(202);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(145);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(148);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 152:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(375);
      END_STATE();
    case 153:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(191);
      END_STATE();
    case 154:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(165);
      END_STATE();
    case 155:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(167);
      END_STATE();
    case 156:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 157:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 158:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(374);
      END_STATE();
    case 159:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(189);
      END_STATE();
    case 160:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(164);
      END_STATE();
    case 161:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(166);
      END_STATE();
    case 162:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 163:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(206);
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
          lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 169:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(177);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(151);
      END_STATE();
    case 170:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(193);
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
          lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 174:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(170);
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
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(377);
      END_STATE();
    case 179:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(376);
      END_STATE();
    case 180:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 181:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 182:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 183:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 184:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 185:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 186:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 187:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 188:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(378);
      END_STATE();
    case 189:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(379);
      END_STATE();
    case 190:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(382);
      END_STATE();
    case 191:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(380);
      END_STATE();
    case 192:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(381);
      END_STATE();
    case 193:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(154);
      END_STATE();
    case 194:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(152);
      END_STATE();
    case 195:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(153);
      END_STATE();
    case 196:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(150);
      END_STATE();
    case 197:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(144);
      END_STATE();
    case 198:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 199:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(155);
      END_STATE();
    case 200:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 201:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 202:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 203:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(138);
      END_STATE();
    case 204:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(383);
      END_STATE();
    case 205:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(26);
      END_STATE();
    case 206:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(389);
      END_STATE();
    case 207:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(384);
      END_STATE();
    case 208:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(386);
      END_STATE();
    case 209:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(385);
      END_STATE();
    case 210:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(387);
      END_STATE();
    case 211:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(373);
      END_STATE();
    case 212:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(388);
      END_STATE();
    case 213:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(188);
      END_STATE();
    case 214:
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(394);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(393);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(391);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 224:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(409);
      END_STATE();
    case 225:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(314);
      END_STATE();
    case 226:
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(409);
      END_STATE();
    case 227:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 228:
      if (eof) ADVANCE(229);
      if (lookahead == '\t') ADVANCE(423);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == ' ') ADVANCE(417);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(14);
      if (lookahead == '-') ADVANCE(310);
      if (lookahead == 'A') ADVANCE(342);
      if (lookahead == 'C') ADVANCE(352);
      if (lookahead == 'D') ADVANCE(349);
      if (lookahead == 'I') ADVANCE(365);
      if (lookahead == 'N') ADVANCE(347);
      if (lookahead == 'O') ADVANCE(369);
      if (lookahead == 'P') ADVANCE(354);
      if (lookahead == 'Y') ADVANCE(344);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'b') ADVANCE(120);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(363);
      if (lookahead == 'o') ADVANCE(367);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == 'y') ADVANCE(68);
      if (lookahead == '~') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(427);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == ' ') ADVANCE(420);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(427);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == ' ') ADVANCE(420);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(244);
      if (lookahead == 'l') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == 'o') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'f') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'g') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'i') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'k') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'l') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'r') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'y') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (eof) ADVANCE(229);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(237);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == 'A') ADVANCE(343);
      if (lookahead == 'C') ADVANCE(353);
      if (lookahead == 'D') ADVANCE(351);
      if (lookahead == 'I') ADVANCE(366);
      if (lookahead == 'N') ADVANCE(348);
      if (lookahead == 'O') ADVANCE(370);
      if (lookahead == 'P') ADVANCE(355);
      if (lookahead == 'Y') ADVANCE(346);
      if (lookahead == 'a') ADVANCE(241);
      if (lookahead == 'b') ADVANCE(290);
      if (lookahead == 'c') ADVANCE(274);
      if (lookahead == 'd') ADVANCE(251);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == 'i') ADVANCE(364);
      if (lookahead == 'o') ADVANCE(368);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == 'y') ADVANCE(252);
      if (lookahead == '~') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ' ') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ' ') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_endcomment);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_endcomment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_endtest);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_endtest);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(312);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_option_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_EQ);
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
          lookahead != '\n') ADVANCE(296);
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
          lookahead != '\n') ADVANCE(296);
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
          lookahead != '\n') ADVANCE(296);
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
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
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
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
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
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_N);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_C);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
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
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(24);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_check);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '\n') ADVANCE(327);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(24);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_I);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
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
      if (lookahead == ':') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(408);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(408);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(408);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(408);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(408);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__quantity);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_commodity_token3);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(416);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(320);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(403);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(332);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(320);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(408);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(403);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(332);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 228},
  [2] = {.lex_state = 228},
  [3] = {.lex_state = 228},
  [4] = {.lex_state = 228},
  [5] = {.lex_state = 228},
  [6] = {.lex_state = 228},
  [7] = {.lex_state = 228},
  [8] = {.lex_state = 228},
  [9] = {.lex_state = 228},
  [10] = {.lex_state = 228},
  [11] = {.lex_state = 228},
  [12] = {.lex_state = 228},
  [13] = {.lex_state = 228},
  [14] = {.lex_state = 228},
  [15] = {.lex_state = 228},
  [16] = {.lex_state = 228},
  [17] = {.lex_state = 228},
  [18] = {.lex_state = 228},
  [19] = {.lex_state = 228},
  [20] = {.lex_state = 228},
  [21] = {.lex_state = 228},
  [22] = {.lex_state = 228},
  [23] = {.lex_state = 228},
  [24] = {.lex_state = 228},
  [25] = {.lex_state = 228},
  [26] = {.lex_state = 228},
  [27] = {.lex_state = 228},
  [28] = {.lex_state = 228},
  [29] = {.lex_state = 228},
  [30] = {.lex_state = 228},
  [31] = {.lex_state = 228},
  [32] = {.lex_state = 228},
  [33] = {.lex_state = 228},
  [34] = {.lex_state = 228},
  [35] = {.lex_state = 228},
  [36] = {.lex_state = 228},
  [37] = {.lex_state = 228},
  [38] = {.lex_state = 228},
  [39] = {.lex_state = 228},
  [40] = {.lex_state = 228},
  [41] = {.lex_state = 228},
  [42] = {.lex_state = 228},
  [43] = {.lex_state = 228},
  [44] = {.lex_state = 228},
  [45] = {.lex_state = 228},
  [46] = {.lex_state = 228},
  [47] = {.lex_state = 228},
  [48] = {.lex_state = 297},
  [49] = {.lex_state = 297},
  [50] = {.lex_state = 297},
  [51] = {.lex_state = 297},
  [52] = {.lex_state = 297},
  [53] = {.lex_state = 297},
  [54] = {.lex_state = 297},
  [55] = {.lex_state = 297},
  [56] = {.lex_state = 228},
  [57] = {.lex_state = 228},
  [58] = {.lex_state = 228},
  [59] = {.lex_state = 228},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 228},
  [62] = {.lex_state = 228},
  [63] = {.lex_state = 228},
  [64] = {.lex_state = 228},
  [65] = {.lex_state = 228},
  [66] = {.lex_state = 228},
  [67] = {.lex_state = 228},
  [68] = {.lex_state = 228},
  [69] = {.lex_state = 228},
  [70] = {.lex_state = 228},
  [71] = {.lex_state = 228},
  [72] = {.lex_state = 228},
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
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 228},
  [112] = {.lex_state = 228},
  [113] = {.lex_state = 228},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 234},
  [118] = {.lex_state = 234},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 228},
  [121] = {.lex_state = 235},
  [122] = {.lex_state = 235},
  [123] = {.lex_state = 235},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 235},
  [126] = {.lex_state = 234},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 234},
  [129] = {.lex_state = 228},
  [130] = {.lex_state = 235},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 234},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 9},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 235},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 234},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 235},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 234},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 13},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 8},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 13},
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
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 9},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 228},
  [208] = {.lex_state = 236},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 11},
  [211] = {.lex_state = 11},
  [212] = {.lex_state = 236},
  [213] = {.lex_state = 11},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 9},
  [216] = {.lex_state = 9},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 12},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 13},
  [221] = {.lex_state = 3},
  [222] = {.lex_state = 236},
  [223] = {.lex_state = 9},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 3},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 9},
  [231] = {.lex_state = 2},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 11},
  [234] = {.lex_state = 11},
  [235] = {.lex_state = 9},
  [236] = {.lex_state = 11},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 3},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 9},
  [242] = {.lex_state = 3},
  [243] = {.lex_state = 3},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 13},
  [246] = {.lex_state = 2},
  [247] = {.lex_state = 12},
  [248] = {.lex_state = 2},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 2},
  [251] = {.lex_state = 3},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 9},
  [254] = {.lex_state = 236},
  [255] = {.lex_state = 3},
  [256] = {.lex_state = 236},
  [257] = {.lex_state = 9},
  [258] = {.lex_state = 9},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
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
  [287] = {.lex_state = 227},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 4},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 4},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 401},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 3},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 3},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 226},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 226},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 5},
  [330] = {.lex_state = 5},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 3},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 227},
  [337] = {.lex_state = 296},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 225},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 5},
  [347] = {.lex_state = 5},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 4},
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
    [sym_source_file] = STATE(289),
    [sym_journal_item] = STATE(2),
    [sym_block_comment] = STATE(56),
    [sym_test] = STATE(56),
    [sym_option] = STATE(67),
    [sym_directive] = STATE(56),
    [sym_account_directive] = STATE(67),
    [sym_commodity_directive] = STATE(67),
    [sym_tag_directive] = STATE(67),
    [sym_word_directive] = STATE(297),
    [sym_char_directive] = STATE(297),
    [sym_check_in] = STATE(302),
    [sym_check_out] = STATE(302),
    [sym_xact] = STATE(56),
    [sym_plain_xact] = STATE(69),
    [sym_periodic_xact] = STATE(69),
    [sym_date] = STATE(170),
    [sym__4d] = STATE(293),
    [sym__single_date] = STATE(180),
    [aux_sym_source_file_repeat1] = STATE(2),
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
  [0] = 37,
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
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      anon_sym_LF,
    STATE(170), 1,
      sym_date,
    STATE(180), 1,
      sym__single_date,
    STATE(293), 1,
      sym__4d,
    ACTIONS(53), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(69), 2,
      sym_plain_xact,
      sym_periodic_xact,
    STATE(297), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(302), 2,
      sym_check_in,
      sym_check_out,
    STATE(56), 4,
      sym_block_comment,
      sym_test,
      sym_directive,
      sym_xact,
    STATE(67), 4,
      sym_option,
      sym_account_directive,
      sym_commodity_directive,
      sym_tag_directive,
  [123] = 37,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      anon_sym_LF,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_comment,
    ACTIONS(74), 1,
      anon_sym_end,
    ACTIONS(77), 1,
      anon_sym_test,
    ACTIONS(80), 1,
      anon_sym_DASH,
    ACTIONS(83), 1,
      anon_sym_DASH_DASH,
    ACTIONS(86), 1,
      anon_sym_account,
    ACTIONS(89), 1,
      anon_sym_commodity,
    ACTIONS(92), 1,
      anon_sym_tag,
    ACTIONS(95), 1,
      anon_sym_include,
    ACTIONS(98), 1,
      anon_sym_alias,
    ACTIONS(101), 1,
      anon_sym_def,
    ACTIONS(104), 1,
      anon_sym_year,
    ACTIONS(107), 1,
      aux_sym_word_directive_token2,
    ACTIONS(110), 1,
      anon_sym_bucket,
    ACTIONS(113), 1,
      anon_sym_A,
    ACTIONS(116), 1,
      anon_sym_Y,
    ACTIONS(119), 1,
      anon_sym_N,
    ACTIONS(122), 1,
      anon_sym_D,
    ACTIONS(125), 1,
      anon_sym_C,
    ACTIONS(128), 1,
      anon_sym_P,
    ACTIONS(131), 1,
      anon_sym_i,
    ACTIONS(134), 1,
      anon_sym_I,
    ACTIONS(140), 1,
      anon_sym_TILDE,
    ACTIONS(143), 1,
      sym__2d,
    STATE(170), 1,
      sym_date,
    STATE(180), 1,
      sym__single_date,
    STATE(293), 1,
      sym__4d,
    ACTIONS(137), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(69), 2,
      sym_plain_xact,
      sym_periodic_xact,
    STATE(297), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(302), 2,
      sym_check_in,
      sym_check_out,
    STATE(56), 4,
      sym_block_comment,
      sym_test,
      sym_directive,
      sym_xact,
    STATE(67), 4,
      sym_option,
      sym_account_directive,
      sym_commodity_directive,
      sym_tag_directive,
  [246] = 6,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(150), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    ACTIONS(148), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(20), 5,
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
  [298] = 6,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(156), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    ACTIONS(154), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(20), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_note_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
    ACTIONS(152), 26,
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
  [350] = 6,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(150), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    ACTIONS(161), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(20), 5,
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
  [402] = 6,
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
    STATE(38), 4,
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
  [453] = 6,
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
    STATE(38), 4,
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
  [504] = 6,
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
    STATE(38), 4,
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
  [555] = 5,
    STATE(197), 1,
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
  [601] = 5,
    STATE(197), 1,
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
  [647] = 5,
    STATE(197), 1,
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
  [693] = 5,
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
  [738] = 5,
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
  [783] = 5,
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
  [828] = 5,
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
  [873] = 5,
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
  [918] = 5,
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
  [963] = 2,
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
  [999] = 2,
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
  [1035] = 2,
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
  [1071] = 2,
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
  [1107] = 2,
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
  [1143] = 2,
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
  [1179] = 2,
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
  [1215] = 2,
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
  [1251] = 2,
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
  [1287] = 2,
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
  [1323] = 2,
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
  [1359] = 2,
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
  [1395] = 2,
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
  [1431] = 2,
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
  [1467] = 2,
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
  [1503] = 2,
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
  [1539] = 2,
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
  [1575] = 2,
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
  [1611] = 2,
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
  [1647] = 2,
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
  [1683] = 2,
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
  [1719] = 2,
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
  [1755] = 2,
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
  [1791] = 2,
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
  [1827] = 2,
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
  [1863] = 2,
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
  [1899] = 2,
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
  [1935] = 2,
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
  [1971] = 2,
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
  [2007] = 3,
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
  [2044] = 3,
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
  [2081] = 3,
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
  [2118] = 3,
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
  [2155] = 3,
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
  [2192] = 3,
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
  [2229] = 3,
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
  [2266] = 3,
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
  [2303] = 2,
    ACTIONS(392), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(390), 26,
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
  [2337] = 2,
    ACTIONS(396), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(394), 26,
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
  [2371] = 2,
    ACTIONS(400), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(398), 26,
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
  [2405] = 2,
    ACTIONS(404), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(402), 26,
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
  [2439] = 3,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(408), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(406), 26,
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
  [2475] = 2,
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
  [2509] = 2,
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
  [2543] = 2,
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
  [2577] = 2,
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
  [2611] = 2,
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
  [2645] = 2,
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
  [2679] = 2,
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
  [2713] = 2,
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
  [2747] = 2,
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
  [2781] = 2,
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
  [2815] = 2,
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
  [2849] = 2,
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
  [2883] = 17,
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
    STATE(77), 1,
      aux_sym_whitespace_repeat1,
    STATE(95), 1,
      sym_amount,
    STATE(119), 1,
      sym_commodity,
    STATE(124), 1,
      sym_price,
    STATE(175), 1,
      sym_balance_assertion,
    STATE(305), 1,
      sym_note,
    ACTIONS(445), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(163), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2939] = 17,
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
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(96), 1,
      sym_amount,
    STATE(115), 1,
      sym_price,
    STATE(119), 1,
      sym_commodity,
    STATE(168), 1,
      sym_balance_assertion,
    STATE(299), 1,
      sym_note,
    ACTIONS(449), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(163), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2995] = 17,
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
    STATE(78), 1,
      aux_sym_whitespace_repeat1,
    STATE(97), 1,
      sym_amount,
    STATE(110), 1,
      sym_price,
    STATE(119), 1,
      sym_commodity,
    STATE(181), 1,
      sym_balance_assertion,
    STATE(300), 1,
      sym_note,
    ACTIONS(453), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(163), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3051] = 4,
    STATE(60), 1,
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
  [3081] = 16,
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
    STATE(85), 1,
      aux_sym_whitespace_repeat1,
    STATE(96), 1,
      sym_amount,
    STATE(115), 1,
      sym_price,
    STATE(119), 1,
      sym_commodity,
    STATE(168), 1,
      sym_balance_assertion,
    STATE(299), 1,
      sym_note,
    ACTIONS(459), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(163), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3134] = 16,
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
    STATE(85), 1,
      aux_sym_whitespace_repeat1,
    STATE(94), 1,
      sym_amount,
    STATE(119), 1,
      sym_commodity,
    STATE(127), 1,
      sym_price,
    STATE(177), 1,
      sym_balance_assertion,
    STATE(298), 1,
      sym_note,
    ACTIONS(459), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(163), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3187] = 16,
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
    STATE(85), 1,
      aux_sym_whitespace_repeat1,
    STATE(97), 1,
      sym_amount,
    STATE(110), 1,
      sym_price,
    STATE(119), 1,
      sym_commodity,
    STATE(181), 1,
      sym_balance_assertion,
    STATE(300), 1,
      sym_note,
    ACTIONS(459), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(163), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3240] = 9,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    STATE(119), 1,
      sym_commodity,
    STATE(186), 1,
      sym_amount,
    ACTIONS(461), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(163), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3272] = 9,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    STATE(119), 1,
      sym_commodity,
    STATE(249), 1,
      sym_amount,
    ACTIONS(463), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(163), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3304] = 2,
    ACTIONS(316), 1,
      anon_sym_AT,
    ACTIONS(314), 12,
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
  [3322] = 9,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    STATE(85), 1,
      aux_sym_whitespace_repeat1,
    STATE(119), 1,
      sym_commodity,
    STATE(291), 1,
      sym_amount,
    ACTIONS(459), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(163), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3354] = 9,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    STATE(119), 1,
      sym_commodity,
    STATE(310), 1,
      sym_amount,
    ACTIONS(465), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(163), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3386] = 4,
    ACTIONS(467), 1,
      anon_sym_AT,
    STATE(85), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(469), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(406), 9,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym__quantity,
      anon_sym_PLUS,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
  [3408] = 9,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    STATE(85), 1,
      aux_sym_whitespace_repeat1,
    STATE(119), 1,
      sym_commodity,
    STATE(310), 1,
      sym_amount,
    ACTIONS(459), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(163), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3440] = 9,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    STATE(85), 1,
      aux_sym_whitespace_repeat1,
    STATE(119), 1,
      sym_commodity,
    STATE(328), 1,
      sym_amount,
    ACTIONS(459), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(163), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3472] = 9,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    STATE(34), 1,
      sym_amount,
    STATE(85), 1,
      aux_sym_whitespace_repeat1,
    STATE(116), 1,
      sym_commodity,
    ACTIONS(459), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(157), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3504] = 4,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(467), 2,
      sym__2d,
      anon_sym_AT,
    ACTIONS(472), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(406), 8,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      sym_time,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
  [3526] = 9,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    STATE(85), 1,
      aux_sym_whitespace_repeat1,
    STATE(119), 1,
      sym_commodity,
    STATE(227), 1,
      sym_amount,
    ACTIONS(459), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(163), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3558] = 9,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    STATE(85), 1,
      aux_sym_whitespace_repeat1,
    STATE(119), 1,
      sym_commodity,
    STATE(184), 1,
      sym_amount,
    ACTIONS(459), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(163), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3590] = 9,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(119), 1,
      sym_commodity,
    STATE(322), 1,
      sym_amount,
    ACTIONS(475), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(163), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3622] = 11,
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
    STATE(108), 1,
      aux_sym_whitespace_repeat1,
    STATE(152), 1,
      sym_status,
    STATE(255), 1,
      sym_account,
    STATE(332), 1,
      sym_note,
    ACTIONS(477), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [3657] = 10,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(441), 1,
      anon_sym_AT,
    ACTIONS(443), 1,
      anon_sym_AT_AT,
    ACTIONS(489), 1,
      anon_sym_LF,
    STATE(104), 1,
      aux_sym_whitespace_repeat1,
    STATE(114), 1,
      sym_price,
    STATE(171), 1,
      sym_balance_assertion,
    STATE(294), 1,
      sym_note,
    ACTIONS(491), 2,
      anon_sym_,
      anon_sym_TAB,
  [3689] = 10,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(441), 1,
      anon_sym_AT,
    ACTIONS(443), 1,
      anon_sym_AT_AT,
    ACTIONS(447), 1,
      anon_sym_LF,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    STATE(115), 1,
      sym_price,
    STATE(168), 1,
      sym_balance_assertion,
    STATE(299), 1,
      sym_note,
    ACTIONS(493), 2,
      anon_sym_,
      anon_sym_TAB,
  [3721] = 10,
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
    STATE(110), 1,
      sym_price,
    STATE(181), 1,
      sym_balance_assertion,
    STATE(300), 1,
      sym_note,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [3753] = 10,
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
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    STATE(127), 1,
      sym_price,
    STATE(177), 1,
      sym_balance_assertion,
    STATE(298), 1,
      sym_note,
    ACTIONS(499), 2,
      anon_sym_,
      anon_sym_TAB,
  [3785] = 8,
    ACTIONS(503), 1,
      anon_sym_alias,
    ACTIONS(505), 1,
      anon_sym_default,
    ACTIONS(507), 1,
      anon_sym_note,
    ACTIONS(509), 1,
      anon_sym_assert,
    ACTIONS(511), 1,
      anon_sym_check,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(457), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(501), 2,
      anon_sym_eval,
      anon_sym_payee,
  [3812] = 2,
    ACTIONS(312), 1,
      anon_sym_AT,
    ACTIONS(310), 9,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [3827] = 2,
    ACTIONS(340), 1,
      anon_sym_AT,
    ACTIONS(338), 9,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [3842] = 9,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(441), 1,
      anon_sym_AT,
    ACTIONS(443), 1,
      anon_sym_AT_AT,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(127), 1,
      sym_price,
    STATE(177), 1,
      sym_balance_assertion,
    STATE(298), 1,
      sym_note,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
  [3871] = 9,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(441), 1,
      anon_sym_AT,
    ACTIONS(443), 1,
      anon_sym_AT_AT,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(114), 1,
      sym_price,
    STATE(171), 1,
      sym_balance_assertion,
    STATE(294), 1,
      sym_note,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
  [3900] = 9,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(441), 1,
      anon_sym_AT,
    ACTIONS(443), 1,
      anon_sym_AT_AT,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(110), 1,
      sym_price,
    STATE(181), 1,
      sym_balance_assertion,
    STATE(300), 1,
      sym_note,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
  [3929] = 9,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(441), 1,
      anon_sym_AT,
    ACTIONS(443), 1,
      anon_sym_AT_AT,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(133), 1,
      sym_price,
    STATE(172), 1,
      sym_balance_assertion,
    STATE(301), 1,
      sym_note,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
  [3958] = 2,
    ACTIONS(260), 1,
      anon_sym_AT,
    ACTIONS(258), 9,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [3973] = 7,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      sym_payee,
    STATE(162), 1,
      aux_sym_whitespace_repeat1,
    STATE(165), 1,
      sym_code,
    STATE(166), 1,
      sym_status,
    ACTIONS(515), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(521), 2,
      anon_sym_,
      anon_sym_TAB,
  [3997] = 4,
    STATE(107), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(467), 2,
      anon_sym_assert,
      anon_sym_check,
    ACTIONS(523), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(406), 4,
      anon_sym_DASH,
      aux_sym_tag_directive_token1,
      sym__quantity,
      anon_sym_PLUS,
  [4015] = 5,
    ACTIONS(406), 1,
      anon_sym_SEMI,
    ACTIONS(526), 1,
      anon_sym_,
    ACTIONS(529), 1,
      anon_sym_TAB,
    STATE(108), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(467), 5,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [4035] = 7,
    ACTIONS(503), 1,
      anon_sym_alias,
    ACTIONS(505), 1,
      anon_sym_default,
    ACTIONS(507), 1,
      anon_sym_note,
    ACTIONS(532), 1,
      anon_sym_nomarket,
    ACTIONS(534), 1,
      anon_sym_format,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(457), 2,
      anon_sym_,
      anon_sym_TAB,
  [4058] = 7,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(497), 1,
      anon_sym_LF,
    STATE(135), 1,
      aux_sym_whitespace_repeat1,
    STATE(177), 1,
      sym_balance_assertion,
    STATE(298), 1,
      sym_note,
    ACTIONS(536), 2,
      anon_sym_,
      anon_sym_TAB,
  [4081] = 7,
    ACTIONS(33), 1,
      aux_sym_word_directive_token2,
    ACTIONS(57), 1,
      sym__2d,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(180), 1,
      sym__single_date,
    STATE(229), 1,
      sym_date,
    STATE(293), 1,
      sym__4d,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
  [4104] = 7,
    ACTIONS(33), 1,
      aux_sym_word_directive_token2,
    ACTIONS(57), 1,
      sym__2d,
    STATE(111), 1,
      aux_sym_whitespace_repeat1,
    STATE(180), 1,
      sym__single_date,
    STATE(231), 1,
      sym_date,
    STATE(293), 1,
      sym__4d,
    ACTIONS(538), 2,
      anon_sym_,
      anon_sym_TAB,
  [4127] = 7,
    ACTIONS(33), 1,
      aux_sym_word_directive_token2,
    ACTIONS(57), 1,
      sym__2d,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(180), 1,
      sym__single_date,
    STATE(274), 1,
      sym_date,
    STATE(293), 1,
      sym__4d,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
  [4150] = 7,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(540), 1,
      anon_sym_LF,
    STATE(154), 1,
      aux_sym_whitespace_repeat1,
    STATE(172), 1,
      sym_balance_assertion,
    STATE(301), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [4173] = 7,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(451), 1,
      anon_sym_LF,
    STATE(141), 1,
      aux_sym_whitespace_repeat1,
    STATE(181), 1,
      sym_balance_assertion,
    STATE(300), 1,
      sym_note,
    ACTIONS(544), 2,
      anon_sym_,
      anon_sym_TAB,
  [4196] = 6,
    ACTIONS(546), 1,
      anon_sym_DASH,
    ACTIONS(548), 1,
      sym__quantity,
    ACTIONS(550), 1,
      anon_sym_PLUS,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(552), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(39), 2,
      sym_quantity,
      sym_negative_quantity,
  [4217] = 6,
    ACTIONS(554), 1,
      anon_sym_LF,
    ACTIONS(557), 1,
      aux_sym_block_comment_token1,
    STATE(117), 1,
      aux_sym_block_comment_repeat1,
    STATE(212), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(560), 2,
      anon_sym_end,
      anon_sym_endtest,
    ACTIONS(562), 2,
      anon_sym_,
      anon_sym_TAB,
  [4238] = 7,
    ACTIONS(364), 1,
      anon_sym_endtest,
    ACTIONS(565), 1,
      anon_sym_LF,
    ACTIONS(567), 1,
      aux_sym_block_comment_token1,
    ACTIONS(569), 1,
      anon_sym_end,
    STATE(117), 1,
      aux_sym_block_comment_repeat1,
    STATE(212), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(571), 2,
      anon_sym_,
      anon_sym_TAB,
  [4261] = 6,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    STATE(134), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(573), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(139), 2,
      sym_quantity,
      sym_negative_quantity,
  [4282] = 7,
    ACTIONS(33), 1,
      aux_sym_word_directive_token2,
    ACTIONS(57), 1,
      sym__2d,
    STATE(129), 1,
      aux_sym_whitespace_repeat1,
    STATE(180), 1,
      sym__single_date,
    STATE(225), 1,
      sym_date,
    STATE(293), 1,
      sym__4d,
    ACTIONS(575), 2,
      anon_sym_,
      anon_sym_TAB,
  [4305] = 7,
    ACTIONS(352), 1,
      anon_sym_endcomment,
    ACTIONS(577), 1,
      anon_sym_LF,
    ACTIONS(579), 1,
      aux_sym_block_comment_token1,
    ACTIONS(581), 1,
      anon_sym_end,
    STATE(123), 1,
      aux_sym_block_comment_repeat1,
    STATE(208), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(583), 2,
      anon_sym_,
      anon_sym_TAB,
  [4328] = 7,
    ACTIONS(370), 1,
      anon_sym_endcomment,
    ACTIONS(577), 1,
      anon_sym_LF,
    ACTIONS(579), 1,
      aux_sym_block_comment_token1,
    ACTIONS(585), 1,
      anon_sym_end,
    STATE(123), 1,
      aux_sym_block_comment_repeat1,
    STATE(208), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(583), 2,
      anon_sym_,
      anon_sym_TAB,
  [4351] = 6,
    ACTIONS(587), 1,
      anon_sym_LF,
    ACTIONS(590), 1,
      aux_sym_block_comment_token1,
    STATE(123), 1,
      aux_sym_block_comment_repeat1,
    STATE(208), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(560), 2,
      anon_sym_end,
      anon_sym_endcomment,
    ACTIONS(593), 2,
      anon_sym_,
      anon_sym_TAB,
  [4372] = 7,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(447), 1,
      anon_sym_LF,
    STATE(158), 1,
      aux_sym_whitespace_repeat1,
    STATE(168), 1,
      sym_balance_assertion,
    STATE(299), 1,
      sym_note,
    ACTIONS(596), 2,
      anon_sym_,
      anon_sym_TAB,
  [4395] = 7,
    ACTIONS(376), 1,
      anon_sym_endcomment,
    ACTIONS(579), 1,
      aux_sym_block_comment_token1,
    ACTIONS(598), 1,
      anon_sym_LF,
    ACTIONS(600), 1,
      anon_sym_end,
    STATE(122), 1,
      aux_sym_block_comment_repeat1,
    STATE(208), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(583), 2,
      anon_sym_,
      anon_sym_TAB,
  [4418] = 7,
    ACTIONS(388), 1,
      anon_sym_endtest,
    ACTIONS(567), 1,
      aux_sym_block_comment_token1,
    ACTIONS(602), 1,
      anon_sym_LF,
    ACTIONS(604), 1,
      anon_sym_end,
    STATE(118), 1,
      aux_sym_block_comment_repeat1,
    STATE(212), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(571), 2,
      anon_sym_,
      anon_sym_TAB,
  [4441] = 7,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(489), 1,
      anon_sym_LF,
    STATE(146), 1,
      aux_sym_whitespace_repeat1,
    STATE(171), 1,
      sym_balance_assertion,
    STATE(294), 1,
      sym_note,
    ACTIONS(606), 2,
      anon_sym_,
      anon_sym_TAB,
  [4464] = 7,
    ACTIONS(567), 1,
      aux_sym_block_comment_token1,
    ACTIONS(608), 1,
      anon_sym_LF,
    ACTIONS(610), 1,
      anon_sym_end,
    ACTIONS(612), 1,
      anon_sym_endtest,
    STATE(132), 1,
      aux_sym_block_comment_repeat1,
    STATE(212), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(571), 2,
      anon_sym_,
      anon_sym_TAB,
  [4487] = 7,
    ACTIONS(33), 1,
      aux_sym_word_directive_token2,
    ACTIONS(57), 1,
      sym__2d,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(180), 1,
      sym__single_date,
    STATE(248), 1,
      sym_date,
    STATE(293), 1,
      sym__4d,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
  [4510] = 7,
    ACTIONS(579), 1,
      aux_sym_block_comment_token1,
    ACTIONS(614), 1,
      anon_sym_LF,
    ACTIONS(616), 1,
      anon_sym_end,
    ACTIONS(618), 1,
      anon_sym_endcomment,
    STATE(121), 1,
      aux_sym_block_comment_repeat1,
    STATE(208), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(583), 2,
      anon_sym_,
      anon_sym_TAB,
  [4533] = 6,
    ACTIONS(546), 1,
      anon_sym_DASH,
    ACTIONS(548), 1,
      sym__quantity,
    ACTIONS(550), 1,
      anon_sym_PLUS,
    STATE(107), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(620), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(29), 2,
      sym_quantity,
      sym_negative_quantity,
  [4554] = 7,
    ACTIONS(382), 1,
      anon_sym_endtest,
    ACTIONS(565), 1,
      anon_sym_LF,
    ACTIONS(567), 1,
      aux_sym_block_comment_token1,
    ACTIONS(622), 1,
      anon_sym_end,
    STATE(117), 1,
      aux_sym_block_comment_repeat1,
    STATE(212), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(571), 2,
      anon_sym_,
      anon_sym_TAB,
  [4577] = 7,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(624), 1,
      anon_sym_LF,
    STATE(150), 1,
      aux_sym_whitespace_repeat1,
    STATE(179), 1,
      sym_balance_assertion,
    STATE(307), 1,
      sym_note,
    ACTIONS(626), 2,
      anon_sym_,
      anon_sym_TAB,
  [4600] = 6,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      sym__quantity,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    STATE(107), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(620), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(149), 2,
      sym_quantity,
      sym_negative_quantity,
  [4621] = 6,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(171), 1,
      sym_balance_assertion,
    STATE(294), 1,
      sym_note,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
  [4641] = 4,
    STATE(29), 1,
      sym_commodity,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(628), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4657] = 2,
    ACTIONS(632), 1,
      sym__dsep,
    ACTIONS(630), 6,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [4669] = 7,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      sym_account_name,
    ACTIONS(634), 1,
      anon_sym_,
    ACTIONS(636), 1,
      anon_sym_TAB,
    STATE(160), 1,
      aux_sym_whitespace_repeat1,
    STATE(217), 1,
      sym_account,
  [4691] = 2,
    ACTIONS(308), 1,
      anon_sym_AT,
    ACTIONS(306), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [4703] = 4,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(149), 1,
      sym_commodity,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4719] = 6,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(177), 1,
      sym_balance_assertion,
    STATE(298), 1,
      sym_note,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
  [4739] = 7,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      sym_account_name,
    ACTIONS(638), 1,
      anon_sym_,
    ACTIONS(640), 1,
      anon_sym_TAB,
    STATE(176), 1,
      aux_sym_whitespace_repeat1,
    STATE(217), 1,
      sym_account,
  [4761] = 4,
    STATE(84), 1,
      sym_commodity,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4777] = 7,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      sym_account_name,
    ACTIONS(638), 1,
      anon_sym_,
    ACTIONS(640), 1,
      anon_sym_TAB,
    STATE(176), 1,
      aux_sym_whitespace_repeat1,
    STATE(206), 1,
      sym_account,
  [4799] = 7,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      sym_account_name,
    ACTIONS(642), 1,
      anon_sym_,
    ACTIONS(644), 1,
      anon_sym_TAB,
    STATE(142), 1,
      aux_sym_whitespace_repeat1,
    STATE(206), 1,
      sym_account,
  [4821] = 6,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(172), 1,
      sym_balance_assertion,
    STATE(301), 1,
      sym_note,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
  [4841] = 4,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(252), 1,
      sym_commodity,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4857] = 4,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(328), 1,
      sym_commodity,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4873] = 2,
    ACTIONS(268), 1,
      anon_sym_AT,
    ACTIONS(266), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [4885] = 6,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(174), 1,
      sym_balance_assertion,
    STATE(312), 1,
      sym_note,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
  [4905] = 7,
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
    STATE(144), 1,
      aux_sym_whitespace_repeat1,
    STATE(242), 1,
      sym_account,
  [4927] = 7,
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
    STATE(156), 1,
      aux_sym_whitespace_repeat1,
    STATE(228), 1,
      sym_account,
  [4949] = 7,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      sym_account_name,
    ACTIONS(638), 1,
      anon_sym_,
    ACTIONS(640), 1,
      anon_sym_TAB,
    STATE(176), 1,
      aux_sym_whitespace_repeat1,
    STATE(328), 1,
      sym_account,
  [4971] = 6,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(179), 1,
      sym_balance_assertion,
    STATE(307), 1,
      sym_note,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
  [4991] = 7,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      sym_account_name,
    ACTIONS(638), 1,
      anon_sym_,
    ACTIONS(640), 1,
      anon_sym_TAB,
    STATE(176), 1,
      aux_sym_whitespace_repeat1,
    STATE(327), 1,
      sym_account,
  [5013] = 7,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      sym_account_name,
    ACTIONS(638), 1,
      anon_sym_,
    ACTIONS(640), 1,
      anon_sym_TAB,
    STATE(176), 1,
      aux_sym_whitespace_repeat1,
    STATE(221), 1,
      sym_account,
  [5035] = 4,
    STATE(39), 1,
      sym_commodity,
    STATE(136), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(654), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(628), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5051] = 6,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(181), 1,
      sym_balance_assertion,
    STATE(300), 1,
      sym_note,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
  [5071] = 7,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      sym_account_name,
    ACTIONS(638), 1,
      anon_sym_,
    ACTIONS(640), 1,
      anon_sym_TAB,
    STATE(176), 1,
      aux_sym_whitespace_repeat1,
    STATE(324), 1,
      sym_account,
  [5093] = 7,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      sym_account_name,
    ACTIONS(638), 1,
      anon_sym_,
    ACTIONS(640), 1,
      anon_sym_TAB,
    STATE(176), 1,
      aux_sym_whitespace_repeat1,
    STATE(243), 1,
      sym_account,
  [5115] = 4,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(325), 1,
      sym_commodity,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5131] = 4,
    ACTIONS(467), 1,
      sym_payee,
    STATE(162), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(656), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(406), 3,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
  [5147] = 4,
    STATE(139), 1,
      sym_commodity,
    STATE(140), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(659), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(439), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5163] = 2,
    ACTIONS(661), 1,
      anon_sym_LF,
    ACTIONS(663), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endcomment,
      anon_sym_,
      anon_sym_TAB,
  [5174] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(665), 1,
      anon_sym_LF,
    STATE(192), 1,
      sym_note,
    STATE(253), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(667), 2,
      anon_sym_,
      anon_sym_TAB,
  [5191] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(665), 1,
      anon_sym_LF,
    STATE(173), 1,
      aux_sym_whitespace_repeat1,
    STATE(192), 1,
      sym_note,
    ACTIONS(669), 2,
      anon_sym_,
      anon_sym_TAB,
  [5208] = 2,
    ACTIONS(671), 1,
      anon_sym_LF,
    ACTIONS(560), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endtest,
      anon_sym_,
      anon_sym_TAB,
  [5219] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(451), 1,
      anon_sym_LF,
    STATE(196), 1,
      aux_sym_whitespace_repeat1,
    STATE(300), 1,
      sym_note,
    ACTIONS(673), 2,
      anon_sym_,
      anon_sym_TAB,
  [5236] = 2,
    ACTIONS(671), 1,
      anon_sym_LF,
    ACTIONS(560), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endcomment,
      anon_sym_,
      anon_sym_TAB,
  [5247] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(675), 1,
      anon_sym_LF,
    STATE(106), 1,
      aux_sym_whitespace_repeat1,
    STATE(198), 1,
      sym_note,
    ACTIONS(677), 2,
      anon_sym_,
      anon_sym_TAB,
  [5264] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(540), 1,
      anon_sym_LF,
    STATE(190), 1,
      aux_sym_whitespace_repeat1,
    STATE(301), 1,
      sym_note,
    ACTIONS(679), 2,
      anon_sym_,
      anon_sym_TAB,
  [5281] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(624), 1,
      anon_sym_LF,
    STATE(204), 1,
      aux_sym_whitespace_repeat1,
    STATE(307), 1,
      sym_note,
    ACTIONS(681), 2,
      anon_sym_,
      anon_sym_TAB,
  [5298] = 5,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(683), 1,
      sym_payee,
    STATE(162), 1,
      aux_sym_whitespace_repeat1,
    STATE(178), 1,
      sym_code,
    ACTIONS(521), 2,
      anon_sym_,
      anon_sym_TAB,
  [5315] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(685), 1,
      anon_sym_LF,
    STATE(187), 1,
      aux_sym_whitespace_repeat1,
    STATE(316), 1,
      sym_note,
    ACTIONS(687), 2,
      anon_sym_,
      anon_sym_TAB,
  [5332] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(447), 1,
      anon_sym_LF,
    STATE(193), 1,
      aux_sym_whitespace_repeat1,
    STATE(299), 1,
      sym_note,
    ACTIONS(689), 2,
      anon_sym_,
      anon_sym_TAB,
  [5349] = 4,
    ACTIONS(691), 1,
      anon_sym_,
    ACTIONS(694), 1,
      anon_sym_TAB,
    STATE(176), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(467), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [5364] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(489), 1,
      anon_sym_LF,
    STATE(203), 1,
      aux_sym_whitespace_repeat1,
    STATE(294), 1,
      sym_note,
    ACTIONS(697), 2,
      anon_sym_,
      anon_sym_TAB,
  [5381] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(699), 1,
      anon_sym_LF,
    STATE(188), 1,
      sym_note,
    STATE(230), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(701), 2,
      anon_sym_,
      anon_sym_TAB,
  [5398] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(703), 1,
      anon_sym_LF,
    STATE(201), 1,
      aux_sym_whitespace_repeat1,
    STATE(312), 1,
      sym_note,
    ACTIONS(705), 2,
      anon_sym_,
      anon_sym_TAB,
  [5415] = 2,
    ACTIONS(709), 1,
      anon_sym_EQ,
    ACTIONS(707), 5,
      anon_sym_LF,
      sym_time,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5426] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(497), 1,
      anon_sym_LF,
    STATE(200), 1,
      aux_sym_whitespace_repeat1,
    STATE(298), 1,
      sym_note,
    ACTIONS(711), 2,
      anon_sym_,
      anon_sym_TAB,
  [5443] = 2,
    ACTIONS(661), 1,
      anon_sym_LF,
    ACTIONS(663), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endtest,
      anon_sym_,
      anon_sym_TAB,
  [5454] = 1,
    ACTIONS(713), 6,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5463] = 1,
    ACTIONS(715), 5,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5471] = 4,
    ACTIONS(717), 1,
      aux_sym_option_value_token1,
    STATE(220), 1,
      aux_sym_whitespace_repeat1,
    STATE(327), 1,
      sym_filename,
    ACTIONS(719), 2,
      anon_sym_,
      anon_sym_TAB,
  [5485] = 1,
    ACTIONS(721), 5,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5493] = 4,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(319), 1,
      sym_note,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
  [5507] = 3,
    STATE(93), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(201), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(16), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5519] = 2,
    ACTIONS(725), 1,
      anon_sym_,
    ACTIONS(723), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
      anon_sym_TAB,
  [5529] = 4,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(307), 1,
      sym_note,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
  [5543] = 4,
    ACTIONS(727), 1,
      aux_sym_option_value_token1,
    STATE(220), 1,
      aux_sym_whitespace_repeat1,
    STATE(341), 1,
      sym_option_value,
    ACTIONS(719), 2,
      anon_sym_,
      anon_sym_TAB,
  [5557] = 3,
    STATE(93), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(201), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(15), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5569] = 4,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(300), 1,
      sym_note,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
  [5583] = 4,
    ACTIONS(729), 1,
      anon_sym_LF,
    ACTIONS(731), 1,
      anon_sym_EQ,
    STATE(191), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(733), 2,
      anon_sym_,
      anon_sym_TAB,
  [5597] = 3,
    STATE(93), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(201), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5609] = 4,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(298), 1,
      sym_note,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
  [5623] = 4,
    ACTIONS(509), 1,
      anon_sym_assert,
    ACTIONS(511), 1,
      anon_sym_check,
    STATE(107), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(620), 2,
      anon_sym_,
      anon_sym_TAB,
  [5637] = 3,
    STATE(93), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(201), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(13), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5649] = 3,
    STATE(93), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(201), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(17), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5661] = 4,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(294), 1,
      sym_note,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
  [5675] = 4,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(316), 1,
      sym_note,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
  [5689] = 1,
    ACTIONS(735), 5,
      anon_sym_LF,
      sym_time,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5697] = 4,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(301), 1,
      sym_note,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
  [5711] = 4,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(312), 1,
      sym_note,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
  [5725] = 3,
    ACTIONS(737), 1,
      sym_payee,
    STATE(257), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(739), 2,
      anon_sym_,
      anon_sym_TAB,
  [5736] = 2,
    ACTIONS(741), 1,
      anon_sym_LF,
    ACTIONS(743), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [5745] = 4,
    ACTIONS(33), 1,
      aux_sym_word_directive_token2,
    ACTIONS(57), 1,
      sym__2d,
    STATE(202), 1,
      sym__single_date,
    STATE(293), 1,
      sym__4d,
  [5758] = 3,
    ACTIONS(745), 1,
      aux_sym_block_comment_token1,
    STATE(222), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(747), 2,
      anon_sym_,
      anon_sym_TAB,
  [5769] = 1,
    ACTIONS(725), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5776] = 3,
    ACTIONS(749), 1,
      aux_sym_account_subdirective_token1,
    STATE(213), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(751), 2,
      anon_sym_,
      anon_sym_TAB,
  [5787] = 3,
    ACTIONS(753), 1,
      aux_sym_account_subdirective_token1,
    STATE(213), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(751), 2,
      anon_sym_,
      anon_sym_TAB,
  [5798] = 3,
    ACTIONS(755), 1,
      aux_sym_block_comment_token1,
    STATE(222), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(747), 2,
      anon_sym_,
      anon_sym_TAB,
  [5809] = 3,
    ACTIONS(406), 1,
      aux_sym_account_subdirective_token1,
    STATE(213), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(757), 2,
      anon_sym_,
      anon_sym_TAB,
  [5820] = 3,
    ACTIONS(760), 1,
      anon_sym_LF,
    STATE(254), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(762), 2,
      anon_sym_,
      anon_sym_TAB,
  [5831] = 3,
    ACTIONS(764), 1,
      sym_payee,
    STATE(162), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(521), 2,
      anon_sym_,
      anon_sym_TAB,
  [5842] = 3,
    ACTIONS(764), 1,
      sym_payee,
    STATE(241), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(766), 2,
      anon_sym_,
      anon_sym_TAB,
  [5853] = 2,
    ACTIONS(768), 1,
      anon_sym_LF,
    ACTIONS(770), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [5862] = 3,
    ACTIONS(467), 1,
      aux_sym_word_directive_token1,
    STATE(218), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(772), 2,
      anon_sym_,
      anon_sym_TAB,
  [5873] = 3,
    ACTIONS(775), 1,
      anon_sym_LF,
    STATE(256), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(777), 2,
      anon_sym_,
      anon_sym_TAB,
  [5884] = 3,
    ACTIONS(467), 1,
      aux_sym_option_value_token1,
    STATE(220), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(779), 2,
      anon_sym_,
      anon_sym_TAB,
  [5895] = 2,
    ACTIONS(447), 1,
      anon_sym_LF,
    ACTIONS(782), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [5904] = 3,
    ACTIONS(467), 1,
      aux_sym_block_comment_token1,
    STATE(222), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(784), 2,
      anon_sym_,
      anon_sym_TAB,
  [5915] = 3,
    ACTIONS(787), 1,
      sym_payee,
    STATE(162), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(521), 2,
      anon_sym_,
      anon_sym_TAB,
  [5926] = 1,
    ACTIONS(789), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5933] = 3,
    ACTIONS(791), 1,
      sym_time,
    STATE(226), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(793), 2,
      anon_sym_,
      anon_sym_TAB,
  [5944] = 3,
    ACTIONS(795), 1,
      sym_time,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
  [5955] = 1,
    ACTIONS(797), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5962] = 2,
    ACTIONS(427), 1,
      anon_sym_LF,
    ACTIONS(799), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [5971] = 3,
    ACTIONS(801), 1,
      sym_time,
    STATE(246), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(803), 2,
      anon_sym_,
      anon_sym_TAB,
  [5982] = 3,
    ACTIONS(805), 1,
      sym_payee,
    STATE(162), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(521), 2,
      anon_sym_,
      anon_sym_TAB,
  [5993] = 3,
    ACTIONS(807), 1,
      sym_time,
    STATE(237), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(809), 2,
      anon_sym_,
      anon_sym_TAB,
  [6004] = 3,
    ACTIONS(811), 1,
      sym_time,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
  [6015] = 3,
    ACTIONS(813), 1,
      aux_sym_account_subdirective_token1,
    STATE(213), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(751), 2,
      anon_sym_,
      anon_sym_TAB,
  [6026] = 3,
    ACTIONS(815), 1,
      aux_sym_account_subdirective_token1,
    STATE(213), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(751), 2,
      anon_sym_,
      anon_sym_TAB,
  [6037] = 3,
    ACTIONS(817), 1,
      sym_payee,
    STATE(215), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(819), 2,
      anon_sym_,
      anon_sym_TAB,
  [6048] = 3,
    ACTIONS(821), 1,
      aux_sym_account_subdirective_token1,
    STATE(213), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(751), 2,
      anon_sym_,
      anon_sym_TAB,
  [6059] = 3,
    ACTIONS(801), 1,
      sym_time,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
  [6070] = 3,
    ACTIONS(823), 1,
      aux_sym_word_directive_token2,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
  [6081] = 1,
    ACTIONS(825), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6088] = 3,
    ACTIONS(827), 1,
      anon_sym_EQ,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
  [6099] = 3,
    ACTIONS(737), 1,
      sym_payee,
    STATE(162), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(521), 2,
      anon_sym_,
      anon_sym_TAB,
  [6110] = 2,
    ACTIONS(829), 1,
      anon_sym_LF,
    ACTIONS(831), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6119] = 2,
    ACTIONS(833), 1,
      anon_sym_LF,
    ACTIONS(835), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6128] = 3,
    ACTIONS(837), 1,
      aux_sym_word_directive_token2,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
  [6139] = 3,
    ACTIONS(839), 1,
      aux_sym_option_value_token1,
    STATE(220), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(719), 2,
      anon_sym_,
      anon_sym_TAB,
  [6150] = 3,
    ACTIONS(841), 1,
      sym_time,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
  [6161] = 3,
    ACTIONS(843), 1,
      aux_sym_word_directive_token1,
    STATE(218), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(845), 2,
      anon_sym_,
      anon_sym_TAB,
  [6172] = 3,
    ACTIONS(795), 1,
      sym_time,
    STATE(232), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(847), 2,
      anon_sym_,
      anon_sym_TAB,
  [6183] = 1,
    ACTIONS(849), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [6190] = 3,
    ACTIONS(851), 1,
      aux_sym_tag_directive_token1,
    STATE(107), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(620), 2,
      anon_sym_,
      anon_sym_TAB,
  [6201] = 1,
    ACTIONS(853), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6208] = 3,
    ACTIONS(855), 1,
      anon_sym_EQ,
    STATE(240), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(857), 2,
      anon_sym_,
      anon_sym_TAB,
  [6219] = 3,
    ACTIONS(683), 1,
      sym_payee,
    STATE(162), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(521), 2,
      anon_sym_,
      anon_sym_TAB,
  [6230] = 3,
    ACTIONS(859), 1,
      aux_sym_block_comment_token1,
    STATE(222), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(747), 2,
      anon_sym_,
      anon_sym_TAB,
  [6241] = 2,
    ACTIONS(861), 1,
      anon_sym_LF,
    ACTIONS(863), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6250] = 3,
    ACTIONS(865), 1,
      aux_sym_block_comment_token1,
    STATE(222), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(747), 2,
      anon_sym_,
      anon_sym_TAB,
  [6261] = 3,
    ACTIONS(867), 1,
      sym_payee,
    STATE(162), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(521), 2,
      anon_sym_,
      anon_sym_TAB,
  [6272] = 3,
    ACTIONS(867), 1,
      sym_payee,
    STATE(223), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(869), 2,
      anon_sym_,
      anon_sym_TAB,
  [6283] = 2,
    STATE(148), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(871), 2,
      anon_sym_,
      anon_sym_TAB,
  [6291] = 2,
    STATE(236), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(873), 2,
      anon_sym_,
      anon_sym_TAB,
  [6299] = 2,
    STATE(245), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(875), 2,
      anon_sym_,
      anon_sym_TAB,
  [6307] = 2,
    STATE(185), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(877), 2,
      anon_sym_,
      anon_sym_TAB,
  [6315] = 2,
    STATE(247), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(879), 2,
      anon_sym_,
      anon_sym_TAB,
  [6323] = 3,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(881), 1,
      anon_sym_LF,
    STATE(199), 1,
      sym_note,
  [6333] = 2,
    STATE(244), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(883), 2,
      anon_sym_,
      anon_sym_TAB,
  [6341] = 2,
    STATE(88), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(885), 2,
      anon_sym_,
      anon_sym_TAB,
  [6349] = 2,
    STATE(210), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(887), 2,
      anon_sym_,
      anon_sym_TAB,
  [6357] = 2,
    STATE(211), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(889), 2,
      anon_sym_,
      anon_sym_TAB,
  [6365] = 2,
    STATE(155), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(891), 2,
      anon_sym_,
      anon_sym_TAB,
  [6373] = 2,
    STATE(153), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(893), 2,
      anon_sym_,
      anon_sym_TAB,
  [6381] = 2,
    STATE(238), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(895), 2,
      anon_sym_,
      anon_sym_TAB,
  [6389] = 2,
    STATE(250), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(897), 2,
      anon_sym_,
      anon_sym_TAB,
  [6397] = 3,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(899), 1,
      anon_sym_LF,
    STATE(195), 1,
      sym_note,
  [6407] = 2,
    STATE(143), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(901), 2,
      anon_sym_,
      anon_sym_TAB,
  [6415] = 2,
    STATE(161), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(903), 2,
      anon_sym_,
      anon_sym_TAB,
  [6423] = 2,
    STATE(159), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(905), 2,
      anon_sym_,
      anon_sym_TAB,
  [6431] = 3,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(699), 1,
      anon_sym_LF,
    STATE(188), 1,
      sym_note,
  [6441] = 2,
    STATE(113), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(907), 2,
      anon_sym_,
      anon_sym_TAB,
  [6449] = 2,
    STATE(76), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(909), 2,
      anon_sym_,
      anon_sym_TAB,
  [6457] = 2,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(911), 2,
      anon_sym_,
      anon_sym_TAB,
  [6465] = 2,
    STATE(147), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(913), 2,
      anon_sym_,
      anon_sym_TAB,
  [6473] = 3,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(665), 1,
      anon_sym_LF,
    STATE(192), 1,
      sym_note,
  [6483] = 2,
    STATE(234), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(915), 2,
      anon_sym_,
      anon_sym_TAB,
  [6491] = 2,
    STATE(233), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(917), 2,
      anon_sym_,
      anon_sym_TAB,
  [6499] = 1,
    ACTIONS(919), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [6505] = 1,
    ACTIONS(921), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [6510] = 2,
    ACTIONS(923), 1,
      aux_sym_option_value_token1,
    STATE(341), 1,
      sym_option_value,
  [6517] = 1,
    ACTIONS(925), 1,
      anon_sym_EQ,
  [6521] = 1,
    ACTIONS(927), 1,
      ts_builtin_sym_end,
  [6525] = 1,
    ACTIONS(929), 1,
      sym__dsep,
  [6529] = 1,
    ACTIONS(931), 1,
      anon_sym_LF,
  [6533] = 1,
    ACTIONS(933), 1,
      anon_sym_LF,
  [6537] = 1,
    ACTIONS(935), 1,
      sym__dsep,
  [6541] = 1,
    ACTIONS(540), 1,
      anon_sym_LF,
  [6545] = 1,
    ACTIONS(937), 1,
      anon_sym_LF,
  [6549] = 1,
    ACTIONS(833), 1,
      anon_sym_LF,
  [6553] = 1,
    ACTIONS(939), 1,
      anon_sym_LF,
  [6557] = 1,
    ACTIONS(489), 1,
      anon_sym_LF,
  [6561] = 1,
    ACTIONS(451), 1,
      anon_sym_LF,
  [6565] = 1,
    ACTIONS(497), 1,
      anon_sym_LF,
  [6569] = 1,
    ACTIONS(624), 1,
      anon_sym_LF,
  [6573] = 1,
    ACTIONS(941), 1,
      anon_sym_LF,
  [6577] = 1,
    ACTIONS(943), 1,
      anon_sym_LF,
  [6581] = 1,
    ACTIONS(945), 1,
      aux_sym_code_token1,
  [6585] = 1,
    ACTIONS(447), 1,
      anon_sym_LF,
  [6589] = 1,
    ACTIONS(947), 1,
      sym__2d,
  [6593] = 1,
    ACTIONS(703), 1,
      anon_sym_LF,
  [6597] = 1,
    ACTIONS(768), 1,
      anon_sym_LF,
  [6601] = 1,
    ACTIONS(949), 1,
      sym__2d,
  [6605] = 1,
    ACTIONS(951), 1,
      anon_sym_LF,
  [6609] = 1,
    ACTIONS(953), 1,
      anon_sym_LF,
  [6613] = 1,
    ACTIONS(685), 1,
      anon_sym_LF,
  [6617] = 1,
    ACTIONS(955), 1,
      anon_sym_LF,
  [6621] = 1,
    ACTIONS(957), 1,
      anon_sym_LF,
  [6625] = 1,
    ACTIONS(959), 1,
      anon_sym_LF,
  [6629] = 1,
    ACTIONS(961), 1,
      anon_sym_LF,
  [6633] = 1,
    ACTIONS(963), 1,
      anon_sym_LF,
  [6637] = 1,
    ACTIONS(965), 1,
      sym_account_name,
  [6641] = 1,
    ACTIONS(967), 1,
      anon_sym_LF,
  [6645] = 1,
    ACTIONS(969), 1,
      anon_sym_LF,
  [6649] = 1,
    ACTIONS(971), 1,
      sym_account_name,
  [6653] = 1,
    ACTIONS(973), 1,
      anon_sym_LF,
  [6657] = 1,
    ACTIONS(975), 1,
      anon_sym_LF,
  [6661] = 1,
    ACTIONS(977), 1,
      anon_sym_LF,
  [6665] = 1,
    ACTIONS(979), 1,
      anon_sym_LF,
  [6669] = 1,
    ACTIONS(981), 1,
      anon_sym_LF,
  [6673] = 1,
    ACTIONS(983), 1,
      anon_sym_LF,
  [6677] = 1,
    ACTIONS(985), 1,
      anon_sym_LF,
  [6681] = 1,
    ACTIONS(987), 1,
      sym__quantity,
  [6685] = 1,
    ACTIONS(989), 1,
      sym__quantity,
  [6689] = 1,
    ACTIONS(991), 1,
      anon_sym_RPAREN,
  [6693] = 1,
    ACTIONS(993), 1,
      anon_sym_LF,
  [6697] = 1,
    ACTIONS(995), 1,
      sym__2d,
  [6701] = 1,
    ACTIONS(997), 1,
      anon_sym_LF,
  [6705] = 1,
    ACTIONS(999), 1,
      anon_sym_LF,
  [6709] = 1,
    ACTIONS(1001), 1,
      aux_sym_option_value_token1,
  [6713] = 1,
    ACTIONS(1003), 1,
      aux_sym_block_comment_token1,
  [6717] = 1,
    ACTIONS(1005), 1,
      anon_sym_RBRACK,
  [6721] = 1,
    ACTIONS(1005), 1,
      anon_sym_RPAREN,
  [6725] = 1,
    ACTIONS(1007), 1,
      aux_sym_option_token1,
  [6729] = 1,
    ACTIONS(1009), 1,
      anon_sym_LF,
  [6733] = 1,
    ACTIONS(1011), 1,
      anon_sym_LF,
  [6737] = 1,
    ACTIONS(1013), 1,
      anon_sym_LF,
  [6741] = 1,
    ACTIONS(1015), 1,
      anon_sym_LF,
  [6745] = 1,
    ACTIONS(1017), 1,
      anon_sym_LF,
  [6749] = 1,
    ACTIONS(1019), 1,
      sym__quantity,
  [6753] = 1,
    ACTIONS(1021), 1,
      sym__quantity,
  [6757] = 1,
    ACTIONS(1023), 1,
      anon_sym_LF,
  [6761] = 1,
    ACTIONS(632), 1,
      sym__dsep,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 123,
  [SMALL_STATE(4)] = 246,
  [SMALL_STATE(5)] = 298,
  [SMALL_STATE(6)] = 350,
  [SMALL_STATE(7)] = 402,
  [SMALL_STATE(8)] = 453,
  [SMALL_STATE(9)] = 504,
  [SMALL_STATE(10)] = 555,
  [SMALL_STATE(11)] = 601,
  [SMALL_STATE(12)] = 647,
  [SMALL_STATE(13)] = 693,
  [SMALL_STATE(14)] = 738,
  [SMALL_STATE(15)] = 783,
  [SMALL_STATE(16)] = 828,
  [SMALL_STATE(17)] = 873,
  [SMALL_STATE(18)] = 918,
  [SMALL_STATE(19)] = 963,
  [SMALL_STATE(20)] = 999,
  [SMALL_STATE(21)] = 1035,
  [SMALL_STATE(22)] = 1071,
  [SMALL_STATE(23)] = 1107,
  [SMALL_STATE(24)] = 1143,
  [SMALL_STATE(25)] = 1179,
  [SMALL_STATE(26)] = 1215,
  [SMALL_STATE(27)] = 1251,
  [SMALL_STATE(28)] = 1287,
  [SMALL_STATE(29)] = 1323,
  [SMALL_STATE(30)] = 1359,
  [SMALL_STATE(31)] = 1395,
  [SMALL_STATE(32)] = 1431,
  [SMALL_STATE(33)] = 1467,
  [SMALL_STATE(34)] = 1503,
  [SMALL_STATE(35)] = 1539,
  [SMALL_STATE(36)] = 1575,
  [SMALL_STATE(37)] = 1611,
  [SMALL_STATE(38)] = 1647,
  [SMALL_STATE(39)] = 1683,
  [SMALL_STATE(40)] = 1719,
  [SMALL_STATE(41)] = 1755,
  [SMALL_STATE(42)] = 1791,
  [SMALL_STATE(43)] = 1827,
  [SMALL_STATE(44)] = 1863,
  [SMALL_STATE(45)] = 1899,
  [SMALL_STATE(46)] = 1935,
  [SMALL_STATE(47)] = 1971,
  [SMALL_STATE(48)] = 2007,
  [SMALL_STATE(49)] = 2044,
  [SMALL_STATE(50)] = 2081,
  [SMALL_STATE(51)] = 2118,
  [SMALL_STATE(52)] = 2155,
  [SMALL_STATE(53)] = 2192,
  [SMALL_STATE(54)] = 2229,
  [SMALL_STATE(55)] = 2266,
  [SMALL_STATE(56)] = 2303,
  [SMALL_STATE(57)] = 2337,
  [SMALL_STATE(58)] = 2371,
  [SMALL_STATE(59)] = 2405,
  [SMALL_STATE(60)] = 2439,
  [SMALL_STATE(61)] = 2475,
  [SMALL_STATE(62)] = 2509,
  [SMALL_STATE(63)] = 2543,
  [SMALL_STATE(64)] = 2577,
  [SMALL_STATE(65)] = 2611,
  [SMALL_STATE(66)] = 2645,
  [SMALL_STATE(67)] = 2679,
  [SMALL_STATE(68)] = 2713,
  [SMALL_STATE(69)] = 2747,
  [SMALL_STATE(70)] = 2781,
  [SMALL_STATE(71)] = 2815,
  [SMALL_STATE(72)] = 2849,
  [SMALL_STATE(73)] = 2883,
  [SMALL_STATE(74)] = 2939,
  [SMALL_STATE(75)] = 2995,
  [SMALL_STATE(76)] = 3051,
  [SMALL_STATE(77)] = 3081,
  [SMALL_STATE(78)] = 3134,
  [SMALL_STATE(79)] = 3187,
  [SMALL_STATE(80)] = 3240,
  [SMALL_STATE(81)] = 3272,
  [SMALL_STATE(82)] = 3304,
  [SMALL_STATE(83)] = 3322,
  [SMALL_STATE(84)] = 3354,
  [SMALL_STATE(85)] = 3386,
  [SMALL_STATE(86)] = 3408,
  [SMALL_STATE(87)] = 3440,
  [SMALL_STATE(88)] = 3472,
  [SMALL_STATE(89)] = 3504,
  [SMALL_STATE(90)] = 3526,
  [SMALL_STATE(91)] = 3558,
  [SMALL_STATE(92)] = 3590,
  [SMALL_STATE(93)] = 3622,
  [SMALL_STATE(94)] = 3657,
  [SMALL_STATE(95)] = 3689,
  [SMALL_STATE(96)] = 3721,
  [SMALL_STATE(97)] = 3753,
  [SMALL_STATE(98)] = 3785,
  [SMALL_STATE(99)] = 3812,
  [SMALL_STATE(100)] = 3827,
  [SMALL_STATE(101)] = 3842,
  [SMALL_STATE(102)] = 3871,
  [SMALL_STATE(103)] = 3900,
  [SMALL_STATE(104)] = 3929,
  [SMALL_STATE(105)] = 3958,
  [SMALL_STATE(106)] = 3973,
  [SMALL_STATE(107)] = 3997,
  [SMALL_STATE(108)] = 4015,
  [SMALL_STATE(109)] = 4035,
  [SMALL_STATE(110)] = 4058,
  [SMALL_STATE(111)] = 4081,
  [SMALL_STATE(112)] = 4104,
  [SMALL_STATE(113)] = 4127,
  [SMALL_STATE(114)] = 4150,
  [SMALL_STATE(115)] = 4173,
  [SMALL_STATE(116)] = 4196,
  [SMALL_STATE(117)] = 4217,
  [SMALL_STATE(118)] = 4238,
  [SMALL_STATE(119)] = 4261,
  [SMALL_STATE(120)] = 4282,
  [SMALL_STATE(121)] = 4305,
  [SMALL_STATE(122)] = 4328,
  [SMALL_STATE(123)] = 4351,
  [SMALL_STATE(124)] = 4372,
  [SMALL_STATE(125)] = 4395,
  [SMALL_STATE(126)] = 4418,
  [SMALL_STATE(127)] = 4441,
  [SMALL_STATE(128)] = 4464,
  [SMALL_STATE(129)] = 4487,
  [SMALL_STATE(130)] = 4510,
  [SMALL_STATE(131)] = 4533,
  [SMALL_STATE(132)] = 4554,
  [SMALL_STATE(133)] = 4577,
  [SMALL_STATE(134)] = 4600,
  [SMALL_STATE(135)] = 4621,
  [SMALL_STATE(136)] = 4641,
  [SMALL_STATE(137)] = 4657,
  [SMALL_STATE(138)] = 4669,
  [SMALL_STATE(139)] = 4691,
  [SMALL_STATE(140)] = 4703,
  [SMALL_STATE(141)] = 4719,
  [SMALL_STATE(142)] = 4739,
  [SMALL_STATE(143)] = 4761,
  [SMALL_STATE(144)] = 4777,
  [SMALL_STATE(145)] = 4799,
  [SMALL_STATE(146)] = 4821,
  [SMALL_STATE(147)] = 4841,
  [SMALL_STATE(148)] = 4857,
  [SMALL_STATE(149)] = 4873,
  [SMALL_STATE(150)] = 4885,
  [SMALL_STATE(151)] = 4905,
  [SMALL_STATE(152)] = 4927,
  [SMALL_STATE(153)] = 4949,
  [SMALL_STATE(154)] = 4971,
  [SMALL_STATE(155)] = 4991,
  [SMALL_STATE(156)] = 5013,
  [SMALL_STATE(157)] = 5035,
  [SMALL_STATE(158)] = 5051,
  [SMALL_STATE(159)] = 5071,
  [SMALL_STATE(160)] = 5093,
  [SMALL_STATE(161)] = 5115,
  [SMALL_STATE(162)] = 5131,
  [SMALL_STATE(163)] = 5147,
  [SMALL_STATE(164)] = 5163,
  [SMALL_STATE(165)] = 5174,
  [SMALL_STATE(166)] = 5191,
  [SMALL_STATE(167)] = 5208,
  [SMALL_STATE(168)] = 5219,
  [SMALL_STATE(169)] = 5236,
  [SMALL_STATE(170)] = 5247,
  [SMALL_STATE(171)] = 5264,
  [SMALL_STATE(172)] = 5281,
  [SMALL_STATE(173)] = 5298,
  [SMALL_STATE(174)] = 5315,
  [SMALL_STATE(175)] = 5332,
  [SMALL_STATE(176)] = 5349,
  [SMALL_STATE(177)] = 5364,
  [SMALL_STATE(178)] = 5381,
  [SMALL_STATE(179)] = 5398,
  [SMALL_STATE(180)] = 5415,
  [SMALL_STATE(181)] = 5426,
  [SMALL_STATE(182)] = 5443,
  [SMALL_STATE(183)] = 5454,
  [SMALL_STATE(184)] = 5463,
  [SMALL_STATE(185)] = 5471,
  [SMALL_STATE(186)] = 5485,
  [SMALL_STATE(187)] = 5493,
  [SMALL_STATE(188)] = 5507,
  [SMALL_STATE(189)] = 5519,
  [SMALL_STATE(190)] = 5529,
  [SMALL_STATE(191)] = 5543,
  [SMALL_STATE(192)] = 5557,
  [SMALL_STATE(193)] = 5569,
  [SMALL_STATE(194)] = 5583,
  [SMALL_STATE(195)] = 5597,
  [SMALL_STATE(196)] = 5609,
  [SMALL_STATE(197)] = 5623,
  [SMALL_STATE(198)] = 5637,
  [SMALL_STATE(199)] = 5649,
  [SMALL_STATE(200)] = 5661,
  [SMALL_STATE(201)] = 5675,
  [SMALL_STATE(202)] = 5689,
  [SMALL_STATE(203)] = 5697,
  [SMALL_STATE(204)] = 5711,
  [SMALL_STATE(205)] = 5725,
  [SMALL_STATE(206)] = 5736,
  [SMALL_STATE(207)] = 5745,
  [SMALL_STATE(208)] = 5758,
  [SMALL_STATE(209)] = 5769,
  [SMALL_STATE(210)] = 5776,
  [SMALL_STATE(211)] = 5787,
  [SMALL_STATE(212)] = 5798,
  [SMALL_STATE(213)] = 5809,
  [SMALL_STATE(214)] = 5820,
  [SMALL_STATE(215)] = 5831,
  [SMALL_STATE(216)] = 5842,
  [SMALL_STATE(217)] = 5853,
  [SMALL_STATE(218)] = 5862,
  [SMALL_STATE(219)] = 5873,
  [SMALL_STATE(220)] = 5884,
  [SMALL_STATE(221)] = 5895,
  [SMALL_STATE(222)] = 5904,
  [SMALL_STATE(223)] = 5915,
  [SMALL_STATE(224)] = 5926,
  [SMALL_STATE(225)] = 5933,
  [SMALL_STATE(226)] = 5944,
  [SMALL_STATE(227)] = 5955,
  [SMALL_STATE(228)] = 5962,
  [SMALL_STATE(229)] = 5971,
  [SMALL_STATE(230)] = 5982,
  [SMALL_STATE(231)] = 5993,
  [SMALL_STATE(232)] = 6004,
  [SMALL_STATE(233)] = 6015,
  [SMALL_STATE(234)] = 6026,
  [SMALL_STATE(235)] = 6037,
  [SMALL_STATE(236)] = 6048,
  [SMALL_STATE(237)] = 6059,
  [SMALL_STATE(238)] = 6070,
  [SMALL_STATE(239)] = 6081,
  [SMALL_STATE(240)] = 6088,
  [SMALL_STATE(241)] = 6099,
  [SMALL_STATE(242)] = 6110,
  [SMALL_STATE(243)] = 6119,
  [SMALL_STATE(244)] = 6128,
  [SMALL_STATE(245)] = 6139,
  [SMALL_STATE(246)] = 6150,
  [SMALL_STATE(247)] = 6161,
  [SMALL_STATE(248)] = 6172,
  [SMALL_STATE(249)] = 6183,
  [SMALL_STATE(250)] = 6190,
  [SMALL_STATE(251)] = 6201,
  [SMALL_STATE(252)] = 6208,
  [SMALL_STATE(253)] = 6219,
  [SMALL_STATE(254)] = 6230,
  [SMALL_STATE(255)] = 6241,
  [SMALL_STATE(256)] = 6250,
  [SMALL_STATE(257)] = 6261,
  [SMALL_STATE(258)] = 6272,
  [SMALL_STATE(259)] = 6283,
  [SMALL_STATE(260)] = 6291,
  [SMALL_STATE(261)] = 6299,
  [SMALL_STATE(262)] = 6307,
  [SMALL_STATE(263)] = 6315,
  [SMALL_STATE(264)] = 6323,
  [SMALL_STATE(265)] = 6333,
  [SMALL_STATE(266)] = 6341,
  [SMALL_STATE(267)] = 6349,
  [SMALL_STATE(268)] = 6357,
  [SMALL_STATE(269)] = 6365,
  [SMALL_STATE(270)] = 6373,
  [SMALL_STATE(271)] = 6381,
  [SMALL_STATE(272)] = 6389,
  [SMALL_STATE(273)] = 6397,
  [SMALL_STATE(274)] = 6407,
  [SMALL_STATE(275)] = 6415,
  [SMALL_STATE(276)] = 6423,
  [SMALL_STATE(277)] = 6431,
  [SMALL_STATE(278)] = 6441,
  [SMALL_STATE(279)] = 6449,
  [SMALL_STATE(280)] = 6457,
  [SMALL_STATE(281)] = 6465,
  [SMALL_STATE(282)] = 6473,
  [SMALL_STATE(283)] = 6483,
  [SMALL_STATE(284)] = 6491,
  [SMALL_STATE(285)] = 6499,
  [SMALL_STATE(286)] = 6505,
  [SMALL_STATE(287)] = 6510,
  [SMALL_STATE(288)] = 6517,
  [SMALL_STATE(289)] = 6521,
  [SMALL_STATE(290)] = 6525,
  [SMALL_STATE(291)] = 6529,
  [SMALL_STATE(292)] = 6533,
  [SMALL_STATE(293)] = 6537,
  [SMALL_STATE(294)] = 6541,
  [SMALL_STATE(295)] = 6545,
  [SMALL_STATE(296)] = 6549,
  [SMALL_STATE(297)] = 6553,
  [SMALL_STATE(298)] = 6557,
  [SMALL_STATE(299)] = 6561,
  [SMALL_STATE(300)] = 6565,
  [SMALL_STATE(301)] = 6569,
  [SMALL_STATE(302)] = 6573,
  [SMALL_STATE(303)] = 6577,
  [SMALL_STATE(304)] = 6581,
  [SMALL_STATE(305)] = 6585,
  [SMALL_STATE(306)] = 6589,
  [SMALL_STATE(307)] = 6593,
  [SMALL_STATE(308)] = 6597,
  [SMALL_STATE(309)] = 6601,
  [SMALL_STATE(310)] = 6605,
  [SMALL_STATE(311)] = 6609,
  [SMALL_STATE(312)] = 6613,
  [SMALL_STATE(313)] = 6617,
  [SMALL_STATE(314)] = 6621,
  [SMALL_STATE(315)] = 6625,
  [SMALL_STATE(316)] = 6629,
  [SMALL_STATE(317)] = 6633,
  [SMALL_STATE(318)] = 6637,
  [SMALL_STATE(319)] = 6641,
  [SMALL_STATE(320)] = 6645,
  [SMALL_STATE(321)] = 6649,
  [SMALL_STATE(322)] = 6653,
  [SMALL_STATE(323)] = 6657,
  [SMALL_STATE(324)] = 6661,
  [SMALL_STATE(325)] = 6665,
  [SMALL_STATE(326)] = 6669,
  [SMALL_STATE(327)] = 6673,
  [SMALL_STATE(328)] = 6677,
  [SMALL_STATE(329)] = 6681,
  [SMALL_STATE(330)] = 6685,
  [SMALL_STATE(331)] = 6689,
  [SMALL_STATE(332)] = 6693,
  [SMALL_STATE(333)] = 6697,
  [SMALL_STATE(334)] = 6701,
  [SMALL_STATE(335)] = 6705,
  [SMALL_STATE(336)] = 6709,
  [SMALL_STATE(337)] = 6713,
  [SMALL_STATE(338)] = 6717,
  [SMALL_STATE(339)] = 6721,
  [SMALL_STATE(340)] = 6725,
  [SMALL_STATE(341)] = 6729,
  [SMALL_STATE(342)] = 6733,
  [SMALL_STATE(343)] = 6737,
  [SMALL_STATE(344)] = 6741,
  [SMALL_STATE(345)] = 6745,
  [SMALL_STATE(346)] = 6749,
  [SMALL_STATE(347)] = 6753,
  [SMALL_STATE(348)] = 6757,
  [SMALL_STATE(349)] = 6761,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(219),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(343),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(214),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(340),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(340),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(276),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(275),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(272),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(262),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(263),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(261),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(265),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(293),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(269),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(270),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(271),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(259),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(280),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(281),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(278),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(112),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(112),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(279),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(290),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2), SHIFT_REPEAT(98),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 5),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 5),
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
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2), SHIFT_REPEAT(197),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_periodic_xact, 5),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_periodic_xact, 5),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 9),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 9),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(93),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 1),
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
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 9),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 9),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
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
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_subdirective, 3),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_subdirective, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_subdirective, 4),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_subdirective, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_subdirective, 4),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_subdirective, 4),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_quantity, 2),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_quantity, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 6),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 6),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 6),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 6),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 5),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 5),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 5),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 5),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 4),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 4),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 3),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 4),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 4),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 7),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 7),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(60),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 7),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 7),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 5),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(85),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(89),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(107),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(108),
  [529] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(108),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(117),
  [557] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(345),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [562] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(212),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(123),
  [590] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(314),
  [593] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(208),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 3),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [656] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(162),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 3),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 3),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [691] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(176),
  [694] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(176),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 5),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 3),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 5),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [757] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(213),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [772] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(218),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [779] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(220),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [784] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(222),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 3),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1, .production_id = 1),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 7),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 2),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3, .production_id = 2),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval, 1),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [927] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 7),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 10),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 9),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 8),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 6),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 5),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 5),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 5),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 3),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 3),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 4),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_value, 1),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
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
