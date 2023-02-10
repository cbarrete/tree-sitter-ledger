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
#define STATE_COUNT 346
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 132
#define ALIAS_COUNT 0
#define TOKEN_COUNT 85
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
  aux_sym_quantity_token1 = 75,
  aux_sym_commodity_token1 = 76,
  aux_sym_commodity_token2 = 77,
  aux_sym_commodity_token3 = 78,
  anon_sym_AT = 79,
  anon_sym_AT_AT = 80,
  anon_sym_ = 81,
  anon_sym_TAB = 82,
  anon_sym_2 = 83,
  anon_sym_TAB2 = 84,
  sym_source_file = 85,
  sym_journal_item = 86,
  sym_block_comment = 87,
  sym_test = 88,
  sym_option = 89,
  sym_option_value = 90,
  sym_directive = 91,
  sym_account_directive = 92,
  sym_account_subdirective = 93,
  sym_commodity_directive = 94,
  sym_commodity_subdirective = 95,
  sym_tag_directive = 96,
  sym_word_directive = 97,
  sym_filename = 98,
  sym_char_directive = 99,
  sym_alias_subdirective = 100,
  sym_default_subdirective = 101,
  sym_format_subdirective = 102,
  sym_note_subdirective = 103,
  sym_assert_subdirective = 104,
  sym_check_subdirective = 105,
  sym_check_in = 106,
  sym_check_out = 107,
  sym_xact = 108,
  sym_plain_xact = 109,
  sym_periodic_xact = 110,
  sym_interval = 111,
  sym_date = 112,
  sym__4d = 113,
  sym__single_date = 114,
  sym_status = 115,
  sym_code = 116,
  sym_note = 117,
  sym_posting = 118,
  sym_account = 119,
  sym_amount = 120,
  sym_quantity = 121,
  sym_commodity = 122,
  sym_price = 123,
  sym_balance_assertion = 124,
  aux_sym_source_file_repeat1 = 125,
  aux_sym_block_comment_repeat1 = 126,
  aux_sym_account_directive_repeat1 = 127,
  aux_sym_commodity_directive_repeat1 = 128,
  aux_sym_tag_directive_repeat1 = 129,
  aux_sym_plain_xact_repeat1 = 130,
  aux_sym_whitespace_repeat1 = 131,
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
  [aux_sym_quantity_token1] = "quantity_token1",
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
  [aux_sym_quantity_token1] = aux_sym_quantity_token1,
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
  [79] = 56,
  [80] = 80,
  [81] = 22,
  [82] = 56,
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
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 34,
  [101] = 101,
  [102] = 21,
  [103] = 103,
  [104] = 56,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 56,
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
  [121] = 109,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 42,
  [131] = 56,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 35,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 137,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 129,
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
  [160] = 160,
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
  [172] = 172,
  [173] = 160,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 56,
  [178] = 178,
  [179] = 166,
  [180] = 158,
  [181] = 172,
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
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 56,
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
  [224] = 206,
  [225] = 56,
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
  [238] = 183,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 56,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 56,
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
  [342] = 301,
  [343] = 311,
  [344] = 325,
  [345] = 345,
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
      if (lookahead == '\t') ADVANCE(422);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == ' ') ADVANCE(416);
      if (lookahead == '!') ADVANCE(397);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == ')') ADVANCE(402);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == '-') ADVANCE(310);
      if (lookahead == ';') ADVANCE(404);
      if (lookahead == '=') ADVANCE(315);
      if (lookahead == '@') ADVANCE(414);
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
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(412);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(422);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == ' ') ADVANCE(416);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '-') ADVANCE(309);
      if (lookahead == ';') ADVANCE(404);
      if (lookahead == '=') ADVANCE(315);
      if (lookahead == '@') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(412);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(411);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(422);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == ' ') ADVANCE(416);
      if (lookahead == ';') ADVANCE(404);
      if (lookahead == '=') ADVANCE(315);
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
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(422);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == ' ') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(416);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == ';') ADVANCE(404);
      if (lookahead == '=') ADVANCE(315);
      if (lookahead == '@') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(412);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(411);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(416);
      if (lookahead == '-') ADVANCE(309);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'c') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(416);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(416);
      if (lookahead == '!') ADVANCE(398);
      if (lookahead == '(') ADVANCE(400);
      if (lookahead == '*') ADVANCE(396);
      if (lookahead == ';') ADVANCE(404);
      if (lookahead == '[') ADVANCE(406);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(416);
      if (lookahead == '(') ADVANCE(400);
      if (lookahead == '[') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(409);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(418);
      if (lookahead == '!') ADVANCE(397);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == '\t') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(429);
      END_STATE();
    case 12:
      if (lookahead == '\t') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(332);
      END_STATE();
    case 13:
      if (lookahead == '\t') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(420);
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
      if (lookahead == '"') ADVANCE(413);
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
      if (lookahead == '\t') ADVANCE(422);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == ' ') ADVANCE(416);
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
      if (lookahead == '\t') ADVANCE(426);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == ' ') ADVANCE(419);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(426);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == ' ') ADVANCE(419);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(419);
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
      if (lookahead == 'd') ADVANCE(300);
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
      if (lookahead == 'd') ADVANCE(301);
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
      if (lookahead == 'n') ADVANCE(286);
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
      if (lookahead == 's') ADVANCE(287);
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
      if (lookahead == 't') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(308);
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
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_commodity_token3);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(415);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(320);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(403);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(332);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(320);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(408);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(403);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(332);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 430:
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
  [47] = {.lex_state = 297},
  [48] = {.lex_state = 297},
  [49] = {.lex_state = 297},
  [50] = {.lex_state = 297},
  [51] = {.lex_state = 297},
  [52] = {.lex_state = 297},
  [53] = {.lex_state = 297},
  [54] = {.lex_state = 297},
  [55] = {.lex_state = 228},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 228},
  [58] = {.lex_state = 228},
  [59] = {.lex_state = 228},
  [60] = {.lex_state = 228},
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
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 234},
  [107] = {.lex_state = 228},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 235},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 228},
  [113] = {.lex_state = 228},
  [114] = {.lex_state = 235},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 235},
  [117] = {.lex_state = 234},
  [118] = {.lex_state = 235},
  [119] = {.lex_state = 234},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 234},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 234},
  [124] = {.lex_state = 235},
  [125] = {.lex_state = 228},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 228},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 234},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 234},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 235},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 8},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 235},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 8},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 13},
  [194] = {.lex_state = 13},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 236},
  [204] = {.lex_state = 9},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 236},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 10},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 10},
  [214] = {.lex_state = 10},
  [215] = {.lex_state = 228},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 9},
  [218] = {.lex_state = 9},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 3},
  [222] = {.lex_state = 3},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 236},
  [225] = {.lex_state = 236},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 9},
  [228] = {.lex_state = 9},
  [229] = {.lex_state = 3},
  [230] = {.lex_state = 9},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 10},
  [233] = {.lex_state = 10},
  [234] = {.lex_state = 10},
  [235] = {.lex_state = 3},
  [236] = {.lex_state = 9},
  [237] = {.lex_state = 3},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 12},
  [240] = {.lex_state = 6},
  [241] = {.lex_state = 9},
  [242] = {.lex_state = 9},
  [243] = {.lex_state = 3},
  [244] = {.lex_state = 12},
  [245] = {.lex_state = 2},
  [246] = {.lex_state = 9},
  [247] = {.lex_state = 13},
  [248] = {.lex_state = 2},
  [249] = {.lex_state = 2},
  [250] = {.lex_state = 13},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 2},
  [253] = {.lex_state = 3},
  [254] = {.lex_state = 2},
  [255] = {.lex_state = 236},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
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
  [285] = {.lex_state = 227},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 3},
  [289] = {.lex_state = 296},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 226},
  [294] = {.lex_state = 3},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 226},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 3},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 1},
  [312] = {.lex_state = 2},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 2},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 401},
  [324] = {.lex_state = 2},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 227},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 225},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 1},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
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
    [aux_sym_commodity_token2] = ACTIONS(1),
    [aux_sym_commodity_token3] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(318),
    [sym_journal_item] = STATE(3),
    [sym_block_comment] = STATE(66),
    [sym_test] = STATE(66),
    [sym_option] = STATE(59),
    [sym_directive] = STATE(66),
    [sym_account_directive] = STATE(59),
    [sym_commodity_directive] = STATE(59),
    [sym_tag_directive] = STATE(59),
    [sym_word_directive] = STATE(316),
    [sym_char_directive] = STATE(316),
    [sym_check_in] = STATE(313),
    [sym_check_out] = STATE(313),
    [sym_xact] = STATE(66),
    [sym_plain_xact] = STATE(70),
    [sym_periodic_xact] = STATE(70),
    [sym_date] = STATE(164),
    [sym__4d] = STATE(312),
    [sym__single_date] = STATE(162),
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
  [0] = 37,
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
    STATE(162), 1,
      sym__single_date,
    STATE(164), 1,
      sym_date,
    STATE(312), 1,
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
    STATE(313), 2,
      sym_check_in,
      sym_check_out,
    STATE(316), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(59), 4,
      sym_option,
      sym_account_directive,
      sym_commodity_directive,
      sym_tag_directive,
    STATE(66), 4,
      sym_block_comment,
      sym_test,
      sym_directive,
      sym_xact,
  [123] = 37,
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
    STATE(162), 1,
      sym__single_date,
    STATE(164), 1,
      sym_date,
    STATE(312), 1,
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
    STATE(313), 2,
      sym_check_in,
      sym_check_out,
    STATE(316), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(59), 4,
      sym_option,
      sym_account_directive,
      sym_commodity_directive,
      sym_tag_directive,
    STATE(66), 4,
      sym_block_comment,
      sym_test,
      sym_directive,
      sym_xact,
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
    STATE(23), 5,
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
    ACTIONS(150), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    ACTIONS(154), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(23), 5,
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
    ACTIONS(160), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    ACTIONS(158), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(23), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_note_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
    ACTIONS(156), 26,
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
    STATE(110), 1,
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
    STATE(32), 4,
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
    STATE(110), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(167), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(9), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(171), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(32), 4,
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
    STATE(110), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(177), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(9), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(175), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(32), 4,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_note_subdirective,
    ACTIONS(173), 26,
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
    STATE(200), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(184), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(182), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(11), 3,
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
    STATE(200), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(184), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(188), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(12), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(186), 26,
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
    STATE(200), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(194), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(192), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(12), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(190), 26,
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
    STATE(80), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(201), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(16), 2,
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
    STATE(80), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(201), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(16), 2,
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
    STATE(80), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(201), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(16), 2,
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
    STATE(80), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(215), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(16), 2,
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
    STATE(80), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(201), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(16), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(220), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(218), 26,
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
    STATE(80), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(201), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(16), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(224), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(222), 26,
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
  [1971] = 3,
    ACTIONS(342), 1,
      aux_sym_block_comment_token1,
    ACTIONS(338), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(340), 26,
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
  [2008] = 3,
    ACTIONS(348), 1,
      aux_sym_block_comment_token1,
    ACTIONS(344), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(346), 26,
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
  [2045] = 3,
    ACTIONS(354), 1,
      aux_sym_block_comment_token1,
    ACTIONS(350), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(352), 26,
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
  [2082] = 3,
    ACTIONS(360), 1,
      aux_sym_block_comment_token1,
    ACTIONS(356), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(358), 26,
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
  [2119] = 3,
    ACTIONS(366), 1,
      aux_sym_block_comment_token1,
    ACTIONS(362), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(364), 26,
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
  [2156] = 3,
    ACTIONS(372), 1,
      aux_sym_block_comment_token1,
    ACTIONS(368), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(370), 26,
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
  [2193] = 3,
    ACTIONS(378), 1,
      aux_sym_block_comment_token1,
    ACTIONS(374), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(376), 26,
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
  [2230] = 3,
    ACTIONS(384), 1,
      aux_sym_block_comment_token1,
    ACTIONS(380), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(382), 26,
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
  [2267] = 2,
    ACTIONS(382), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(380), 26,
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
  [2301] = 3,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(388), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(386), 26,
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
  [2337] = 2,
    ACTIONS(364), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(362), 26,
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
    ACTIONS(393), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(391), 26,
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
  [2439] = 2,
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
  [2473] = 2,
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
  [2507] = 2,
    ACTIONS(358), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(356), 26,
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
  [2541] = 2,
    ACTIONS(376), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(374), 26,
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
  [2575] = 2,
    ACTIONS(370), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(368), 26,
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
  [2609] = 2,
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
  [2643] = 2,
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
  [2677] = 2,
    ACTIONS(352), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(350), 26,
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
  [2711] = 2,
    ACTIONS(346), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(344), 26,
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
  [2745] = 2,
    ACTIONS(340), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(338), 26,
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
  [2779] = 2,
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
  [2813] = 2,
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
  [2847] = 4,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    STATE(260), 1,
      sym_interval,
    ACTIONS(425), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(423), 17,
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
  [2877] = 16,
    ACTIONS(427), 1,
      anon_sym_LF,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(435), 1,
      aux_sym_quantity_token1,
    ACTIONS(439), 1,
      anon_sym_AT,
    ACTIONS(441), 1,
      anon_sym_AT_AT,
    STATE(77), 1,
      aux_sym_whitespace_repeat1,
    STATE(91), 1,
      sym_amount,
    STATE(127), 1,
      sym_price,
    STATE(129), 1,
      sym_quantity,
    STATE(178), 1,
      sym_balance_assertion,
    STATE(181), 1,
      sym_commodity,
    STATE(286), 1,
      sym_note,
    ACTIONS(443), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(437), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2929] = 16,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(435), 1,
      aux_sym_quantity_token1,
    ACTIONS(439), 1,
      anon_sym_AT,
    ACTIONS(441), 1,
      anon_sym_AT_AT,
    ACTIONS(445), 1,
      anon_sym_LF,
    STATE(76), 1,
      aux_sym_whitespace_repeat1,
    STATE(85), 1,
      sym_amount,
    STATE(111), 1,
      sym_price,
    STATE(129), 1,
      sym_quantity,
    STATE(171), 1,
      sym_balance_assertion,
    STATE(181), 1,
      sym_commodity,
    STATE(300), 1,
      sym_note,
    ACTIONS(447), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(437), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2981] = 16,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(435), 1,
      aux_sym_quantity_token1,
    ACTIONS(439), 1,
      anon_sym_AT,
    ACTIONS(441), 1,
      anon_sym_AT_AT,
    ACTIONS(449), 1,
      anon_sym_LF,
    STATE(78), 1,
      aux_sym_whitespace_repeat1,
    STATE(96), 1,
      sym_amount,
    STATE(115), 1,
      sym_price,
    STATE(129), 1,
      sym_quantity,
    STATE(168), 1,
      sym_balance_assertion,
    STATE(181), 1,
      sym_commodity,
    STATE(320), 1,
      sym_note,
    ACTIONS(451), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(437), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3033] = 15,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(435), 1,
      aux_sym_quantity_token1,
    ACTIONS(439), 1,
      anon_sym_AT,
    ACTIONS(441), 1,
      anon_sym_AT_AT,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    STATE(88), 1,
      sym_amount,
    STATE(122), 1,
      sym_price,
    STATE(129), 1,
      sym_quantity,
    STATE(161), 1,
      sym_balance_assertion,
    STATE(181), 1,
      sym_commodity,
    STATE(296), 1,
      sym_note,
    ACTIONS(453), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(437), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3082] = 15,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(435), 1,
      aux_sym_quantity_token1,
    ACTIONS(439), 1,
      anon_sym_AT,
    ACTIONS(441), 1,
      anon_sym_AT_AT,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    STATE(96), 1,
      sym_amount,
    STATE(115), 1,
      sym_price,
    STATE(129), 1,
      sym_quantity,
    STATE(168), 1,
      sym_balance_assertion,
    STATE(181), 1,
      sym_commodity,
    STATE(320), 1,
      sym_note,
    ACTIONS(453), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(437), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3131] = 15,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(435), 1,
      aux_sym_quantity_token1,
    ACTIONS(439), 1,
      anon_sym_AT,
    ACTIONS(441), 1,
      anon_sym_AT_AT,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    STATE(85), 1,
      sym_amount,
    STATE(111), 1,
      sym_price,
    STATE(129), 1,
      sym_quantity,
    STATE(171), 1,
      sym_balance_assertion,
    STATE(181), 1,
      sym_commodity,
    STATE(300), 1,
      sym_note,
    ACTIONS(453), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(437), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3180] = 4,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(455), 2,
      sym__2d,
      anon_sym_AT,
    ACTIONS(457), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(386), 8,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      sym_time,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
  [3202] = 11,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(466), 1,
      sym_account_name,
    ACTIONS(468), 1,
      anon_sym_,
    ACTIONS(470), 1,
      anon_sym_TAB,
    STATE(104), 1,
      aux_sym_whitespace_repeat1,
    STATE(150), 1,
      sym_status,
    STATE(212), 1,
      sym_account,
    STATE(345), 1,
      sym_note,
    ACTIONS(460), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [3237] = 2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(238), 11,
      anon_sym_LF,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_quantity_token1,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [3254] = 4,
    ACTIONS(455), 1,
      anon_sym_AT,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(472), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(386), 8,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_quantity_token1,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
  [3275] = 8,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      aux_sym_quantity_token1,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(129), 1,
      sym_quantity,
    STATE(181), 1,
      sym_commodity,
    STATE(251), 1,
      sym_amount,
    ACTIONS(475), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(437), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3303] = 8,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      aux_sym_quantity_token1,
    STATE(41), 1,
      sym_amount,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    STATE(148), 1,
      sym_quantity,
    STATE(172), 1,
      sym_commodity,
    ACTIONS(453), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(437), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3331] = 10,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(439), 1,
      anon_sym_AT,
    ACTIONS(441), 1,
      anon_sym_AT_AT,
    ACTIONS(477), 1,
      anon_sym_LF,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    STATE(122), 1,
      sym_price,
    STATE(161), 1,
      sym_balance_assertion,
    STATE(296), 1,
      sym_note,
    ACTIONS(479), 2,
      anon_sym_,
      anon_sym_TAB,
  [3363] = 8,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      aux_sym_quantity_token1,
    STATE(93), 1,
      aux_sym_whitespace_repeat1,
    STATE(129), 1,
      sym_quantity,
    STATE(181), 1,
      sym_commodity,
    STATE(197), 1,
      sym_amount,
    ACTIONS(481), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(437), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3391] = 8,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      aux_sym_quantity_token1,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    STATE(129), 1,
      sym_quantity,
    STATE(181), 1,
      sym_commodity,
    STATE(322), 1,
      sym_amount,
    ACTIONS(453), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(437), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3419] = 10,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(439), 1,
      anon_sym_AT,
    ACTIONS(441), 1,
      anon_sym_AT_AT,
    ACTIONS(483), 1,
      anon_sym_LF,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(126), 1,
      sym_price,
    STATE(169), 1,
      sym_balance_assertion,
    STATE(292), 1,
      sym_note,
    ACTIONS(485), 2,
      anon_sym_,
      anon_sym_TAB,
  [3451] = 8,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      aux_sym_quantity_token1,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    STATE(129), 1,
      sym_quantity,
    STATE(181), 1,
      sym_commodity,
    STATE(333), 1,
      sym_amount,
    ACTIONS(453), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(437), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3479] = 8,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      aux_sym_quantity_token1,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(129), 1,
      sym_quantity,
    STATE(181), 1,
      sym_commodity,
    STATE(333), 1,
      sym_amount,
    ACTIONS(487), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(437), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3507] = 10,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(439), 1,
      anon_sym_AT,
    ACTIONS(441), 1,
      anon_sym_AT_AT,
    ACTIONS(449), 1,
      anon_sym_LF,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(115), 1,
      sym_price,
    STATE(168), 1,
      sym_balance_assertion,
    STATE(320), 1,
      sym_note,
    ACTIONS(489), 2,
      anon_sym_,
      anon_sym_TAB,
  [3539] = 8,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      aux_sym_quantity_token1,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(129), 1,
      sym_quantity,
    STATE(181), 1,
      sym_commodity,
    STATE(337), 1,
      sym_amount,
    ACTIONS(491), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(437), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3567] = 8,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      aux_sym_quantity_token1,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    STATE(129), 1,
      sym_quantity,
    STATE(181), 1,
      sym_commodity,
    STATE(191), 1,
      sym_amount,
    ACTIONS(453), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(437), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3595] = 8,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      aux_sym_quantity_token1,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    STATE(129), 1,
      sym_quantity,
    STATE(181), 1,
      sym_commodity,
    STATE(231), 1,
      sym_amount,
    ACTIONS(453), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(437), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3623] = 8,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      aux_sym_quantity_token1,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    STATE(129), 1,
      sym_quantity,
    STATE(181), 1,
      sym_commodity,
    STATE(309), 1,
      sym_amount,
    ACTIONS(453), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(437), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3651] = 10,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(439), 1,
      anon_sym_AT,
    ACTIONS(441), 1,
      anon_sym_AT_AT,
    ACTIONS(445), 1,
      anon_sym_LF,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    STATE(111), 1,
      sym_price,
    STATE(171), 1,
      sym_balance_assertion,
    STATE(300), 1,
      sym_note,
    ACTIONS(493), 2,
      anon_sym_,
      anon_sym_TAB,
  [3683] = 9,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(439), 1,
      anon_sym_AT,
    ACTIONS(441), 1,
      anon_sym_AT_AT,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(120), 1,
      sym_price,
    STATE(176), 1,
      sym_balance_assertion,
    STATE(299), 1,
      sym_note,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [3712] = 8,
    ACTIONS(499), 1,
      anon_sym_alias,
    ACTIONS(501), 1,
      anon_sym_default,
    ACTIONS(503), 1,
      anon_sym_note,
    ACTIONS(505), 1,
      anon_sym_assert,
    ACTIONS(507), 1,
      anon_sym_check,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(425), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(497), 2,
      anon_sym_eval,
      anon_sym_payee,
  [3739] = 9,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(439), 1,
      anon_sym_AT,
    ACTIONS(441), 1,
      anon_sym_AT_AT,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(111), 1,
      sym_price,
    STATE(171), 1,
      sym_balance_assertion,
    STATE(300), 1,
      sym_note,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [3768] = 2,
    ACTIONS(288), 1,
      anon_sym_AT,
    ACTIONS(286), 9,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [3783] = 9,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(439), 1,
      anon_sym_AT,
    ACTIONS(441), 1,
      anon_sym_AT_AT,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(122), 1,
      sym_price,
    STATE(161), 1,
      sym_balance_assertion,
    STATE(296), 1,
      sym_note,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [3812] = 2,
    ACTIONS(236), 1,
      anon_sym_AT,
    ACTIONS(234), 9,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [3827] = 9,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(439), 1,
      anon_sym_AT,
    ACTIONS(441), 1,
      anon_sym_AT_AT,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(126), 1,
      sym_price,
    STATE(169), 1,
      sym_balance_assertion,
    STATE(292), 1,
      sym_note,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [3856] = 5,
    ACTIONS(386), 1,
      anon_sym_SEMI,
    ACTIONS(509), 1,
      anon_sym_,
    ACTIONS(512), 1,
      anon_sym_TAB,
    STATE(104), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(455), 5,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [3876] = 7,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      sym_payee,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    STATE(163), 1,
      sym_code,
    STATE(167), 1,
      sym_status,
    ACTIONS(515), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(521), 2,
      anon_sym_,
      anon_sym_TAB,
  [3900] = 7,
    ACTIONS(523), 1,
      anon_sym_LF,
    ACTIONS(525), 1,
      aux_sym_block_comment_token1,
    ACTIONS(527), 1,
      anon_sym_end,
    ACTIONS(529), 1,
      anon_sym_endcomment,
    STATE(119), 1,
      aux_sym_block_comment_repeat1,
    STATE(224), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(531), 2,
      anon_sym_,
      anon_sym_TAB,
  [3923] = 7,
    ACTIONS(33), 1,
      aux_sym_word_directive_token2,
    ACTIONS(57), 1,
      sym__2d,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(162), 1,
      sym__single_date,
    STATE(252), 1,
      sym_date,
    STATE(312), 1,
      sym__4d,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [3946] = 4,
    STATE(108), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(455), 2,
      anon_sym_assert,
      anon_sym_check,
    ACTIONS(533), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(386), 3,
      anon_sym_DASH,
      aux_sym_tag_directive_token1,
      aux_sym_quantity_token1,
  [3963] = 6,
    ACTIONS(536), 1,
      anon_sym_LF,
    ACTIONS(539), 1,
      aux_sym_block_comment_token1,
    STATE(109), 1,
      aux_sym_block_comment_repeat1,
    STATE(206), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(542), 2,
      anon_sym_end,
      anon_sym_endtest,
    ACTIONS(544), 2,
      anon_sym_,
      anon_sym_TAB,
  [3984] = 7,
    ACTIONS(499), 1,
      anon_sym_alias,
    ACTIONS(501), 1,
      anon_sym_default,
    ACTIONS(503), 1,
      anon_sym_note,
    ACTIONS(547), 1,
      anon_sym_nomarket,
    ACTIONS(549), 1,
      anon_sym_format,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(425), 2,
      anon_sym_,
      anon_sym_TAB,
  [4007] = 7,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(477), 1,
      anon_sym_LF,
    STATE(156), 1,
      aux_sym_whitespace_repeat1,
    STATE(161), 1,
      sym_balance_assertion,
    STATE(296), 1,
      sym_note,
    ACTIONS(551), 2,
      anon_sym_,
      anon_sym_TAB,
  [4030] = 7,
    ACTIONS(33), 1,
      aux_sym_word_directive_token2,
    ACTIONS(57), 1,
      sym__2d,
    STATE(107), 1,
      aux_sym_whitespace_repeat1,
    STATE(162), 1,
      sym__single_date,
    STATE(209), 1,
      sym_date,
    STATE(312), 1,
      sym__4d,
    ACTIONS(553), 2,
      anon_sym_,
      anon_sym_TAB,
  [4053] = 7,
    ACTIONS(33), 1,
      aux_sym_word_directive_token2,
    ACTIONS(57), 1,
      sym__2d,
    STATE(125), 1,
      aux_sym_whitespace_repeat1,
    STATE(162), 1,
      sym__single_date,
    STATE(210), 1,
      sym_date,
    STATE(312), 1,
      sym__4d,
    ACTIONS(555), 2,
      anon_sym_,
      anon_sym_TAB,
  [4076] = 7,
    ACTIONS(354), 1,
      anon_sym_endtest,
    ACTIONS(557), 1,
      anon_sym_LF,
    ACTIONS(559), 1,
      aux_sym_block_comment_token1,
    ACTIONS(561), 1,
      anon_sym_end,
    STATE(109), 1,
      aux_sym_block_comment_repeat1,
    STATE(206), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(563), 2,
      anon_sym_,
      anon_sym_TAB,
  [4099] = 7,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(445), 1,
      anon_sym_LF,
    STATE(155), 1,
      aux_sym_whitespace_repeat1,
    STATE(171), 1,
      sym_balance_assertion,
    STATE(300), 1,
      sym_note,
    ACTIONS(565), 2,
      anon_sym_,
      anon_sym_TAB,
  [4122] = 7,
    ACTIONS(342), 1,
      anon_sym_endtest,
    ACTIONS(557), 1,
      anon_sym_LF,
    ACTIONS(559), 1,
      aux_sym_block_comment_token1,
    ACTIONS(567), 1,
      anon_sym_end,
    STATE(109), 1,
      aux_sym_block_comment_repeat1,
    STATE(206), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(563), 2,
      anon_sym_,
      anon_sym_TAB,
  [4145] = 7,
    ACTIONS(360), 1,
      anon_sym_endcomment,
    ACTIONS(525), 1,
      aux_sym_block_comment_token1,
    ACTIONS(569), 1,
      anon_sym_LF,
    ACTIONS(571), 1,
      anon_sym_end,
    STATE(121), 1,
      aux_sym_block_comment_repeat1,
    STATE(224), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(531), 2,
      anon_sym_,
      anon_sym_TAB,
  [4168] = 7,
    ACTIONS(559), 1,
      aux_sym_block_comment_token1,
    ACTIONS(573), 1,
      anon_sym_LF,
    ACTIONS(575), 1,
      anon_sym_end,
    ACTIONS(577), 1,
      anon_sym_endtest,
    STATE(116), 1,
      aux_sym_block_comment_repeat1,
    STATE(206), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(563), 2,
      anon_sym_,
      anon_sym_TAB,
  [4191] = 7,
    ACTIONS(372), 1,
      anon_sym_endcomment,
    ACTIONS(525), 1,
      aux_sym_block_comment_token1,
    ACTIONS(569), 1,
      anon_sym_LF,
    ACTIONS(579), 1,
      anon_sym_end,
    STATE(121), 1,
      aux_sym_block_comment_repeat1,
    STATE(224), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(531), 2,
      anon_sym_,
      anon_sym_TAB,
  [4214] = 7,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(581), 1,
      anon_sym_LF,
    STATE(157), 1,
      aux_sym_whitespace_repeat1,
    STATE(159), 1,
      sym_balance_assertion,
    STATE(305), 1,
      sym_note,
    ACTIONS(583), 2,
      anon_sym_,
      anon_sym_TAB,
  [4237] = 6,
    ACTIONS(585), 1,
      anon_sym_LF,
    ACTIONS(588), 1,
      aux_sym_block_comment_token1,
    STATE(121), 1,
      aux_sym_block_comment_repeat1,
    STATE(224), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(542), 2,
      anon_sym_end,
      anon_sym_endcomment,
    ACTIONS(591), 2,
      anon_sym_,
      anon_sym_TAB,
  [4258] = 7,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(483), 1,
      anon_sym_LF,
    STATE(132), 1,
      aux_sym_whitespace_repeat1,
    STATE(169), 1,
      sym_balance_assertion,
    STATE(292), 1,
      sym_note,
    ACTIONS(594), 2,
      anon_sym_,
      anon_sym_TAB,
  [4281] = 7,
    ACTIONS(378), 1,
      anon_sym_endcomment,
    ACTIONS(525), 1,
      aux_sym_block_comment_token1,
    ACTIONS(596), 1,
      anon_sym_LF,
    ACTIONS(598), 1,
      anon_sym_end,
    STATE(117), 1,
      aux_sym_block_comment_repeat1,
    STATE(224), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(531), 2,
      anon_sym_,
      anon_sym_TAB,
  [4304] = 7,
    ACTIONS(384), 1,
      anon_sym_endtest,
    ACTIONS(559), 1,
      aux_sym_block_comment_token1,
    ACTIONS(600), 1,
      anon_sym_LF,
    ACTIONS(602), 1,
      anon_sym_end,
    STATE(114), 1,
      aux_sym_block_comment_repeat1,
    STATE(206), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(563), 2,
      anon_sym_,
      anon_sym_TAB,
  [4327] = 7,
    ACTIONS(33), 1,
      aux_sym_word_directive_token2,
    ACTIONS(57), 1,
      sym__2d,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(162), 1,
      sym__single_date,
    STATE(248), 1,
      sym_date,
    STATE(312), 1,
      sym__4d,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [4350] = 7,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(604), 1,
      anon_sym_LF,
    STATE(149), 1,
      aux_sym_whitespace_repeat1,
    STATE(176), 1,
      sym_balance_assertion,
    STATE(299), 1,
      sym_note,
    ACTIONS(606), 2,
      anon_sym_,
      anon_sym_TAB,
  [4373] = 7,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(449), 1,
      anon_sym_LF,
    STATE(147), 1,
      aux_sym_whitespace_repeat1,
    STATE(168), 1,
      sym_balance_assertion,
    STATE(320), 1,
      sym_note,
    ACTIONS(608), 2,
      anon_sym_,
      anon_sym_TAB,
  [4396] = 7,
    ACTIONS(33), 1,
      aux_sym_word_directive_token2,
    ACTIONS(57), 1,
      sym__2d,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(162), 1,
      sym__single_date,
    STATE(261), 1,
      sym_date,
    STATE(312), 1,
      sym__4d,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [4419] = 4,
    STATE(136), 1,
      sym_commodity,
    STATE(137), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(610), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(437), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4435] = 2,
    ACTIONS(320), 1,
      anon_sym_AT,
    ACTIONS(318), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [4447] = 4,
    ACTIONS(455), 1,
      sym_payee,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(612), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(386), 3,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
  [4463] = 6,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(176), 1,
      sym_balance_assertion,
    STATE(299), 1,
      sym_note,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [4483] = 4,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(256), 1,
      sym_commodity,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(437), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4499] = 4,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(309), 1,
      sym_commodity,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(437), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4515] = 2,
    ACTIONS(617), 1,
      sym__dsep,
    ACTIONS(615), 6,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [4527] = 2,
    ACTIONS(292), 1,
      anon_sym_AT,
    ACTIONS(290), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [4539] = 4,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(130), 1,
      sym_commodity,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(437), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4555] = 7,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(466), 1,
      sym_account_name,
    ACTIONS(619), 1,
      anon_sym_,
    ACTIONS(621), 1,
      anon_sym_TAB,
    STATE(177), 1,
      aux_sym_whitespace_repeat1,
    STATE(253), 1,
      sym_account,
  [4577] = 7,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(466), 1,
      sym_account_name,
    ACTIONS(619), 1,
      anon_sym_,
    ACTIONS(621), 1,
      anon_sym_TAB,
    STATE(177), 1,
      aux_sym_whitespace_repeat1,
    STATE(309), 1,
      sym_account,
  [4599] = 4,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(90), 1,
      sym_commodity,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(437), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4615] = 7,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(466), 1,
      sym_account_name,
    ACTIONS(619), 1,
      anon_sym_,
    ACTIONS(621), 1,
      anon_sym_TAB,
    STATE(177), 1,
      aux_sym_whitespace_repeat1,
    STATE(307), 1,
      sym_account,
  [4637] = 4,
    STATE(42), 1,
      sym_commodity,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(623), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4653] = 7,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(466), 1,
      sym_account_name,
    ACTIONS(619), 1,
      anon_sym_,
    ACTIONS(621), 1,
      anon_sym_TAB,
    STATE(177), 1,
      aux_sym_whitespace_repeat1,
    STATE(287), 1,
      sym_account,
  [4675] = 7,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(466), 1,
      sym_account_name,
    ACTIONS(619), 1,
      anon_sym_,
    ACTIONS(621), 1,
      anon_sym_TAB,
    STATE(177), 1,
      aux_sym_whitespace_repeat1,
    STATE(243), 1,
      sym_account,
  [4697] = 7,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(466), 1,
      sym_account_name,
    ACTIONS(625), 1,
      anon_sym_,
    ACTIONS(627), 1,
      anon_sym_TAB,
    STATE(144), 1,
      aux_sym_whitespace_repeat1,
    STATE(219), 1,
      sym_account,
  [4719] = 7,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(466), 1,
      sym_account_name,
    ACTIONS(619), 1,
      anon_sym_,
    ACTIONS(621), 1,
      anon_sym_TAB,
    STATE(177), 1,
      aux_sym_whitespace_repeat1,
    STATE(219), 1,
      sym_account,
  [4741] = 6,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(171), 1,
      sym_balance_assertion,
    STATE(300), 1,
      sym_note,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [4761] = 4,
    STATE(35), 1,
      sym_commodity,
    STATE(142), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(629), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(623), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4777] = 6,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(159), 1,
      sym_balance_assertion,
    STATE(305), 1,
      sym_note,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [4797] = 7,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(466), 1,
      sym_account_name,
    ACTIONS(631), 1,
      anon_sym_,
    ACTIONS(633), 1,
      anon_sym_TAB,
    STATE(152), 1,
      aux_sym_whitespace_repeat1,
    STATE(237), 1,
      sym_account,
  [4819] = 7,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(466), 1,
      sym_account_name,
    ACTIONS(635), 1,
      anon_sym_,
    ACTIONS(637), 1,
      anon_sym_TAB,
    STATE(138), 1,
      aux_sym_whitespace_repeat1,
    STATE(221), 1,
      sym_account,
  [4841] = 7,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(466), 1,
      sym_account_name,
    ACTIONS(619), 1,
      anon_sym_,
    ACTIONS(621), 1,
      anon_sym_TAB,
    STATE(177), 1,
      aux_sym_whitespace_repeat1,
    STATE(222), 1,
      sym_account,
  [4863] = 4,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(304), 1,
      sym_commodity,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(437), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4879] = 7,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(466), 1,
      sym_account_name,
    ACTIONS(639), 1,
      anon_sym_,
    ACTIONS(641), 1,
      anon_sym_TAB,
    STATE(146), 1,
      aux_sym_whitespace_repeat1,
    STATE(253), 1,
      sym_account,
  [4901] = 6,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(161), 1,
      sym_balance_assertion,
    STATE(296), 1,
      sym_note,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [4921] = 6,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(169), 1,
      sym_balance_assertion,
    STATE(292), 1,
      sym_note,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [4941] = 6,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(165), 1,
      sym_balance_assertion,
    STATE(310), 1,
      sym_note,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [4961] = 5,
    ACTIONS(643), 1,
      anon_sym_DASH,
    ACTIONS(645), 1,
      aux_sym_quantity_token1,
    STATE(42), 1,
      sym_quantity,
    STATE(108), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(647), 2,
      anon_sym_,
      anon_sym_TAB,
  [4978] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(649), 1,
      anon_sym_LF,
    STATE(198), 1,
      aux_sym_whitespace_repeat1,
    STATE(310), 1,
      sym_note,
    ACTIONS(651), 2,
      anon_sym_,
      anon_sym_TAB,
  [4995] = 2,
    ACTIONS(653), 1,
      anon_sym_LF,
    ACTIONS(542), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endcomment,
      anon_sym_,
      anon_sym_TAB,
  [5006] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(483), 1,
      anon_sym_LF,
    STATE(186), 1,
      aux_sym_whitespace_repeat1,
    STATE(292), 1,
      sym_note,
    ACTIONS(655), 2,
      anon_sym_,
      anon_sym_TAB,
  [5023] = 2,
    ACTIONS(659), 1,
      anon_sym_EQ,
    ACTIONS(657), 5,
      anon_sym_LF,
      sym_time,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5034] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(661), 1,
      anon_sym_LF,
    STATE(190), 1,
      sym_note,
    STATE(228), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(663), 2,
      anon_sym_,
      anon_sym_TAB,
  [5051] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(665), 1,
      anon_sym_LF,
    STATE(105), 1,
      aux_sym_whitespace_repeat1,
    STATE(187), 1,
      sym_note,
    ACTIONS(667), 2,
      anon_sym_,
      anon_sym_TAB,
  [5068] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(669), 1,
      anon_sym_LF,
    STATE(199), 1,
      aux_sym_whitespace_repeat1,
    STATE(314), 1,
      sym_note,
    ACTIONS(671), 2,
      anon_sym_,
      anon_sym_TAB,
  [5085] = 2,
    ACTIONS(673), 1,
      anon_sym_LF,
    ACTIONS(675), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endcomment,
      anon_sym_,
      anon_sym_TAB,
  [5096] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(661), 1,
      anon_sym_LF,
    STATE(170), 1,
      aux_sym_whitespace_repeat1,
    STATE(190), 1,
      sym_note,
    ACTIONS(677), 2,
      anon_sym_,
      anon_sym_TAB,
  [5113] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(445), 1,
      anon_sym_LF,
    STATE(192), 1,
      aux_sym_whitespace_repeat1,
    STATE(300), 1,
      sym_note,
    ACTIONS(679), 2,
      anon_sym_,
      anon_sym_TAB,
  [5130] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(604), 1,
      anon_sym_LF,
    STATE(184), 1,
      aux_sym_whitespace_repeat1,
    STATE(299), 1,
      sym_note,
    ACTIONS(681), 2,
      anon_sym_,
      anon_sym_TAB,
  [5147] = 5,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(683), 1,
      sym_payee,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    STATE(175), 1,
      sym_code,
    ACTIONS(521), 2,
      anon_sym_,
      anon_sym_TAB,
  [5164] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(477), 1,
      anon_sym_LF,
    STATE(188), 1,
      aux_sym_whitespace_repeat1,
    STATE(296), 1,
      sym_note,
    ACTIONS(685), 2,
      anon_sym_,
      anon_sym_TAB,
  [5181] = 5,
    ACTIONS(643), 1,
      anon_sym_DASH,
    ACTIONS(645), 1,
      aux_sym_quantity_token1,
    STATE(35), 1,
      sym_quantity,
    STATE(158), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(687), 2,
      anon_sym_,
      anon_sym_TAB,
  [5198] = 2,
    ACTIONS(653), 1,
      anon_sym_LF,
    ACTIONS(542), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endtest,
      anon_sym_,
      anon_sym_TAB,
  [5209] = 1,
    ACTIONS(689), 6,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5218] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(691), 1,
      anon_sym_LF,
    STATE(202), 1,
      sym_note,
    STATE(230), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(693), 2,
      anon_sym_,
      anon_sym_TAB,
  [5235] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(581), 1,
      anon_sym_LF,
    STATE(195), 1,
      aux_sym_whitespace_repeat1,
    STATE(305), 1,
      sym_note,
    ACTIONS(695), 2,
      anon_sym_,
      anon_sym_TAB,
  [5252] = 4,
    ACTIONS(697), 1,
      anon_sym_,
    ACTIONS(700), 1,
      anon_sym_TAB,
    STATE(177), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(455), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [5267] = 5,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(449), 1,
      anon_sym_LF,
    STATE(182), 1,
      aux_sym_whitespace_repeat1,
    STATE(320), 1,
      sym_note,
    ACTIONS(703), 2,
      anon_sym_,
      anon_sym_TAB,
  [5284] = 2,
    ACTIONS(673), 1,
      anon_sym_LF,
    ACTIONS(675), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endtest,
      anon_sym_,
      anon_sym_TAB,
  [5295] = 5,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      aux_sym_quantity_token1,
    STATE(108), 1,
      aux_sym_whitespace_repeat1,
    STATE(130), 1,
      sym_quantity,
    ACTIONS(647), 2,
      anon_sym_,
      anon_sym_TAB,
  [5312] = 5,
    ACTIONS(429), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      aux_sym_quantity_token1,
    STATE(136), 1,
      sym_quantity,
    STATE(180), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(705), 2,
      anon_sym_,
      anon_sym_TAB,
  [5329] = 4,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(300), 1,
      sym_note,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [5343] = 2,
    ACTIONS(709), 1,
      anon_sym_,
    ACTIONS(707), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
      anon_sym_TAB,
  [5353] = 4,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(305), 1,
      sym_note,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [5367] = 3,
    STATE(80), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(201), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(15), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5379] = 4,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(299), 1,
      sym_note,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [5393] = 3,
    STATE(80), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(201), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(13), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5405] = 4,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(292), 1,
      sym_note,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [5419] = 3,
    STATE(80), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(201), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(17), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5431] = 3,
    STATE(80), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(201), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(18), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5443] = 1,
    ACTIONS(711), 5,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5451] = 4,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(296), 1,
      sym_note,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [5465] = 4,
    ACTIONS(713), 1,
      aux_sym_option_value_token1,
    STATE(250), 1,
      aux_sym_whitespace_repeat1,
    STATE(327), 1,
      sym_option_value,
    ACTIONS(715), 2,
      anon_sym_,
      anon_sym_TAB,
  [5479] = 4,
    ACTIONS(717), 1,
      aux_sym_option_value_token1,
    STATE(250), 1,
      aux_sym_whitespace_repeat1,
    STATE(307), 1,
      sym_filename,
    ACTIONS(715), 2,
      anon_sym_,
      anon_sym_TAB,
  [5493] = 4,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(310), 1,
      sym_note,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [5507] = 4,
    ACTIONS(719), 1,
      anon_sym_LF,
    ACTIONS(721), 1,
      anon_sym_EQ,
    STATE(193), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(723), 2,
      anon_sym_,
      anon_sym_TAB,
  [5521] = 1,
    ACTIONS(725), 5,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5529] = 4,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(314), 1,
      sym_note,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [5543] = 4,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(317), 1,
      sym_note,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [5557] = 4,
    ACTIONS(505), 1,
      anon_sym_assert,
    ACTIONS(507), 1,
      anon_sym_check,
    STATE(108), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(647), 2,
      anon_sym_,
      anon_sym_TAB,
  [5571] = 1,
    ACTIONS(727), 5,
      anon_sym_LF,
      sym_time,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5579] = 3,
    STATE(80), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(201), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5591] = 3,
    ACTIONS(729), 1,
      aux_sym_block_comment_token1,
    STATE(225), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(731), 2,
      anon_sym_,
      anon_sym_TAB,
  [5602] = 3,
    ACTIONS(733), 1,
      sym_payee,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(521), 2,
      anon_sym_,
      anon_sym_TAB,
  [5613] = 1,
    ACTIONS(735), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5620] = 3,
    ACTIONS(737), 1,
      aux_sym_block_comment_token1,
    STATE(225), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(731), 2,
      anon_sym_,
      anon_sym_TAB,
  [5631] = 3,
    ACTIONS(739), 1,
      aux_sym_word_directive_token2,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [5642] = 3,
    ACTIONS(741), 1,
      aux_sym_word_directive_token2,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [5653] = 3,
    ACTIONS(743), 1,
      sym_time,
    STATE(254), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(745), 2,
      anon_sym_,
      anon_sym_TAB,
  [5664] = 3,
    ACTIONS(747), 1,
      sym_time,
    STATE(249), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(749), 2,
      anon_sym_,
      anon_sym_TAB,
  [5675] = 3,
    ACTIONS(386), 1,
      aux_sym_account_subdirective_token1,
    STATE(211), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(751), 2,
      anon_sym_,
      anon_sym_TAB,
  [5686] = 2,
    ACTIONS(754), 1,
      anon_sym_LF,
    ACTIONS(756), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [5695] = 3,
    ACTIONS(758), 1,
      aux_sym_account_subdirective_token1,
    STATE(211), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(760), 2,
      anon_sym_,
      anon_sym_TAB,
  [5706] = 3,
    ACTIONS(762), 1,
      aux_sym_account_subdirective_token1,
    STATE(211), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(760), 2,
      anon_sym_,
      anon_sym_TAB,
  [5717] = 4,
    ACTIONS(33), 1,
      aux_sym_word_directive_token2,
    ACTIONS(57), 1,
      sym__2d,
    STATE(201), 1,
      sym__single_date,
    STATE(312), 1,
      sym__4d,
  [5730] = 3,
    ACTIONS(764), 1,
      anon_sym_LF,
    STATE(203), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(766), 2,
      anon_sym_,
      anon_sym_TAB,
  [5741] = 3,
    ACTIONS(768), 1,
      sym_payee,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(521), 2,
      anon_sym_,
      anon_sym_TAB,
  [5752] = 3,
    ACTIONS(768), 1,
      sym_payee,
    STATE(241), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(770), 2,
      anon_sym_,
      anon_sym_TAB,
  [5763] = 2,
    ACTIONS(772), 1,
      anon_sym_LF,
    ACTIONS(774), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [5772] = 3,
    ACTIONS(776), 1,
      sym_time,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [5783] = 2,
    ACTIONS(778), 1,
      anon_sym_LF,
    ACTIONS(780), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [5792] = 2,
    ACTIONS(449), 1,
      anon_sym_LF,
    ACTIONS(782), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [5801] = 3,
    ACTIONS(784), 1,
      anon_sym_EQ,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [5812] = 3,
    ACTIONS(786), 1,
      aux_sym_block_comment_token1,
    STATE(225), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(731), 2,
      anon_sym_,
      anon_sym_TAB,
  [5823] = 3,
    ACTIONS(455), 1,
      aux_sym_block_comment_token1,
    STATE(225), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(788), 2,
      anon_sym_,
      anon_sym_TAB,
  [5834] = 3,
    ACTIONS(791), 1,
      anon_sym_LF,
    STATE(255), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(793), 2,
      anon_sym_,
      anon_sym_TAB,
  [5845] = 3,
    ACTIONS(795), 1,
      sym_payee,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(521), 2,
      anon_sym_,
      anon_sym_TAB,
  [5856] = 3,
    ACTIONS(683), 1,
      sym_payee,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(521), 2,
      anon_sym_,
      anon_sym_TAB,
  [5867] = 1,
    ACTIONS(797), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [5874] = 3,
    ACTIONS(799), 1,
      sym_payee,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(521), 2,
      anon_sym_,
      anon_sym_TAB,
  [5885] = 1,
    ACTIONS(801), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5892] = 3,
    ACTIONS(803), 1,
      aux_sym_account_subdirective_token1,
    STATE(211), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(760), 2,
      anon_sym_,
      anon_sym_TAB,
  [5903] = 3,
    ACTIONS(805), 1,
      aux_sym_account_subdirective_token1,
    STATE(211), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(760), 2,
      anon_sym_,
      anon_sym_TAB,
  [5914] = 3,
    ACTIONS(807), 1,
      aux_sym_account_subdirective_token1,
    STATE(211), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(760), 2,
      anon_sym_,
      anon_sym_TAB,
  [5925] = 1,
    ACTIONS(809), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [5932] = 3,
    ACTIONS(733), 1,
      sym_payee,
    STATE(227), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(811), 2,
      anon_sym_,
      anon_sym_TAB,
  [5943] = 2,
    ACTIONS(427), 1,
      anon_sym_LF,
    ACTIONS(813), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [5952] = 1,
    ACTIONS(709), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [5959] = 3,
    ACTIONS(815), 1,
      aux_sym_word_directive_token1,
    STATE(244), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(817), 2,
      anon_sym_,
      anon_sym_TAB,
  [5970] = 3,
    ACTIONS(819), 1,
      aux_sym_tag_directive_token1,
    STATE(108), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(647), 2,
      anon_sym_,
      anon_sym_TAB,
  [5981] = 3,
    ACTIONS(821), 1,
      sym_payee,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(521), 2,
      anon_sym_,
      anon_sym_TAB,
  [5992] = 3,
    ACTIONS(821), 1,
      sym_payee,
    STATE(204), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(823), 2,
      anon_sym_,
      anon_sym_TAB,
  [6003] = 2,
    ACTIONS(825), 1,
      anon_sym_LF,
    ACTIONS(827), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6012] = 3,
    ACTIONS(455), 1,
      aux_sym_word_directive_token1,
    STATE(244), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(829), 2,
      anon_sym_,
      anon_sym_TAB,
  [6023] = 3,
    ACTIONS(832), 1,
      sym_time,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [6034] = 3,
    ACTIONS(834), 1,
      sym_payee,
    STATE(217), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(836), 2,
      anon_sym_,
      anon_sym_TAB,
  [6045] = 3,
    ACTIONS(838), 1,
      aux_sym_option_value_token1,
    STATE(250), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(715), 2,
      anon_sym_,
      anon_sym_TAB,
  [6056] = 3,
    ACTIONS(840), 1,
      sym_time,
    STATE(245), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(842), 2,
      anon_sym_,
      anon_sym_TAB,
  [6067] = 3,
    ACTIONS(840), 1,
      sym_time,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [6078] = 3,
    ACTIONS(455), 1,
      aux_sym_option_value_token1,
    STATE(250), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(844), 2,
      anon_sym_,
      anon_sym_TAB,
  [6089] = 1,
    ACTIONS(847), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [6096] = 3,
    ACTIONS(849), 1,
      sym_time,
    STATE(220), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(851), 2,
      anon_sym_,
      anon_sym_TAB,
  [6107] = 2,
    ACTIONS(853), 1,
      anon_sym_LF,
    ACTIONS(855), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [6116] = 3,
    ACTIONS(849), 1,
      sym_time,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(495), 2,
      anon_sym_,
      anon_sym_TAB,
  [6127] = 3,
    ACTIONS(857), 1,
      aux_sym_block_comment_token1,
    STATE(225), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(731), 2,
      anon_sym_,
      anon_sym_TAB,
  [6138] = 3,
    ACTIONS(859), 1,
      anon_sym_EQ,
    STATE(223), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(861), 2,
      anon_sym_,
      anon_sym_TAB,
  [6149] = 2,
    STATE(134), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(863), 2,
      anon_sym_,
      anon_sym_TAB,
  [6157] = 2,
    STATE(84), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(865), 2,
      anon_sym_,
      anon_sym_TAB,
  [6165] = 3,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(867), 1,
      anon_sym_LF,
    STATE(189), 1,
      sym_note,
  [6175] = 3,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(869), 1,
      anon_sym_LF,
    STATE(185), 1,
      sym_note,
  [6185] = 2,
    STATE(140), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(871), 2,
      anon_sym_,
      anon_sym_TAB,
  [6193] = 2,
    STATE(72), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(873), 2,
      anon_sym_,
      anon_sym_TAB,
  [6201] = 2,
    STATE(143), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(875), 2,
      anon_sym_,
      anon_sym_TAB,
  [6209] = 2,
    STATE(128), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(877), 2,
      anon_sym_,
      anon_sym_TAB,
  [6217] = 2,
    STATE(133), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(879), 2,
      anon_sym_,
      anon_sym_TAB,
  [6225] = 3,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(661), 1,
      anon_sym_LF,
    STATE(190), 1,
      sym_note,
  [6235] = 2,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(881), 2,
      anon_sym_,
      anon_sym_TAB,
  [6243] = 2,
    STATE(214), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(883), 2,
      anon_sym_,
      anon_sym_TAB,
  [6251] = 2,
    STATE(213), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(885), 2,
      anon_sym_,
      anon_sym_TAB,
  [6259] = 2,
    STATE(208), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(887), 2,
      anon_sym_,
      anon_sym_TAB,
  [6267] = 1,
    ACTIONS(889), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [6273] = 3,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(691), 1,
      anon_sym_LF,
    STATE(202), 1,
      sym_note,
  [6283] = 2,
    STATE(139), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(891), 2,
      anon_sym_,
      anon_sym_TAB,
  [6291] = 2,
    STATE(141), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(893), 2,
      anon_sym_,
      anon_sym_TAB,
  [6299] = 2,
    STATE(207), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(895), 2,
      anon_sym_,
      anon_sym_TAB,
  [6307] = 2,
    STATE(247), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(897), 2,
      anon_sym_,
      anon_sym_TAB,
  [6315] = 2,
    STATE(239), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(899), 2,
      anon_sym_,
      anon_sym_TAB,
  [6323] = 2,
    STATE(194), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(901), 2,
      anon_sym_,
      anon_sym_TAB,
  [6331] = 2,
    STATE(232), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(903), 2,
      anon_sym_,
      anon_sym_TAB,
  [6339] = 2,
    STATE(240), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(905), 2,
      anon_sym_,
      anon_sym_TAB,
  [6347] = 2,
    STATE(234), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(907), 2,
      anon_sym_,
      anon_sym_TAB,
  [6355] = 2,
    STATE(153), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(909), 2,
      anon_sym_,
      anon_sym_TAB,
  [6363] = 2,
    STATE(233), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(911), 2,
      anon_sym_,
      anon_sym_TAB,
  [6371] = 1,
    ACTIONS(913), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [6376] = 2,
    ACTIONS(915), 1,
      aux_sym_option_value_token1,
    STATE(327), 1,
      sym_option_value,
  [6383] = 1,
    ACTIONS(449), 1,
      anon_sym_LF,
  [6387] = 1,
    ACTIONS(917), 1,
      anon_sym_LF,
  [6391] = 1,
    ACTIONS(919), 1,
      sym__2d,
  [6395] = 1,
    ACTIONS(921), 1,
      aux_sym_block_comment_token1,
  [6399] = 1,
    ACTIONS(923), 1,
      anon_sym_LF,
  [6403] = 1,
    ACTIONS(925), 1,
      anon_sym_LF,
  [6407] = 1,
    ACTIONS(604), 1,
      anon_sym_LF,
  [6411] = 1,
    ACTIONS(927), 1,
      sym_account_name,
  [6415] = 1,
    ACTIONS(929), 1,
      sym__2d,
  [6419] = 1,
    ACTIONS(931), 1,
      anon_sym_LF,
  [6423] = 1,
    ACTIONS(483), 1,
      anon_sym_LF,
  [6427] = 1,
    ACTIONS(933), 1,
      anon_sym_LF,
  [6431] = 1,
    ACTIONS(935), 1,
      sym_account_name,
  [6435] = 1,
    ACTIONS(581), 1,
      anon_sym_LF,
  [6439] = 1,
    ACTIONS(477), 1,
      anon_sym_LF,
  [6443] = 1,
    ACTIONS(937), 1,
      anon_sym_LF,
  [6447] = 1,
    ACTIONS(939), 1,
      sym__2d,
  [6451] = 1,
    ACTIONS(941), 1,
      anon_sym_LF,
  [6455] = 1,
    ACTIONS(943), 1,
      anon_sym_LF,
  [6459] = 1,
    ACTIONS(649), 1,
      anon_sym_LF,
  [6463] = 1,
    ACTIONS(945), 1,
      anon_sym_LF,
  [6467] = 1,
    ACTIONS(947), 1,
      anon_sym_LF,
  [6471] = 1,
    ACTIONS(949), 1,
      anon_sym_EQ,
  [6475] = 1,
    ACTIONS(951), 1,
      anon_sym_LF,
  [6479] = 1,
    ACTIONS(669), 1,
      anon_sym_LF,
  [6483] = 1,
    ACTIONS(953), 1,
      aux_sym_quantity_token1,
  [6487] = 1,
    ACTIONS(955), 1,
      sym__dsep,
  [6491] = 1,
    ACTIONS(957), 1,
      anon_sym_LF,
  [6495] = 1,
    ACTIONS(959), 1,
      anon_sym_LF,
  [6499] = 1,
    ACTIONS(961), 1,
      anon_sym_LF,
  [6503] = 1,
    ACTIONS(963), 1,
      anon_sym_LF,
  [6507] = 1,
    ACTIONS(965), 1,
      anon_sym_LF,
  [6511] = 1,
    ACTIONS(967), 1,
      ts_builtin_sym_end,
  [6515] = 1,
    ACTIONS(969), 1,
      sym__dsep,
  [6519] = 1,
    ACTIONS(445), 1,
      anon_sym_LF,
  [6523] = 1,
    ACTIONS(825), 1,
      anon_sym_LF,
  [6527] = 1,
    ACTIONS(971), 1,
      anon_sym_LF,
  [6531] = 1,
    ACTIONS(973), 1,
      aux_sym_code_token1,
  [6535] = 1,
    ACTIONS(617), 1,
      sym__dsep,
  [6539] = 1,
    ACTIONS(975), 1,
      anon_sym_LF,
  [6543] = 1,
    ACTIONS(977), 1,
      anon_sym_LF,
  [6547] = 1,
    ACTIONS(979), 1,
      anon_sym_LF,
  [6551] = 1,
    ACTIONS(981), 1,
      anon_sym_RPAREN,
  [6555] = 1,
    ACTIONS(981), 1,
      anon_sym_RBRACK,
  [6559] = 1,
    ACTIONS(983), 1,
      anon_sym_LF,
  [6563] = 1,
    ACTIONS(985), 1,
      aux_sym_option_value_token1,
  [6567] = 1,
    ACTIONS(772), 1,
      anon_sym_LF,
  [6571] = 1,
    ACTIONS(987), 1,
      anon_sym_LF,
  [6575] = 1,
    ACTIONS(989), 1,
      anon_sym_LF,
  [6579] = 1,
    ACTIONS(991), 1,
      anon_sym_LF,
  [6583] = 1,
    ACTIONS(993), 1,
      anon_sym_LF,
  [6587] = 1,
    ACTIONS(995), 1,
      anon_sym_LF,
  [6591] = 1,
    ACTIONS(997), 1,
      aux_sym_option_token1,
  [6595] = 1,
    ACTIONS(999), 1,
      anon_sym_LF,
  [6599] = 1,
    ACTIONS(1001), 1,
      anon_sym_LF,
  [6603] = 1,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
  [6607] = 1,
    ACTIONS(1005), 1,
      anon_sym_LF,
  [6611] = 1,
    ACTIONS(1007), 1,
      aux_sym_quantity_token1,
  [6615] = 1,
    ACTIONS(1009), 1,
      anon_sym_LF,
  [6619] = 1,
    ACTIONS(1011), 1,
      anon_sym_LF,
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
  [SMALL_STATE(48)] = 2008,
  [SMALL_STATE(49)] = 2045,
  [SMALL_STATE(50)] = 2082,
  [SMALL_STATE(51)] = 2119,
  [SMALL_STATE(52)] = 2156,
  [SMALL_STATE(53)] = 2193,
  [SMALL_STATE(54)] = 2230,
  [SMALL_STATE(55)] = 2267,
  [SMALL_STATE(56)] = 2301,
  [SMALL_STATE(57)] = 2337,
  [SMALL_STATE(58)] = 2371,
  [SMALL_STATE(59)] = 2405,
  [SMALL_STATE(60)] = 2439,
  [SMALL_STATE(61)] = 2473,
  [SMALL_STATE(62)] = 2507,
  [SMALL_STATE(63)] = 2541,
  [SMALL_STATE(64)] = 2575,
  [SMALL_STATE(65)] = 2609,
  [SMALL_STATE(66)] = 2643,
  [SMALL_STATE(67)] = 2677,
  [SMALL_STATE(68)] = 2711,
  [SMALL_STATE(69)] = 2745,
  [SMALL_STATE(70)] = 2779,
  [SMALL_STATE(71)] = 2813,
  [SMALL_STATE(72)] = 2847,
  [SMALL_STATE(73)] = 2877,
  [SMALL_STATE(74)] = 2929,
  [SMALL_STATE(75)] = 2981,
  [SMALL_STATE(76)] = 3033,
  [SMALL_STATE(77)] = 3082,
  [SMALL_STATE(78)] = 3131,
  [SMALL_STATE(79)] = 3180,
  [SMALL_STATE(80)] = 3202,
  [SMALL_STATE(81)] = 3237,
  [SMALL_STATE(82)] = 3254,
  [SMALL_STATE(83)] = 3275,
  [SMALL_STATE(84)] = 3303,
  [SMALL_STATE(85)] = 3331,
  [SMALL_STATE(86)] = 3363,
  [SMALL_STATE(87)] = 3391,
  [SMALL_STATE(88)] = 3419,
  [SMALL_STATE(89)] = 3451,
  [SMALL_STATE(90)] = 3479,
  [SMALL_STATE(91)] = 3507,
  [SMALL_STATE(92)] = 3539,
  [SMALL_STATE(93)] = 3567,
  [SMALL_STATE(94)] = 3595,
  [SMALL_STATE(95)] = 3623,
  [SMALL_STATE(96)] = 3651,
  [SMALL_STATE(97)] = 3683,
  [SMALL_STATE(98)] = 3712,
  [SMALL_STATE(99)] = 3739,
  [SMALL_STATE(100)] = 3768,
  [SMALL_STATE(101)] = 3783,
  [SMALL_STATE(102)] = 3812,
  [SMALL_STATE(103)] = 3827,
  [SMALL_STATE(104)] = 3856,
  [SMALL_STATE(105)] = 3876,
  [SMALL_STATE(106)] = 3900,
  [SMALL_STATE(107)] = 3923,
  [SMALL_STATE(108)] = 3946,
  [SMALL_STATE(109)] = 3963,
  [SMALL_STATE(110)] = 3984,
  [SMALL_STATE(111)] = 4007,
  [SMALL_STATE(112)] = 4030,
  [SMALL_STATE(113)] = 4053,
  [SMALL_STATE(114)] = 4076,
  [SMALL_STATE(115)] = 4099,
  [SMALL_STATE(116)] = 4122,
  [SMALL_STATE(117)] = 4145,
  [SMALL_STATE(118)] = 4168,
  [SMALL_STATE(119)] = 4191,
  [SMALL_STATE(120)] = 4214,
  [SMALL_STATE(121)] = 4237,
  [SMALL_STATE(122)] = 4258,
  [SMALL_STATE(123)] = 4281,
  [SMALL_STATE(124)] = 4304,
  [SMALL_STATE(125)] = 4327,
  [SMALL_STATE(126)] = 4350,
  [SMALL_STATE(127)] = 4373,
  [SMALL_STATE(128)] = 4396,
  [SMALL_STATE(129)] = 4419,
  [SMALL_STATE(130)] = 4435,
  [SMALL_STATE(131)] = 4447,
  [SMALL_STATE(132)] = 4463,
  [SMALL_STATE(133)] = 4483,
  [SMALL_STATE(134)] = 4499,
  [SMALL_STATE(135)] = 4515,
  [SMALL_STATE(136)] = 4527,
  [SMALL_STATE(137)] = 4539,
  [SMALL_STATE(138)] = 4555,
  [SMALL_STATE(139)] = 4577,
  [SMALL_STATE(140)] = 4599,
  [SMALL_STATE(141)] = 4615,
  [SMALL_STATE(142)] = 4637,
  [SMALL_STATE(143)] = 4653,
  [SMALL_STATE(144)] = 4675,
  [SMALL_STATE(145)] = 4697,
  [SMALL_STATE(146)] = 4719,
  [SMALL_STATE(147)] = 4741,
  [SMALL_STATE(148)] = 4761,
  [SMALL_STATE(149)] = 4777,
  [SMALL_STATE(150)] = 4797,
  [SMALL_STATE(151)] = 4819,
  [SMALL_STATE(152)] = 4841,
  [SMALL_STATE(153)] = 4863,
  [SMALL_STATE(154)] = 4879,
  [SMALL_STATE(155)] = 4901,
  [SMALL_STATE(156)] = 4921,
  [SMALL_STATE(157)] = 4941,
  [SMALL_STATE(158)] = 4961,
  [SMALL_STATE(159)] = 4978,
  [SMALL_STATE(160)] = 4995,
  [SMALL_STATE(161)] = 5006,
  [SMALL_STATE(162)] = 5023,
  [SMALL_STATE(163)] = 5034,
  [SMALL_STATE(164)] = 5051,
  [SMALL_STATE(165)] = 5068,
  [SMALL_STATE(166)] = 5085,
  [SMALL_STATE(167)] = 5096,
  [SMALL_STATE(168)] = 5113,
  [SMALL_STATE(169)] = 5130,
  [SMALL_STATE(170)] = 5147,
  [SMALL_STATE(171)] = 5164,
  [SMALL_STATE(172)] = 5181,
  [SMALL_STATE(173)] = 5198,
  [SMALL_STATE(174)] = 5209,
  [SMALL_STATE(175)] = 5218,
  [SMALL_STATE(176)] = 5235,
  [SMALL_STATE(177)] = 5252,
  [SMALL_STATE(178)] = 5267,
  [SMALL_STATE(179)] = 5284,
  [SMALL_STATE(180)] = 5295,
  [SMALL_STATE(181)] = 5312,
  [SMALL_STATE(182)] = 5329,
  [SMALL_STATE(183)] = 5343,
  [SMALL_STATE(184)] = 5353,
  [SMALL_STATE(185)] = 5367,
  [SMALL_STATE(186)] = 5379,
  [SMALL_STATE(187)] = 5393,
  [SMALL_STATE(188)] = 5405,
  [SMALL_STATE(189)] = 5419,
  [SMALL_STATE(190)] = 5431,
  [SMALL_STATE(191)] = 5443,
  [SMALL_STATE(192)] = 5451,
  [SMALL_STATE(193)] = 5465,
  [SMALL_STATE(194)] = 5479,
  [SMALL_STATE(195)] = 5493,
  [SMALL_STATE(196)] = 5507,
  [SMALL_STATE(197)] = 5521,
  [SMALL_STATE(198)] = 5529,
  [SMALL_STATE(199)] = 5543,
  [SMALL_STATE(200)] = 5557,
  [SMALL_STATE(201)] = 5571,
  [SMALL_STATE(202)] = 5579,
  [SMALL_STATE(203)] = 5591,
  [SMALL_STATE(204)] = 5602,
  [SMALL_STATE(205)] = 5613,
  [SMALL_STATE(206)] = 5620,
  [SMALL_STATE(207)] = 5631,
  [SMALL_STATE(208)] = 5642,
  [SMALL_STATE(209)] = 5653,
  [SMALL_STATE(210)] = 5664,
  [SMALL_STATE(211)] = 5675,
  [SMALL_STATE(212)] = 5686,
  [SMALL_STATE(213)] = 5695,
  [SMALL_STATE(214)] = 5706,
  [SMALL_STATE(215)] = 5717,
  [SMALL_STATE(216)] = 5730,
  [SMALL_STATE(217)] = 5741,
  [SMALL_STATE(218)] = 5752,
  [SMALL_STATE(219)] = 5763,
  [SMALL_STATE(220)] = 5772,
  [SMALL_STATE(221)] = 5783,
  [SMALL_STATE(222)] = 5792,
  [SMALL_STATE(223)] = 5801,
  [SMALL_STATE(224)] = 5812,
  [SMALL_STATE(225)] = 5823,
  [SMALL_STATE(226)] = 5834,
  [SMALL_STATE(227)] = 5845,
  [SMALL_STATE(228)] = 5856,
  [SMALL_STATE(229)] = 5867,
  [SMALL_STATE(230)] = 5874,
  [SMALL_STATE(231)] = 5885,
  [SMALL_STATE(232)] = 5892,
  [SMALL_STATE(233)] = 5903,
  [SMALL_STATE(234)] = 5914,
  [SMALL_STATE(235)] = 5925,
  [SMALL_STATE(236)] = 5932,
  [SMALL_STATE(237)] = 5943,
  [SMALL_STATE(238)] = 5952,
  [SMALL_STATE(239)] = 5959,
  [SMALL_STATE(240)] = 5970,
  [SMALL_STATE(241)] = 5981,
  [SMALL_STATE(242)] = 5992,
  [SMALL_STATE(243)] = 6003,
  [SMALL_STATE(244)] = 6012,
  [SMALL_STATE(245)] = 6023,
  [SMALL_STATE(246)] = 6034,
  [SMALL_STATE(247)] = 6045,
  [SMALL_STATE(248)] = 6056,
  [SMALL_STATE(249)] = 6067,
  [SMALL_STATE(250)] = 6078,
  [SMALL_STATE(251)] = 6089,
  [SMALL_STATE(252)] = 6096,
  [SMALL_STATE(253)] = 6107,
  [SMALL_STATE(254)] = 6116,
  [SMALL_STATE(255)] = 6127,
  [SMALL_STATE(256)] = 6138,
  [SMALL_STATE(257)] = 6149,
  [SMALL_STATE(258)] = 6157,
  [SMALL_STATE(259)] = 6165,
  [SMALL_STATE(260)] = 6175,
  [SMALL_STATE(261)] = 6185,
  [SMALL_STATE(262)] = 6193,
  [SMALL_STATE(263)] = 6201,
  [SMALL_STATE(264)] = 6209,
  [SMALL_STATE(265)] = 6217,
  [SMALL_STATE(266)] = 6225,
  [SMALL_STATE(267)] = 6235,
  [SMALL_STATE(268)] = 6243,
  [SMALL_STATE(269)] = 6251,
  [SMALL_STATE(270)] = 6259,
  [SMALL_STATE(271)] = 6267,
  [SMALL_STATE(272)] = 6273,
  [SMALL_STATE(273)] = 6283,
  [SMALL_STATE(274)] = 6291,
  [SMALL_STATE(275)] = 6299,
  [SMALL_STATE(276)] = 6307,
  [SMALL_STATE(277)] = 6315,
  [SMALL_STATE(278)] = 6323,
  [SMALL_STATE(279)] = 6331,
  [SMALL_STATE(280)] = 6339,
  [SMALL_STATE(281)] = 6347,
  [SMALL_STATE(282)] = 6355,
  [SMALL_STATE(283)] = 6363,
  [SMALL_STATE(284)] = 6371,
  [SMALL_STATE(285)] = 6376,
  [SMALL_STATE(286)] = 6383,
  [SMALL_STATE(287)] = 6387,
  [SMALL_STATE(288)] = 6391,
  [SMALL_STATE(289)] = 6395,
  [SMALL_STATE(290)] = 6399,
  [SMALL_STATE(291)] = 6403,
  [SMALL_STATE(292)] = 6407,
  [SMALL_STATE(293)] = 6411,
  [SMALL_STATE(294)] = 6415,
  [SMALL_STATE(295)] = 6419,
  [SMALL_STATE(296)] = 6423,
  [SMALL_STATE(297)] = 6427,
  [SMALL_STATE(298)] = 6431,
  [SMALL_STATE(299)] = 6435,
  [SMALL_STATE(300)] = 6439,
  [SMALL_STATE(301)] = 6443,
  [SMALL_STATE(302)] = 6447,
  [SMALL_STATE(303)] = 6451,
  [SMALL_STATE(304)] = 6455,
  [SMALL_STATE(305)] = 6459,
  [SMALL_STATE(306)] = 6463,
  [SMALL_STATE(307)] = 6467,
  [SMALL_STATE(308)] = 6471,
  [SMALL_STATE(309)] = 6475,
  [SMALL_STATE(310)] = 6479,
  [SMALL_STATE(311)] = 6483,
  [SMALL_STATE(312)] = 6487,
  [SMALL_STATE(313)] = 6491,
  [SMALL_STATE(314)] = 6495,
  [SMALL_STATE(315)] = 6499,
  [SMALL_STATE(316)] = 6503,
  [SMALL_STATE(317)] = 6507,
  [SMALL_STATE(318)] = 6511,
  [SMALL_STATE(319)] = 6515,
  [SMALL_STATE(320)] = 6519,
  [SMALL_STATE(321)] = 6523,
  [SMALL_STATE(322)] = 6527,
  [SMALL_STATE(323)] = 6531,
  [SMALL_STATE(324)] = 6535,
  [SMALL_STATE(325)] = 6539,
  [SMALL_STATE(326)] = 6543,
  [SMALL_STATE(327)] = 6547,
  [SMALL_STATE(328)] = 6551,
  [SMALL_STATE(329)] = 6555,
  [SMALL_STATE(330)] = 6559,
  [SMALL_STATE(331)] = 6563,
  [SMALL_STATE(332)] = 6567,
  [SMALL_STATE(333)] = 6571,
  [SMALL_STATE(334)] = 6575,
  [SMALL_STATE(335)] = 6579,
  [SMALL_STATE(336)] = 6583,
  [SMALL_STATE(337)] = 6587,
  [SMALL_STATE(338)] = 6591,
  [SMALL_STATE(339)] = 6595,
  [SMALL_STATE(340)] = 6599,
  [SMALL_STATE(341)] = 6603,
  [SMALL_STATE(342)] = 6607,
  [SMALL_STATE(343)] = 6611,
  [SMALL_STATE(344)] = 6615,
  [SMALL_STATE(345)] = 6619,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(226),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(340),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(216),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(338),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(338),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(263),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(282),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(280),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(278),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(277),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(276),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(275),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(312),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(274),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(273),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(270),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(257),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(267),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(265),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(264),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(112),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(112),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(113),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(262),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(319),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 5),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 5),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 4),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2), SHIFT_REPEAT(98),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 5),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 5),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2), SHIFT_REPEAT(110),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 4),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 4),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_directive_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2), SHIFT_REPEAT(200),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_periodic_xact, 5),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_periodic_xact, 5),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(80),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 9),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 9),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_subdirective, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_subdirective, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 14),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 14),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 13),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 13),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_subdirective, 4),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_subdirective, 4),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 12),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 12),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 11),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 11),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 4),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 4),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 10),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 10),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_subdirective, 4),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_subdirective, 4),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_subdirective, 4),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_subdirective, 4),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_subdirective, 4),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_subdirective, 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 9),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 9),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_subdirective, 4),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_subdirective, 4),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 3),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 6),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 6),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 5),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 5),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 5),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 5),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 6),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 6),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 4),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 4),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 4),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 4),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(56),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 5),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 7),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 7),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 7),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 7),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(79),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(82),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(104),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(104),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(108),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(109),
  [539] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(342),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [544] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(206),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(121),
  [588] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(301),
  [591] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(224),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [612] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(131),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 3),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 3),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 3),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 5),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(177),
  [700] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(177),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 3),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [751] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(211),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [788] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(225),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3, .production_id = 2),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 3),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1, .production_id = 1),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 7),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [829] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(244),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [844] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(250),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 2),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 5),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval, 1),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 10),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 9),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 8),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 3),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 3),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [967] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 7),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_value, 1),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 4),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 6),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 5),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 5),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 5),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
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
