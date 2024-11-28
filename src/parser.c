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
#define STATE_COUNT 467
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 166
#define ALIAS_COUNT 0
#define TOKEN_COUNT 108
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 16
#define PRODUCTION_ID_COUNT 4

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
  aux_sym__interval_period_token1 = 45,
  aux_sym__interval_period_token2 = 46,
  aux_sym__interval_period_token3 = 47,
  aux_sym__interval_period_token4 = 48,
  aux_sym__interval_period_token5 = 49,
  aux_sym__interval_period_token6 = 50,
  aux_sym__interval_period_token7 = 51,
  aux_sym__interval_period_token8 = 52,
  aux_sym__interval_period_token9 = 53,
  aux_sym__interval_period_token10 = 54,
  aux_sym__interval_period_token11 = 55,
  aux_sym__interval_period_token12 = 56,
  aux_sym__interval_period_token13 = 57,
  aux_sym__interval_period_token14 = 58,
  aux_sym__interval_period_token15 = 59,
  aux_sym__interval_period_token16 = 60,
  aux_sym__interval_period_token17 = 61,
  aux_sym__interval_date_spec_token1 = 62,
  aux_sym__interval_date_spec_token2 = 63,
  aux_sym__interval_date_spec_token3 = 64,
  aux_sym__interval_date_spec_token4 = 65,
  aux_sym__interval_date_spec_token5 = 66,
  sym__month = 67,
  anon_sym_last = 68,
  anon_sym_this = 69,
  anon_sym_next = 70,
  anon_sym_day = 71,
  anon_sym_week = 72,
  anon_sym_month = 73,
  anon_sym_quarter = 74,
  sym__dsep = 75,
  sym__2d = 76,
  sym_time = 77,
  anon_sym_STAR = 78,
  anon_sym_BANG = 79,
  anon_sym_LPAREN = 80,
  aux_sym_code_token1 = 81,
  anon_sym_RPAREN = 82,
  sym_payee = 83,
  sym_query = 84,
  anon_sym_SEMI = 85,
  aux_sym_note_token1 = 86,
  anon_sym_LBRACK = 87,
  anon_sym_RBRACK = 88,
  aux_sym_note_token2 = 89,
  sym_account_name = 90,
  sym__quantity = 91,
  anon_sym_PLUS = 92,
  aux_sym_commodity_token1 = 93,
  aux_sym_commodity_token2 = 94,
  aux_sym_commodity_token3 = 95,
  anon_sym_LBRACE = 96,
  anon_sym_RBRACE = 97,
  anon_sym_LBRACE_LBRACE = 98,
  anon_sym_RBRACE_RBRACE = 99,
  anon_sym_AT = 100,
  anon_sym_AT_AT = 101,
  anon_sym_ = 102,
  anon_sym_TAB = 103,
  anon_sym_2 = 104,
  anon_sym_TAB2 = 105,
  anon_sym_TAB3 = 106,
  anon_sym_TAB_TAB = 107,
  sym_source_file = 108,
  sym_journal_item = 109,
  sym_block_comment = 110,
  sym_test = 111,
  sym_option = 112,
  sym_option_value = 113,
  sym_directive = 114,
  sym_account_directive = 115,
  sym_account_subdirective = 116,
  sym_commodity_directive = 117,
  sym_commodity_subdirective = 118,
  sym_tag_directive = 119,
  sym_word_directive = 120,
  sym_filename = 121,
  sym_char_directive = 122,
  sym_alias_subdirective = 123,
  sym_default_subdirective = 124,
  sym_format_subdirective = 125,
  sym_note_subdirective = 126,
  sym_assert_subdirective = 127,
  sym_check_subdirective = 128,
  sym_check_in = 129,
  sym_check_out = 130,
  sym_xact = 131,
  sym_plain_xact = 132,
  sym_periodic_xact = 133,
  sym_interval = 134,
  sym__interval_period = 135,
  sym__interval_date_spec = 136,
  sym_automated_xact = 137,
  sym__xact_date = 138,
  sym_date = 139,
  sym_effective_date = 140,
  sym_date_spec = 141,
  sym__relative_date_spec = 142,
  sym__4d = 143,
  sym__single_date = 144,
  sym_status = 145,
  sym_code = 146,
  sym_note = 147,
  sym_posting = 148,
  sym_account = 149,
  sym_amount = 150,
  sym_quantity = 151,
  sym_negative_quantity = 152,
  sym_commodity = 153,
  sym_lot_price = 154,
  sym_price = 155,
  sym_balance_assertion = 156,
  aux_sym_source_file_repeat1 = 157,
  aux_sym_block_comment_repeat1 = 158,
  aux_sym_account_directive_repeat1 = 159,
  aux_sym_commodity_directive_repeat1 = 160,
  aux_sym_tag_directive_repeat1 = 161,
  aux_sym_plain_xact_repeat1 = 162,
  aux_sym_note_repeat1 = 163,
  aux_sym_note_repeat2 = 164,
  aux_sym_whitespace_repeat1 = 165,
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
  [aux_sym__interval_period_token1] = "_interval_period_token1",
  [aux_sym__interval_period_token2] = "_interval_period_token2",
  [aux_sym__interval_period_token3] = "_interval_period_token3",
  [aux_sym__interval_period_token4] = "_interval_period_token4",
  [aux_sym__interval_period_token5] = "_interval_period_token5",
  [aux_sym__interval_period_token6] = "_interval_period_token6",
  [aux_sym__interval_period_token7] = "_interval_period_token7",
  [aux_sym__interval_period_token8] = "_interval_period_token8",
  [aux_sym__interval_period_token9] = "_interval_period_token9",
  [aux_sym__interval_period_token10] = "_interval_period_token10",
  [aux_sym__interval_period_token11] = "_interval_period_token11",
  [aux_sym__interval_period_token12] = "_interval_period_token12",
  [aux_sym__interval_period_token13] = "_interval_period_token13",
  [aux_sym__interval_period_token14] = "_interval_period_token14",
  [aux_sym__interval_period_token15] = "_interval_period_token15",
  [aux_sym__interval_period_token16] = "_interval_period_token16",
  [aux_sym__interval_period_token17] = "_interval_period_token17",
  [aux_sym__interval_date_spec_token1] = "_interval_date_spec_token1",
  [aux_sym__interval_date_spec_token2] = "_interval_date_spec_token2",
  [aux_sym__interval_date_spec_token3] = "_interval_date_spec_token3",
  [aux_sym__interval_date_spec_token4] = "_interval_date_spec_token4",
  [aux_sym__interval_date_spec_token5] = "_interval_date_spec_token5",
  [sym__month] = "_month",
  [anon_sym_last] = "last",
  [anon_sym_this] = "this",
  [anon_sym_next] = "next",
  [anon_sym_day] = "day",
  [anon_sym_week] = "week",
  [anon_sym_month] = "month",
  [anon_sym_quarter] = "quarter",
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_AT] = "@",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_] = " ",
  [anon_sym_TAB] = "\t",
  [anon_sym_2] = "  ",
  [anon_sym_TAB2] = " \t",
  [anon_sym_TAB3] = "\t ",
  [anon_sym_TAB_TAB] = "\t\t",
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
  [sym__interval_period] = "_interval_period",
  [sym__interval_date_spec] = "_interval_date_spec",
  [sym_automated_xact] = "automated_xact",
  [sym__xact_date] = "_xact_date",
  [sym_date] = "date",
  [sym_effective_date] = "effective_date",
  [sym_date_spec] = "date_spec",
  [sym__relative_date_spec] = "_relative_date_spec",
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
  [sym_lot_price] = "lot_price",
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
  [aux_sym__interval_period_token1] = aux_sym__interval_period_token1,
  [aux_sym__interval_period_token2] = aux_sym__interval_period_token2,
  [aux_sym__interval_period_token3] = aux_sym__interval_period_token3,
  [aux_sym__interval_period_token4] = aux_sym__interval_period_token4,
  [aux_sym__interval_period_token5] = aux_sym__interval_period_token5,
  [aux_sym__interval_period_token6] = aux_sym__interval_period_token6,
  [aux_sym__interval_period_token7] = aux_sym__interval_period_token7,
  [aux_sym__interval_period_token8] = aux_sym__interval_period_token8,
  [aux_sym__interval_period_token9] = aux_sym__interval_period_token9,
  [aux_sym__interval_period_token10] = aux_sym__interval_period_token10,
  [aux_sym__interval_period_token11] = aux_sym__interval_period_token11,
  [aux_sym__interval_period_token12] = aux_sym__interval_period_token12,
  [aux_sym__interval_period_token13] = aux_sym__interval_period_token13,
  [aux_sym__interval_period_token14] = aux_sym__interval_period_token14,
  [aux_sym__interval_period_token15] = aux_sym__interval_period_token15,
  [aux_sym__interval_period_token16] = aux_sym__interval_period_token16,
  [aux_sym__interval_period_token17] = aux_sym__interval_period_token17,
  [aux_sym__interval_date_spec_token1] = aux_sym__interval_date_spec_token1,
  [aux_sym__interval_date_spec_token2] = aux_sym__interval_date_spec_token2,
  [aux_sym__interval_date_spec_token3] = aux_sym__interval_date_spec_token3,
  [aux_sym__interval_date_spec_token4] = aux_sym__interval_date_spec_token4,
  [aux_sym__interval_date_spec_token5] = aux_sym__interval_date_spec_token5,
  [sym__month] = sym__month,
  [anon_sym_last] = anon_sym_last,
  [anon_sym_this] = anon_sym_this,
  [anon_sym_next] = anon_sym_next,
  [anon_sym_day] = anon_sym_day,
  [anon_sym_week] = anon_sym_week,
  [anon_sym_month] = anon_sym_month,
  [anon_sym_quarter] = anon_sym_quarter,
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym_] = anon_sym_,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_TAB2] = anon_sym_TAB2,
  [anon_sym_TAB3] = anon_sym_TAB3,
  [anon_sym_TAB_TAB] = anon_sym_TAB_TAB,
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
  [sym__interval_period] = sym__interval_period,
  [sym__interval_date_spec] = sym__interval_date_spec,
  [sym_automated_xact] = sym_automated_xact,
  [sym__xact_date] = sym__xact_date,
  [sym_date] = sym_date,
  [sym_effective_date] = sym_effective_date,
  [sym_date_spec] = sym_date_spec,
  [sym__relative_date_spec] = sym__relative_date_spec,
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
  [sym_lot_price] = sym_lot_price,
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
  [aux_sym__interval_period_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_period_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_date_spec_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_date_spec_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_date_spec_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_date_spec_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interval_date_spec_token5] = {
    .visible = false,
    .named = false,
  },
  [sym__month] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_last] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_this] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_next] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_day] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_week] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_month] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quarter] = {
    .visible = true,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
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
  [anon_sym_TAB3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB_TAB] = {
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
  [sym__interval_period] = {
    .visible = false,
    .named = true,
  },
  [sym__interval_date_spec] = {
    .visible = false,
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
  [sym_date_spec] = {
    .visible = true,
    .named = true,
  },
  [sym__relative_date_spec] = {
    .visible = false,
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
  [sym_lot_price] = {
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
    [0] = sym_date_spec,
  },
  [3] = {
    [0] = sym_account_name,
    [2] = sym_account_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__relative_date_spec, 2,
    sym__relative_date_spec,
    sym_date_spec,
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
  [13] = 10,
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
  [36] = 28,
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
  [47] = 23,
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
  [61] = 22,
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
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 10,
  [97] = 10,
  [98] = 49,
  [99] = 12,
  [100] = 11,
  [101] = 10,
  [102] = 22,
  [103] = 103,
  [104] = 23,
  [105] = 28,
  [106] = 106,
  [107] = 107,
  [108] = 108,
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
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 59,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 64,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 10,
  [148] = 10,
  [149] = 10,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 12,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 11,
  [161] = 161,
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
  [172] = 162,
  [173] = 161,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 164,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
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
  [202] = 10,
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
  [217] = 10,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 220,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 228,
  [233] = 207,
  [234] = 234,
  [235] = 194,
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
  [255] = 230,
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
  [282] = 250,
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
  [303] = 10,
  [304] = 304,
  [305] = 10,
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
  [325] = 10,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 10,
  [330] = 330,
  [331] = 331,
  [332] = 10,
  [333] = 333,
  [334] = 334,
  [335] = 293,
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
  [349] = 285,
  [350] = 316,
  [351] = 330,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 301,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 300,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 296,
  [376] = 376,
  [377] = 377,
  [378] = 313,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 388,
  [391] = 389,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 430,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 447,
  [456] = 435,
  [457] = 430,
  [458] = 458,
  [459] = 407,
  [460] = 421,
  [461] = 414,
  [462] = 435,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
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
                  ? (c >= 'G' && c <= 'Z')
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
      if (eof) ADVANCE(270);
      if (lookahead == '\t') ADVANCE(780);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == ' ') ADVANCE(774);
      if (lookahead == '!') ADVANCE(559);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '(') ADVANCE(561);
      if (lookahead == ')') ADVANCE(564);
      if (lookahead == '*') ADVANCE(557);
      if (lookahead == '+') ADVANCE(577);
      if (lookahead == '-') ADVANCE(356);
      if (lookahead == ';') ADVANCE(567);
      if (lookahead == '=') ADVANCE(361);
      if (lookahead == '@') ADVANCE(772);
      if (lookahead == 'A') ADVANCE(408);
      if (lookahead == 'B') ADVANCE(680);
      if (lookahead == 'C') ADVANCE(424);
      if (lookahead == 'D') ADVANCE(420);
      if (lookahead == 'E') ADVANCE(714);
      if (lookahead == 'F') ADVANCE(705);
      if (lookahead == 'I') ADVANCE(448);
      if (lookahead == 'M') ADVANCE(702);
      if (lookahead == 'N') ADVANCE(416);
      if (lookahead == 'O') ADVANCE(456);
      if (lookahead == 'P') ADVANCE(428);
      if (lookahead == 'Q') ADVANCE(713);
      if (lookahead == 'T') ADVANCE(700);
      if (lookahead == 'W') ADVANCE(674);
      if (lookahead == 'Y') ADVANCE(412);
      if (lookahead == '[') ADVANCE(569);
      if (lookahead == ']') ADVANCE(571);
      if (lookahead == 'a') ADVANCE(604);
      if (lookahead == 'b') ADVANCE(661);
      if (lookahead == 'c') ADVANCE(623);
      if (lookahead == 'd') ADVANCE(579);
      if (lookahead == 'e') ADVANCE(596);
      if (lookahead == 'f') ADVANCE(639);
      if (lookahead == 'i') ADVANCE(443);
      if (lookahead == 'l') ADVANCE(600);
      if (lookahead == 'm') ADVANCE(589);
      if (lookahead == 'n') ADVANCE(611);
      if (lookahead == 'o') ADVANCE(452);
      if (lookahead == 'p') ADVANCE(597);
      if (lookahead == 'q') ADVANCE(595);
      if (lookahead == 't') ADVANCE(598);
      if (lookahead == 'w') ADVANCE(583);
      if (lookahead == 'y') ADVANCE(584);
      if (lookahead == '{') ADVANCE(767);
      if (lookahead == '}') ADVANCE(769);
      if (lookahead == '~') ADVANCE(459);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(682);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(696);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(552);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(765);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(723);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(780);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == ' ') ADVANCE(774);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '+') ADVANCE(577);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == ';') ADVANCE(567);
      if (lookahead == '=') ADVANCE(361);
      if (lookahead == '@') ADVANCE(772);
      if (lookahead == '{') ADVANCE(767);
      if (lookahead == '}') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(765);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(780);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == ' ') ADVANCE(774);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == ';') ADVANCE(567);
      if (lookahead == '=') ADVANCE(361);
      if (lookahead == '@') ADVANCE(772);
      if (lookahead == '{') ADVANCE(767);
      if (lookahead == '}') ADVANCE(769);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(552);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(765);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(780);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == ' ') ADVANCE(774);
      if (lookahead == ';') ADVANCE(567);
      if (lookahead == '=') ADVANCE(361);
      if (lookahead == ']') ADVANCE(571);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(780);
      if (lookahead == ' ') ADVANCE(774);
      if (lookahead == '!') ADVANCE(559);
      if (lookahead == '(') ADVANCE(561);
      if (lookahead == '*') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(565);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(780);
      if (lookahead == ' ') ADVANCE(774);
      if (lookahead == '[') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(568);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(780);
      if (lookahead == ' ') ADVANCE(774);
      if (lookahead == 'd') ADVANCE(502);
      if (lookahead == 'm') ADVANCE(515);
      if (lookahead == 'q') ADVANCE(525);
      if (lookahead == 'w') ADVANCE(509);
      if (lookahead == 'y') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(528);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(780);
      if (lookahead == ' ') ADVANCE(774);
      if (lookahead == 'l') ADVANCE(501);
      if (lookahead == 'n') ADVANCE(505);
      if (lookahead == 't') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(528);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(780);
      if (lookahead == ' ') ADVANCE(774);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(54);
      if (lookahead == '+') ADVANCE(577);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == 'D') ADVANCE(161);
      if (lookahead == 'E') ADVANCE(245);
      if (lookahead == 'F') ADVANCE(221);
      if (lookahead == 'T') ADVANCE(213);
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == '}') ADVANCE(768);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(188);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(206);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(216);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(244);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(208);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(178);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(780);
      if (lookahead == ' ') ADVANCE(774);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(54);
      if (lookahead == '+') ADVANCE(577);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == 'T') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(48);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(43);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(53);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(780);
      if (lookahead == ' ') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(572);
      END_STATE();
    case 11:
      if (lookahead == '\t') ADVANCE(782);
      if (lookahead == ' ') ADVANCE(774);
      if (lookahead == '!') ADVANCE(560);
      if (lookahead == '(') ADVANCE(562);
      if (lookahead == '*') ADVANCE(558);
      if (lookahead == ';') ADVANCE(567);
      if (lookahead == '[') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(575);
      END_STATE();
    case 12:
      if (lookahead == '\t') ADVANCE(782);
      if (lookahead == ' ') ADVANCE(774);
      if (lookahead == '(') ADVANCE(562);
      if (lookahead == '[') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(575);
      END_STATE();
    case 13:
      if (lookahead == '\t') ADVANCE(14);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(553);
      END_STATE();
    case 14:
      if (lookahead == '\t') ADVANCE(790);
      if (lookahead == ' ') ADVANCE(789);
      END_STATE();
    case 15:
      if (lookahead == '\t') ADVANCE(788);
      if (lookahead == ' ') ADVANCE(787);
      END_STATE();
    case 16:
      if (lookahead == '\t') ADVANCE(781);
      if (lookahead == ' ') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 17:
      if (lookahead == '\t') ADVANCE(786);
      if (lookahead == ' ') ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(392);
      END_STATE();
    case 18:
      if (lookahead == '\t') ADVANCE(784);
      if (lookahead == ' ') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(363);
      END_STATE();
    case 19:
      if (lookahead == '\t') ADVANCE(785);
      if (lookahead == ' ') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(566);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == '[') ADVANCE(569);
      if (lookahead != 0) ADVANCE(568);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead != 0) ADVANCE(572);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(32);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(30);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(39);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(23);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(31);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'h') ADVANCE(29);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(496);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'h') ADVANCE(25);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(33);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'k') ADVANCE(442);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(38);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 's') ADVANCE(36);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 's') ADVANCE(535);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 's') ADVANCE(35);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 's') ADVANCE(26);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(531);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(539);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(439);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'x') ADVANCE(37);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(41);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(487);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(44);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(47);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(493);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(490);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(52);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(40);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(500);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(45);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(496);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(42);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == '\n') ADVANCE(272);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 55:
      if (lookahead == '\n') ADVANCE(370);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 56:
      if (lookahead == ' ') ADVANCE(165);
      END_STATE();
    case 57:
      if (lookahead == ' ') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      if (lookahead == '"') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(260);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(261);
      END_STATE();
    case 61:
      if (lookahead == 'V') ADVANCE(177);
      if (lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(121);
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(341);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 95:
      if (lookahead == 'f') ADVANCE(393);
      END_STATE();
    case 96:
      if (lookahead == 'f') ADVANCE(67);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(379);
      END_STATE();
    case 98:
      if (lookahead == 'h') ADVANCE(102);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 99:
      if (lookahead == 'h') ADVANCE(90);
      END_STATE();
    case 100:
      if (lookahead == 'h') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 104:
      if (lookahead == 'k') ADVANCE(440);
      END_STATE();
    case 105:
      if (lookahead == 'k') ADVANCE(91);
      END_STATE();
    case 106:
      if (lookahead == 'k') ADVANCE(93);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(368);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 111:
      if (lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 112:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(111);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(125);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(397);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(388);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(533);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(347);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(349);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(437);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(403);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(529);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(537);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(433);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 147:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 151:
      if (lookahead == 'x') ADVANCE(143);
      END_STATE();
    case 152:
      if (lookahead == 'y') ADVANCE(373);
      END_STATE();
    case 153:
      if (lookahead == 'y') ADVANCE(92);
      END_STATE();
    case 154:
      if (lookahead == '}') ADVANCE(771);
      END_STATE();
    case 155:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 156:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 157:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 158:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 159:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 160:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 161:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 162:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 163:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 164:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 165:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(155);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(212);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(242);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(171);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 166:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(157);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(215);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(243);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(174);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(173);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(485);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 183:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(463);
      END_STATE();
    case 184:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(232);
      END_STATE();
    case 185:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(199);
      END_STATE();
    case 186:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(201);
      END_STATE();
    case 187:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 188:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 189:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 190:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 191:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(462);
      END_STATE();
    case 192:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(230);
      END_STATE();
    case 193:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(197);
      END_STATE();
    case 194:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(200);
      END_STATE();
    case 195:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(491);
      END_STATE();
    case 196:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 197:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 198:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 199:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(252);
      END_STATE();
    case 200:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(253);
      END_STATE();
    case 201:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 202:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 203:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(488);
      END_STATE();
    case 204:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(217);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(182);
      END_STATE();
    case 205:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 206:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(497);
      END_STATE();
    case 207:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 208:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 209:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 210:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 211:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 212:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 213:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 214:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 215:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 216:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 217:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 218:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(465);
      END_STATE();
    case 219:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(464);
      END_STATE();
    case 220:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 221:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 222:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 223:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 224:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 225:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 226:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 227:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 228:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 229:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(466);
      END_STATE();
    case 230:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(467);
      END_STATE();
    case 231:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(470);
      END_STATE();
    case 232:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(468);
      END_STATE();
    case 233:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(469);
      END_STATE();
    case 234:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(183);
      END_STATE();
    case 235:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(187);
      END_STATE();
    case 236:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 237:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 238:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(175);
      END_STATE();
    case 239:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(179);
      END_STATE();
    case 240:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      END_STATE();
    case 241:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(186);
      END_STATE();
    case 242:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 243:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 244:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 245:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(177);
      END_STATE();
    case 246:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(461);
      END_STATE();
    case 247:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(229);
      END_STATE();
    case 248:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(471);
      END_STATE();
    case 249:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(56);
      END_STATE();
    case 250:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(473);
      END_STATE();
    case 251:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(483);
      END_STATE();
    case 252:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(477);
      END_STATE();
    case 253:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(475);
      END_STATE();
    case 254:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(479);
      END_STATE();
    case 255:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(481);
      END_STATE();
    case 256:
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      END_STATE();
    case 257:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      END_STATE();
    case 258:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 259:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      END_STATE();
    case 260:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 261:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      END_STATE();
    case 262:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 263:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(575);
      END_STATE();
    case 264:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(574);
      END_STATE();
    case 265:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(575);
      END_STATE();
    case 266:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(360);
      END_STATE();
    case 267:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(363);
      END_STATE();
    case 268:
      if (eof) ADVANCE(270);
      if (lookahead == '\t') ADVANCE(780);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == ' ') ADVANCE(774);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(54);
      if (lookahead == '-') ADVANCE(356);
      if (lookahead == '=') ADVANCE(361);
      if (lookahead == 'A') ADVANCE(409);
      if (lookahead == 'C') ADVANCE(425);
      if (lookahead == 'D') ADVANCE(421);
      if (lookahead == 'I') ADVANCE(449);
      if (lookahead == 'N') ADVANCE(417);
      if (lookahead == 'O') ADVANCE(457);
      if (lookahead == 'P') ADVANCE(429);
      if (lookahead == 'Y') ADVANCE(413);
      if (lookahead == 'a') ADVANCE(727);
      if (lookahead == 'b') ADVANCE(761);
      if (lookahead == 'c') ADVANCE(750);
      if (lookahead == 'd') ADVANCE(734);
      if (lookahead == 'e') ADVANCE(747);
      if (lookahead == 'i') ADVANCE(445);
      if (lookahead == 'o') ADVANCE(453);
      if (lookahead == 't') ADVANCE(724);
      if (lookahead == 'y') ADVANCE(735);
      if (lookahead == '~') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(555);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(765);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(764);
      END_STATE();
    case 269:
      if (eof) ADVANCE(270);
      if (lookahead == '\t') ADVANCE(780);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == ' ') ADVANCE(774);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(54);
      if (lookahead == '-') ADVANCE(356);
      if (lookahead == '=') ADVANCE(361);
      if (lookahead == 'A') ADVANCE(407);
      if (lookahead == 'C') ADVANCE(423);
      if (lookahead == 'D') ADVANCE(419);
      if (lookahead == 'I') ADVANCE(447);
      if (lookahead == 'N') ADVANCE(415);
      if (lookahead == 'O') ADVANCE(455);
      if (lookahead == 'P') ADVANCE(427);
      if (lookahead == 'T') ADVANCE(213);
      if (lookahead == 'Y') ADVANCE(411);
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == 'b') ADVANCE(147);
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 'd') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(444);
      if (lookahead == 'o') ADVANCE(451);
      if (lookahead == 't') ADVANCE(62);
      if (lookahead == 'y') ADVANCE(83);
      if (lookahead == '}') ADVANCE(154);
      if (lookahead == '~') ADVANCE(459);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(555);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_comment);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(783);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == ' ') ADVANCE(776);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(783);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == ' ') ADVANCE(776);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(783);
      if (lookahead == ' ') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\n') ADVANCE(272);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(287);
      if (lookahead == 'l') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == 'o') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'f') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'g') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'i') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'k') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'l') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'r') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'y') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (eof) ADVANCE(270);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(280);
      if (lookahead == '-') ADVANCE(357);
      if (lookahead == '=') ADVANCE(362);
      if (lookahead == 'A') ADVANCE(410);
      if (lookahead == 'C') ADVANCE(426);
      if (lookahead == 'D') ADVANCE(422);
      if (lookahead == 'I') ADVANCE(450);
      if (lookahead == 'N') ADVANCE(418);
      if (lookahead == 'O') ADVANCE(458);
      if (lookahead == 'P') ADVANCE(430);
      if (lookahead == 'Y') ADVANCE(414);
      if (lookahead == 'a') ADVANCE(284);
      if (lookahead == 'b') ADVANCE(333);
      if (lookahead == 'c') ADVANCE(317);
      if (lookahead == 'd') ADVANCE(294);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == 'i') ADVANCE(446);
      if (lookahead == 'o') ADVANCE(454);
      if (lookahead == 't') ADVANCE(281);
      if (lookahead == 'y') ADVANCE(295);
      if (lookahead == '~') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == ' ') ADVANCE(71);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ' ') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_end);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_endcomment);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_endcomment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_test);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_endtest);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_endtest);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(358);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_option_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_option_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_account);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_account);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_account);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_eval);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_eval);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_account_subdirective_token1);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_payee);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_payee);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_nomarket);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_nomarket);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_tag);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_tag_directive_token1);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_include);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_alias);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_word_directive_token1);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(663);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(723);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_def);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(718);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_year);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_word_directive_token2);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_bucket);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_A);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(669);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_Y);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_N);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_N);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_N);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(681);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(723);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_D);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_C);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_C);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_C);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_P);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_format);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_note);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_assert);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_assert);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_check);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'N') ADVANCE(499);
      if (lookahead == 'n') ADVANCE(498);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(729);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_I);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(499);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_I);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_I);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_o);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_O);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__interval_period_token1);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__interval_period_token2);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__interval_period_token3);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__interval_period_token4);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__interval_period_token5);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__interval_period_token6);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__interval_period_token7);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__interval_period_token8);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__interval_period_token9);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__interval_period_token10);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__interval_period_token11);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__interval_period_token11);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__interval_period_token12);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__interval_period_token12);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__interval_period_token13);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__interval_period_token13);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__interval_period_token14);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__interval_period_token14);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__interval_period_token15);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__interval_period_token15);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__interval_period_token16);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__interval_period_token16);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__interval_period_token17);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__interval_period_token17);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token1);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token2);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token2);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token2);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token3);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token3);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token3);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token4);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token4);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token4);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token5);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token5);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(631);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token5);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__interval_date_spec_token5);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'a') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'a') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'a') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'a') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'e') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'e') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'e') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'e') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'e') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'h') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'h') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'i') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'k') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'n') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'o') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'r') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'r') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'r') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 's') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 't') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 't') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 't') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 't') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'u') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'x') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__month);
      if (lookahead == 'y') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__month);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_last);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_last);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_last);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_last);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_this);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_this);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_this);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_next);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_next);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_next);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_day);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_day);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_week);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(717);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_week);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_month);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(719);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_month);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_quarter);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(722);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_quarter);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(528);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__dsep);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__2d);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__2d);
      if (lookahead == ':') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(551);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(550);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(554);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(573);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(573);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(573);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(563);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_query);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(566);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_note_token1);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(573);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_note_token2);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(573);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(573);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(573);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__quantity);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == ' ') ADVANCE(165);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'A') ADVANCE(681);
      if (lookahead == 'a') ADVANCE(665);
      if (lookahead == 'e') ADVANCE(621);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(723);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'A') ADVANCE(706);
      if (lookahead == 'a') ADVANCE(590);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(723);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'A') ADVANCE(707);
      if (lookahead == 'a') ADVANCE(591);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(723);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'E') ADVANCE(684);
      if (lookahead == 'e') ADVANCE(587);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'E') ADVANCE(671);
      if (lookahead == 'e') ADVANCE(582);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'E') ADVANCE(669);
      if (lookahead == 'e') ADVANCE(581);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'E') ADVANCE(708);
      if (lookahead == 'e') ADVANCE(592);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'H') ADVANCE(690);
      if (lookahead == 'h') ADVANCE(545);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'K') ADVANCE(688);
      if (lookahead == 'k') ADVANCE(543);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'N') ADVANCE(709);
      if (lookahead == 'n') ADVANCE(593);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'O') ADVANCE(698);
      if (lookahead == 'o') ADVANCE(588);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'R') ADVANCE(711);
      if (lookahead == 'r') ADVANCE(594);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'R') ADVANCE(689);
      if (lookahead == 'r') ADVANCE(398);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'R') ADVANCE(693);
      if (lookahead == 'r') ADVANCE(547);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'T') ADVANCE(678);
      if (lookahead == 't') ADVANCE(586);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'T') ADVANCE(677);
      if (lookahead == 't') ADVANCE(585);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'U') ADVANCE(668);
      if (lookahead == 'u') ADVANCE(580);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'V') ADVANCE(673);
      if (lookahead == 'n') ADVANCE(608);
      if (lookahead == 'v') ADVANCE(599);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(667);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(723);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(622);
      if (lookahead == 'e') ADVANCE(648);
      if (lookahead == 'h') ADVANCE(624);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(495);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(723);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(630);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(704);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(723);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(644);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(723);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(643);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(723);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(646);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(723);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(654);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(723);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(605);
      if (lookahead == 'l') ADVANCE(626);
      if (lookahead == 's') ADVANCE(647);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(640);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(628);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(627);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(342);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(625);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(614);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(664);
      if (lookahead == 'o') ADVANCE(635);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(436);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(372);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(385);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(642);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(607);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(653);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(613);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(658);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(638);
      if (lookahead == 'o') ADVANCE(609);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'f') ADVANCE(394);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'g') ADVANCE(380);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'h') ADVANCE(616);
      if (lookahead == 'o') ADVANCE(634);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(645);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(659);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(602);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'k') ADVANCE(441);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'k') ADVANCE(617);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'k') ADVANCE(619);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(369);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(662);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(657);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(620);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(633);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(601);
      if (lookahead == 't') ADVANCE(612);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(603);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(655);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(656);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(641);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(701);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(660);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(636);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(652);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(629);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 's') ADVANCE(649);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 's') ADVANCE(534);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 's') ADVANCE(389);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 's') ADVANCE(615);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 's') ADVANCE(651);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(530);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(538);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(350);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(438);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(404);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(434);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(365);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(274);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(432);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(378);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(666);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(637);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(606);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(695);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(610);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(632);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'x') ADVANCE(650);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'y') ADVANCE(541);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(686);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'y') ADVANCE(374);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'y') ADVANCE(618);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(706);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(723);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(707);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(723);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(672);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(684);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(486);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(704);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(671);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(685);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(708);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(690);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(692);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(695);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(686);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(697);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(687);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(688);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(691);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(715);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(492);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(717);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(718);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(719);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(720);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(721);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(722);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(489);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(703);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(676);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(710);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(670);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(709);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(712);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(495);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(694);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(698);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(699);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(716);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(701);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(711);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(689);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(693);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(678);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(683);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(677);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(679);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(668);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(673);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(472);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(578);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(474);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(484);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(478);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(476);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(480);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(482);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(723);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(740);
      if (lookahead == 'e') ADVANCE(753);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(764);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(752);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(764);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(754);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(764);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(730);
      if (lookahead == 'l') ADVANCE(741);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(743);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(744);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(751);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(345);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(742);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(736);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(739);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(725);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(386);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(756);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(749);
      if (lookahead == 'o') ADVANCE(732);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'f') ADVANCE(395);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'g') ADVANCE(381);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(726);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(759);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(737);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(762);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(738);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(745);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(731);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(757);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(758);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(746);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(760);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(399);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(755);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(390);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(351);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(405);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(366);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(275);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(763);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(748);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(728);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(733);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'y') ADVANCE(375);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(764);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_commodity_token3);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(770);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(771);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(773);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(370);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(363);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(566);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(392);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(370);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(573);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(363);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(566);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(392);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_TAB3);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_TAB_TAB);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 269},
  [2] = {.lex_state = 269},
  [3] = {.lex_state = 269},
  [4] = {.lex_state = 269},
  [5] = {.lex_state = 269},
  [6] = {.lex_state = 269},
  [7] = {.lex_state = 269},
  [8] = {.lex_state = 269},
  [9] = {.lex_state = 269},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 268},
  [12] = {.lex_state = 268},
  [13] = {.lex_state = 268},
  [14] = {.lex_state = 269},
  [15] = {.lex_state = 269},
  [16] = {.lex_state = 269},
  [17] = {.lex_state = 269},
  [18] = {.lex_state = 269},
  [19] = {.lex_state = 269},
  [20] = {.lex_state = 269},
  [21] = {.lex_state = 269},
  [22] = {.lex_state = 268},
  [23] = {.lex_state = 268},
  [24] = {.lex_state = 269},
  [25] = {.lex_state = 269},
  [26] = {.lex_state = 269},
  [27] = {.lex_state = 269},
  [28] = {.lex_state = 268},
  [29] = {.lex_state = 269},
  [30] = {.lex_state = 269},
  [31] = {.lex_state = 269},
  [32] = {.lex_state = 269},
  [33] = {.lex_state = 269},
  [34] = {.lex_state = 269},
  [35] = {.lex_state = 269},
  [36] = {.lex_state = 269},
  [37] = {.lex_state = 269},
  [38] = {.lex_state = 269},
  [39] = {.lex_state = 269},
  [40] = {.lex_state = 269},
  [41] = {.lex_state = 269},
  [42] = {.lex_state = 269},
  [43] = {.lex_state = 269},
  [44] = {.lex_state = 269},
  [45] = {.lex_state = 269},
  [46] = {.lex_state = 269},
  [47] = {.lex_state = 269},
  [48] = {.lex_state = 269},
  [49] = {.lex_state = 269},
  [50] = {.lex_state = 269},
  [51] = {.lex_state = 269},
  [52] = {.lex_state = 269},
  [53] = {.lex_state = 269},
  [54] = {.lex_state = 269},
  [55] = {.lex_state = 269},
  [56] = {.lex_state = 269},
  [57] = {.lex_state = 269},
  [58] = {.lex_state = 269},
  [59] = {.lex_state = 269},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 269},
  [62] = {.lex_state = 269},
  [63] = {.lex_state = 269},
  [64] = {.lex_state = 269},
  [65] = {.lex_state = 269},
  [66] = {.lex_state = 340},
  [67] = {.lex_state = 340},
  [68] = {.lex_state = 340},
  [69] = {.lex_state = 340},
  [70] = {.lex_state = 340},
  [71] = {.lex_state = 340},
  [72] = {.lex_state = 340},
  [73] = {.lex_state = 340},
  [74] = {.lex_state = 269},
  [75] = {.lex_state = 269},
  [76] = {.lex_state = 269},
  [77] = {.lex_state = 269},
  [78] = {.lex_state = 269},
  [79] = {.lex_state = 269},
  [80] = {.lex_state = 269},
  [81] = {.lex_state = 269},
  [82] = {.lex_state = 269},
  [83] = {.lex_state = 269},
  [84] = {.lex_state = 269},
  [85] = {.lex_state = 269},
  [86] = {.lex_state = 269},
  [87] = {.lex_state = 269},
  [88] = {.lex_state = 269},
  [89] = {.lex_state = 269},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 11},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 11},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 277},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 269},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 277},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 277},
  [167] = {.lex_state = 269},
  [168] = {.lex_state = 269},
  [169] = {.lex_state = 269},
  [170] = {.lex_state = 277},
  [171] = {.lex_state = 278},
  [172] = {.lex_state = 278},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 278},
  [177] = {.lex_state = 8},
  [178] = {.lex_state = 277},
  [179] = {.lex_state = 269},
  [180] = {.lex_state = 278},
  [181] = {.lex_state = 278},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 12},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 12},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 12},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 12},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 12},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 12},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 12},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 12},
  [206] = {.lex_state = 12},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 12},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 12},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 12},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 278},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 269},
  [226] = {.lex_state = 277},
  [227] = {.lex_state = 4},
  [228] = {.lex_state = 277},
  [229] = {.lex_state = 3},
  [230] = {.lex_state = 5},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 278},
  [233] = {.lex_state = 20},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 20},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 13},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 13},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 12},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 13},
  [255] = {.lex_state = 20},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 269},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 13},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 13},
  [264] = {.lex_state = 18},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 13},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 18},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 13},
  [274] = {.lex_state = 13},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 13},
  [278] = {.lex_state = 2},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 269},
  [281] = {.lex_state = 6},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 16},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 10},
  [286] = {.lex_state = 6},
  [287] = {.lex_state = 6},
  [288] = {.lex_state = 6},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 4},
  [291] = {.lex_state = 4},
  [292] = {.lex_state = 4},
  [293] = {.lex_state = 279},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 279},
  [296] = {.lex_state = 10},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 4},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 10},
  [301] = {.lex_state = 10},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 19},
  [304] = {.lex_state = 8},
  [305] = {.lex_state = 16},
  [306] = {.lex_state = 269},
  [307] = {.lex_state = 6},
  [308] = {.lex_state = 6},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 16},
  [311] = {.lex_state = 16},
  [312] = {.lex_state = 279},
  [313] = {.lex_state = 10},
  [314] = {.lex_state = 269},
  [315] = {.lex_state = 16},
  [316] = {.lex_state = 10},
  [317] = {.lex_state = 8},
  [318] = {.lex_state = 16},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 17},
  [321] = {.lex_state = 4},
  [322] = {.lex_state = 19},
  [323] = {.lex_state = 4},
  [324] = {.lex_state = 4},
  [325] = {.lex_state = 279},
  [326] = {.lex_state = 4},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 3},
  [329] = {.lex_state = 18},
  [330] = {.lex_state = 10},
  [331] = {.lex_state = 6},
  [332] = {.lex_state = 17},
  [333] = {.lex_state = 18},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 279},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 4},
  [339] = {.lex_state = 8},
  [340] = {.lex_state = 8},
  [341] = {.lex_state = 269},
  [342] = {.lex_state = 269},
  [343] = {.lex_state = 6},
  [344] = {.lex_state = 4},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 21},
  [350] = {.lex_state = 21},
  [351] = {.lex_state = 21},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 21},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 21},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 21},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 21},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 267},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 13},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 267},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 8},
  [431] = {.lex_state = 563},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 8},
  [435] = {.lex_state = 8},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 265},
  [443] = {.lex_state = 265},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 13},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 13},
  [451] = {.lex_state = 2},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 8},
  [457] = {.lex_state = 8},
  [458] = {.lex_state = 2},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 8},
  [463] = {.lex_state = 2},
  [464] = {.lex_state = 266},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
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
    [aux_sym__interval_period_token1] = ACTIONS(1),
    [aux_sym__interval_period_token2] = ACTIONS(1),
    [aux_sym__interval_period_token3] = ACTIONS(1),
    [aux_sym__interval_period_token4] = ACTIONS(1),
    [aux_sym__interval_period_token5] = ACTIONS(1),
    [aux_sym__interval_period_token6] = ACTIONS(1),
    [aux_sym__interval_period_token7] = ACTIONS(1),
    [aux_sym__interval_period_token8] = ACTIONS(1),
    [aux_sym__interval_period_token9] = ACTIONS(1),
    [aux_sym__interval_period_token10] = ACTIONS(1),
    [aux_sym__interval_period_token11] = ACTIONS(1),
    [aux_sym__interval_period_token12] = ACTIONS(1),
    [aux_sym__interval_period_token13] = ACTIONS(1),
    [aux_sym__interval_period_token14] = ACTIONS(1),
    [aux_sym__interval_period_token15] = ACTIONS(1),
    [aux_sym__interval_period_token16] = ACTIONS(1),
    [aux_sym__interval_period_token17] = ACTIONS(1),
    [aux_sym__interval_date_spec_token1] = ACTIONS(1),
    [aux_sym__interval_date_spec_token2] = ACTIONS(1),
    [aux_sym__interval_date_spec_token3] = ACTIONS(1),
    [aux_sym__interval_date_spec_token4] = ACTIONS(1),
    [aux_sym__interval_date_spec_token5] = ACTIONS(1),
    [anon_sym_last] = ACTIONS(1),
    [anon_sym_this] = ACTIONS(1),
    [anon_sym_next] = ACTIONS(1),
    [anon_sym_day] = ACTIONS(1),
    [anon_sym_week] = ACTIONS(1),
    [anon_sym_month] = ACTIONS(1),
    [anon_sym_quarter] = ACTIONS(1),
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(454),
    [sym_journal_item] = STATE(3),
    [sym_block_comment] = STATE(88),
    [sym_test] = STATE(88),
    [sym_option] = STATE(86),
    [sym_directive] = STATE(88),
    [sym_account_directive] = STATE(86),
    [sym_commodity_directive] = STATE(86),
    [sym_tag_directive] = STATE(86),
    [sym_word_directive] = STATE(453),
    [sym_char_directive] = STATE(453),
    [sym_check_in] = STATE(452),
    [sym_check_out] = STATE(452),
    [sym_xact] = STATE(88),
    [sym_plain_xact] = STATE(85),
    [sym_periodic_xact] = STATE(85),
    [sym_automated_xact] = STATE(85),
    [sym__xact_date] = STATE(236),
    [sym_date] = STATE(231),
    [sym__4d] = STATE(451),
    [sym__single_date] = STATE(229),
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
    STATE(229), 1,
      sym__single_date,
    STATE(231), 1,
      sym_date,
    STATE(236), 1,
      sym__xact_date,
    STATE(451), 1,
      sym__4d,
    ACTIONS(138), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(452), 2,
      sym_check_in,
      sym_check_out,
    STATE(453), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(85), 3,
      sym_plain_xact,
      sym_periodic_xact,
      sym_automated_xact,
    STATE(86), 4,
      sym_option,
      sym_account_directive,
      sym_commodity_directive,
      sym_tag_directive,
    STATE(88), 4,
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
    STATE(229), 1,
      sym__single_date,
    STATE(231), 1,
      sym_date,
    STATE(236), 1,
      sym__xact_date,
    STATE(451), 1,
      sym__4d,
    ACTIONS(55), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(452), 2,
      sym_check_in,
      sym_check_out,
    STATE(453), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(85), 3,
      sym_plain_xact,
      sym_periodic_xact,
      sym_automated_xact,
    STATE(86), 4,
      sym_option,
      sym_account_directive,
      sym_commodity_directive,
      sym_tag_directive,
    STATE(88), 4,
      sym_block_comment,
      sym_test,
      sym_directive,
      sym_xact,
  [260] = 6,
    STATE(138), 1,
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
    STATE(44), 5,
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
    STATE(138), 1,
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
    STATE(44), 5,
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
    STATE(138), 1,
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
    STATE(44), 5,
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
    STATE(150), 1,
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
    STATE(42), 4,
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
    STATE(150), 1,
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
    STATE(42), 4,
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
    STATE(150), 1,
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
    STATE(42), 4,
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
  [575] = 3,
    STATE(10), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(187), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(185), 35,
      sym_comment,
      anon_sym_eval,
      anon_sym_payee,
      anon_sym_nomarket,
      anon_sym_alias,
      anon_sym_default,
      anon_sym_format,
      anon_sym_note,
      anon_sym_assert,
      anon_sym_check,
      aux_sym__interval_period_token1,
      aux_sym__interval_period_token2,
      aux_sym__interval_period_token3,
      aux_sym__interval_period_token4,
      aux_sym__interval_period_token5,
      aux_sym__interval_period_token6,
      aux_sym__interval_period_token7,
      aux_sym__interval_period_token8,
      aux_sym__interval_period_token9,
      aux_sym__interval_period_token10,
      aux_sym__interval_period_token11,
      aux_sym__interval_period_token12,
      aux_sym__interval_period_token13,
      aux_sym__interval_period_token14,
      aux_sym__interval_period_token15,
      aux_sym__interval_period_token16,
      aux_sym__interval_period_token17,
      aux_sym__interval_date_spec_token1,
      aux_sym__interval_date_spec_token2,
      aux_sym__interval_date_spec_token3,
      aux_sym__interval_date_spec_token4,
      aux_sym__interval_date_spec_token5,
      anon_sym_last,
      anon_sym_this,
      anon_sym_next,
  [620] = 6,
    ACTIONS(194), 1,
      aux_sym_commodity_token1,
    STATE(13), 1,
      aux_sym_whitespace_repeat1,
    STATE(64), 1,
      sym_commodity,
    ACTIONS(196), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
    ACTIONS(190), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      anon_sym_TILDE,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(192), 23,
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
  [670] = 7,
    ACTIONS(194), 1,
      aux_sym_commodity_token1,
    STATE(11), 1,
      aux_sym_whitespace_repeat1,
    STATE(59), 1,
      sym_commodity,
    ACTIONS(196), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
    ACTIONS(202), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(198), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      anon_sym_TILDE,
    ACTIONS(200), 23,
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
  [722] = 4,
    STATE(13), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(206), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(185), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      anon_sym_TILDE,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
    ACTIONS(204), 24,
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
  [767] = 5,
    STATE(225), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(213), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(211), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(15), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(209), 27,
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
    STATE(225), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(213), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(217), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(16), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
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
  [861] = 5,
    STATE(225), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(223), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(221), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(16), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
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
  [908] = 5,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(26), 2,
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
  [954] = 5,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(26), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(234), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(232), 27,
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
  [1000] = 5,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(26), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(238), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(236), 27,
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
  [1046] = 5,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(26), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(242), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(240), 27,
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
  [1092] = 5,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(26), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(246), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(244), 27,
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
  [1138] = 2,
    ACTIONS(248), 11,
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
    ACTIONS(250), 24,
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
  [1178] = 2,
    ACTIONS(252), 11,
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
    ACTIONS(254), 24,
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
  [1218] = 5,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(26), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(258), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(256), 27,
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
  [1264] = 5,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(26), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(262), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(260), 27,
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
  [1310] = 5,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(268), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(26), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(266), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(264), 27,
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
  [1356] = 5,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(26), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(273), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(271), 27,
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
  [1402] = 2,
    ACTIONS(275), 11,
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
    ACTIONS(277), 24,
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
  [1442] = 5,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(26), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(281), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(279), 27,
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
  [1488] = 5,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(26), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(285), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(283), 27,
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
  [1534] = 2,
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
  [1571] = 2,
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
  [1608] = 2,
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
  [1645] = 2,
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
  [1682] = 2,
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
  [1719] = 2,
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
  [1756] = 2,
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
  [1793] = 2,
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
  [1830] = 2,
    ACTIONS(221), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(219), 29,
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
  [1867] = 2,
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
  [1904] = 2,
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
  [1941] = 2,
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
  [1978] = 2,
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
  [2015] = 2,
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
  [2052] = 2,
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
  [2089] = 2,
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
  [2126] = 2,
    ACTIONS(254), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(252), 29,
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
  [2163] = 2,
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
  [2200] = 2,
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
  [2237] = 2,
    ACTIONS(163), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(161), 29,
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
  [2274] = 2,
    ACTIONS(180), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(178), 29,
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
  [2311] = 2,
    ACTIONS(353), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(351), 29,
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
  [2348] = 2,
    ACTIONS(357), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(355), 29,
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
  [2385] = 2,
    ACTIONS(361), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(359), 29,
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
  [2422] = 2,
    ACTIONS(365), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(363), 29,
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
  [2459] = 2,
    ACTIONS(369), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(367), 29,
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
  [2496] = 2,
    ACTIONS(373), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(371), 29,
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
  [2533] = 2,
    ACTIONS(377), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(375), 29,
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
  [2570] = 2,
    ACTIONS(192), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(190), 29,
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
  [2607] = 10,
    STATE(10), 1,
      aux_sym_whitespace_repeat1,
    STATE(242), 1,
      sym__interval_period,
    STATE(380), 1,
      sym_interval,
    STATE(384), 1,
      sym__interval_date_spec,
    STATE(393), 1,
      sym__relative_date_spec,
    ACTIONS(381), 2,
      aux_sym__interval_date_spec_token1,
      aux_sym__interval_date_spec_token2,
    ACTIONS(387), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(383), 3,
      aux_sym__interval_date_spec_token3,
      aux_sym__interval_date_spec_token4,
      aux_sym__interval_date_spec_token5,
    ACTIONS(385), 3,
      anon_sym_last,
      anon_sym_this,
      anon_sym_next,
    ACTIONS(379), 17,
      aux_sym__interval_period_token1,
      aux_sym__interval_period_token2,
      aux_sym__interval_period_token3,
      aux_sym__interval_period_token4,
      aux_sym__interval_period_token5,
      aux_sym__interval_period_token6,
      aux_sym__interval_period_token7,
      aux_sym__interval_period_token8,
      aux_sym__interval_period_token9,
      aux_sym__interval_period_token10,
      aux_sym__interval_period_token11,
      aux_sym__interval_period_token12,
      aux_sym__interval_period_token13,
      aux_sym__interval_period_token14,
      aux_sym__interval_period_token15,
      aux_sym__interval_period_token16,
      aux_sym__interval_period_token17,
  [2660] = 2,
    ACTIONS(250), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(248), 29,
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
  [2697] = 2,
    ACTIONS(391), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(389), 29,
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
  [2734] = 2,
    ACTIONS(395), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(393), 29,
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
  [2771] = 2,
    ACTIONS(399), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(397), 29,
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
  [2808] = 2,
    ACTIONS(403), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(401), 29,
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
  [2845] = 3,
    ACTIONS(409), 1,
      aux_sym_block_comment_token1,
    ACTIONS(405), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(407), 27,
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
  [2883] = 3,
    ACTIONS(415), 1,
      aux_sym_block_comment_token1,
    ACTIONS(411), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(413), 27,
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
  [2921] = 3,
    ACTIONS(421), 1,
      aux_sym_block_comment_token1,
    ACTIONS(417), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(419), 27,
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
  [2959] = 3,
    ACTIONS(427), 1,
      aux_sym_block_comment_token1,
    ACTIONS(423), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(425), 27,
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
  [2997] = 3,
    ACTIONS(433), 1,
      aux_sym_block_comment_token1,
    ACTIONS(429), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(431), 27,
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
  [3035] = 3,
    ACTIONS(439), 1,
      aux_sym_block_comment_token1,
    ACTIONS(435), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(437), 27,
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
  [3073] = 3,
    ACTIONS(445), 1,
      aux_sym_block_comment_token1,
    ACTIONS(441), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(443), 27,
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
  [3111] = 3,
    ACTIONS(451), 1,
      aux_sym_block_comment_token1,
    ACTIONS(447), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(449), 27,
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
  [3149] = 2,
    ACTIONS(455), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(453), 27,
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
  [3184] = 2,
    ACTIONS(459), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(457), 27,
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
  [3219] = 2,
    ACTIONS(437), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(435), 27,
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
  [3254] = 2,
    ACTIONS(463), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(461), 27,
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
  [3289] = 2,
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
  [3324] = 2,
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
  [3359] = 2,
    ACTIONS(467), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(465), 27,
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
  [3394] = 2,
    ACTIONS(471), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(469), 27,
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
  [3429] = 2,
    ACTIONS(443), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(441), 27,
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
  [3464] = 2,
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
  [3499] = 2,
    ACTIONS(449), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(447), 27,
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
  [3534] = 2,
    ACTIONS(475), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(473), 27,
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
  [3569] = 2,
    ACTIONS(479), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(477), 27,
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
  [3604] = 2,
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
  [3639] = 2,
    ACTIONS(483), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(481), 27,
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
  [3674] = 2,
    ACTIONS(407), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(405), 27,
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
  [3709] = 20,
    ACTIONS(485), 1,
      anon_sym_LF,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    STATE(108), 1,
      sym_amount,
    STATE(136), 1,
      sym_lot_price,
    STATE(164), 1,
      sym_commodity,
    STATE(174), 1,
      sym_price,
    STATE(224), 1,
      sym_balance_assertion,
    STATE(400), 1,
      sym_note,
    ACTIONS(507), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3774] = 20,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    ACTIONS(509), 1,
      anon_sym_LF,
    STATE(93), 1,
      aux_sym_whitespace_repeat1,
    STATE(103), 1,
      sym_amount,
    STATE(133), 1,
      sym_lot_price,
    STATE(163), 1,
      sym_price,
    STATE(164), 1,
      sym_commodity,
    STATE(215), 1,
      sym_balance_assertion,
    STATE(402), 1,
      sym_note,
    ACTIONS(511), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3839] = 20,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    ACTIONS(513), 1,
      anon_sym_LF,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(106), 1,
      sym_amount,
    STATE(135), 1,
      sym_lot_price,
    STATE(164), 1,
      sym_commodity,
    STATE(175), 1,
      sym_price,
    STATE(219), 1,
      sym_balance_assertion,
    STATE(399), 1,
      sym_note,
    ACTIONS(515), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3904] = 19,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    STATE(108), 1,
      sym_amount,
    STATE(136), 1,
      sym_lot_price,
    STATE(164), 1,
      sym_commodity,
    STATE(174), 1,
      sym_price,
    STATE(224), 1,
      sym_balance_assertion,
    STATE(400), 1,
      sym_note,
    ACTIONS(517), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3966] = 19,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    STATE(103), 1,
      sym_amount,
    STATE(133), 1,
      sym_lot_price,
    STATE(163), 1,
      sym_price,
    STATE(164), 1,
      sym_commodity,
    STATE(215), 1,
      sym_balance_assertion,
    STATE(402), 1,
      sym_note,
    ACTIONS(517), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4028] = 19,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    STATE(107), 1,
      sym_amount,
    STATE(134), 1,
      sym_lot_price,
    STATE(164), 1,
      sym_commodity,
    STATE(182), 1,
      sym_price,
    STATE(238), 1,
      sym_balance_assertion,
    STATE(432), 1,
      sym_note,
    ACTIONS(517), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4090] = 4,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(519), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(185), 5,
      sym_comment,
      anon_sym_DASH,
      aux_sym_tag_directive_token1,
      sym__quantity,
      anon_sym_PLUS,
    ACTIONS(204), 10,
      anon_sym_assert,
      anon_sym_check,
      aux_sym__interval_date_spec_token1,
      aux_sym__interval_date_spec_token2,
      aux_sym__interval_date_spec_token3,
      aux_sym__interval_date_spec_token4,
      aux_sym__interval_date_spec_token5,
      anon_sym_last,
      anon_sym_this,
      anon_sym_next,
  [4117] = 4,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(204), 4,
      sym__2d,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(185), 11,
      anon_sym_LF,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      sym_time,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
  [4144] = 2,
    ACTIONS(349), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(347), 14,
      anon_sym_LF,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym__quantity,
      anon_sym_PLUS,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [4166] = 6,
    STATE(100), 1,
      aux_sym_whitespace_repeat1,
    STATE(132), 1,
      sym_commodity,
    ACTIONS(525), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(200), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
    ACTIONS(198), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
  [4195] = 5,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(139), 1,
      sym_commodity,
    ACTIONS(192), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
    ACTIONS(190), 8,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [4222] = 4,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(204), 2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(527), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(185), 10,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym__quantity,
      anon_sym_PLUS,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [4246] = 2,
    ACTIONS(250), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(248), 11,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [4265] = 13,
    ACTIONS(485), 1,
      anon_sym_LF,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(115), 1,
      aux_sym_whitespace_repeat1,
    STATE(136), 1,
      sym_lot_price,
    STATE(174), 1,
      sym_price,
    STATE(224), 1,
      sym_balance_assertion,
    STATE(400), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [4306] = 2,
    ACTIONS(254), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(252), 11,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [4325] = 2,
    ACTIONS(277), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(275), 11,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [4344] = 13,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    ACTIONS(509), 1,
      anon_sym_LF,
    STATE(109), 1,
      aux_sym_whitespace_repeat1,
    STATE(133), 1,
      sym_lot_price,
    STATE(163), 1,
      sym_price,
    STATE(215), 1,
      sym_balance_assertion,
    STATE(402), 1,
      sym_note,
    ACTIONS(532), 2,
      anon_sym_,
      anon_sym_TAB,
  [4385] = 13,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    ACTIONS(534), 1,
      anon_sym_LF,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    STATE(140), 1,
      sym_lot_price,
    STATE(154), 1,
      sym_price,
    STATE(218), 1,
      sym_balance_assertion,
    STATE(465), 1,
      sym_note,
    ACTIONS(536), 2,
      anon_sym_,
      anon_sym_TAB,
  [4426] = 13,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    ACTIONS(538), 1,
      anon_sym_LF,
    STATE(124), 1,
      aux_sym_whitespace_repeat1,
    STATE(134), 1,
      sym_lot_price,
    STATE(182), 1,
      sym_price,
    STATE(238), 1,
      sym_balance_assertion,
    STATE(432), 1,
      sym_note,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [4467] = 12,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(136), 1,
      sym_lot_price,
    STATE(174), 1,
      sym_price,
    STATE(224), 1,
      sym_balance_assertion,
    STATE(400), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [4505] = 9,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(119), 1,
      aux_sym_whitespace_repeat1,
    STATE(164), 1,
      sym_commodity,
    STATE(302), 1,
      sym_amount,
    ACTIONS(544), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4537] = 9,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    STATE(164), 1,
      sym_commodity,
    STATE(405), 1,
      sym_amount,
    ACTIONS(517), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(155), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4569] = 9,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    STATE(164), 1,
      sym_commodity,
    STATE(260), 1,
      sym_amount,
    ACTIONS(517), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4601] = 9,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    STATE(164), 1,
      sym_commodity,
    STATE(342), 1,
      sym_amount,
    ACTIONS(517), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4633] = 9,
    ACTIONS(59), 1,
      sym__2d,
    ACTIONS(546), 1,
      aux_sym_word_directive_token2,
    ACTIONS(548), 1,
      sym__month,
    STATE(149), 1,
      aux_sym_whitespace_repeat1,
    STATE(278), 1,
      sym__4d,
    STATE(385), 1,
      sym_date_spec,
    ACTIONS(552), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(289), 2,
      sym__relative_date_spec,
      sym__single_date,
    ACTIONS(550), 3,
      anon_sym_last,
      anon_sym_this,
      anon_sym_next,
  [4665] = 12,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(134), 1,
      sym_lot_price,
    STATE(182), 1,
      sym_price,
    STATE(238), 1,
      sym_balance_assertion,
    STATE(432), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [4703] = 9,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    STATE(164), 1,
      sym_commodity,
    STATE(340), 1,
      sym_amount,
    ACTIONS(517), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4735] = 9,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(111), 1,
      aux_sym_whitespace_repeat1,
    STATE(164), 1,
      sym_commodity,
    STATE(410), 1,
      sym_amount,
    ACTIONS(554), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(155), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4767] = 9,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    STATE(164), 1,
      sym_commodity,
    STATE(410), 1,
      sym_amount,
    ACTIONS(517), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(155), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4799] = 9,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    STATE(164), 1,
      sym_commodity,
    STATE(337), 1,
      sym_amount,
    ACTIONS(517), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4831] = 12,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(137), 1,
      sym_lot_price,
    STATE(165), 1,
      sym_price,
    STATE(216), 1,
      sym_balance_assertion,
    STATE(446), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [4869] = 9,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(118), 1,
      aux_sym_whitespace_repeat1,
    STATE(164), 1,
      sym_commodity,
    STATE(417), 1,
      sym_amount,
    ACTIONS(556), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(155), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4901] = 9,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(116), 1,
      aux_sym_whitespace_repeat1,
    STATE(164), 1,
      sym_commodity,
    STATE(304), 1,
      sym_amount,
    ACTIONS(558), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4933] = 7,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(386), 1,
      sym__interval_date_spec,
    STATE(393), 1,
      sym__relative_date_spec,
    ACTIONS(381), 2,
      aux_sym__interval_date_spec_token1,
      aux_sym__interval_date_spec_token2,
    ACTIONS(560), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(383), 3,
      aux_sym__interval_date_spec_token3,
      aux_sym__interval_date_spec_token4,
      aux_sym__interval_date_spec_token5,
    ACTIONS(385), 3,
      anon_sym_last,
      anon_sym_this,
      anon_sym_next,
  [4961] = 12,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(140), 1,
      sym_lot_price,
    STATE(154), 1,
      sym_price,
    STATE(218), 1,
      sym_balance_assertion,
    STATE(465), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [4999] = 9,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(113), 1,
      aux_sym_whitespace_repeat1,
    STATE(164), 1,
      sym_commodity,
    STATE(306), 1,
      sym_amount,
    ACTIONS(562), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5031] = 9,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    STATE(164), 1,
      sym_commodity,
    STATE(436), 1,
      sym_amount,
    ACTIONS(517), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(155), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5063] = 9,
    ACTIONS(59), 1,
      sym__2d,
    ACTIONS(546), 1,
      aux_sym_word_directive_token2,
    ACTIONS(548), 1,
      sym__month,
    STATE(149), 1,
      aux_sym_whitespace_repeat1,
    STATE(278), 1,
      sym__4d,
    STATE(279), 1,
      sym_date_spec,
    ACTIONS(552), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(289), 2,
      sym__relative_date_spec,
      sym__single_date,
    ACTIONS(550), 3,
      anon_sym_last,
      anon_sym_this,
      anon_sym_next,
  [5095] = 9,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(112), 1,
      aux_sym_whitespace_repeat1,
    STATE(164), 1,
      sym_commodity,
    STATE(272), 1,
      sym_amount,
    ACTIONS(564), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(99), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5127] = 9,
    ACTIONS(566), 1,
      anon_sym_DASH,
    ACTIONS(568), 1,
      sym__quantity,
    ACTIONS(570), 1,
      anon_sym_PLUS,
    STATE(54), 1,
      sym_amount,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    STATE(177), 1,
      sym_commodity,
    ACTIONS(517), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(12), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5159] = 9,
    ACTIONS(59), 1,
      sym__2d,
    ACTIONS(546), 1,
      aux_sym_word_directive_token2,
    ACTIONS(548), 1,
      sym__month,
    STATE(149), 1,
      aux_sym_whitespace_repeat1,
    STATE(278), 1,
      sym__4d,
    STATE(387), 1,
      sym_date_spec,
    ACTIONS(552), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(289), 2,
      sym__relative_date_spec,
      sym__single_date,
    ACTIONS(550), 3,
      anon_sym_last,
      anon_sym_this,
      anon_sym_next,
  [5191] = 11,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    ACTIONS(578), 1,
      sym_account_name,
    ACTIONS(580), 1,
      anon_sym_,
    ACTIONS(582), 1,
      anon_sym_TAB,
    STATE(148), 1,
      aux_sym_whitespace_repeat1,
    STATE(195), 1,
      sym_status,
    STATE(254), 1,
      sym_account,
    STATE(422), 1,
      sym_note,
    ACTIONS(572), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [5226] = 2,
    ACTIONS(192), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(190), 8,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [5242] = 10,
    ACTIONS(485), 1,
      anon_sym_LF,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(143), 1,
      aux_sym_whitespace_repeat1,
    STATE(174), 1,
      sym_price,
    STATE(224), 1,
      sym_balance_assertion,
    STATE(400), 1,
      sym_note,
    ACTIONS(584), 2,
      anon_sym_,
      anon_sym_TAB,
  [5274] = 10,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    ACTIONS(534), 1,
      anon_sym_LF,
    STATE(146), 1,
      aux_sym_whitespace_repeat1,
    STATE(154), 1,
      sym_price,
    STATE(218), 1,
      sym_balance_assertion,
    STATE(465), 1,
      sym_note,
    ACTIONS(586), 2,
      anon_sym_,
      anon_sym_TAB,
  [5306] = 10,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    ACTIONS(509), 1,
      anon_sym_LF,
    STATE(145), 1,
      aux_sym_whitespace_repeat1,
    STATE(163), 1,
      sym_price,
    STATE(215), 1,
      sym_balance_assertion,
    STATE(402), 1,
      sym_note,
    ACTIONS(588), 2,
      anon_sym_,
      anon_sym_TAB,
  [5338] = 10,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    ACTIONS(538), 1,
      anon_sym_LF,
    STATE(142), 1,
      aux_sym_whitespace_repeat1,
    STATE(182), 1,
      sym_price,
    STATE(238), 1,
      sym_balance_assertion,
    STATE(432), 1,
      sym_note,
    ACTIONS(590), 2,
      anon_sym_,
      anon_sym_TAB,
  [5370] = 10,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    ACTIONS(592), 1,
      anon_sym_LF,
    STATE(141), 1,
      aux_sym_whitespace_repeat1,
    STATE(158), 1,
      sym_price,
    STATE(214), 1,
      sym_balance_assertion,
    STATE(466), 1,
      sym_note,
    ACTIONS(594), 2,
      anon_sym_,
      anon_sym_TAB,
  [5402] = 9,
    ACTIONS(596), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_alias,
    ACTIONS(602), 1,
      anon_sym_default,
    ACTIONS(604), 1,
      anon_sym_note,
    ACTIONS(606), 1,
      anon_sym_assert,
    ACTIONS(608), 1,
      anon_sym_check,
    STATE(10), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(387), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(598), 2,
      anon_sym_eval,
      anon_sym_payee,
  [5432] = 2,
    ACTIONS(399), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(397), 8,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [5448] = 10,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    ACTIONS(610), 1,
      anon_sym_LF,
    STATE(144), 1,
      aux_sym_whitespace_repeat1,
    STATE(165), 1,
      sym_price,
    STATE(216), 1,
      sym_balance_assertion,
    STATE(446), 1,
      sym_note,
    ACTIONS(612), 2,
      anon_sym_,
      anon_sym_TAB,
  [5480] = 9,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(157), 1,
      sym_price,
    STATE(222), 1,
      sym_balance_assertion,
    STATE(398), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [5509] = 9,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(154), 1,
      sym_price,
    STATE(218), 1,
      sym_balance_assertion,
    STATE(465), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [5538] = 9,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(182), 1,
      sym_price,
    STATE(238), 1,
      sym_balance_assertion,
    STATE(432), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [5567] = 9,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(158), 1,
      sym_price,
    STATE(214), 1,
      sym_balance_assertion,
    STATE(466), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [5596] = 9,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(174), 1,
      sym_price,
    STATE(224), 1,
      sym_balance_assertion,
    STATE(400), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [5625] = 9,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(503), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_AT_AT,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(165), 1,
      sym_price,
    STATE(216), 1,
      sym_balance_assertion,
    STATE(446), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [5654] = 3,
    STATE(147), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(614), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(204), 6,
      anon_sym_year,
      sym__month,
      anon_sym_day,
      anon_sym_week,
      anon_sym_month,
      anon_sym_quarter,
  [5670] = 5,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    ACTIONS(617), 1,
      anon_sym_,
    ACTIONS(620), 1,
      anon_sym_TAB,
    STATE(148), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(204), 5,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [5690] = 4,
    ACTIONS(185), 1,
      aux_sym_word_directive_token2,
    STATE(149), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(623), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(204), 5,
      sym__month,
      anon_sym_last,
      anon_sym_this,
      anon_sym_next,
      sym__2d,
  [5708] = 8,
    ACTIONS(600), 1,
      anon_sym_alias,
    ACTIONS(602), 1,
      anon_sym_default,
    ACTIONS(604), 1,
      anon_sym_note,
    ACTIONS(626), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_nomarket,
    ACTIONS(630), 1,
      anon_sym_format,
    STATE(10), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(387), 2,
      anon_sym_,
      anon_sym_TAB,
  [5734] = 3,
    STATE(147), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(634), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(632), 6,
      anon_sym_year,
      sym__month,
      anon_sym_day,
      anon_sym_week,
      anon_sym_month,
      anon_sym_quarter,
  [5750] = 7,
    ACTIONS(638), 1,
      anon_sym_LPAREN,
    ACTIONS(640), 1,
      sym_payee,
    STATE(202), 1,
      aux_sym_whitespace_repeat1,
    STATE(213), 1,
      sym_status,
    STATE(221), 1,
      sym_code,
    ACTIONS(636), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(642), 2,
      anon_sym_,
      anon_sym_TAB,
  [5774] = 7,
    ACTIONS(644), 1,
      anon_sym_LF,
    ACTIONS(646), 1,
      aux_sym_block_comment_token1,
    ACTIONS(648), 1,
      anon_sym_end,
    ACTIONS(650), 1,
      anon_sym_endtest,
    STATE(166), 1,
      aux_sym_block_comment_repeat1,
    STATE(293), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(652), 2,
      anon_sym_,
      anon_sym_TAB,
  [5797] = 7,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(610), 1,
      anon_sym_LF,
    STATE(204), 1,
      aux_sym_whitespace_repeat1,
    STATE(216), 1,
      sym_balance_assertion,
    STATE(446), 1,
      sym_note,
    ACTIONS(654), 2,
      anon_sym_,
      anon_sym_TAB,
  [5820] = 5,
    ACTIONS(198), 1,
      anon_sym_LF,
    STATE(132), 1,
      sym_commodity,
    STATE(160), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(656), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5839] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(229), 1,
      sym__single_date,
    STATE(363), 1,
      sym_date,
    STATE(451), 1,
      sym__4d,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [5862] = 7,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(658), 1,
      anon_sym_LF,
    STATE(185), 1,
      aux_sym_whitespace_repeat1,
    STATE(223), 1,
      sym_balance_assertion,
    STATE(404), 1,
      sym_note,
    ACTIONS(660), 2,
      anon_sym_,
      anon_sym_TAB,
  [5885] = 7,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(662), 1,
      anon_sym_LF,
    STATE(211), 1,
      aux_sym_whitespace_repeat1,
    STATE(222), 1,
      sym_balance_assertion,
    STATE(398), 1,
      sym_note,
    ACTIONS(664), 2,
      anon_sym_,
      anon_sym_TAB,
  [5908] = 2,
    ACTIONS(668), 1,
      sym__dsep,
    ACTIONS(666), 7,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_TAB,
  [5921] = 5,
    ACTIONS(190), 1,
      anon_sym_LF,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(139), 1,
      sym_commodity,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5940] = 6,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(560), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(139), 2,
      sym_quantity,
      sym_negative_quantity,
  [5961] = 6,
    ACTIONS(670), 1,
      anon_sym_LF,
    ACTIONS(673), 1,
      aux_sym_block_comment_token1,
    STATE(162), 1,
      aux_sym_block_comment_repeat1,
    STATE(293), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(676), 2,
      anon_sym_end,
      anon_sym_endtest,
    ACTIONS(678), 2,
      anon_sym_,
      anon_sym_TAB,
  [5982] = 7,
    ACTIONS(485), 1,
      anon_sym_LF,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(190), 1,
      aux_sym_whitespace_repeat1,
    STATE(224), 1,
      sym_balance_assertion,
    STATE(400), 1,
      sym_note,
    ACTIONS(681), 2,
      anon_sym_,
      anon_sym_TAB,
  [6005] = 6,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(493), 1,
      sym__quantity,
    ACTIONS(495), 1,
      anon_sym_PLUS,
    STATE(161), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(683), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(132), 2,
      sym_quantity,
      sym_negative_quantity,
  [6026] = 7,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(592), 1,
      anon_sym_LF,
    STATE(187), 1,
      aux_sym_whitespace_repeat1,
    STATE(214), 1,
      sym_balance_assertion,
    STATE(466), 1,
      sym_note,
    ACTIONS(685), 2,
      anon_sym_,
      anon_sym_TAB,
  [6049] = 7,
    ACTIONS(415), 1,
      anon_sym_endtest,
    ACTIONS(646), 1,
      aux_sym_block_comment_token1,
    ACTIONS(687), 1,
      anon_sym_LF,
    ACTIONS(689), 1,
      anon_sym_end,
    STATE(162), 1,
      aux_sym_block_comment_repeat1,
    STATE(293), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(652), 2,
      anon_sym_,
      anon_sym_TAB,
  [6072] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(229), 1,
      sym__single_date,
    STATE(281), 1,
      sym_date,
    STATE(451), 1,
      sym__4d,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [6095] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(229), 1,
      sym__single_date,
    STATE(287), 1,
      sym_date,
    STATE(451), 1,
      sym__4d,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [6118] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(168), 1,
      aux_sym_whitespace_repeat1,
    STATE(229), 1,
      sym__single_date,
    STATE(288), 1,
      sym_date,
    STATE(451), 1,
      sym__4d,
    ACTIONS(691), 2,
      anon_sym_,
      anon_sym_TAB,
  [6141] = 7,
    ACTIONS(421), 1,
      anon_sym_endtest,
    ACTIONS(646), 1,
      aux_sym_block_comment_token1,
    ACTIONS(693), 1,
      anon_sym_LF,
    ACTIONS(695), 1,
      anon_sym_end,
    STATE(178), 1,
      aux_sym_block_comment_repeat1,
    STATE(293), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(652), 2,
      anon_sym_,
      anon_sym_TAB,
  [6164] = 7,
    ACTIONS(409), 1,
      anon_sym_endcomment,
    ACTIONS(697), 1,
      anon_sym_LF,
    ACTIONS(699), 1,
      aux_sym_block_comment_token1,
    ACTIONS(701), 1,
      anon_sym_end,
    STATE(180), 1,
      aux_sym_block_comment_repeat1,
    STATE(335), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(703), 2,
      anon_sym_,
      anon_sym_TAB,
  [6187] = 6,
    ACTIONS(705), 1,
      anon_sym_LF,
    ACTIONS(708), 1,
      aux_sym_block_comment_token1,
    STATE(172), 1,
      aux_sym_block_comment_repeat1,
    STATE(335), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(676), 2,
      anon_sym_end,
      anon_sym_endcomment,
    ACTIONS(711), 2,
      anon_sym_,
      anon_sym_TAB,
  [6208] = 6,
    ACTIONS(714), 1,
      anon_sym_DASH,
    ACTIONS(716), 1,
      sym__quantity,
    ACTIONS(718), 1,
      anon_sym_PLUS,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(560), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(64), 2,
      sym_quantity,
      sym_negative_quantity,
  [6229] = 7,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(538), 1,
      anon_sym_LF,
    STATE(192), 1,
      aux_sym_whitespace_repeat1,
    STATE(238), 1,
      sym_balance_assertion,
    STATE(432), 1,
      sym_note,
    ACTIONS(720), 2,
      anon_sym_,
      anon_sym_TAB,
  [6252] = 7,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(509), 1,
      anon_sym_LF,
    STATE(201), 1,
      aux_sym_whitespace_repeat1,
    STATE(215), 1,
      sym_balance_assertion,
    STATE(402), 1,
      sym_note,
    ACTIONS(722), 2,
      anon_sym_,
      anon_sym_TAB,
  [6275] = 7,
    ACTIONS(699), 1,
      aux_sym_block_comment_token1,
    ACTIONS(724), 1,
      anon_sym_LF,
    ACTIONS(726), 1,
      anon_sym_end,
    ACTIONS(728), 1,
      anon_sym_endcomment,
    STATE(181), 1,
      aux_sym_block_comment_repeat1,
    STATE(335), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(703), 2,
      anon_sym_,
      anon_sym_TAB,
  [6298] = 6,
    ACTIONS(714), 1,
      anon_sym_DASH,
    ACTIONS(716), 1,
      sym__quantity,
    ACTIONS(718), 1,
      anon_sym_PLUS,
    STATE(173), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(730), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(59), 2,
      sym_quantity,
      sym_negative_quantity,
  [6319] = 7,
    ACTIONS(439), 1,
      anon_sym_endtest,
    ACTIONS(646), 1,
      aux_sym_block_comment_token1,
    ACTIONS(687), 1,
      anon_sym_LF,
    ACTIONS(732), 1,
      anon_sym_end,
    STATE(162), 1,
      aux_sym_block_comment_repeat1,
    STATE(293), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(652), 2,
      anon_sym_,
      anon_sym_TAB,
  [6342] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(167), 1,
      aux_sym_whitespace_repeat1,
    STATE(229), 1,
      sym__single_date,
    STATE(286), 1,
      sym_date,
    STATE(451), 1,
      sym__4d,
    ACTIONS(734), 2,
      anon_sym_,
      anon_sym_TAB,
  [6365] = 7,
    ACTIONS(433), 1,
      anon_sym_endcomment,
    ACTIONS(699), 1,
      aux_sym_block_comment_token1,
    ACTIONS(736), 1,
      anon_sym_LF,
    ACTIONS(738), 1,
      anon_sym_end,
    STATE(172), 1,
      aux_sym_block_comment_repeat1,
    STATE(335), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(703), 2,
      anon_sym_,
      anon_sym_TAB,
  [6388] = 7,
    ACTIONS(445), 1,
      anon_sym_endcomment,
    ACTIONS(699), 1,
      aux_sym_block_comment_token1,
    ACTIONS(736), 1,
      anon_sym_LF,
    ACTIONS(740), 1,
      anon_sym_end,
    STATE(172), 1,
      aux_sym_block_comment_repeat1,
    STATE(335), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(703), 2,
      anon_sym_,
      anon_sym_TAB,
  [6411] = 7,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(534), 1,
      anon_sym_LF,
    STATE(203), 1,
      aux_sym_whitespace_repeat1,
    STATE(218), 1,
      sym_balance_assertion,
    STATE(465), 1,
      sym_note,
    ACTIONS(742), 2,
      anon_sym_,
      anon_sym_TAB,
  [6434] = 7,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    ACTIONS(578), 1,
      sym_account_name,
    ACTIONS(744), 1,
      anon_sym_,
    ACTIONS(746), 1,
      anon_sym_TAB,
    STATE(217), 1,
      aux_sym_whitespace_repeat1,
    STATE(436), 1,
      sym_account,
  [6456] = 2,
    ACTIONS(750), 1,
      anon_sym_AT,
    ACTIONS(748), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [6468] = 6,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(237), 1,
      sym_balance_assertion,
    STATE(409), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [6488] = 7,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    ACTIONS(578), 1,
      sym_account_name,
    ACTIONS(744), 1,
      anon_sym_,
    ACTIONS(746), 1,
      anon_sym_TAB,
    STATE(217), 1,
      aux_sym_whitespace_repeat1,
    STATE(277), 1,
      sym_account,
  [6510] = 6,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(222), 1,
      sym_balance_assertion,
    STATE(398), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [6530] = 7,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    ACTIONS(578), 1,
      sym_account_name,
    ACTIONS(744), 1,
      anon_sym_,
    ACTIONS(746), 1,
      anon_sym_TAB,
    STATE(217), 1,
      aux_sym_whitespace_repeat1,
    STATE(438), 1,
      sym_account,
  [6552] = 4,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(436), 1,
      sym_commodity,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [6568] = 6,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(238), 1,
      sym_balance_assertion,
    STATE(432), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [6588] = 7,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    ACTIONS(578), 1,
      sym_account_name,
    ACTIONS(752), 1,
      anon_sym_,
    ACTIONS(754), 1,
      anon_sym_TAB,
    STATE(208), 1,
      aux_sym_whitespace_repeat1,
    STATE(248), 1,
      sym_account,
  [6610] = 6,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(218), 1,
      sym_balance_assertion,
    STATE(465), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [6630] = 7,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    ACTIONS(578), 1,
      sym_account_name,
    ACTIONS(744), 1,
      anon_sym_,
    ACTIONS(746), 1,
      anon_sym_TAB,
    STATE(217), 1,
      aux_sym_whitespace_repeat1,
    STATE(261), 1,
      sym_account,
  [6652] = 6,
    ACTIONS(756), 1,
      aux_sym_note_token1,
    ACTIONS(758), 1,
      anon_sym_LBRACK,
    ACTIONS(760), 1,
      aux_sym_note_token2,
    STATE(230), 1,
      aux_sym_note_repeat1,
    STATE(330), 1,
      aux_sym_note_repeat2,
    ACTIONS(762), 2,
      anon_sym_,
      anon_sym_TAB,
  [6672] = 7,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    ACTIONS(578), 1,
      sym_account_name,
    ACTIONS(764), 1,
      anon_sym_,
    ACTIONS(766), 1,
      anon_sym_TAB,
    STATE(193), 1,
      aux_sym_whitespace_repeat1,
    STATE(268), 1,
      sym_account,
  [6694] = 1,
    ACTIONS(768), 7,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_TAB,
  [6704] = 4,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(309), 1,
      sym_commodity,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [6720] = 4,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(440), 1,
      sym_commodity,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [6736] = 7,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    ACTIONS(578), 1,
      sym_account_name,
    ACTIONS(744), 1,
      anon_sym_,
    ACTIONS(746), 1,
      anon_sym_TAB,
    STATE(217), 1,
      aux_sym_whitespace_repeat1,
    STATE(441), 1,
      sym_account,
  [6758] = 2,
    ACTIONS(772), 1,
      anon_sym_AT,
    ACTIONS(770), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [6770] = 6,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(224), 1,
      sym_balance_assertion,
    STATE(400), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [6790] = 3,
    STATE(202), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(774), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(185), 4,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_payee,
  [6804] = 6,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(216), 1,
      sym_balance_assertion,
    STATE(446), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [6824] = 6,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(214), 1,
      sym_balance_assertion,
    STATE(466), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [6844] = 7,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    ACTIONS(578), 1,
      sym_account_name,
    ACTIONS(777), 1,
      anon_sym_,
    ACTIONS(779), 1,
      anon_sym_TAB,
    STATE(186), 1,
      aux_sym_whitespace_repeat1,
    STATE(239), 1,
      sym_account,
  [6866] = 7,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    ACTIONS(578), 1,
      sym_account_name,
    ACTIONS(781), 1,
      anon_sym_,
    ACTIONS(783), 1,
      anon_sym_TAB,
    STATE(212), 1,
      aux_sym_whitespace_repeat1,
    STATE(274), 1,
      sym_account,
  [6888] = 6,
    ACTIONS(785), 1,
      aux_sym_note_token1,
    ACTIONS(787), 1,
      anon_sym_LBRACK,
    ACTIONS(789), 1,
      aux_sym_note_token2,
    STATE(194), 1,
      aux_sym_note_repeat1,
    STATE(313), 1,
      aux_sym_note_repeat2,
    ACTIONS(791), 2,
      anon_sym_,
      anon_sym_TAB,
  [6908] = 7,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    ACTIONS(578), 1,
      sym_account_name,
    ACTIONS(744), 1,
      anon_sym_,
    ACTIONS(746), 1,
      anon_sym_TAB,
    STATE(217), 1,
      aux_sym_whitespace_repeat1,
    STATE(274), 1,
      sym_account,
  [6930] = 4,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(117), 1,
      sym_commodity,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(497), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [6946] = 2,
    ACTIONS(795), 1,
      anon_sym_AT,
    ACTIONS(793), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [6958] = 6,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(223), 1,
      sym_balance_assertion,
    STATE(404), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [6978] = 7,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    ACTIONS(578), 1,
      sym_account_name,
    ACTIONS(744), 1,
      anon_sym_,
    ACTIONS(746), 1,
      anon_sym_TAB,
    STATE(217), 1,
      aux_sym_whitespace_repeat1,
    STATE(239), 1,
      sym_account,
  [7000] = 5,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(797), 1,
      anon_sym_LF,
    STATE(227), 1,
      aux_sym_whitespace_repeat1,
    STATE(419), 1,
      sym_note,
    ACTIONS(799), 2,
      anon_sym_,
      anon_sym_TAB,
  [7017] = 5,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(662), 1,
      anon_sym_LF,
    STATE(265), 1,
      aux_sym_whitespace_repeat1,
    STATE(398), 1,
      sym_note,
    ACTIONS(801), 2,
      anon_sym_,
      anon_sym_TAB,
  [7034] = 5,
    ACTIONS(485), 1,
      anon_sym_LF,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(262), 1,
      aux_sym_whitespace_repeat1,
    STATE(400), 1,
      sym_note,
    ACTIONS(803), 2,
      anon_sym_,
      anon_sym_TAB,
  [7051] = 5,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(592), 1,
      anon_sym_LF,
    STATE(244), 1,
      aux_sym_whitespace_repeat1,
    STATE(466), 1,
      sym_note,
    ACTIONS(805), 2,
      anon_sym_,
      anon_sym_TAB,
  [7068] = 4,
    ACTIONS(807), 1,
      anon_sym_,
    ACTIONS(810), 1,
      anon_sym_TAB,
    STATE(217), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(204), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [7083] = 5,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(610), 1,
      anon_sym_LF,
    STATE(247), 1,
      aux_sym_whitespace_repeat1,
    STATE(446), 1,
      sym_note,
    ACTIONS(813), 2,
      anon_sym_,
      anon_sym_TAB,
  [7100] = 5,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(509), 1,
      anon_sym_LF,
    STATE(240), 1,
      aux_sym_whitespace_repeat1,
    STATE(402), 1,
      sym_note,
    ACTIONS(815), 2,
      anon_sym_,
      anon_sym_TAB,
  [7117] = 2,
    ACTIONS(817), 1,
      anon_sym_LF,
    ACTIONS(676), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endcomment,
      anon_sym_,
      anon_sym_TAB,
  [7128] = 5,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(797), 1,
      anon_sym_LF,
    STATE(338), 1,
      aux_sym_whitespace_repeat1,
    STATE(419), 1,
      sym_note,
    ACTIONS(819), 2,
      anon_sym_,
      anon_sym_TAB,
  [7145] = 5,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(658), 1,
      anon_sym_LF,
    STATE(276), 1,
      aux_sym_whitespace_repeat1,
    STATE(404), 1,
      sym_note,
    ACTIONS(821), 2,
      anon_sym_,
      anon_sym_TAB,
  [7162] = 5,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(823), 1,
      anon_sym_LF,
    STATE(249), 1,
      aux_sym_whitespace_repeat1,
    STATE(409), 1,
      sym_note,
    ACTIONS(825), 2,
      anon_sym_,
      anon_sym_TAB,
  [7179] = 5,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(538), 1,
      anon_sym_LF,
    STATE(256), 1,
      aux_sym_whitespace_repeat1,
    STATE(432), 1,
      sym_note,
    ACTIONS(827), 2,
      anon_sym_,
      anon_sym_TAB,
  [7196] = 5,
    ACTIONS(606), 1,
      anon_sym_assert,
    ACTIONS(608), 1,
      anon_sym_check,
    ACTIONS(829), 1,
      sym_comment,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(560), 2,
      anon_sym_,
      anon_sym_TAB,
  [7213] = 2,
    ACTIONS(817), 1,
      anon_sym_LF,
    ACTIONS(676), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endtest,
      anon_sym_,
      anon_sym_TAB,
  [7224] = 5,
    ACTIONS(638), 1,
      anon_sym_LPAREN,
    ACTIONS(831), 1,
      sym_payee,
    STATE(202), 1,
      aux_sym_whitespace_repeat1,
    STATE(234), 1,
      sym_code,
    ACTIONS(642), 2,
      anon_sym_,
      anon_sym_TAB,
  [7241] = 2,
    ACTIONS(833), 1,
      anon_sym_LF,
    ACTIONS(835), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endtest,
      anon_sym_,
      anon_sym_TAB,
  [7252] = 1,
    ACTIONS(837), 6,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [7261] = 4,
    ACTIONS(839), 1,
      aux_sym_note_token1,
    ACTIONS(844), 1,
      aux_sym_note_token2,
    STATE(230), 1,
      aux_sym_note_repeat1,
    ACTIONS(842), 3,
      anon_sym_LBRACK,
      anon_sym_,
      anon_sym_TAB,
  [7276] = 3,
    ACTIONS(848), 1,
      anon_sym_EQ,
    STATE(319), 1,
      sym_effective_date,
    ACTIONS(846), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [7289] = 2,
    ACTIONS(833), 1,
      anon_sym_LF,
    ACTIONS(835), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endcomment,
      anon_sym_,
      anon_sym_TAB,
  [7300] = 6,
    ACTIONS(791), 1,
      anon_sym_LF,
    ACTIONS(850), 1,
      aux_sym_note_token1,
    ACTIONS(852), 1,
      anon_sym_LBRACK,
    ACTIONS(854), 1,
      aux_sym_note_token2,
    STATE(235), 1,
      aux_sym_note_repeat1,
    STATE(378), 1,
      aux_sym_note_repeat2,
  [7319] = 5,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(856), 1,
      anon_sym_LF,
    STATE(292), 1,
      aux_sym_whitespace_repeat1,
    STATE(406), 1,
      sym_note,
    ACTIONS(858), 2,
      anon_sym_,
      anon_sym_TAB,
  [7336] = 6,
    ACTIONS(762), 1,
      anon_sym_LF,
    ACTIONS(860), 1,
      aux_sym_note_token1,
    ACTIONS(862), 1,
      anon_sym_LBRACK,
    ACTIONS(864), 1,
      aux_sym_note_token2,
    STATE(255), 1,
      aux_sym_note_repeat1,
    STATE(351), 1,
      aux_sym_note_repeat2,
  [7355] = 5,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(866), 1,
      anon_sym_LF,
    STATE(152), 1,
      aux_sym_whitespace_repeat1,
    STATE(449), 1,
      sym_note,
    ACTIONS(868), 2,
      anon_sym_,
      anon_sym_TAB,
  [7372] = 5,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(870), 1,
      anon_sym_LF,
    STATE(269), 1,
      aux_sym_whitespace_repeat1,
    STATE(413), 1,
      sym_note,
    ACTIONS(872), 2,
      anon_sym_,
      anon_sym_TAB,
  [7389] = 5,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(534), 1,
      anon_sym_LF,
    STATE(251), 1,
      aux_sym_whitespace_repeat1,
    STATE(465), 1,
      sym_note,
    ACTIONS(874), 2,
      anon_sym_,
      anon_sym_TAB,
  [7406] = 2,
    ACTIONS(876), 1,
      anon_sym_LF,
    ACTIONS(878), 4,
      anon_sym_2,
      anon_sym_TAB2,
      anon_sym_TAB3,
      anon_sym_TAB_TAB,
  [7416] = 4,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(400), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [7430] = 3,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(27), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7442] = 3,
    STATE(123), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(880), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    ACTIONS(882), 2,
      anon_sym_,
      anon_sym_TAB,
  [7454] = 1,
    ACTIONS(884), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_TAB,
  [7462] = 4,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(398), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [7476] = 3,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(30), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7488] = 3,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(20), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7500] = 4,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(466), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [7514] = 2,
    ACTIONS(886), 1,
      anon_sym_LF,
    ACTIONS(888), 4,
      anon_sym_2,
      anon_sym_TAB2,
      anon_sym_TAB3,
      anon_sym_TAB_TAB,
  [7524] = 4,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(413), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [7538] = 2,
    ACTIONS(892), 1,
      anon_sym_,
    ACTIONS(890), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
      anon_sym_TAB,
  [7548] = 4,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(446), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [7562] = 3,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(17), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7574] = 3,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(19), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7586] = 2,
    ACTIONS(894), 1,
      anon_sym_LF,
    ACTIONS(896), 4,
      anon_sym_2,
      anon_sym_TAB2,
      anon_sym_TAB3,
      anon_sym_TAB_TAB,
  [7596] = 4,
    ACTIONS(844), 1,
      aux_sym_note_token2,
    ACTIONS(898), 1,
      aux_sym_note_token1,
    STATE(255), 1,
      aux_sym_note_repeat1,
    ACTIONS(842), 2,
      anon_sym_LF,
      anon_sym_LBRACK,
  [7610] = 4,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(465), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [7624] = 3,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(18), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7636] = 3,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(560), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(901), 2,
      aux_sym__interval_date_spec_token3,
      aux_sym__interval_date_spec_token4,
  [7648] = 3,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(21), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7660] = 1,
    ACTIONS(903), 5,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [7668] = 2,
    ACTIONS(509), 1,
      anon_sym_LF,
    ACTIONS(905), 4,
      anon_sym_2,
      anon_sym_TAB2,
      anon_sym_TAB3,
      anon_sym_TAB_TAB,
  [7678] = 4,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(432), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [7692] = 1,
    ACTIONS(907), 5,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_TAB2,
      anon_sym_TAB3,
      anon_sym_TAB_TAB,
  [7700] = 4,
    ACTIONS(909), 1,
      aux_sym_option_value_token1,
    STATE(329), 1,
      aux_sym_whitespace_repeat1,
    STATE(438), 1,
      sym_filename,
    ACTIONS(911), 2,
      anon_sym_,
      anon_sym_TAB,
  [7714] = 4,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(404), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [7728] = 3,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(24), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7740] = 3,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(25), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7752] = 2,
    ACTIONS(513), 1,
      anon_sym_LF,
    ACTIONS(913), 4,
      anon_sym_2,
      anon_sym_TAB2,
      anon_sym_TAB3,
      anon_sym_TAB_TAB,
  [7762] = 4,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(415), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [7776] = 4,
    ACTIONS(915), 1,
      anon_sym_LF,
    ACTIONS(917), 1,
      anon_sym_EQ,
    STATE(271), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(919), 2,
      anon_sym_,
      anon_sym_TAB,
  [7790] = 4,
    ACTIONS(921), 1,
      aux_sym_option_value_token1,
    STATE(329), 1,
      aux_sym_whitespace_repeat1,
    STATE(427), 1,
      sym_option_value,
    ACTIONS(911), 2,
      anon_sym_,
      anon_sym_TAB,
  [7804] = 1,
    ACTIONS(923), 5,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [7812] = 1,
    ACTIONS(925), 5,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_TAB2,
      anon_sym_TAB3,
      anon_sym_TAB_TAB,
  [7820] = 2,
    ACTIONS(927), 1,
      anon_sym_LF,
    ACTIONS(929), 4,
      anon_sym_2,
      anon_sym_TAB2,
      anon_sym_TAB3,
      anon_sym_TAB_TAB,
  [7830] = 3,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(230), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(29), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7842] = 4,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(409), 1,
      sym_note,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [7856] = 2,
    ACTIONS(931), 1,
      anon_sym_LF,
    ACTIONS(933), 4,
      anon_sym_2,
      anon_sym_TAB2,
      anon_sym_TAB3,
      anon_sym_TAB_TAB,
  [7866] = 2,
    ACTIONS(937), 1,
      sym__dsep,
    ACTIONS(935), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [7876] = 3,
    STATE(258), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(939), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    ACTIONS(941), 2,
      anon_sym_,
      anon_sym_TAB,
  [7888] = 3,
    ACTIONS(943), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [7899] = 3,
    ACTIONS(945), 1,
      sym_time,
    STATE(308), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(947), 2,
      anon_sym_,
      anon_sym_TAB,
  [7910] = 1,
    ACTIONS(892), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [7917] = 3,
    ACTIONS(949), 1,
      aux_sym_account_subdirective_token1,
    STATE(305), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(951), 2,
      anon_sym_,
      anon_sym_TAB,
  [7928] = 3,
    ACTIONS(953), 1,
      anon_sym_LF,
    STATE(312), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(955), 2,
      anon_sym_,
      anon_sym_TAB,
  [7939] = 3,
    ACTIONS(957), 1,
      aux_sym_note_token2,
    STATE(296), 1,
      aux_sym_note_repeat2,
    ACTIONS(959), 2,
      anon_sym_,
      anon_sym_TAB,
  [7950] = 3,
    ACTIONS(961), 1,
      sym_time,
    STATE(343), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(963), 2,
      anon_sym_,
      anon_sym_TAB,
  [7961] = 3,
    ACTIONS(965), 1,
      sym_time,
    STATE(307), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(967), 2,
      anon_sym_,
      anon_sym_TAB,
  [7972] = 3,
    ACTIONS(969), 1,
      sym_time,
    STATE(331), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(971), 2,
      anon_sym_,
      anon_sym_TAB,
  [7983] = 1,
    ACTIONS(935), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [7990] = 3,
    ACTIONS(973), 1,
      sym_payee,
    STATE(202), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(642), 2,
      anon_sym_,
      anon_sym_TAB,
  [8001] = 3,
    ACTIONS(973), 1,
      sym_payee,
    STATE(323), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(975), 2,
      anon_sym_,
      anon_sym_TAB,
  [8012] = 3,
    ACTIONS(977), 1,
      sym_payee,
    STATE(202), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(642), 2,
      anon_sym_,
      anon_sym_TAB,
  [8023] = 3,
    ACTIONS(979), 1,
      aux_sym_block_comment_token1,
    STATE(325), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(981), 2,
      anon_sym_,
      anon_sym_TAB,
  [8034] = 3,
    ACTIONS(983), 1,
      anon_sym_LF,
    STATE(295), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(985), 2,
      anon_sym_,
      anon_sym_TAB,
  [8045] = 3,
    ACTIONS(987), 1,
      aux_sym_block_comment_token1,
    STATE(325), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(981), 2,
      anon_sym_,
      anon_sym_TAB,
  [8056] = 3,
    ACTIONS(989), 1,
      aux_sym_note_token2,
    STATE(316), 1,
      aux_sym_note_repeat2,
    ACTIONS(991), 2,
      anon_sym_,
      anon_sym_TAB,
  [8067] = 1,
    ACTIONS(993), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [8074] = 3,
    ACTIONS(995), 1,
      sym_payee,
    STATE(321), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(997), 2,
      anon_sym_,
      anon_sym_TAB,
  [8085] = 3,
    ACTIONS(999), 1,
      anon_sym_EQ,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [8096] = 3,
    ACTIONS(1001), 1,
      aux_sym_note_token2,
    STATE(301), 1,
      aux_sym_note_repeat2,
    ACTIONS(991), 2,
      anon_sym_,
      anon_sym_TAB,
  [8107] = 3,
    ACTIONS(989), 1,
      aux_sym_note_token2,
    STATE(316), 1,
      aux_sym_note_repeat2,
    ACTIONS(1003), 2,
      anon_sym_,
      anon_sym_TAB,
  [8118] = 1,
    ACTIONS(1005), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [8125] = 3,
    ACTIONS(204), 1,
      sym_query,
    STATE(303), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1007), 2,
      anon_sym_,
      anon_sym_TAB,
  [8136] = 3,
    ACTIONS(1010), 1,
      anon_sym_RBRACE,
    STATE(339), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1012), 2,
      anon_sym_,
      anon_sym_TAB,
  [8147] = 3,
    ACTIONS(185), 1,
      aux_sym_account_subdirective_token1,
    STATE(305), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1014), 2,
      anon_sym_,
      anon_sym_TAB,
  [8158] = 3,
    ACTIONS(1010), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(341), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1017), 2,
      anon_sym_,
      anon_sym_TAB,
  [8169] = 3,
    ACTIONS(1019), 1,
      sym_time,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [8180] = 3,
    ACTIONS(1021), 1,
      sym_time,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [8191] = 3,
    ACTIONS(1023), 1,
      anon_sym_EQ,
    STATE(299), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1025), 2,
      anon_sym_,
      anon_sym_TAB,
  [8202] = 3,
    ACTIONS(1027), 1,
      aux_sym_account_subdirective_token1,
    STATE(305), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(951), 2,
      anon_sym_,
      anon_sym_TAB,
  [8213] = 3,
    ACTIONS(1029), 1,
      aux_sym_account_subdirective_token1,
    STATE(305), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(951), 2,
      anon_sym_,
      anon_sym_TAB,
  [8224] = 3,
    ACTIONS(1031), 1,
      aux_sym_block_comment_token1,
    STATE(325), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(981), 2,
      anon_sym_,
      anon_sym_TAB,
  [8235] = 3,
    ACTIONS(989), 1,
      aux_sym_note_token2,
    STATE(316), 1,
      aux_sym_note_repeat2,
    ACTIONS(762), 2,
      anon_sym_,
      anon_sym_TAB,
  [8246] = 4,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(243), 1,
      sym__single_date,
    STATE(451), 1,
      sym__4d,
  [8259] = 3,
    ACTIONS(1033), 1,
      aux_sym_account_subdirective_token1,
    STATE(305), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(951), 2,
      anon_sym_,
      anon_sym_TAB,
  [8270] = 3,
    ACTIONS(1035), 1,
      aux_sym_note_token2,
    STATE(316), 1,
      aux_sym_note_repeat2,
    ACTIONS(1038), 2,
      anon_sym_,
      anon_sym_TAB,
  [8281] = 3,
    ACTIONS(943), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [8292] = 3,
    ACTIONS(1040), 1,
      aux_sym_account_subdirective_token1,
    STATE(305), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(951), 2,
      anon_sym_,
      anon_sym_TAB,
  [8303] = 1,
    ACTIONS(1042), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [8310] = 3,
    ACTIONS(1044), 1,
      aux_sym_word_directive_token1,
    STATE(332), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1046), 2,
      anon_sym_,
      anon_sym_TAB,
  [8321] = 3,
    ACTIONS(1048), 1,
      sym_payee,
    STATE(202), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(642), 2,
      anon_sym_,
      anon_sym_TAB,
  [8332] = 3,
    ACTIONS(1050), 1,
      sym_query,
    STATE(303), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1052), 2,
      anon_sym_,
      anon_sym_TAB,
  [8343] = 3,
    ACTIONS(1054), 1,
      sym_payee,
    STATE(202), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(642), 2,
      anon_sym_,
      anon_sym_TAB,
  [8354] = 3,
    ACTIONS(1054), 1,
      sym_payee,
    STATE(344), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1056), 2,
      anon_sym_,
      anon_sym_TAB,
  [8365] = 3,
    ACTIONS(204), 1,
      aux_sym_block_comment_token1,
    STATE(325), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1058), 2,
      anon_sym_,
      anon_sym_TAB,
  [8376] = 3,
    ACTIONS(1048), 1,
      sym_payee,
    STATE(290), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1061), 2,
      anon_sym_,
      anon_sym_TAB,
  [8387] = 3,
    ACTIONS(1063), 1,
      aux_sym_word_directive_token2,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [8398] = 3,
    ACTIONS(1065), 1,
      aux_sym_tag_directive_token1,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(560), 2,
      anon_sym_,
      anon_sym_TAB,
  [8409] = 3,
    ACTIONS(204), 1,
      aux_sym_option_value_token1,
    STATE(329), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1067), 2,
      anon_sym_,
      anon_sym_TAB,
  [8420] = 3,
    ACTIONS(989), 1,
      aux_sym_note_token2,
    STATE(316), 1,
      aux_sym_note_repeat2,
    ACTIONS(1070), 2,
      anon_sym_,
      anon_sym_TAB,
  [8431] = 3,
    ACTIONS(965), 1,
      sym_time,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [8442] = 3,
    ACTIONS(204), 1,
      aux_sym_word_directive_token1,
    STATE(332), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1072), 2,
      anon_sym_,
      anon_sym_TAB,
  [8453] = 3,
    ACTIONS(1075), 1,
      aux_sym_option_value_token1,
    STATE(329), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(911), 2,
      anon_sym_,
      anon_sym_TAB,
  [8464] = 1,
    ACTIONS(1077), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [8471] = 3,
    ACTIONS(1079), 1,
      aux_sym_block_comment_token1,
    STATE(325), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(981), 2,
      anon_sym_,
      anon_sym_TAB,
  [8482] = 3,
    ACTIONS(1081), 1,
      aux_sym_word_directive_token2,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [8493] = 1,
    ACTIONS(1083), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [8500] = 3,
    ACTIONS(831), 1,
      sym_payee,
    STATE(202), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(642), 2,
      anon_sym_,
      anon_sym_TAB,
  [8511] = 3,
    ACTIONS(1085), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [8522] = 3,
    ACTIONS(1085), 1,
      anon_sym_RBRACE,
    STATE(317), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1087), 2,
      anon_sym_,
      anon_sym_TAB,
  [8533] = 3,
    ACTIONS(1085), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [8544] = 3,
    ACTIONS(1085), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(280), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1089), 2,
      anon_sym_,
      anon_sym_TAB,
  [8555] = 3,
    ACTIONS(945), 1,
      sym_time,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [8566] = 3,
    ACTIONS(1091), 1,
      sym_payee,
    STATE(202), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(642), 2,
      anon_sym_,
      anon_sym_TAB,
  [8577] = 2,
    STATE(310), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1093), 2,
      anon_sym_,
      anon_sym_TAB,
  [8585] = 2,
    STATE(197), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1095), 2,
      anon_sym_,
      anon_sym_TAB,
  [8593] = 2,
    STATE(199), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1097), 2,
      anon_sym_,
      anon_sym_TAB,
  [8601] = 2,
    STATE(189), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1099), 2,
      anon_sym_,
      anon_sym_TAB,
  [8609] = 3,
    ACTIONS(959), 1,
      anon_sym_LF,
    ACTIONS(1101), 1,
      aux_sym_note_token2,
    STATE(375), 1,
      aux_sym_note_repeat2,
  [8619] = 3,
    ACTIONS(1038), 1,
      anon_sym_LF,
    ACTIONS(1103), 1,
      aux_sym_note_token2,
    STATE(350), 1,
      aux_sym_note_repeat2,
  [8629] = 3,
    ACTIONS(1070), 1,
      anon_sym_LF,
    ACTIONS(1106), 1,
      aux_sym_note_token2,
    STATE(350), 1,
      aux_sym_note_repeat2,
  [8639] = 2,
    STATE(328), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1108), 2,
      anon_sym_,
      anon_sym_TAB,
  [8647] = 2,
    STATE(264), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1110), 2,
      anon_sym_,
      anon_sym_TAB,
  [8655] = 2,
    STATE(320), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1112), 2,
      anon_sym_,
      anon_sym_TAB,
  [8663] = 2,
    STATE(333), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1114), 2,
      anon_sym_,
      anon_sym_TAB,
  [8671] = 2,
    STATE(336), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1116), 2,
      anon_sym_,
      anon_sym_TAB,
  [8679] = 3,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(1118), 1,
      anon_sym_LF,
    STATE(396), 1,
      sym_note,
  [8689] = 2,
    STATE(311), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1120), 2,
      anon_sym_,
      anon_sym_TAB,
  [8697] = 2,
    STATE(322), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1122), 2,
      anon_sym_,
      anon_sym_TAB,
  [8705] = 2,
    STATE(127), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1124), 2,
      anon_sym_,
      anon_sym_TAB,
  [8713] = 3,
    ACTIONS(1003), 1,
      anon_sym_LF,
    ACTIONS(1106), 1,
      aux_sym_note_token2,
    STATE(350), 1,
      aux_sym_note_repeat2,
  [8723] = 2,
    STATE(188), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1126), 2,
      anon_sym_,
      anon_sym_TAB,
  [8731] = 2,
    STATE(209), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1128), 2,
      anon_sym_,
      anon_sym_TAB,
  [8739] = 2,
    STATE(198), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1130), 2,
      anon_sym_,
      anon_sym_TAB,
  [8747] = 2,
    STATE(126), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1132), 2,
      anon_sym_,
      anon_sym_TAB,
  [8755] = 2,
    STATE(129), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1134), 2,
      anon_sym_,
      anon_sym_TAB,
  [8763] = 3,
    ACTIONS(1136), 1,
      anon_sym_LF,
    ACTIONS(1138), 1,
      anon_sym_SEMI,
    STATE(245), 1,
      sym_note,
  [8773] = 3,
    ACTIONS(991), 1,
      anon_sym_LF,
    ACTIONS(1140), 1,
      aux_sym_note_token2,
    STATE(361), 1,
      aux_sym_note_repeat2,
  [8783] = 2,
    STATE(130), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1142), 2,
      anon_sym_,
      anon_sym_TAB,
  [8791] = 2,
    STATE(183), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1144), 2,
      anon_sym_,
      anon_sym_TAB,
  [8799] = 2,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1146), 2,
      anon_sym_,
      anon_sym_TAB,
  [8807] = 2,
    STATE(283), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1148), 2,
      anon_sym_,
      anon_sym_TAB,
  [8815] = 2,
    STATE(318), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1150), 2,
      anon_sym_,
      anon_sym_TAB,
  [8823] = 2,
    STATE(327), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1152), 2,
      anon_sym_,
      anon_sym_TAB,
  [8831] = 3,
    ACTIONS(991), 1,
      anon_sym_LF,
    ACTIONS(1106), 1,
      aux_sym_note_token2,
    STATE(350), 1,
      aux_sym_note_repeat2,
  [8841] = 2,
    STATE(315), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1154), 2,
      anon_sym_,
      anon_sym_TAB,
  [8849] = 2,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1156), 2,
      anon_sym_,
      anon_sym_TAB,
  [8857] = 3,
    ACTIONS(762), 1,
      anon_sym_LF,
    ACTIONS(1106), 1,
      aux_sym_note_token2,
    STATE(350), 1,
      aux_sym_note_repeat2,
  [8867] = 2,
    STATE(151), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1158), 2,
      anon_sym_,
      anon_sym_TAB,
  [8875] = 3,
    ACTIONS(1138), 1,
      anon_sym_SEMI,
    ACTIONS(1160), 1,
      anon_sym_LF,
    STATE(252), 1,
      sym_note,
  [8885] = 3,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(797), 1,
      anon_sym_LF,
    STATE(419), 1,
      sym_note,
  [8895] = 2,
    STATE(156), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1162), 2,
      anon_sym_,
      anon_sym_TAB,
  [8903] = 3,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(856), 1,
      anon_sym_LF,
    STATE(406), 1,
      sym_note,
  [8913] = 1,
    ACTIONS(880), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [8918] = 1,
    ACTIONS(1164), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [8923] = 1,
    ACTIONS(1166), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [8928] = 1,
    ACTIONS(939), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [8933] = 2,
    ACTIONS(848), 1,
      anon_sym_EQ,
    STATE(414), 1,
      sym_effective_date,
  [8940] = 2,
    ACTIONS(848), 1,
      anon_sym_EQ,
    STATE(421), 1,
      sym_effective_date,
  [8947] = 2,
    ACTIONS(848), 1,
      anon_sym_EQ,
    STATE(461), 1,
      sym_effective_date,
  [8954] = 2,
    ACTIONS(848), 1,
      anon_sym_EQ,
    STATE(460), 1,
      sym_effective_date,
  [8961] = 2,
    ACTIONS(1168), 1,
      aux_sym_option_value_token1,
    STATE(427), 1,
      sym_option_value,
  [8968] = 1,
    ACTIONS(1170), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [8973] = 1,
    ACTIONS(1172), 1,
      anon_sym_RBRACK,
  [8977] = 1,
    ACTIONS(1174), 1,
      anon_sym_LF,
  [8981] = 1,
    ACTIONS(1176), 1,
      anon_sym_LF,
  [8985] = 1,
    ACTIONS(1178), 1,
      anon_sym_LF,
  [8989] = 1,
    ACTIONS(658), 1,
      anon_sym_LF,
  [8993] = 1,
    ACTIONS(509), 1,
      anon_sym_LF,
  [8997] = 1,
    ACTIONS(538), 1,
      anon_sym_LF,
  [9001] = 1,
    ACTIONS(1180), 1,
      anon_sym_LF,
  [9005] = 1,
    ACTIONS(485), 1,
      anon_sym_LF,
  [9009] = 1,
    ACTIONS(931), 1,
      anon_sym_LF,
  [9013] = 1,
    ACTIONS(823), 1,
      anon_sym_LF,
  [9017] = 1,
    ACTIONS(1182), 1,
      anon_sym_LF,
  [9021] = 1,
    ACTIONS(1184), 1,
      anon_sym_LF,
  [9025] = 1,
    ACTIONS(1186), 1,
      anon_sym_LF,
  [9029] = 1,
    ACTIONS(876), 1,
      anon_sym_LF,
  [9033] = 1,
    ACTIONS(870), 1,
      anon_sym_LF,
  [9037] = 1,
    ACTIONS(1188), 1,
      anon_sym_LF,
  [9041] = 1,
    ACTIONS(1190), 1,
      anon_sym_LF,
  [9045] = 1,
    ACTIONS(1192), 1,
      anon_sym_LF,
  [9049] = 1,
    ACTIONS(1194), 1,
      anon_sym_LF,
  [9053] = 1,
    ACTIONS(1196), 1,
      anon_sym_RBRACK,
  [9057] = 1,
    ACTIONS(1198), 1,
      anon_sym_LF,
  [9061] = 1,
    ACTIONS(1200), 1,
      anon_sym_LF,
  [9065] = 1,
    ACTIONS(1202), 1,
      anon_sym_LF,
  [9069] = 1,
    ACTIONS(1204), 1,
      anon_sym_LF,
  [9073] = 1,
    ACTIONS(1206), 1,
      anon_sym_LF,
  [9077] = 1,
    ACTIONS(1208), 1,
      anon_sym_RPAREN,
  [9081] = 1,
    ACTIONS(1210), 1,
      anon_sym_RBRACK,
  [9085] = 1,
    ACTIONS(1212), 1,
      anon_sym_LF,
  [9089] = 1,
    ACTIONS(1214), 1,
      sym__2d,
  [9093] = 1,
    ACTIONS(1216), 1,
      anon_sym_LF,
  [9097] = 1,
    ACTIONS(1218), 1,
      aux_sym_option_value_token1,
  [9101] = 1,
    ACTIONS(1172), 1,
      anon_sym_RPAREN,
  [9105] = 1,
    ACTIONS(1220), 1,
      anon_sym_LF,
  [9109] = 1,
    ACTIONS(1222), 1,
      anon_sym_LF,
  [9113] = 1,
    ACTIONS(1224), 1,
      anon_sym_LF,
  [9117] = 1,
    ACTIONS(1226), 1,
      sym__quantity,
  [9121] = 1,
    ACTIONS(1228), 1,
      aux_sym_code_token1,
  [9125] = 1,
    ACTIONS(534), 1,
      anon_sym_LF,
  [9129] = 1,
    ACTIONS(1230), 1,
      anon_sym_LF,
  [9133] = 1,
    ACTIONS(1232), 1,
      sym__quantity,
  [9137] = 1,
    ACTIONS(1234), 1,
      sym__quantity,
  [9141] = 1,
    ACTIONS(1236), 1,
      anon_sym_LF,
  [9145] = 1,
    ACTIONS(1238), 1,
      anon_sym_EQ,
  [9149] = 1,
    ACTIONS(1240), 1,
      anon_sym_LF,
  [9153] = 1,
    ACTIONS(1242), 1,
      anon_sym_LF,
  [9157] = 1,
    ACTIONS(1244), 1,
      anon_sym_LF,
  [9161] = 1,
    ACTIONS(1246), 1,
      anon_sym_LF,
  [9165] = 1,
    ACTIONS(1248), 1,
      sym_account_name,
  [9169] = 1,
    ACTIONS(1250), 1,
      sym_account_name,
  [9173] = 1,
    ACTIONS(1252), 1,
      anon_sym_LF,
  [9177] = 1,
    ACTIONS(1254), 1,
      anon_sym_LF,
  [9181] = 1,
    ACTIONS(592), 1,
      anon_sym_LF,
  [9185] = 1,
    ACTIONS(1256), 1,
      anon_sym_LF,
  [9189] = 1,
    ACTIONS(1258), 1,
      sym__2d,
  [9193] = 1,
    ACTIONS(1260), 1,
      anon_sym_LF,
  [9197] = 1,
    ACTIONS(1262), 1,
      sym__2d,
  [9201] = 1,
    ACTIONS(937), 1,
      sym__dsep,
  [9205] = 1,
    ACTIONS(1264), 1,
      anon_sym_LF,
  [9209] = 1,
    ACTIONS(1266), 1,
      anon_sym_LF,
  [9213] = 1,
    ACTIONS(1268), 1,
      ts_builtin_sym_end,
  [9217] = 1,
    ACTIONS(1270), 1,
      anon_sym_LF,
  [9221] = 1,
    ACTIONS(1272), 1,
      sym__quantity,
  [9225] = 1,
    ACTIONS(1274), 1,
      sym__quantity,
  [9229] = 1,
    ACTIONS(1276), 1,
      sym__dsep,
  [9233] = 1,
    ACTIONS(1278), 1,
      anon_sym_LF,
  [9237] = 1,
    ACTIONS(1280), 1,
      anon_sym_RBRACK,
  [9241] = 1,
    ACTIONS(1282), 1,
      anon_sym_RBRACK,
  [9245] = 1,
    ACTIONS(1284), 1,
      sym__quantity,
  [9249] = 1,
    ACTIONS(668), 1,
      sym__dsep,
  [9253] = 1,
    ACTIONS(1286), 1,
      aux_sym_option_token1,
  [9257] = 1,
    ACTIONS(610), 1,
      anon_sym_LF,
  [9261] = 1,
    ACTIONS(662), 1,
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
  [SMALL_STATE(11)] = 620,
  [SMALL_STATE(12)] = 670,
  [SMALL_STATE(13)] = 722,
  [SMALL_STATE(14)] = 767,
  [SMALL_STATE(15)] = 814,
  [SMALL_STATE(16)] = 861,
  [SMALL_STATE(17)] = 908,
  [SMALL_STATE(18)] = 954,
  [SMALL_STATE(19)] = 1000,
  [SMALL_STATE(20)] = 1046,
  [SMALL_STATE(21)] = 1092,
  [SMALL_STATE(22)] = 1138,
  [SMALL_STATE(23)] = 1178,
  [SMALL_STATE(24)] = 1218,
  [SMALL_STATE(25)] = 1264,
  [SMALL_STATE(26)] = 1310,
  [SMALL_STATE(27)] = 1356,
  [SMALL_STATE(28)] = 1402,
  [SMALL_STATE(29)] = 1442,
  [SMALL_STATE(30)] = 1488,
  [SMALL_STATE(31)] = 1534,
  [SMALL_STATE(32)] = 1571,
  [SMALL_STATE(33)] = 1608,
  [SMALL_STATE(34)] = 1645,
  [SMALL_STATE(35)] = 1682,
  [SMALL_STATE(36)] = 1719,
  [SMALL_STATE(37)] = 1756,
  [SMALL_STATE(38)] = 1793,
  [SMALL_STATE(39)] = 1830,
  [SMALL_STATE(40)] = 1867,
  [SMALL_STATE(41)] = 1904,
  [SMALL_STATE(42)] = 1941,
  [SMALL_STATE(43)] = 1978,
  [SMALL_STATE(44)] = 2015,
  [SMALL_STATE(45)] = 2052,
  [SMALL_STATE(46)] = 2089,
  [SMALL_STATE(47)] = 2126,
  [SMALL_STATE(48)] = 2163,
  [SMALL_STATE(49)] = 2200,
  [SMALL_STATE(50)] = 2237,
  [SMALL_STATE(51)] = 2274,
  [SMALL_STATE(52)] = 2311,
  [SMALL_STATE(53)] = 2348,
  [SMALL_STATE(54)] = 2385,
  [SMALL_STATE(55)] = 2422,
  [SMALL_STATE(56)] = 2459,
  [SMALL_STATE(57)] = 2496,
  [SMALL_STATE(58)] = 2533,
  [SMALL_STATE(59)] = 2570,
  [SMALL_STATE(60)] = 2607,
  [SMALL_STATE(61)] = 2660,
  [SMALL_STATE(62)] = 2697,
  [SMALL_STATE(63)] = 2734,
  [SMALL_STATE(64)] = 2771,
  [SMALL_STATE(65)] = 2808,
  [SMALL_STATE(66)] = 2845,
  [SMALL_STATE(67)] = 2883,
  [SMALL_STATE(68)] = 2921,
  [SMALL_STATE(69)] = 2959,
  [SMALL_STATE(70)] = 2997,
  [SMALL_STATE(71)] = 3035,
  [SMALL_STATE(72)] = 3073,
  [SMALL_STATE(73)] = 3111,
  [SMALL_STATE(74)] = 3149,
  [SMALL_STATE(75)] = 3184,
  [SMALL_STATE(76)] = 3219,
  [SMALL_STATE(77)] = 3254,
  [SMALL_STATE(78)] = 3289,
  [SMALL_STATE(79)] = 3324,
  [SMALL_STATE(80)] = 3359,
  [SMALL_STATE(81)] = 3394,
  [SMALL_STATE(82)] = 3429,
  [SMALL_STATE(83)] = 3464,
  [SMALL_STATE(84)] = 3499,
  [SMALL_STATE(85)] = 3534,
  [SMALL_STATE(86)] = 3569,
  [SMALL_STATE(87)] = 3604,
  [SMALL_STATE(88)] = 3639,
  [SMALL_STATE(89)] = 3674,
  [SMALL_STATE(90)] = 3709,
  [SMALL_STATE(91)] = 3774,
  [SMALL_STATE(92)] = 3839,
  [SMALL_STATE(93)] = 3904,
  [SMALL_STATE(94)] = 3966,
  [SMALL_STATE(95)] = 4028,
  [SMALL_STATE(96)] = 4090,
  [SMALL_STATE(97)] = 4117,
  [SMALL_STATE(98)] = 4144,
  [SMALL_STATE(99)] = 4166,
  [SMALL_STATE(100)] = 4195,
  [SMALL_STATE(101)] = 4222,
  [SMALL_STATE(102)] = 4246,
  [SMALL_STATE(103)] = 4265,
  [SMALL_STATE(104)] = 4306,
  [SMALL_STATE(105)] = 4325,
  [SMALL_STATE(106)] = 4344,
  [SMALL_STATE(107)] = 4385,
  [SMALL_STATE(108)] = 4426,
  [SMALL_STATE(109)] = 4467,
  [SMALL_STATE(110)] = 4505,
  [SMALL_STATE(111)] = 4537,
  [SMALL_STATE(112)] = 4569,
  [SMALL_STATE(113)] = 4601,
  [SMALL_STATE(114)] = 4633,
  [SMALL_STATE(115)] = 4665,
  [SMALL_STATE(116)] = 4703,
  [SMALL_STATE(117)] = 4735,
  [SMALL_STATE(118)] = 4767,
  [SMALL_STATE(119)] = 4799,
  [SMALL_STATE(120)] = 4831,
  [SMALL_STATE(121)] = 4869,
  [SMALL_STATE(122)] = 4901,
  [SMALL_STATE(123)] = 4933,
  [SMALL_STATE(124)] = 4961,
  [SMALL_STATE(125)] = 4999,
  [SMALL_STATE(126)] = 5031,
  [SMALL_STATE(127)] = 5063,
  [SMALL_STATE(128)] = 5095,
  [SMALL_STATE(129)] = 5127,
  [SMALL_STATE(130)] = 5159,
  [SMALL_STATE(131)] = 5191,
  [SMALL_STATE(132)] = 5226,
  [SMALL_STATE(133)] = 5242,
  [SMALL_STATE(134)] = 5274,
  [SMALL_STATE(135)] = 5306,
  [SMALL_STATE(136)] = 5338,
  [SMALL_STATE(137)] = 5370,
  [SMALL_STATE(138)] = 5402,
  [SMALL_STATE(139)] = 5432,
  [SMALL_STATE(140)] = 5448,
  [SMALL_STATE(141)] = 5480,
  [SMALL_STATE(142)] = 5509,
  [SMALL_STATE(143)] = 5538,
  [SMALL_STATE(144)] = 5567,
  [SMALL_STATE(145)] = 5596,
  [SMALL_STATE(146)] = 5625,
  [SMALL_STATE(147)] = 5654,
  [SMALL_STATE(148)] = 5670,
  [SMALL_STATE(149)] = 5690,
  [SMALL_STATE(150)] = 5708,
  [SMALL_STATE(151)] = 5734,
  [SMALL_STATE(152)] = 5750,
  [SMALL_STATE(153)] = 5774,
  [SMALL_STATE(154)] = 5797,
  [SMALL_STATE(155)] = 5820,
  [SMALL_STATE(156)] = 5839,
  [SMALL_STATE(157)] = 5862,
  [SMALL_STATE(158)] = 5885,
  [SMALL_STATE(159)] = 5908,
  [SMALL_STATE(160)] = 5921,
  [SMALL_STATE(161)] = 5940,
  [SMALL_STATE(162)] = 5961,
  [SMALL_STATE(163)] = 5982,
  [SMALL_STATE(164)] = 6005,
  [SMALL_STATE(165)] = 6026,
  [SMALL_STATE(166)] = 6049,
  [SMALL_STATE(167)] = 6072,
  [SMALL_STATE(168)] = 6095,
  [SMALL_STATE(169)] = 6118,
  [SMALL_STATE(170)] = 6141,
  [SMALL_STATE(171)] = 6164,
  [SMALL_STATE(172)] = 6187,
  [SMALL_STATE(173)] = 6208,
  [SMALL_STATE(174)] = 6229,
  [SMALL_STATE(175)] = 6252,
  [SMALL_STATE(176)] = 6275,
  [SMALL_STATE(177)] = 6298,
  [SMALL_STATE(178)] = 6319,
  [SMALL_STATE(179)] = 6342,
  [SMALL_STATE(180)] = 6365,
  [SMALL_STATE(181)] = 6388,
  [SMALL_STATE(182)] = 6411,
  [SMALL_STATE(183)] = 6434,
  [SMALL_STATE(184)] = 6456,
  [SMALL_STATE(185)] = 6468,
  [SMALL_STATE(186)] = 6488,
  [SMALL_STATE(187)] = 6510,
  [SMALL_STATE(188)] = 6530,
  [SMALL_STATE(189)] = 6552,
  [SMALL_STATE(190)] = 6568,
  [SMALL_STATE(191)] = 6588,
  [SMALL_STATE(192)] = 6610,
  [SMALL_STATE(193)] = 6630,
  [SMALL_STATE(194)] = 6652,
  [SMALL_STATE(195)] = 6672,
  [SMALL_STATE(196)] = 6694,
  [SMALL_STATE(197)] = 6704,
  [SMALL_STATE(198)] = 6720,
  [SMALL_STATE(199)] = 6736,
  [SMALL_STATE(200)] = 6758,
  [SMALL_STATE(201)] = 6770,
  [SMALL_STATE(202)] = 6790,
  [SMALL_STATE(203)] = 6804,
  [SMALL_STATE(204)] = 6824,
  [SMALL_STATE(205)] = 6844,
  [SMALL_STATE(206)] = 6866,
  [SMALL_STATE(207)] = 6888,
  [SMALL_STATE(208)] = 6908,
  [SMALL_STATE(209)] = 6930,
  [SMALL_STATE(210)] = 6946,
  [SMALL_STATE(211)] = 6958,
  [SMALL_STATE(212)] = 6978,
  [SMALL_STATE(213)] = 7000,
  [SMALL_STATE(214)] = 7017,
  [SMALL_STATE(215)] = 7034,
  [SMALL_STATE(216)] = 7051,
  [SMALL_STATE(217)] = 7068,
  [SMALL_STATE(218)] = 7083,
  [SMALL_STATE(219)] = 7100,
  [SMALL_STATE(220)] = 7117,
  [SMALL_STATE(221)] = 7128,
  [SMALL_STATE(222)] = 7145,
  [SMALL_STATE(223)] = 7162,
  [SMALL_STATE(224)] = 7179,
  [SMALL_STATE(225)] = 7196,
  [SMALL_STATE(226)] = 7213,
  [SMALL_STATE(227)] = 7224,
  [SMALL_STATE(228)] = 7241,
  [SMALL_STATE(229)] = 7252,
  [SMALL_STATE(230)] = 7261,
  [SMALL_STATE(231)] = 7276,
  [SMALL_STATE(232)] = 7289,
  [SMALL_STATE(233)] = 7300,
  [SMALL_STATE(234)] = 7319,
  [SMALL_STATE(235)] = 7336,
  [SMALL_STATE(236)] = 7355,
  [SMALL_STATE(237)] = 7372,
  [SMALL_STATE(238)] = 7389,
  [SMALL_STATE(239)] = 7406,
  [SMALL_STATE(240)] = 7416,
  [SMALL_STATE(241)] = 7430,
  [SMALL_STATE(242)] = 7442,
  [SMALL_STATE(243)] = 7454,
  [SMALL_STATE(244)] = 7462,
  [SMALL_STATE(245)] = 7476,
  [SMALL_STATE(246)] = 7488,
  [SMALL_STATE(247)] = 7500,
  [SMALL_STATE(248)] = 7514,
  [SMALL_STATE(249)] = 7524,
  [SMALL_STATE(250)] = 7538,
  [SMALL_STATE(251)] = 7548,
  [SMALL_STATE(252)] = 7562,
  [SMALL_STATE(253)] = 7574,
  [SMALL_STATE(254)] = 7586,
  [SMALL_STATE(255)] = 7596,
  [SMALL_STATE(256)] = 7610,
  [SMALL_STATE(257)] = 7624,
  [SMALL_STATE(258)] = 7636,
  [SMALL_STATE(259)] = 7648,
  [SMALL_STATE(260)] = 7660,
  [SMALL_STATE(261)] = 7668,
  [SMALL_STATE(262)] = 7678,
  [SMALL_STATE(263)] = 7692,
  [SMALL_STATE(264)] = 7700,
  [SMALL_STATE(265)] = 7714,
  [SMALL_STATE(266)] = 7728,
  [SMALL_STATE(267)] = 7740,
  [SMALL_STATE(268)] = 7752,
  [SMALL_STATE(269)] = 7762,
  [SMALL_STATE(270)] = 7776,
  [SMALL_STATE(271)] = 7790,
  [SMALL_STATE(272)] = 7804,
  [SMALL_STATE(273)] = 7812,
  [SMALL_STATE(274)] = 7820,
  [SMALL_STATE(275)] = 7830,
  [SMALL_STATE(276)] = 7842,
  [SMALL_STATE(277)] = 7856,
  [SMALL_STATE(278)] = 7866,
  [SMALL_STATE(279)] = 7876,
  [SMALL_STATE(280)] = 7888,
  [SMALL_STATE(281)] = 7899,
  [SMALL_STATE(282)] = 7910,
  [SMALL_STATE(283)] = 7917,
  [SMALL_STATE(284)] = 7928,
  [SMALL_STATE(285)] = 7939,
  [SMALL_STATE(286)] = 7950,
  [SMALL_STATE(287)] = 7961,
  [SMALL_STATE(288)] = 7972,
  [SMALL_STATE(289)] = 7983,
  [SMALL_STATE(290)] = 7990,
  [SMALL_STATE(291)] = 8001,
  [SMALL_STATE(292)] = 8012,
  [SMALL_STATE(293)] = 8023,
  [SMALL_STATE(294)] = 8034,
  [SMALL_STATE(295)] = 8045,
  [SMALL_STATE(296)] = 8056,
  [SMALL_STATE(297)] = 8067,
  [SMALL_STATE(298)] = 8074,
  [SMALL_STATE(299)] = 8085,
  [SMALL_STATE(300)] = 8096,
  [SMALL_STATE(301)] = 8107,
  [SMALL_STATE(302)] = 8118,
  [SMALL_STATE(303)] = 8125,
  [SMALL_STATE(304)] = 8136,
  [SMALL_STATE(305)] = 8147,
  [SMALL_STATE(306)] = 8158,
  [SMALL_STATE(307)] = 8169,
  [SMALL_STATE(308)] = 8180,
  [SMALL_STATE(309)] = 8191,
  [SMALL_STATE(310)] = 8202,
  [SMALL_STATE(311)] = 8213,
  [SMALL_STATE(312)] = 8224,
  [SMALL_STATE(313)] = 8235,
  [SMALL_STATE(314)] = 8246,
  [SMALL_STATE(315)] = 8259,
  [SMALL_STATE(316)] = 8270,
  [SMALL_STATE(317)] = 8281,
  [SMALL_STATE(318)] = 8292,
  [SMALL_STATE(319)] = 8303,
  [SMALL_STATE(320)] = 8310,
  [SMALL_STATE(321)] = 8321,
  [SMALL_STATE(322)] = 8332,
  [SMALL_STATE(323)] = 8343,
  [SMALL_STATE(324)] = 8354,
  [SMALL_STATE(325)] = 8365,
  [SMALL_STATE(326)] = 8376,
  [SMALL_STATE(327)] = 8387,
  [SMALL_STATE(328)] = 8398,
  [SMALL_STATE(329)] = 8409,
  [SMALL_STATE(330)] = 8420,
  [SMALL_STATE(331)] = 8431,
  [SMALL_STATE(332)] = 8442,
  [SMALL_STATE(333)] = 8453,
  [SMALL_STATE(334)] = 8464,
  [SMALL_STATE(335)] = 8471,
  [SMALL_STATE(336)] = 8482,
  [SMALL_STATE(337)] = 8493,
  [SMALL_STATE(338)] = 8500,
  [SMALL_STATE(339)] = 8511,
  [SMALL_STATE(340)] = 8522,
  [SMALL_STATE(341)] = 8533,
  [SMALL_STATE(342)] = 8544,
  [SMALL_STATE(343)] = 8555,
  [SMALL_STATE(344)] = 8566,
  [SMALL_STATE(345)] = 8577,
  [SMALL_STATE(346)] = 8585,
  [SMALL_STATE(347)] = 8593,
  [SMALL_STATE(348)] = 8601,
  [SMALL_STATE(349)] = 8609,
  [SMALL_STATE(350)] = 8619,
  [SMALL_STATE(351)] = 8629,
  [SMALL_STATE(352)] = 8639,
  [SMALL_STATE(353)] = 8647,
  [SMALL_STATE(354)] = 8655,
  [SMALL_STATE(355)] = 8663,
  [SMALL_STATE(356)] = 8671,
  [SMALL_STATE(357)] = 8679,
  [SMALL_STATE(358)] = 8689,
  [SMALL_STATE(359)] = 8697,
  [SMALL_STATE(360)] = 8705,
  [SMALL_STATE(361)] = 8713,
  [SMALL_STATE(362)] = 8723,
  [SMALL_STATE(363)] = 8731,
  [SMALL_STATE(364)] = 8739,
  [SMALL_STATE(365)] = 8747,
  [SMALL_STATE(366)] = 8755,
  [SMALL_STATE(367)] = 8763,
  [SMALL_STATE(368)] = 8773,
  [SMALL_STATE(369)] = 8783,
  [SMALL_STATE(370)] = 8791,
  [SMALL_STATE(371)] = 8799,
  [SMALL_STATE(372)] = 8807,
  [SMALL_STATE(373)] = 8815,
  [SMALL_STATE(374)] = 8823,
  [SMALL_STATE(375)] = 8831,
  [SMALL_STATE(376)] = 8841,
  [SMALL_STATE(377)] = 8849,
  [SMALL_STATE(378)] = 8857,
  [SMALL_STATE(379)] = 8867,
  [SMALL_STATE(380)] = 8875,
  [SMALL_STATE(381)] = 8885,
  [SMALL_STATE(382)] = 8895,
  [SMALL_STATE(383)] = 8903,
  [SMALL_STATE(384)] = 8913,
  [SMALL_STATE(385)] = 8918,
  [SMALL_STATE(386)] = 8923,
  [SMALL_STATE(387)] = 8928,
  [SMALL_STATE(388)] = 8933,
  [SMALL_STATE(389)] = 8940,
  [SMALL_STATE(390)] = 8947,
  [SMALL_STATE(391)] = 8954,
  [SMALL_STATE(392)] = 8961,
  [SMALL_STATE(393)] = 8968,
  [SMALL_STATE(394)] = 8973,
  [SMALL_STATE(395)] = 8977,
  [SMALL_STATE(396)] = 8981,
  [SMALL_STATE(397)] = 8985,
  [SMALL_STATE(398)] = 8989,
  [SMALL_STATE(399)] = 8993,
  [SMALL_STATE(400)] = 8997,
  [SMALL_STATE(401)] = 9001,
  [SMALL_STATE(402)] = 9005,
  [SMALL_STATE(403)] = 9009,
  [SMALL_STATE(404)] = 9013,
  [SMALL_STATE(405)] = 9017,
  [SMALL_STATE(406)] = 9021,
  [SMALL_STATE(407)] = 9025,
  [SMALL_STATE(408)] = 9029,
  [SMALL_STATE(409)] = 9033,
  [SMALL_STATE(410)] = 9037,
  [SMALL_STATE(411)] = 9041,
  [SMALL_STATE(412)] = 9045,
  [SMALL_STATE(413)] = 9049,
  [SMALL_STATE(414)] = 9053,
  [SMALL_STATE(415)] = 9057,
  [SMALL_STATE(416)] = 9061,
  [SMALL_STATE(417)] = 9065,
  [SMALL_STATE(418)] = 9069,
  [SMALL_STATE(419)] = 9073,
  [SMALL_STATE(420)] = 9077,
  [SMALL_STATE(421)] = 9081,
  [SMALL_STATE(422)] = 9085,
  [SMALL_STATE(423)] = 9089,
  [SMALL_STATE(424)] = 9093,
  [SMALL_STATE(425)] = 9097,
  [SMALL_STATE(426)] = 9101,
  [SMALL_STATE(427)] = 9105,
  [SMALL_STATE(428)] = 9109,
  [SMALL_STATE(429)] = 9113,
  [SMALL_STATE(430)] = 9117,
  [SMALL_STATE(431)] = 9121,
  [SMALL_STATE(432)] = 9125,
  [SMALL_STATE(433)] = 9129,
  [SMALL_STATE(434)] = 9133,
  [SMALL_STATE(435)] = 9137,
  [SMALL_STATE(436)] = 9141,
  [SMALL_STATE(437)] = 9145,
  [SMALL_STATE(438)] = 9149,
  [SMALL_STATE(439)] = 9153,
  [SMALL_STATE(440)] = 9157,
  [SMALL_STATE(441)] = 9161,
  [SMALL_STATE(442)] = 9165,
  [SMALL_STATE(443)] = 9169,
  [SMALL_STATE(444)] = 9173,
  [SMALL_STATE(445)] = 9177,
  [SMALL_STATE(446)] = 9181,
  [SMALL_STATE(447)] = 9185,
  [SMALL_STATE(448)] = 9189,
  [SMALL_STATE(449)] = 9193,
  [SMALL_STATE(450)] = 9197,
  [SMALL_STATE(451)] = 9201,
  [SMALL_STATE(452)] = 9205,
  [SMALL_STATE(453)] = 9209,
  [SMALL_STATE(454)] = 9213,
  [SMALL_STATE(455)] = 9217,
  [SMALL_STATE(456)] = 9221,
  [SMALL_STATE(457)] = 9225,
  [SMALL_STATE(458)] = 9229,
  [SMALL_STATE(459)] = 9233,
  [SMALL_STATE(460)] = 9237,
  [SMALL_STATE(461)] = 9241,
  [SMALL_STATE(462)] = 9245,
  [SMALL_STATE(463)] = 9249,
  [SMALL_STATE(464)] = 9253,
  [SMALL_STATE(465)] = 9257,
  [SMALL_STATE(466)] = 9261,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(88),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(284),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(429),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(294),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(464),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(464),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(359),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(347),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(364),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(352),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(353),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(354),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(355),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(356),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(451),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(362),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(370),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(374),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(348),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(365),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(346),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(382),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(169),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(169),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(179),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(377),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(458),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 5),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 5),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2), SHIFT_REPEAT(138),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 5),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2), SHIFT_REPEAT(150),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(10),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(13),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 4),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_directive_repeat1, 2),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2), SHIFT_REPEAT(225),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_periodic_xact, 5),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_periodic_xact, 5),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 10),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 10),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 9),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 9),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_quantity, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_quantity, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 8),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 8),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 6),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 6),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(131),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 4),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 4),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automated_xact, 5),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automated_xact, 5),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 11),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 11),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_subdirective, 4),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_subdirective, 4),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 14),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 14),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 15),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 15),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 16),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 16),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 10),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 10),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 4),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 1),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_subdirective, 4),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_subdirective, 4),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 1),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 9),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 9),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 12),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 12),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_subdirective, 4),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_subdirective, 4),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 13),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 13),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_subdirective, 4),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_subdirective, 4),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_subdirective, 3),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_subdirective, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 3),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_subdirective, 4),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_subdirective, 4),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 4),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 4),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 3),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 4),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 4),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 6),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 6),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 5),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 5),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 5),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 5),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 6),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 6),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 5),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 7),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 7),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 7),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 7),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(96),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(97),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(101),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(147),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(148),
  [620] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(148),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(149),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 3),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(162),
  [673] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(455),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [678] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(293),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [705] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(172),
  [708] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(447),
  [711] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(335),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lot_price, 5),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lot_price, 5),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 5),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lot_price, 4),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lot_price, 4),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(202),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lot_price, 3),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lot_price, 3),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [807] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(217),
  [810] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(217),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 3),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 3),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [839] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_repeat1, 2), SHIFT_REPEAT(230),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_repeat1, 2),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_note_repeat1, 2),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xact_date, 1),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval, 1),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_date, 2),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [898] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_repeat1, 2), SHIFT_REPEAT(255),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 3),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3, .production_id = 3),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1, .production_id = 1),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 5),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 7),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_spec, 1),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interval_date_spec, 3),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 4),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 5),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relative_date_spec, 3),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 6),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 2),
  [1007] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(303),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1014] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(305),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1035] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_repeat2, 2), SHIFT_REPEAT(316),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_repeat2, 2),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xact_date, 2),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1058] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(325),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1067] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(329),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3),
  [1072] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(332),
  [1075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 3),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_repeat2, 2), SHIFT_REPEAT(350),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interval_date_spec, 7),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval, 3),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interval_date_spec, 1, .production_id = 2),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 10),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 8),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 7),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 6),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 5),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 5),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 5),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 4),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_value, 1),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 3),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 3),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 9),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1268] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
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
