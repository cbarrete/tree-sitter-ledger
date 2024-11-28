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
#define STATE_COUNT 440
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 147
#define ALIAS_COUNT 0
#define TOKEN_COUNT 93
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 16
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
  anon_sym_LBRACE = 83,
  anon_sym_RBRACE = 84,
  anon_sym_LBRACE_LBRACE = 85,
  anon_sym_RBRACE_RBRACE = 86,
  anon_sym_AT = 87,
  anon_sym_AT_AT = 88,
  anon_sym_ = 89,
  anon_sym_TAB = 90,
  anon_sym_2 = 91,
  anon_sym_TAB2 = 92,
  sym_source_file = 93,
  sym_journal_item = 94,
  sym_block_comment = 95,
  sym_test = 96,
  sym_option = 97,
  sym_option_value = 98,
  sym_directive = 99,
  sym_account_directive = 100,
  sym_account_subdirective = 101,
  sym_commodity_directive = 102,
  sym_commodity_subdirective = 103,
  sym_tag_directive = 104,
  sym_word_directive = 105,
  sym_filename = 106,
  sym_char_directive = 107,
  sym_alias_subdirective = 108,
  sym_default_subdirective = 109,
  sym_format_subdirective = 110,
  sym_note_subdirective = 111,
  sym_assert_subdirective = 112,
  sym_check_subdirective = 113,
  sym_check_in = 114,
  sym_check_out = 115,
  sym_xact = 116,
  sym_plain_xact = 117,
  sym_periodic_xact = 118,
  sym_interval = 119,
  sym_automated_xact = 120,
  sym__xact_date = 121,
  sym_date = 122,
  sym_effective_date = 123,
  sym__4d = 124,
  sym__single_date = 125,
  sym_status = 126,
  sym_code = 127,
  sym_note = 128,
  sym_posting = 129,
  sym_account = 130,
  sym_amount = 131,
  sym_quantity = 132,
  sym_negative_quantity = 133,
  sym_commodity = 134,
  sym_lot_price = 135,
  sym_price = 136,
  sym_balance_assertion = 137,
  aux_sym_source_file_repeat1 = 138,
  aux_sym_block_comment_repeat1 = 139,
  aux_sym_account_directive_repeat1 = 140,
  aux_sym_commodity_directive_repeat1 = 141,
  aux_sym_tag_directive_repeat1 = 142,
  aux_sym_plain_xact_repeat1 = 143,
  aux_sym_note_repeat1 = 144,
  aux_sym_note_repeat2 = 145,
  aux_sym_whitespace_repeat1 = 146,
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
  [39] = 19,
  [40] = 40,
  [41] = 20,
  [42] = 42,
  [43] = 43,
  [44] = 25,
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
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 55,
  [92] = 83,
  [93] = 10,
  [94] = 83,
  [95] = 19,
  [96] = 20,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 25,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
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
  [123] = 51,
  [124] = 124,
  [125] = 45,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 83,
  [138] = 83,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 139,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 143,
  [148] = 148,
  [149] = 148,
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
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
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
  [198] = 197,
  [199] = 83,
  [200] = 200,
  [201] = 188,
  [202] = 202,
  [203] = 83,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 206,
  [214] = 214,
  [215] = 204,
  [216] = 196,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
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
  [234] = 205,
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
  [259] = 83,
  [260] = 260,
  [261] = 261,
  [262] = 83,
  [263] = 83,
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
  [280] = 83,
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
  [291] = 231,
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
  [311] = 256,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 83,
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
  [326] = 279,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 275,
  [337] = 269,
  [338] = 268,
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
  [354] = 270,
  [355] = 355,
  [356] = 267,
  [357] = 277,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 363,
  [365] = 365,
  [366] = 362,
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
  [378] = 378,
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
  [390] = 390,
  [391] = 391,
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
  [429] = 401,
  [430] = 368,
  [431] = 402,
  [432] = 398,
  [433] = 433,
  [434] = 384,
  [435] = 368,
  [436] = 402,
  [437] = 433,
  [438] = 438,
  [439] = 439,
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
      if (eof) ADVANCE(224);
      if (lookahead == '\t') ADVANCE(637);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == ' ') ADVANCE(631);
      if (lookahead == '!') ADVANCE(448);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == ')') ADVANCE(453);
      if (lookahead == '*') ADVANCE(446);
      if (lookahead == '+') ADVANCE(466);
      if (lookahead == '-') ADVANCE(310);
      if (lookahead == ';') ADVANCE(456);
      if (lookahead == '=') ADVANCE(315);
      if (lookahead == '@') ADVANCE(629);
      if (lookahead == 'A') ADVANCE(361);
      if (lookahead == 'B') ADVANCE(547);
      if (lookahead == 'C') ADVANCE(377);
      if (lookahead == 'D') ADVANCE(373);
      if (lookahead == 'E') ADVANCE(571);
      if (lookahead == 'I') ADVANCE(401);
      if (lookahead == 'N') ADVANCE(369);
      if (lookahead == 'O') ADVANCE(409);
      if (lookahead == 'P') ADVANCE(381);
      if (lookahead == 'Y') ADVANCE(365);
      if (lookahead == '[') ADVANCE(458);
      if (lookahead == ']') ADVANCE(460);
      if (lookahead == 'a') ADVANCE(478);
      if (lookahead == 'b') ADVANCE(532);
      if (lookahead == 'c') ADVANCE(498);
      if (lookahead == 'd') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead == 'f') ADVANCE(513);
      if (lookahead == 'i') ADVANCE(396);
      if (lookahead == 'n') ADVANCE(514);
      if (lookahead == 'o') ADVANCE(405);
      if (lookahead == 'p') ADVANCE(472);
      if (lookahead == 't') ADVANCE(473);
      if (lookahead == 'y') ADVANCE(469);
      if (lookahead == '{') ADVANCE(624);
      if (lookahead == '}') ADVANCE(626);
      if (lookahead == '~') ADVANCE(412);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(561);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(570);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(541);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(622);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(580);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(637);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == ' ') ADVANCE(631);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '+') ADVANCE(466);
      if (lookahead == '-') ADVANCE(309);
      if (lookahead == ';') ADVANCE(456);
      if (lookahead == '=') ADVANCE(315);
      if (lookahead == '@') ADVANCE(629);
      if (lookahead == '{') ADVANCE(624);
      if (lookahead == '}') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(622);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(637);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == ' ') ADVANCE(631);
      if (lookahead == ';') ADVANCE(456);
      if (lookahead == '=') ADVANCE(315);
      if (lookahead == ']') ADVANCE(460);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(637);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == ' ') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(442);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(637);
      if (lookahead == ' ') ADVANCE(631);
      if (lookahead == '!') ADVANCE(448);
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == '*') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(454);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(637);
      if (lookahead == ' ') ADVANCE(631);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == ';') ADVANCE(456);
      if (lookahead == '=') ADVANCE(315);
      if (lookahead == '@') ADVANCE(629);
      if (lookahead == '{') ADVANCE(624);
      if (lookahead == '}') ADVANCE(626);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(622);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(637);
      if (lookahead == ' ') ADVANCE(631);
      if (lookahead == '+') ADVANCE(466);
      if (lookahead == '-') ADVANCE(309);
      if (lookahead == 'D') ADVANCE(126);
      if (lookahead == 'E') ADVANCE(199);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 'p') ADVANCE(40);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(152);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(172);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(198);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(143);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(637);
      if (lookahead == ' ') ADVANCE(631);
      if (lookahead == '+') ADVANCE(466);
      if (lookahead == '-') ADVANCE(309);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'c') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(637);
      if (lookahead == ' ') ADVANCE(631);
      if (lookahead == '[') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(457);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(637);
      if (lookahead == ' ') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(461);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(639);
      if (lookahead == ' ') ADVANCE(631);
      if (lookahead == '!') ADVANCE(449);
      if (lookahead == '(') ADVANCE(451);
      if (lookahead == '*') ADVANCE(447);
      if (lookahead == ';') ADVANCE(456);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(464);
      END_STATE();
    case 11:
      if (lookahead == '\t') ADVANCE(639);
      if (lookahead == ' ') ADVANCE(631);
      if (lookahead == '(') ADVANCE(451);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(464);
      END_STATE();
    case 12:
      if (lookahead == '\t') ADVANCE(638);
      if (lookahead == ' ') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == '\t') ADVANCE(645);
      if (lookahead == ' ') ADVANCE(644);
      END_STATE();
    case 14:
      if (lookahead == '\t') ADVANCE(643);
      if (lookahead == ' ') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(346);
      END_STATE();
    case 15:
      if (lookahead == '\t') ADVANCE(641);
      if (lookahead == ' ') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(317);
      END_STATE();
    case 16:
      if (lookahead == '\t') ADVANCE(642);
      if (lookahead == ' ') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '[') ADVANCE(458);
      if (lookahead != 0) ADVANCE(457);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'c') ADVANCE(23);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(19);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(24);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'h') ADVANCE(20);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'k') ADVANCE(395);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'r') ADVANCE(27);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 's') ADVANCE(26);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 's') ADVANCE(21);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 't') ADVANCE(392);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(324);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(214);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(215);
      END_STATE();
    case 36:
      if (lookahead == 'V') ADVANCE(141);
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
          lookahead == 'e') ADVANCE(178);
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
      if (lookahead == 'd') ADVANCE(295);
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
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(153);
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
      if (lookahead == 'f') ADVANCE(347);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(333);
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
      if (lookahead == 'k') ADVANCE(393);
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
      if (lookahead == 'l') ADVANCE(322);
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
      if (lookahead == 'r') ADVANCE(351);
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
      if (lookahead == 's') ADVANCE(342);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(386);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(331);
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
      if (lookahead == 'y') ADVANCE(327);
      END_STATE();
    case 120:
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 121:
      if (lookahead == '}') ADVANCE(628);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 131:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(122);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(170);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(196);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(136);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 132:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(124);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(171);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(197);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(139);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(138);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 148:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(416);
      END_STATE();
    case 149:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(187);
      END_STATE();
    case 150:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(161);
      END_STATE();
    case 151:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(163);
      END_STATE();
    case 152:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 153:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 154:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(415);
      END_STATE();
    case 155:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(185);
      END_STATE();
    case 156:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(159);
      END_STATE();
    case 157:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(162);
      END_STATE();
    case 158:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(202);
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
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 165:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(173);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(147);
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
          lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 169:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(195);
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
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 174:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 175:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 176:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 177:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 178:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 179:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 180:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 181:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 182:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 183:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 184:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(419);
      END_STATE();
    case 185:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(420);
      END_STATE();
    case 186:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(423);
      END_STATE();
    case 187:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(421);
      END_STATE();
    case 188:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(422);
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
          lookahead == 't') ADVANCE(150);
      END_STATE();
    case 192:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(140);
      END_STATE();
    case 193:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(144);
      END_STATE();
    case 194:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 195:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      END_STATE();
    case 196:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 197:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 198:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 199:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(141);
      END_STATE();
    case 200:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(414);
      END_STATE();
    case 201:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(184);
      END_STATE();
    case 202:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(424);
      END_STATE();
    case 203:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(31);
      END_STATE();
    case 204:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(426);
      END_STATE();
    case 205:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(436);
      END_STATE();
    case 206:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(430);
      END_STATE();
    case 207:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 208:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(432);
      END_STATE();
    case 209:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 210:
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 217:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(464);
      END_STATE();
    case 218:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(463);
      END_STATE();
    case 219:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(464);
      END_STATE();
    case 220:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(314);
      END_STATE();
    case 221:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(317);
      END_STATE();
    case 222:
      if (eof) ADVANCE(224);
      if (lookahead == '\t') ADVANCE(637);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == ' ') ADVANCE(631);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(29);
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
      if (lookahead == 'a') ADVANCE(584);
      if (lookahead == 'b') ADVANCE(618);
      if (lookahead == 'c') ADVANCE(607);
      if (lookahead == 'd') ADVANCE(591);
      if (lookahead == 'e') ADVANCE(604);
      if (lookahead == 'i') ADVANCE(398);
      if (lookahead == 'o') ADVANCE(406);
      if (lookahead == 't') ADVANCE(581);
      if (lookahead == 'y') ADVANCE(592);
      if (lookahead == '}') ADVANCE(121);
      if (lookahead == '~') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(622);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(621);
      END_STATE();
    case 223:
      if (eof) ADVANCE(224);
      if (lookahead == '\t') ADVANCE(637);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == ' ') ADVANCE(631);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(29);
      if (lookahead == '-') ADVANCE(310);
      if (lookahead == '=') ADVANCE(315);
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(376);
      if (lookahead == 'D') ADVANCE(372);
      if (lookahead == 'I') ADVANCE(400);
      if (lookahead == 'N') ADVANCE(368);
      if (lookahead == 'O') ADVANCE(408);
      if (lookahead == 'P') ADVANCE(380);
      if (lookahead == 'Y') ADVANCE(364);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'b') ADVANCE(115);
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(397);
      if (lookahead == 'o') ADVANCE(404);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == 'y') ADVANCE(57);
      if (lookahead == '}') ADVANCE(625);
      if (lookahead == '~') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_comment);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(640);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == ' ') ADVANCE(633);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead != 0) ADVANCE(293);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(640);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == ' ') ADVANCE(633);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead != 0) ADVANCE(293);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(640);
      if (lookahead == ' ') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(256);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == 'o') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'f') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'g') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'i') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'k') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'l') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'r') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'y') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (eof) ADVANCE(224);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(234);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == '=') ADVANCE(316);
      if (lookahead == 'A') ADVANCE(363);
      if (lookahead == 'C') ADVANCE(379);
      if (lookahead == 'D') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(403);
      if (lookahead == 'N') ADVANCE(371);
      if (lookahead == 'O') ADVANCE(411);
      if (lookahead == 'P') ADVANCE(383);
      if (lookahead == 'Y') ADVANCE(367);
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 'b') ADVANCE(287);
      if (lookahead == 'c') ADVANCE(271);
      if (lookahead == 'd') ADVANCE(248);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == 'i') ADVANCE(399);
      if (lookahead == 'o') ADVANCE(407);
      if (lookahead == 't') ADVANCE(235);
      if (lookahead == 'y') ADVANCE(249);
      if (lookahead == '~') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (lookahead != 0) ADVANCE(293);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == ' ') ADVANCE(45);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ' ') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_end);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_endcomment);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_endcomment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_test);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_endtest);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_endtest);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
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
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
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
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_option_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_account);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_account);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_account);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_eval);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_eval);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_account_subdirective_token1);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_payee);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_payee);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_nomarket);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_nomarket);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_tag);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_tag_directive_token1);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_include);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_alias);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_word_directive_token1);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'a') ADVANCE(534);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(580);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_def);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(574);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_year);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_word_directive_token2);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_bucket);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_A);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(537);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_Y);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_N);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_N);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_N);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(548);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(580);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_D);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_C);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_C);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_C);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_P);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_format);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_note);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_assert);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_assert);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_check);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'n') ADVANCE(481);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(586);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_I);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_I);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_I);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_o);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_O);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_interval_token1);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_interval_token2);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_interval_token3);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_interval_token4);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_interval_token5);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_interval_token6);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_interval_token7);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_interval_token8);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_interval_token9);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_interval_token10);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_interval_token11);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_interval_token11);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_interval_token12);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_interval_token12);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_interval_token13);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_interval_token13);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_interval_token14);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_interval_token14);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_interval_token15);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_interval_token15);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_interval_token16);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_interval_token16);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_interval_token17);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_interval_token17);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__dsep);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__2d);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__2d);
      if (lookahead == ':') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(440);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(439);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(462);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(462);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(462);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_query);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_note_token1);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(462);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_note_token2);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(462);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(462);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__quantity);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == ' ') ADVANCE(131);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'A') ADVANCE(565);
      if (lookahead == 'a') ADVANCE(470);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(580);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'E') ADVANCE(537);
      if (lookahead == 'e') ADVANCE(468);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'R') ADVANCE(552);
      if (lookahead == 'r') ADVANCE(352);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'V') ADVANCE(539);
      if (lookahead == 'n') ADVANCE(483);
      if (lookahead == 'v') ADVANCE(474);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'a') ADVANCE(536);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(580);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'a') ADVANCE(497);
      if (lookahead == 'e') ADVANCE(519);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(580);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'a') ADVANCE(504);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(564);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(580);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'a') ADVANCE(520);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(580);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'a') ADVANCE(518);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(580);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'a') ADVANCE(525);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(580);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'c') ADVANCE(482);
      if (lookahead == 'l') ADVANCE(499);
      if (lookahead == 's') ADVANCE(521);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'c') ADVANCE(502);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'c') ADVANCE(501);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'c') ADVANCE(505);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'c') ADVANCE(515);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'd') ADVANCE(296);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'd') ADVANCE(500);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'd') ADVANCE(489);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(496);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(548);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(580);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(389);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(326);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(339);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(516);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(524);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(480);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(488);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(529);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(512);
      if (lookahead == 'o') ADVANCE(484);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'f') ADVANCE(348);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'g') ADVANCE(334);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'h') ADVANCE(492);
      if (lookahead == 'o') ADVANCE(508);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'i') ADVANCE(475);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'i') ADVANCE(530);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'k') ADVANCE(394);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'k') ADVANCE(491);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'k') ADVANCE(494);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'l') ADVANCE(323);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'l') ADVANCE(533);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'l') ADVANCE(528);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'm') ADVANCE(495);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'm') ADVANCE(507);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'm') ADVANCE(476);
      if (lookahead == 't') ADVANCE(487);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'm') ADVANCE(477);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'n') ADVANCE(526);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'n') ADVANCE(527);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'o') ADVANCE(517);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'o') ADVANCE(509);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'o') ADVANCE(531);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'r') ADVANCE(523);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'r') ADVANCE(510);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'r') ADVANCE(503);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 's') ADVANCE(522);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 's') ADVANCE(343);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 's') ADVANCE(490);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 't') ADVANCE(304);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 't') ADVANCE(391);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 't') ADVANCE(357);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 't') ADVANCE(387);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 't') ADVANCE(319);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 't') ADVANCE(228);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 't') ADVANCE(385);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 't') ADVANCE(332);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 't') ADVANCE(535);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'u') ADVANCE(511);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'u') ADVANCE(479);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(558);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'u') ADVANCE(485);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'u') ADVANCE(506);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'y') ADVANCE(328);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'y') ADVANCE(493);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(565);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(580);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(563);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(580);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(564);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(549);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(540);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(550);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(566);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(542);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(554);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(556);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(558);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(551);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(553);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(555);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(572);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(574);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(575);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(576);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(577);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(578);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(579);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(562);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(544);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(567);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(569);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(559);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(560);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(568);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(573);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(552);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(557);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(545);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(543);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(546);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(538);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(539);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(425);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(467);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(437);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(427);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(431);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(429);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(433);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(435);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == '\n') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(610);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(621);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(609);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(621);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(611);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(621);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(587);
      if (lookahead == 'l') ADVANCE(598);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(600);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(601);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(608);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(299);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(599);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(593);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(596);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(582);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(340);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(613);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == 'o') ADVANCE(589);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'f') ADVANCE(349);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'g') ADVANCE(335);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(583);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(616);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(594);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(619);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(595);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(602);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(588);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(614);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(615);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(603);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(617);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(353);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(612);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(344);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(305);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(358);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(320);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(229);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(620);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(605);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(585);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(590);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'y') ADVANCE(329);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(621);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_commodity_token3);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(627);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(628);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(630);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(324);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(317);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(346);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(324);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(462);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(317);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(455);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(346);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 223},
  [2] = {.lex_state = 223},
  [3] = {.lex_state = 223},
  [4] = {.lex_state = 223},
  [5] = {.lex_state = 223},
  [6] = {.lex_state = 223},
  [7] = {.lex_state = 223},
  [8] = {.lex_state = 223},
  [9] = {.lex_state = 223},
  [10] = {.lex_state = 222},
  [11] = {.lex_state = 223},
  [12] = {.lex_state = 223},
  [13] = {.lex_state = 223},
  [14] = {.lex_state = 223},
  [15] = {.lex_state = 223},
  [16] = {.lex_state = 223},
  [17] = {.lex_state = 223},
  [18] = {.lex_state = 223},
  [19] = {.lex_state = 222},
  [20] = {.lex_state = 222},
  [21] = {.lex_state = 223},
  [22] = {.lex_state = 223},
  [23] = {.lex_state = 223},
  [24] = {.lex_state = 223},
  [25] = {.lex_state = 222},
  [26] = {.lex_state = 223},
  [27] = {.lex_state = 223},
  [28] = {.lex_state = 223},
  [29] = {.lex_state = 223},
  [30] = {.lex_state = 223},
  [31] = {.lex_state = 223},
  [32] = {.lex_state = 223},
  [33] = {.lex_state = 223},
  [34] = {.lex_state = 223},
  [35] = {.lex_state = 223},
  [36] = {.lex_state = 223},
  [37] = {.lex_state = 223},
  [38] = {.lex_state = 223},
  [39] = {.lex_state = 223},
  [40] = {.lex_state = 223},
  [41] = {.lex_state = 223},
  [42] = {.lex_state = 223},
  [43] = {.lex_state = 223},
  [44] = {.lex_state = 223},
  [45] = {.lex_state = 223},
  [46] = {.lex_state = 223},
  [47] = {.lex_state = 223},
  [48] = {.lex_state = 223},
  [49] = {.lex_state = 223},
  [50] = {.lex_state = 223},
  [51] = {.lex_state = 223},
  [52] = {.lex_state = 223},
  [53] = {.lex_state = 223},
  [54] = {.lex_state = 223},
  [55] = {.lex_state = 223},
  [56] = {.lex_state = 223},
  [57] = {.lex_state = 223},
  [58] = {.lex_state = 223},
  [59] = {.lex_state = 294},
  [60] = {.lex_state = 294},
  [61] = {.lex_state = 294},
  [62] = {.lex_state = 294},
  [63] = {.lex_state = 294},
  [64] = {.lex_state = 294},
  [65] = {.lex_state = 294},
  [66] = {.lex_state = 294},
  [67] = {.lex_state = 223},
  [68] = {.lex_state = 223},
  [69] = {.lex_state = 223},
  [70] = {.lex_state = 223},
  [71] = {.lex_state = 223},
  [72] = {.lex_state = 223},
  [73] = {.lex_state = 223},
  [74] = {.lex_state = 223},
  [75] = {.lex_state = 223},
  [76] = {.lex_state = 223},
  [77] = {.lex_state = 223},
  [78] = {.lex_state = 223},
  [79] = {.lex_state = 223},
  [80] = {.lex_state = 223},
  [81] = {.lex_state = 223},
  [82] = {.lex_state = 223},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 223},
  [141] = {.lex_state = 231},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 232},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 232},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 231},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 223},
  [153] = {.lex_state = 223},
  [154] = {.lex_state = 232},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 231},
  [159] = {.lex_state = 231},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 232},
  [162] = {.lex_state = 231},
  [163] = {.lex_state = 232},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 223},
  [167] = {.lex_state = 223},
  [168] = {.lex_state = 11},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 11},
  [174] = {.lex_state = 11},
  [175] = {.lex_state = 11},
  [176] = {.lex_state = 11},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 11},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 11},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 8},
  [189] = {.lex_state = 11},
  [190] = {.lex_state = 11},
  [191] = {.lex_state = 11},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 11},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 8},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 17},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 11},
  [204] = {.lex_state = 231},
  [205] = {.lex_state = 8},
  [206] = {.lex_state = 231},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 232},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 232},
  [216] = {.lex_state = 17},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 15},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 11},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 15},
  [234] = {.lex_state = 17},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 223},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 12},
  [255] = {.lex_state = 12},
  [256] = {.lex_state = 233},
  [257] = {.lex_state = 3},
  [258] = {.lex_state = 3},
  [259] = {.lex_state = 12},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 2},
  [262] = {.lex_state = 14},
  [263] = {.lex_state = 15},
  [264] = {.lex_state = 2},
  [265] = {.lex_state = 3},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 9},
  [268] = {.lex_state = 9},
  [269] = {.lex_state = 9},
  [270] = {.lex_state = 9},
  [271] = {.lex_state = 4},
  [272] = {.lex_state = 4},
  [273] = {.lex_state = 3},
  [274] = {.lex_state = 12},
  [275] = {.lex_state = 9},
  [276] = {.lex_state = 12},
  [277] = {.lex_state = 9},
  [278] = {.lex_state = 3},
  [279] = {.lex_state = 9},
  [280] = {.lex_state = 16},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 4},
  [283] = {.lex_state = 4},
  [284] = {.lex_state = 3},
  [285] = {.lex_state = 4},
  [286] = {.lex_state = 233},
  [287] = {.lex_state = 233},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 16},
  [290] = {.lex_state = 223},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 222},
  [293] = {.lex_state = 2},
  [294] = {.lex_state = 14},
  [295] = {.lex_state = 15},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 2},
  [299] = {.lex_state = 2},
  [300] = {.lex_state = 2},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 2},
  [303] = {.lex_state = 2},
  [304] = {.lex_state = 4},
  [305] = {.lex_state = 4},
  [306] = {.lex_state = 2},
  [307] = {.lex_state = 223},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 12},
  [311] = {.lex_state = 233},
  [312] = {.lex_state = 222},
  [313] = {.lex_state = 3},
  [314] = {.lex_state = 223},
  [315] = {.lex_state = 233},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 4},
  [318] = {.lex_state = 223},
  [319] = {.lex_state = 223},
  [320] = {.lex_state = 222},
  [321] = {.lex_state = 222},
  [322] = {.lex_state = 3},
  [323] = {.lex_state = 3},
  [324] = {.lex_state = 4},
  [325] = {.lex_state = 4},
  [326] = {.lex_state = 18},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 18},
  [337] = {.lex_state = 18},
  [338] = {.lex_state = 18},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 18},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 18},
  [357] = {.lex_state = 18},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 221},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 6},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 452},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 5},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 5},
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
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 5},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 3},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 6},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 3},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 221},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 219},
  [421] = {.lex_state = 219},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 220},
  [426] = {.lex_state = 3},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 6},
  [431] = {.lex_state = 6},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 6},
  [436] = {.lex_state = 6},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
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
    [sym_source_file] = STATE(393),
    [sym_journal_item] = STATE(3),
    [sym_block_comment] = STATE(74),
    [sym_test] = STATE(74),
    [sym_option] = STATE(69),
    [sym_directive] = STATE(74),
    [sym_account_directive] = STATE(69),
    [sym_commodity_directive] = STATE(69),
    [sym_tag_directive] = STATE(69),
    [sym_word_directive] = STATE(391),
    [sym_char_directive] = STATE(391),
    [sym_check_in] = STATE(390),
    [sym_check_out] = STATE(390),
    [sym_xact] = STATE(74),
    [sym_plain_xact] = STATE(82),
    [sym_periodic_xact] = STATE(82),
    [sym_automated_xact] = STATE(82),
    [sym__xact_date] = STATE(208),
    [sym_date] = STATE(211),
    [sym__4d] = STATE(381),
    [sym__single_date] = STATE(214),
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
    STATE(208), 1,
      sym__xact_date,
    STATE(211), 1,
      sym_date,
    STATE(214), 1,
      sym__single_date,
    STATE(381), 1,
      sym__4d,
    ACTIONS(138), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(390), 2,
      sym_check_in,
      sym_check_out,
    STATE(391), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(82), 3,
      sym_plain_xact,
      sym_periodic_xact,
      sym_automated_xact,
    STATE(69), 4,
      sym_option,
      sym_account_directive,
      sym_commodity_directive,
      sym_tag_directive,
    STATE(74), 4,
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
    STATE(208), 1,
      sym__xact_date,
    STATE(211), 1,
      sym_date,
    STATE(214), 1,
      sym__single_date,
    STATE(381), 1,
      sym__4d,
    ACTIONS(55), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(390), 2,
      sym_check_in,
      sym_check_out,
    STATE(391), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(82), 3,
      sym_plain_xact,
      sym_periodic_xact,
      sym_automated_xact,
    STATE(69), 4,
      sym_option,
      sym_account_directive,
      sym_commodity_directive,
      sym_tag_directive,
    STATE(74), 4,
      sym_block_comment,
      sym_test,
      sym_directive,
      sym_xact,
  [260] = 6,
    STATE(133), 1,
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
    STATE(28), 5,
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
    STATE(133), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(161), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    ACTIONS(159), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(28), 5,
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
    STATE(133), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(155), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(4), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    ACTIONS(166), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(28), 5,
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
    STATE(155), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(172), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(9), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(170), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(38), 4,
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
    STATE(155), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(172), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(176), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(38), 4,
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
    STATE(155), 1,
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
    STATE(38), 4,
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
  [575] = 7,
    ACTIONS(189), 1,
      aux_sym_commodity_token1,
    STATE(51), 1,
      sym_commodity,
    STATE(198), 1,
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
    STATE(243), 1,
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
    STATE(243), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(199), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(203), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(13), 3,
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
    STATE(243), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(209), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(207), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(13), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(205), 27,
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
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
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
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(223), 2,
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
  [860] = 5,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(223), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(227), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(225), 27,
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
  [906] = 5,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(223), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(231), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(229), 27,
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
  [952] = 5,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(223), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(235), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(233), 27,
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
  [998] = 2,
    ACTIONS(237), 11,
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
    ACTIONS(239), 24,
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
  [1038] = 2,
    ACTIONS(241), 11,
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
    ACTIONS(243), 24,
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
  [1078] = 5,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(223), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(247), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(245), 27,
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
  [1124] = 5,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(223), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(251), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(249), 27,
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
  [1170] = 5,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(223), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(255), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(253), 27,
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
  [1216] = 5,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(223), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(259), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(257), 27,
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
  [1262] = 2,
    ACTIONS(261), 11,
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
    ACTIONS(263), 24,
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
  [1302] = 5,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(223), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(267), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(265), 27,
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
  [1348] = 5,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(223), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(271), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(269), 27,
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
  [1394] = 2,
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
  [1431] = 2,
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
  [1468] = 2,
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
  [1505] = 2,
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
  [1542] = 2,
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
  [1579] = 2,
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
  [1616] = 2,
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
  [1653] = 2,
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
  [1690] = 2,
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
  [1727] = 2,
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
  [1764] = 2,
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
  [1801] = 2,
    ACTIONS(239), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(237), 29,
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
  [1838] = 2,
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
  [1875] = 2,
    ACTIONS(243), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(241), 29,
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
  [1912] = 2,
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
  [1949] = 2,
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
  [1986] = 2,
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
  [2023] = 2,
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
  [2060] = 2,
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
  [2097] = 2,
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
  [2134] = 2,
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
  [2171] = 2,
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
  [2208] = 2,
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
  [2245] = 2,
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
  [2282] = 2,
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
  [2319] = 2,
    ACTIONS(363), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(361), 29,
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
  [2356] = 2,
    ACTIONS(367), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(365), 29,
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
  [2393] = 2,
    ACTIONS(371), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(369), 29,
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
  [2430] = 2,
    ACTIONS(375), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(373), 29,
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
  [2467] = 2,
    ACTIONS(379), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(377), 29,
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
  [2504] = 2,
    ACTIONS(383), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(381), 29,
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
  [2541] = 3,
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
  [2579] = 3,
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
  [2617] = 3,
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
  [2655] = 3,
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
  [2693] = 3,
    ACTIONS(413), 1,
      aux_sym_block_comment_token1,
    ACTIONS(409), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(411), 27,
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
  [2731] = 3,
    ACTIONS(419), 1,
      aux_sym_block_comment_token1,
    ACTIONS(415), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(417), 27,
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
  [2769] = 3,
    ACTIONS(425), 1,
      aux_sym_block_comment_token1,
    ACTIONS(421), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(423), 27,
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
  [2807] = 3,
    ACTIONS(431), 1,
      aux_sym_block_comment_token1,
    ACTIONS(427), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(429), 27,
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
  [2845] = 2,
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
  [2880] = 2,
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
  [2915] = 2,
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
  [2950] = 2,
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
  [2985] = 2,
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
  [3020] = 2,
    ACTIONS(447), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(445), 27,
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
  [3055] = 2,
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
  [3090] = 2,
    ACTIONS(451), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(449), 27,
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
  [3125] = 2,
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
  [3160] = 2,
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
  [3195] = 2,
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
  [3230] = 2,
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
  [3265] = 2,
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
  [3300] = 2,
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
  [3335] = 2,
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
  [3370] = 2,
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
  [3405] = 3,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(467), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(465), 26,
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
  [3441] = 20,
    ACTIONS(470), 1,
      anon_sym_LF,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(99), 1,
      sym_amount,
    STATE(121), 1,
      sym_lot_price,
    STATE(146), 1,
      sym_price,
    STATE(149), 1,
      sym_commodity,
    STATE(223), 1,
      sym_balance_assertion,
    STATE(379), 1,
      sym_note,
    ACTIONS(492), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3506] = 20,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    ACTIONS(494), 1,
      anon_sym_LF,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(97), 1,
      sym_amount,
    STATE(127), 1,
      sym_lot_price,
    STATE(149), 1,
      sym_commodity,
    STATE(151), 1,
      sym_price,
    STATE(209), 1,
      sym_balance_assertion,
    STATE(423), 1,
      sym_note,
    ACTIONS(496), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3571] = 20,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    ACTIONS(498), 1,
      anon_sym_LF,
    STATE(88), 1,
      aux_sym_whitespace_repeat1,
    STATE(98), 1,
      sym_amount,
    STATE(122), 1,
      sym_lot_price,
    STATE(149), 1,
      sym_commodity,
    STATE(150), 1,
      sym_price,
    STATE(210), 1,
      sym_balance_assertion,
    STATE(397), 1,
      sym_note,
    ACTIONS(500), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3636] = 19,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(99), 1,
      sym_amount,
    STATE(121), 1,
      sym_lot_price,
    STATE(146), 1,
      sym_price,
    STATE(149), 1,
      sym_commodity,
    STATE(223), 1,
      sym_balance_assertion,
    STATE(379), 1,
      sym_note,
    ACTIONS(502), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3698] = 19,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(101), 1,
      sym_amount,
    STATE(128), 1,
      sym_lot_price,
    STATE(149), 1,
      sym_commodity,
    STATE(157), 1,
      sym_price,
    STATE(200), 1,
      sym_balance_assertion,
    STATE(438), 1,
      sym_note,
    ACTIONS(502), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3760] = 19,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(98), 1,
      sym_amount,
    STATE(122), 1,
      sym_lot_price,
    STATE(149), 1,
      sym_commodity,
    STATE(150), 1,
      sym_price,
    STATE(210), 1,
      sym_balance_assertion,
    STATE(397), 1,
      sym_note,
    ACTIONS(502), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3822] = 4,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    STATE(348), 1,
      sym_interval,
    ACTIONS(506), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(504), 17,
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
  [3852] = 2,
    ACTIONS(371), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(369), 14,
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
  [3874] = 4,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(510), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(508), 4,
      sym__2d,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(465), 10,
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
  [3900] = 6,
    STATE(123), 1,
      sym_commodity,
    STATE(197), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(513), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(187), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
    ACTIONS(185), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
  [3929] = 4,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(508), 2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(515), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(465), 10,
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
  [3953] = 2,
    ACTIONS(239), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(237), 11,
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
  [3972] = 2,
    ACTIONS(243), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(241), 11,
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
  [3991] = 13,
    ACTIONS(470), 1,
      anon_sym_LF,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(112), 1,
      aux_sym_whitespace_repeat1,
    STATE(121), 1,
      sym_lot_price,
    STATE(146), 1,
      sym_price,
    STATE(223), 1,
      sym_balance_assertion,
    STATE(379), 1,
      sym_note,
    ACTIONS(518), 2,
      anon_sym_,
      anon_sym_TAB,
  [4032] = 13,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    ACTIONS(520), 1,
      anon_sym_LF,
    STATE(107), 1,
      aux_sym_whitespace_repeat1,
    STATE(128), 1,
      sym_lot_price,
    STATE(157), 1,
      sym_price,
    STATE(200), 1,
      sym_balance_assertion,
    STATE(438), 1,
      sym_note,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [4073] = 13,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    ACTIONS(498), 1,
      anon_sym_LF,
    STATE(119), 1,
      aux_sym_whitespace_repeat1,
    STATE(122), 1,
      sym_lot_price,
    STATE(150), 1,
      sym_price,
    STATE(210), 1,
      sym_balance_assertion,
    STATE(397), 1,
      sym_note,
    ACTIONS(524), 2,
      anon_sym_,
      anon_sym_TAB,
  [4114] = 2,
    ACTIONS(263), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(261), 11,
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
  [4133] = 13,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    ACTIONS(526), 1,
      anon_sym_LF,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    STATE(126), 1,
      sym_lot_price,
    STATE(164), 1,
      sym_price,
    STATE(220), 1,
      sym_balance_assertion,
    STATE(403), 1,
      sym_note,
    ACTIONS(528), 2,
      anon_sym_,
      anon_sym_TAB,
  [4174] = 9,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(149), 1,
      sym_commodity,
    STATE(411), 1,
      sym_amount,
    ACTIONS(502), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4206] = 12,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(124), 1,
      sym_lot_price,
    STATE(165), 1,
      sym_price,
    STATE(222), 1,
      sym_balance_assertion,
    STATE(369), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [4244] = 9,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(115), 1,
      aux_sym_whitespace_repeat1,
    STATE(149), 1,
      sym_commodity,
    STATE(290), 1,
      sym_amount,
    ACTIONS(532), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4276] = 9,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(113), 1,
      aux_sym_whitespace_repeat1,
    STATE(149), 1,
      sym_commodity,
    STATE(242), 1,
      sym_amount,
    ACTIONS(534), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4308] = 9,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    STATE(149), 1,
      sym_commodity,
    STATE(292), 1,
      sym_amount,
    ACTIONS(536), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4340] = 12,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(126), 1,
      sym_lot_price,
    STATE(164), 1,
      sym_price,
    STATE(220), 1,
      sym_balance_assertion,
    STATE(403), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [4378] = 9,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(110), 1,
      aux_sym_whitespace_repeat1,
    STATE(149), 1,
      sym_commodity,
    STATE(387), 1,
      sym_amount,
    ACTIONS(538), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4410] = 9,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(118), 1,
      aux_sym_whitespace_repeat1,
    STATE(149), 1,
      sym_commodity,
    STATE(406), 1,
      sym_amount,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4442] = 9,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(149), 1,
      sym_commodity,
    STATE(406), 1,
      sym_amount,
    ACTIONS(502), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4474] = 9,
    ACTIONS(542), 1,
      anon_sym_DASH,
    ACTIONS(544), 1,
      sym__quantity,
    ACTIONS(546), 1,
      anon_sym_PLUS,
    STATE(42), 1,
      sym_amount,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(148), 1,
      sym_commodity,
    ACTIONS(502), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(10), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4506] = 12,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(122), 1,
      sym_lot_price,
    STATE(150), 1,
      sym_price,
    STATE(210), 1,
      sym_balance_assertion,
    STATE(397), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [4544] = 9,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(149), 1,
      sym_commodity,
    STATE(237), 1,
      sym_amount,
    ACTIONS(502), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4576] = 9,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(149), 1,
      sym_commodity,
    STATE(321), 1,
      sym_amount,
    ACTIONS(502), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4608] = 9,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(149), 1,
      sym_commodity,
    STATE(319), 1,
      sym_amount,
    ACTIONS(502), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4640] = 9,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(149), 1,
      sym_commodity,
    STATE(316), 1,
      sym_amount,
    ACTIONS(502), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4672] = 9,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(116), 1,
      aux_sym_whitespace_repeat1,
    STATE(149), 1,
      sym_commodity,
    STATE(288), 1,
      sym_amount,
    ACTIONS(548), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4704] = 9,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(149), 1,
      sym_commodity,
    STATE(392), 1,
      sym_amount,
    ACTIONS(502), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(93), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [4736] = 12,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(128), 1,
      sym_lot_price,
    STATE(157), 1,
      sym_price,
    STATE(200), 1,
      sym_balance_assertion,
    STATE(438), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [4774] = 11,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_LBRACK,
    ACTIONS(556), 1,
      sym_account_name,
    ACTIONS(558), 1,
      anon_sym_,
    ACTIONS(560), 1,
      anon_sym_TAB,
    STATE(138), 1,
      aux_sym_whitespace_repeat1,
    STATE(179), 1,
      sym_status,
    STATE(257), 1,
      sym_account,
    STATE(428), 1,
      sym_note,
    ACTIONS(550), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [4809] = 10,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    ACTIONS(498), 1,
      anon_sym_LF,
    STATE(129), 1,
      aux_sym_whitespace_repeat1,
    STATE(150), 1,
      sym_price,
    STATE(210), 1,
      sym_balance_assertion,
    STATE(397), 1,
      sym_note,
    ACTIONS(562), 2,
      anon_sym_,
      anon_sym_TAB,
  [4841] = 10,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    ACTIONS(520), 1,
      anon_sym_LF,
    STATE(130), 1,
      aux_sym_whitespace_repeat1,
    STATE(157), 1,
      sym_price,
    STATE(200), 1,
      sym_balance_assertion,
    STATE(438), 1,
      sym_note,
    ACTIONS(564), 2,
      anon_sym_,
      anon_sym_TAB,
  [4873] = 2,
    ACTIONS(355), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(353), 8,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [4889] = 10,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    ACTIONS(566), 1,
      anon_sym_LF,
    STATE(132), 1,
      aux_sym_whitespace_repeat1,
    STATE(160), 1,
      sym_price,
    STATE(224), 1,
      sym_balance_assertion,
    STATE(371), 1,
      sym_note,
    ACTIONS(568), 2,
      anon_sym_,
      anon_sym_TAB,
  [4921] = 2,
    ACTIONS(331), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(329), 8,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [4937] = 10,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    ACTIONS(570), 1,
      anon_sym_LF,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    STATE(165), 1,
      sym_price,
    STATE(222), 1,
      sym_balance_assertion,
    STATE(369), 1,
      sym_note,
    ACTIONS(572), 2,
      anon_sym_,
      anon_sym_TAB,
  [4969] = 10,
    ACTIONS(470), 1,
      anon_sym_LF,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(134), 1,
      aux_sym_whitespace_repeat1,
    STATE(146), 1,
      sym_price,
    STATE(223), 1,
      sym_balance_assertion,
    STATE(379), 1,
      sym_note,
    ACTIONS(574), 2,
      anon_sym_,
      anon_sym_TAB,
  [5001] = 10,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    ACTIONS(526), 1,
      anon_sym_LF,
    STATE(135), 1,
      aux_sym_whitespace_repeat1,
    STATE(164), 1,
      sym_price,
    STATE(220), 1,
      sym_balance_assertion,
    STATE(403), 1,
      sym_note,
    ACTIONS(576), 2,
      anon_sym_,
      anon_sym_TAB,
  [5033] = 9,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(157), 1,
      sym_price,
    STATE(200), 1,
      sym_balance_assertion,
    STATE(438), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [5062] = 9,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(164), 1,
      sym_price,
    STATE(220), 1,
      sym_balance_assertion,
    STATE(403), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [5091] = 9,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(160), 1,
      sym_price,
    STATE(224), 1,
      sym_balance_assertion,
    STATE(371), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [5120] = 9,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(156), 1,
      sym_price,
    STATE(221), 1,
      sym_balance_assertion,
    STATE(374), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [5149] = 8,
    ACTIONS(580), 1,
      anon_sym_alias,
    ACTIONS(582), 1,
      anon_sym_default,
    ACTIONS(584), 1,
      anon_sym_note,
    ACTIONS(586), 1,
      anon_sym_assert,
    ACTIONS(588), 1,
      anon_sym_check,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(506), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(578), 2,
      anon_sym_eval,
      anon_sym_payee,
  [5176] = 9,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(150), 1,
      sym_price,
    STATE(210), 1,
      sym_balance_assertion,
    STATE(397), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [5205] = 9,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      anon_sym_AT,
    ACTIONS(490), 1,
      anon_sym_AT_AT,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(165), 1,
      sym_price,
    STATE(222), 1,
      sym_balance_assertion,
    STATE(369), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [5234] = 7,
    ACTIONS(592), 1,
      anon_sym_LPAREN,
    ACTIONS(594), 1,
      sym_payee,
    STATE(199), 1,
      aux_sym_whitespace_repeat1,
    STATE(207), 1,
      sym_code,
    STATE(219), 1,
      sym_status,
    ACTIONS(590), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(596), 2,
      anon_sym_,
      anon_sym_TAB,
  [5258] = 4,
    STATE(137), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(508), 2,
      anon_sym_assert,
      anon_sym_check,
    ACTIONS(598), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(465), 4,
      anon_sym_DASH,
      aux_sym_tag_directive_token1,
      sym__quantity,
      anon_sym_PLUS,
  [5276] = 5,
    ACTIONS(465), 1,
      anon_sym_SEMI,
    ACTIONS(601), 1,
      anon_sym_,
    ACTIONS(604), 1,
      anon_sym_TAB,
    STATE(138), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(508), 5,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [5296] = 6,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(137), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(607), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(125), 2,
      sym_quantity,
      sym_negative_quantity,
  [5317] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(214), 1,
      sym__single_date,
    STATE(302), 1,
      sym_date,
    STATE(381), 1,
      sym__4d,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [5340] = 7,
    ACTIONS(407), 1,
      anon_sym_endtest,
    ACTIONS(609), 1,
      anon_sym_LF,
    ACTIONS(611), 1,
      aux_sym_block_comment_token1,
    ACTIONS(613), 1,
      anon_sym_end,
    STATE(162), 1,
      aux_sym_block_comment_repeat1,
    STATE(256), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(615), 2,
      anon_sym_,
      anon_sym_TAB,
  [5363] = 6,
    ACTIONS(617), 1,
      anon_sym_DASH,
    ACTIONS(619), 1,
      sym__quantity,
    ACTIONS(621), 1,
      anon_sym_PLUS,
    STATE(137), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(607), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(45), 2,
      sym_quantity,
      sym_negative_quantity,
  [5384] = 6,
    ACTIONS(623), 1,
      anon_sym_LF,
    ACTIONS(626), 1,
      aux_sym_block_comment_token1,
    STATE(143), 1,
      aux_sym_block_comment_repeat1,
    STATE(311), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(629), 2,
      anon_sym_end,
      anon_sym_endcomment,
    ACTIONS(631), 2,
      anon_sym_,
      anon_sym_TAB,
  [5405] = 2,
    ACTIONS(636), 1,
      sym__dsep,
    ACTIONS(634), 7,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_TAB,
  [5418] = 7,
    ACTIONS(431), 1,
      anon_sym_endcomment,
    ACTIONS(638), 1,
      anon_sym_LF,
    ACTIONS(640), 1,
      aux_sym_block_comment_token1,
    ACTIONS(642), 1,
      anon_sym_end,
    STATE(163), 1,
      aux_sym_block_comment_repeat1,
    STATE(311), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(644), 2,
      anon_sym_,
      anon_sym_TAB,
  [5441] = 7,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(498), 1,
      anon_sym_LF,
    STATE(192), 1,
      aux_sym_whitespace_repeat1,
    STATE(210), 1,
      sym_balance_assertion,
    STATE(397), 1,
      sym_note,
    ACTIONS(646), 2,
      anon_sym_,
      anon_sym_TAB,
  [5464] = 6,
    ACTIONS(648), 1,
      anon_sym_LF,
    ACTIONS(651), 1,
      aux_sym_block_comment_token1,
    STATE(147), 1,
      aux_sym_block_comment_repeat1,
    STATE(256), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(629), 2,
      anon_sym_end,
      anon_sym_endtest,
    ACTIONS(654), 2,
      anon_sym_,
      anon_sym_TAB,
  [5485] = 6,
    ACTIONS(617), 1,
      anon_sym_DASH,
    ACTIONS(619), 1,
      sym__quantity,
    ACTIONS(621), 1,
      anon_sym_PLUS,
    STATE(142), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(657), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(51), 2,
      sym_quantity,
      sym_negative_quantity,
  [5506] = 6,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      sym__quantity,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    STATE(139), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(659), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(123), 2,
      sym_quantity,
      sym_negative_quantity,
  [5527] = 7,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(520), 1,
      anon_sym_LF,
    STATE(184), 1,
      aux_sym_whitespace_repeat1,
    STATE(200), 1,
      sym_balance_assertion,
    STATE(438), 1,
      sym_note,
    ACTIONS(661), 2,
      anon_sym_,
      anon_sym_TAB,
  [5550] = 7,
    ACTIONS(470), 1,
      anon_sym_LF,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(186), 1,
      aux_sym_whitespace_repeat1,
    STATE(223), 1,
      sym_balance_assertion,
    STATE(379), 1,
      sym_note,
    ACTIONS(663), 2,
      anon_sym_,
      anon_sym_TAB,
  [5573] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(140), 1,
      aux_sym_whitespace_repeat1,
    STATE(214), 1,
      sym__single_date,
    STATE(298), 1,
      sym_date,
    STATE(381), 1,
      sym__4d,
    ACTIONS(665), 2,
      anon_sym_,
      anon_sym_TAB,
  [5596] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(167), 1,
      aux_sym_whitespace_repeat1,
    STATE(214), 1,
      sym__single_date,
    STATE(303), 1,
      sym_date,
    STATE(381), 1,
      sym__4d,
    ACTIONS(667), 2,
      anon_sym_,
      anon_sym_TAB,
  [5619] = 7,
    ACTIONS(640), 1,
      aux_sym_block_comment_token1,
    ACTIONS(669), 1,
      anon_sym_LF,
    ACTIONS(671), 1,
      anon_sym_end,
    ACTIONS(673), 1,
      anon_sym_endcomment,
    STATE(161), 1,
      aux_sym_block_comment_repeat1,
    STATE(311), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(644), 2,
      anon_sym_,
      anon_sym_TAB,
  [5642] = 7,
    ACTIONS(580), 1,
      anon_sym_alias,
    ACTIONS(582), 1,
      anon_sym_default,
    ACTIONS(584), 1,
      anon_sym_note,
    ACTIONS(675), 1,
      anon_sym_nomarket,
    ACTIONS(677), 1,
      anon_sym_format,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(506), 2,
      anon_sym_,
      anon_sym_TAB,
  [5665] = 7,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(679), 1,
      anon_sym_LF,
    STATE(187), 1,
      aux_sym_whitespace_repeat1,
    STATE(217), 1,
      sym_balance_assertion,
    STATE(378), 1,
      sym_note,
    ACTIONS(681), 2,
      anon_sym_,
      anon_sym_TAB,
  [5688] = 7,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(526), 1,
      anon_sym_LF,
    STATE(177), 1,
      aux_sym_whitespace_repeat1,
    STATE(220), 1,
      sym_balance_assertion,
    STATE(403), 1,
      sym_note,
    ACTIONS(683), 2,
      anon_sym_,
      anon_sym_TAB,
  [5711] = 7,
    ACTIONS(611), 1,
      aux_sym_block_comment_token1,
    ACTIONS(685), 1,
      anon_sym_LF,
    ACTIONS(687), 1,
      anon_sym_end,
    ACTIONS(689), 1,
      anon_sym_endtest,
    STATE(159), 1,
      aux_sym_block_comment_repeat1,
    STATE(256), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(615), 2,
      anon_sym_,
      anon_sym_TAB,
  [5734] = 7,
    ACTIONS(413), 1,
      anon_sym_endtest,
    ACTIONS(611), 1,
      aux_sym_block_comment_token1,
    ACTIONS(691), 1,
      anon_sym_LF,
    ACTIONS(693), 1,
      anon_sym_end,
    STATE(147), 1,
      aux_sym_block_comment_repeat1,
    STATE(256), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(615), 2,
      anon_sym_,
      anon_sym_TAB,
  [5757] = 7,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(695), 1,
      anon_sym_LF,
    STATE(182), 1,
      aux_sym_whitespace_repeat1,
    STATE(221), 1,
      sym_balance_assertion,
    STATE(374), 1,
      sym_note,
    ACTIONS(697), 2,
      anon_sym_,
      anon_sym_TAB,
  [5780] = 7,
    ACTIONS(419), 1,
      anon_sym_endcomment,
    ACTIONS(640), 1,
      aux_sym_block_comment_token1,
    ACTIONS(699), 1,
      anon_sym_LF,
    ACTIONS(701), 1,
      anon_sym_end,
    STATE(143), 1,
      aux_sym_block_comment_repeat1,
    STATE(311), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(644), 2,
      anon_sym_,
      anon_sym_TAB,
  [5803] = 7,
    ACTIONS(425), 1,
      anon_sym_endtest,
    ACTIONS(611), 1,
      aux_sym_block_comment_token1,
    ACTIONS(691), 1,
      anon_sym_LF,
    ACTIONS(703), 1,
      anon_sym_end,
    STATE(147), 1,
      aux_sym_block_comment_repeat1,
    STATE(256), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(615), 2,
      anon_sym_,
      anon_sym_TAB,
  [5826] = 7,
    ACTIONS(395), 1,
      anon_sym_endcomment,
    ACTIONS(640), 1,
      aux_sym_block_comment_token1,
    ACTIONS(699), 1,
      anon_sym_LF,
    ACTIONS(705), 1,
      anon_sym_end,
    STATE(143), 1,
      aux_sym_block_comment_repeat1,
    STATE(311), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(644), 2,
      anon_sym_,
      anon_sym_TAB,
  [5849] = 7,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(570), 1,
      anon_sym_LF,
    STATE(170), 1,
      aux_sym_whitespace_repeat1,
    STATE(222), 1,
      sym_balance_assertion,
    STATE(369), 1,
      sym_note,
    ACTIONS(707), 2,
      anon_sym_,
      anon_sym_TAB,
  [5872] = 7,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(566), 1,
      anon_sym_LF,
    STATE(178), 1,
      aux_sym_whitespace_repeat1,
    STATE(224), 1,
      sym_balance_assertion,
    STATE(371), 1,
      sym_note,
    ACTIONS(709), 2,
      anon_sym_,
      anon_sym_TAB,
  [5895] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(214), 1,
      sym__single_date,
    STATE(350), 1,
      sym_date,
    STATE(381), 1,
      sym__4d,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [5918] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(214), 1,
      sym__single_date,
    STATE(299), 1,
      sym_date,
    STATE(381), 1,
      sym__4d,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [5941] = 7,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_LBRACK,
    ACTIONS(556), 1,
      sym_account_name,
    ACTIONS(711), 1,
      anon_sym_,
    ACTIONS(713), 1,
      anon_sym_TAB,
    STATE(190), 1,
      aux_sym_whitespace_repeat1,
    STATE(273), 1,
      sym_account,
  [5963] = 2,
    ACTIONS(717), 1,
      anon_sym_AT,
    ACTIONS(715), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [5975] = 6,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(224), 1,
      sym_balance_assertion,
    STATE(371), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [5995] = 4,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(309), 1,
      sym_commodity,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [6011] = 4,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(411), 1,
      sym_commodity,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [6027] = 7,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_LBRACK,
    ACTIONS(556), 1,
      sym_account_name,
    ACTIONS(719), 1,
      anon_sym_,
    ACTIONS(721), 1,
      anon_sym_TAB,
    STATE(189), 1,
      aux_sym_whitespace_repeat1,
    STATE(265), 1,
      sym_account,
  [6049] = 7,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_LBRACK,
    ACTIONS(556), 1,
      sym_account_name,
    ACTIONS(723), 1,
      anon_sym_,
    ACTIONS(725), 1,
      anon_sym_TAB,
    STATE(203), 1,
      aux_sym_whitespace_repeat1,
    STATE(284), 1,
      sym_account,
  [6071] = 7,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_LBRACK,
    ACTIONS(556), 1,
      sym_account_name,
    ACTIONS(723), 1,
      anon_sym_,
    ACTIONS(725), 1,
      anon_sym_TAB,
    STATE(203), 1,
      aux_sym_whitespace_repeat1,
    STATE(411), 1,
      sym_account,
  [6093] = 7,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_LBRACK,
    ACTIONS(556), 1,
      sym_account_name,
    ACTIONS(723), 1,
      anon_sym_,
    ACTIONS(725), 1,
      anon_sym_TAB,
    STATE(203), 1,
      aux_sym_whitespace_repeat1,
    STATE(415), 1,
      sym_account,
  [6115] = 6,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(222), 1,
      sym_balance_assertion,
    STATE(369), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [6135] = 6,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(221), 1,
      sym_balance_assertion,
    STATE(374), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [6155] = 7,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_LBRACK,
    ACTIONS(556), 1,
      sym_account_name,
    ACTIONS(727), 1,
      anon_sym_,
    ACTIONS(729), 1,
      anon_sym_TAB,
    STATE(194), 1,
      aux_sym_whitespace_repeat1,
    STATE(278), 1,
      sym_account,
  [6177] = 4,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(424), 1,
      sym_commodity,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [6193] = 7,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_LBRACK,
    ACTIONS(556), 1,
      sym_account_name,
    ACTIONS(723), 1,
      anon_sym_,
    ACTIONS(725), 1,
      anon_sym_TAB,
    STATE(203), 1,
      aux_sym_whitespace_repeat1,
    STATE(439), 1,
      sym_account,
  [6215] = 6,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(217), 1,
      sym_balance_assertion,
    STATE(378), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [6235] = 2,
    ACTIONS(733), 1,
      anon_sym_AT,
    ACTIONS(731), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [6247] = 6,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(220), 1,
      sym_balance_assertion,
    STATE(403), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [6267] = 2,
    ACTIONS(737), 1,
      anon_sym_AT,
    ACTIONS(735), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [6279] = 6,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(210), 1,
      sym_balance_assertion,
    STATE(397), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [6299] = 6,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(212), 1,
      sym_balance_assertion,
    STATE(367), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [6319] = 6,
    ACTIONS(739), 1,
      aux_sym_note_token1,
    ACTIONS(741), 1,
      anon_sym_LBRACK,
    ACTIONS(743), 1,
      aux_sym_note_token2,
    STATE(196), 1,
      aux_sym_note_repeat1,
    STATE(279), 1,
      aux_sym_note_repeat2,
    ACTIONS(745), 2,
      anon_sym_,
      anon_sym_TAB,
  [6339] = 7,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_LBRACK,
    ACTIONS(556), 1,
      sym_account_name,
    ACTIONS(723), 1,
      anon_sym_,
    ACTIONS(725), 1,
      anon_sym_TAB,
    STATE(203), 1,
      aux_sym_whitespace_repeat1,
    STATE(273), 1,
      sym_account,
  [6361] = 7,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_LBRACK,
    ACTIONS(556), 1,
      sym_account_name,
    ACTIONS(723), 1,
      anon_sym_,
    ACTIONS(725), 1,
      anon_sym_TAB,
    STATE(203), 1,
      aux_sym_whitespace_repeat1,
    STATE(322), 1,
      sym_account,
  [6383] = 7,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_LBRACK,
    ACTIONS(556), 1,
      sym_account_name,
    ACTIONS(747), 1,
      anon_sym_,
    ACTIONS(749), 1,
      anon_sym_TAB,
    STATE(174), 1,
      aux_sym_whitespace_repeat1,
    STATE(322), 1,
      sym_account,
  [6405] = 6,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(200), 1,
      sym_balance_assertion,
    STATE(438), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [6425] = 1,
    ACTIONS(751), 7,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_TAB,
  [6435] = 7,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_LBRACK,
    ACTIONS(556), 1,
      sym_account_name,
    ACTIONS(723), 1,
      anon_sym_,
    ACTIONS(725), 1,
      anon_sym_TAB,
    STATE(203), 1,
      aux_sym_whitespace_repeat1,
    STATE(258), 1,
      sym_account,
  [6457] = 4,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(109), 1,
      sym_commodity,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [6473] = 6,
    ACTIONS(753), 1,
      aux_sym_note_token1,
    ACTIONS(755), 1,
      anon_sym_LBRACK,
    ACTIONS(757), 1,
      aux_sym_note_token2,
    STATE(205), 1,
      aux_sym_note_repeat1,
    STATE(277), 1,
      aux_sym_note_repeat2,
    ACTIONS(759), 2,
      anon_sym_,
      anon_sym_TAB,
  [6493] = 4,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(125), 1,
      sym_commodity,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(482), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [6509] = 4,
    STATE(45), 1,
      sym_commodity,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(191), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [6525] = 3,
    STATE(199), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(761), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(465), 4,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_payee,
  [6539] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(526), 1,
      anon_sym_LF,
    STATE(230), 1,
      aux_sym_whitespace_repeat1,
    STATE(403), 1,
      sym_note,
    ACTIONS(764), 2,
      anon_sym_,
      anon_sym_TAB,
  [6556] = 6,
    ACTIONS(745), 1,
      anon_sym_LF,
    ACTIONS(766), 1,
      aux_sym_note_token1,
    ACTIONS(768), 1,
      anon_sym_LBRACK,
    ACTIONS(770), 1,
      aux_sym_note_token2,
    STATE(216), 1,
      aux_sym_note_repeat1,
    STATE(326), 1,
      aux_sym_note_repeat2,
  [6575] = 5,
    ACTIONS(592), 1,
      anon_sym_LPAREN,
    ACTIONS(772), 1,
      sym_payee,
    STATE(199), 1,
      aux_sym_whitespace_repeat1,
    STATE(218), 1,
      sym_code,
    ACTIONS(596), 2,
      anon_sym_,
      anon_sym_TAB,
  [6592] = 4,
    ACTIONS(774), 1,
      anon_sym_,
    ACTIONS(777), 1,
      anon_sym_TAB,
    STATE(203), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(508), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [6607] = 2,
    ACTIONS(780), 1,
      anon_sym_LF,
    ACTIONS(782), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endtest,
      anon_sym_,
      anon_sym_TAB,
  [6618] = 4,
    ACTIONS(784), 1,
      aux_sym_note_token1,
    ACTIONS(789), 1,
      aux_sym_note_token2,
    STATE(205), 1,
      aux_sym_note_repeat1,
    ACTIONS(787), 3,
      anon_sym_LBRACK,
      anon_sym_,
      anon_sym_TAB,
  [6633] = 2,
    ACTIONS(791), 1,
      anon_sym_LF,
    ACTIONS(629), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endtest,
      anon_sym_,
      anon_sym_TAB,
  [6644] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(793), 1,
      anon_sym_LF,
    STATE(272), 1,
      aux_sym_whitespace_repeat1,
    STATE(380), 1,
      sym_note,
    ACTIONS(795), 2,
      anon_sym_,
      anon_sym_TAB,
  [6661] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(797), 1,
      anon_sym_LF,
    STATE(136), 1,
      aux_sym_whitespace_repeat1,
    STATE(396), 1,
      sym_note,
    ACTIONS(799), 2,
      anon_sym_,
      anon_sym_TAB,
  [6678] = 5,
    ACTIONS(470), 1,
      anon_sym_LF,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(244), 1,
      aux_sym_whitespace_repeat1,
    STATE(379), 1,
      sym_note,
    ACTIONS(801), 2,
      anon_sym_,
      anon_sym_TAB,
  [6695] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(520), 1,
      anon_sym_LF,
    STATE(235), 1,
      aux_sym_whitespace_repeat1,
    STATE(438), 1,
      sym_note,
    ACTIONS(803), 2,
      anon_sym_,
      anon_sym_TAB,
  [6712] = 3,
    ACTIONS(807), 1,
      anon_sym_EQ,
    STATE(308), 1,
      sym_effective_date,
    ACTIONS(805), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [6725] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(809), 1,
      anon_sym_LF,
    STATE(253), 1,
      aux_sym_whitespace_repeat1,
    STATE(386), 1,
      sym_note,
    ACTIONS(811), 2,
      anon_sym_,
      anon_sym_TAB,
  [6742] = 2,
    ACTIONS(791), 1,
      anon_sym_LF,
    ACTIONS(629), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endcomment,
      anon_sym_,
      anon_sym_TAB,
  [6753] = 1,
    ACTIONS(813), 6,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [6762] = 2,
    ACTIONS(780), 1,
      anon_sym_LF,
    ACTIONS(782), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endcomment,
      anon_sym_,
      anon_sym_TAB,
  [6773] = 6,
    ACTIONS(759), 1,
      anon_sym_LF,
    ACTIONS(815), 1,
      aux_sym_note_token1,
    ACTIONS(817), 1,
      anon_sym_LBRACK,
    ACTIONS(819), 1,
      aux_sym_note_token2,
    STATE(234), 1,
      aux_sym_note_repeat1,
    STATE(357), 1,
      aux_sym_note_repeat2,
  [6792] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(821), 1,
      anon_sym_LF,
    STATE(249), 1,
      aux_sym_whitespace_repeat1,
    STATE(367), 1,
      sym_note,
    ACTIONS(823), 2,
      anon_sym_,
      anon_sym_TAB,
  [6809] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(825), 1,
      anon_sym_LF,
    STATE(271), 1,
      aux_sym_whitespace_repeat1,
    STATE(412), 1,
      sym_note,
    ACTIONS(827), 2,
      anon_sym_,
      anon_sym_TAB,
  [6826] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(793), 1,
      anon_sym_LF,
    STATE(202), 1,
      aux_sym_whitespace_repeat1,
    STATE(380), 1,
      sym_note,
    ACTIONS(829), 2,
      anon_sym_,
      anon_sym_TAB,
  [6843] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(570), 1,
      anon_sym_LF,
    STATE(225), 1,
      aux_sym_whitespace_repeat1,
    STATE(369), 1,
      sym_note,
    ACTIONS(831), 2,
      anon_sym_,
      anon_sym_TAB,
  [6860] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(679), 1,
      anon_sym_LF,
    STATE(246), 1,
      aux_sym_whitespace_repeat1,
    STATE(378), 1,
      sym_note,
    ACTIONS(833), 2,
      anon_sym_,
      anon_sym_TAB,
  [6877] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(566), 1,
      anon_sym_LF,
    STATE(228), 1,
      aux_sym_whitespace_repeat1,
    STATE(371), 1,
      sym_note,
    ACTIONS(835), 2,
      anon_sym_,
      anon_sym_TAB,
  [6894] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(498), 1,
      anon_sym_LF,
    STATE(238), 1,
      aux_sym_whitespace_repeat1,
    STATE(397), 1,
      sym_note,
    ACTIONS(837), 2,
      anon_sym_,
      anon_sym_TAB,
  [6911] = 5,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(695), 1,
      anon_sym_LF,
    STATE(240), 1,
      aux_sym_whitespace_repeat1,
    STATE(374), 1,
      sym_note,
    ACTIONS(839), 2,
      anon_sym_,
      anon_sym_TAB,
  [6928] = 4,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(371), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [6942] = 3,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(223), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(15), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6954] = 4,
    ACTIONS(841), 1,
      aux_sym_option_value_token1,
    STATE(263), 1,
      aux_sym_whitespace_repeat1,
    STATE(415), 1,
      sym_filename,
    ACTIONS(843), 2,
      anon_sym_,
      anon_sym_TAB,
  [6968] = 4,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(374), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [6982] = 3,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(223), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(17), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6994] = 4,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(369), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [7008] = 2,
    ACTIONS(847), 1,
      anon_sym_,
    ACTIONS(845), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
      anon_sym_TAB,
  [7018] = 3,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(223), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(18), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7030] = 4,
    ACTIONS(849), 1,
      aux_sym_option_value_token1,
    STATE(263), 1,
      aux_sym_whitespace_repeat1,
    STATE(408), 1,
      sym_option_value,
    ACTIONS(843), 2,
      anon_sym_,
      anon_sym_TAB,
  [7044] = 4,
    ACTIONS(789), 1,
      aux_sym_note_token2,
    ACTIONS(851), 1,
      aux_sym_note_token1,
    STATE(234), 1,
      aux_sym_note_repeat1,
    ACTIONS(787), 2,
      anon_sym_LF,
      anon_sym_LBRACK,
  [7058] = 4,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(403), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [7072] = 3,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(223), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(21), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7084] = 1,
    ACTIONS(854), 5,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [7092] = 4,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(438), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [7106] = 4,
    ACTIONS(856), 1,
      anon_sym_LF,
    ACTIONS(858), 1,
      anon_sym_EQ,
    STATE(233), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(860), 2,
      anon_sym_,
      anon_sym_TAB,
  [7120] = 4,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(378), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [7134] = 3,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(223), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(23), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7146] = 1,
    ACTIONS(862), 5,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [7154] = 4,
    ACTIONS(586), 1,
      anon_sym_assert,
    ACTIONS(588), 1,
      anon_sym_check,
    STATE(137), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(607), 2,
      anon_sym_,
      anon_sym_TAB,
  [7168] = 4,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(397), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [7182] = 3,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(223), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(22), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7194] = 4,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(367), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [7208] = 3,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(223), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(27), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7220] = 3,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(223), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(26), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7232] = 4,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(386), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [7246] = 3,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(223), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(24), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7258] = 3,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(223), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(16), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [7270] = 1,
    ACTIONS(864), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_,
      anon_sym_TAB,
  [7278] = 4,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(389), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [7292] = 3,
    ACTIONS(866), 1,
      aux_sym_account_subdirective_token1,
    STATE(259), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(868), 2,
      anon_sym_,
      anon_sym_TAB,
  [7303] = 3,
    ACTIONS(870), 1,
      aux_sym_account_subdirective_token1,
    STATE(259), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(868), 2,
      anon_sym_,
      anon_sym_TAB,
  [7314] = 3,
    ACTIONS(872), 1,
      aux_sym_block_comment_token1,
    STATE(315), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(874), 2,
      anon_sym_,
      anon_sym_TAB,
  [7325] = 2,
    ACTIONS(876), 1,
      anon_sym_LF,
    ACTIONS(878), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [7334] = 2,
    ACTIONS(470), 1,
      anon_sym_LF,
    ACTIONS(880), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [7343] = 3,
    ACTIONS(465), 1,
      aux_sym_account_subdirective_token1,
    STATE(259), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(882), 2,
      anon_sym_,
      anon_sym_TAB,
  [7354] = 3,
    ACTIONS(885), 1,
      anon_sym_LF,
    STATE(287), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(887), 2,
      anon_sym_,
      anon_sym_TAB,
  [7365] = 3,
    ACTIONS(889), 1,
      sym_time,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [7376] = 3,
    ACTIONS(508), 1,
      aux_sym_word_directive_token1,
    STATE(262), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(891), 2,
      anon_sym_,
      anon_sym_TAB,
  [7387] = 3,
    ACTIONS(508), 1,
      aux_sym_option_value_token1,
    STATE(263), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(894), 2,
      anon_sym_,
      anon_sym_TAB,
  [7398] = 3,
    ACTIONS(897), 1,
      sym_time,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [7409] = 2,
    ACTIONS(899), 1,
      anon_sym_LF,
    ACTIONS(901), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [7418] = 3,
    ACTIONS(903), 1,
      anon_sym_EQ,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [7429] = 3,
    ACTIONS(905), 1,
      aux_sym_note_token2,
    STATE(275), 1,
      aux_sym_note_repeat2,
    ACTIONS(907), 2,
      anon_sym_,
      anon_sym_TAB,
  [7440] = 3,
    ACTIONS(909), 1,
      aux_sym_note_token2,
    STATE(267), 1,
      aux_sym_note_repeat2,
    ACTIONS(911), 2,
      anon_sym_,
      anon_sym_TAB,
  [7451] = 3,
    ACTIONS(905), 1,
      aux_sym_note_token2,
    STATE(275), 1,
      aux_sym_note_repeat2,
    ACTIONS(911), 2,
      anon_sym_,
      anon_sym_TAB,
  [7462] = 3,
    ACTIONS(913), 1,
      aux_sym_note_token2,
    STATE(269), 1,
      aux_sym_note_repeat2,
    ACTIONS(915), 2,
      anon_sym_,
      anon_sym_TAB,
  [7473] = 3,
    ACTIONS(917), 1,
      sym_payee,
    STATE(199), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(596), 2,
      anon_sym_,
      anon_sym_TAB,
  [7484] = 3,
    ACTIONS(772), 1,
      sym_payee,
    STATE(199), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(596), 2,
      anon_sym_,
      anon_sym_TAB,
  [7495] = 2,
    ACTIONS(919), 1,
      anon_sym_LF,
    ACTIONS(921), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [7504] = 3,
    ACTIONS(923), 1,
      aux_sym_account_subdirective_token1,
    STATE(259), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(868), 2,
      anon_sym_,
      anon_sym_TAB,
  [7515] = 3,
    ACTIONS(925), 1,
      aux_sym_note_token2,
    STATE(275), 1,
      aux_sym_note_repeat2,
    ACTIONS(928), 2,
      anon_sym_,
      anon_sym_TAB,
  [7526] = 3,
    ACTIONS(930), 1,
      aux_sym_account_subdirective_token1,
    STATE(259), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(868), 2,
      anon_sym_,
      anon_sym_TAB,
  [7537] = 3,
    ACTIONS(905), 1,
      aux_sym_note_token2,
    STATE(275), 1,
      aux_sym_note_repeat2,
    ACTIONS(932), 2,
      anon_sym_,
      anon_sym_TAB,
  [7548] = 2,
    ACTIONS(494), 1,
      anon_sym_LF,
    ACTIONS(934), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [7557] = 3,
    ACTIONS(905), 1,
      aux_sym_note_token2,
    STATE(275), 1,
      aux_sym_note_repeat2,
    ACTIONS(759), 2,
      anon_sym_,
      anon_sym_TAB,
  [7568] = 3,
    ACTIONS(508), 1,
      sym_query,
    STATE(280), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(936), 2,
      anon_sym_,
      anon_sym_TAB,
  [7579] = 1,
    ACTIONS(939), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [7586] = 3,
    ACTIONS(941), 1,
      sym_payee,
    STATE(199), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(596), 2,
      anon_sym_,
      anon_sym_TAB,
  [7597] = 3,
    ACTIONS(941), 1,
      sym_payee,
    STATE(304), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(943), 2,
      anon_sym_,
      anon_sym_TAB,
  [7608] = 2,
    ACTIONS(945), 1,
      anon_sym_LF,
    ACTIONS(947), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [7617] = 3,
    ACTIONS(949), 1,
      sym_payee,
    STATE(317), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(951), 2,
      anon_sym_,
      anon_sym_TAB,
  [7628] = 3,
    ACTIONS(953), 1,
      aux_sym_block_comment_token1,
    STATE(315), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(874), 2,
      anon_sym_,
      anon_sym_TAB,
  [7639] = 3,
    ACTIONS(955), 1,
      aux_sym_block_comment_token1,
    STATE(315), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(874), 2,
      anon_sym_,
      anon_sym_TAB,
  [7650] = 1,
    ACTIONS(957), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [7657] = 3,
    ACTIONS(959), 1,
      sym_query,
    STATE(280), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(961), 2,
      anon_sym_,
      anon_sym_TAB,
  [7668] = 3,
    ACTIONS(963), 1,
      anon_sym_RBRACE,
    STATE(318), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(965), 2,
      anon_sym_,
      anon_sym_TAB,
  [7679] = 1,
    ACTIONS(847), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [7686] = 3,
    ACTIONS(963), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(320), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(967), 2,
      anon_sym_,
      anon_sym_TAB,
  [7697] = 3,
    ACTIONS(969), 1,
      aux_sym_tag_directive_token1,
    STATE(137), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(607), 2,
      anon_sym_,
      anon_sym_TAB,
  [7708] = 3,
    ACTIONS(971), 1,
      aux_sym_word_directive_token1,
    STATE(262), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(973), 2,
      anon_sym_,
      anon_sym_TAB,
  [7719] = 3,
    ACTIONS(975), 1,
      aux_sym_option_value_token1,
    STATE(263), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(843), 2,
      anon_sym_,
      anon_sym_TAB,
  [7730] = 3,
    ACTIONS(977), 1,
      aux_sym_word_directive_token2,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [7741] = 3,
    ACTIONS(979), 1,
      aux_sym_word_directive_token2,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [7752] = 3,
    ACTIONS(981), 1,
      sym_time,
    STATE(306), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(983), 2,
      anon_sym_,
      anon_sym_TAB,
  [7763] = 3,
    ACTIONS(985), 1,
      sym_time,
    STATE(261), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(987), 2,
      anon_sym_,
      anon_sym_TAB,
  [7774] = 3,
    ACTIONS(985), 1,
      sym_time,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [7785] = 3,
    ACTIONS(989), 1,
      anon_sym_LF,
    STATE(286), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(991), 2,
      anon_sym_,
      anon_sym_TAB,
  [7796] = 3,
    ACTIONS(993), 1,
      sym_time,
    STATE(264), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(995), 2,
      anon_sym_,
      anon_sym_TAB,
  [7807] = 3,
    ACTIONS(997), 1,
      sym_time,
    STATE(300), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(999), 2,
      anon_sym_,
      anon_sym_TAB,
  [7818] = 3,
    ACTIONS(1001), 1,
      sym_payee,
    STATE(199), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(596), 2,
      anon_sym_,
      anon_sym_TAB,
  [7829] = 3,
    ACTIONS(1001), 1,
      sym_payee,
    STATE(325), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1003), 2,
      anon_sym_,
      anon_sym_TAB,
  [7840] = 3,
    ACTIONS(993), 1,
      sym_time,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [7851] = 4,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(252), 1,
      sym__single_date,
    STATE(381), 1,
      sym__4d,
  [7864] = 1,
    ACTIONS(1005), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [7871] = 3,
    ACTIONS(1007), 1,
      anon_sym_EQ,
    STATE(266), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1009), 2,
      anon_sym_,
      anon_sym_TAB,
  [7882] = 3,
    ACTIONS(1011), 1,
      aux_sym_account_subdirective_token1,
    STATE(259), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(868), 2,
      anon_sym_,
      anon_sym_TAB,
  [7893] = 3,
    ACTIONS(1013), 1,
      aux_sym_block_comment_token1,
    STATE(315), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(874), 2,
      anon_sym_,
      anon_sym_TAB,
  [7904] = 3,
    ACTIONS(1015), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [7915] = 1,
    ACTIONS(1017), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [7922] = 3,
    ACTIONS(1015), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [7933] = 3,
    ACTIONS(508), 1,
      aux_sym_block_comment_token1,
    STATE(315), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1019), 2,
      anon_sym_,
      anon_sym_TAB,
  [7944] = 1,
    ACTIONS(1022), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [7951] = 3,
    ACTIONS(1024), 1,
      sym_payee,
    STATE(199), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(596), 2,
      anon_sym_,
      anon_sym_TAB,
  [7962] = 3,
    ACTIONS(1026), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [7973] = 3,
    ACTIONS(1026), 1,
      anon_sym_RBRACE,
    STATE(314), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1028), 2,
      anon_sym_,
      anon_sym_TAB,
  [7984] = 3,
    ACTIONS(1026), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(530), 2,
      anon_sym_,
      anon_sym_TAB,
  [7995] = 3,
    ACTIONS(1026), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(312), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1030), 2,
      anon_sym_,
      anon_sym_TAB,
  [8006] = 2,
    ACTIONS(1032), 1,
      anon_sym_LF,
    ACTIONS(1034), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [8015] = 1,
    ACTIONS(1036), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [8022] = 3,
    ACTIONS(1024), 1,
      sym_payee,
    STATE(282), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1038), 2,
      anon_sym_,
      anon_sym_TAB,
  [8033] = 3,
    ACTIONS(1040), 1,
      sym_payee,
    STATE(199), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(596), 2,
      anon_sym_,
      anon_sym_TAB,
  [8044] = 3,
    ACTIONS(759), 1,
      anon_sym_LF,
    ACTIONS(1042), 1,
      aux_sym_note_token2,
    STATE(336), 1,
      aux_sym_note_repeat2,
  [8054] = 2,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1044), 2,
      anon_sym_,
      anon_sym_TAB,
  [8062] = 2,
    STATE(274), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1046), 2,
      anon_sym_,
      anon_sym_TAB,
  [8070] = 2,
    STATE(289), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1048), 2,
      anon_sym_,
      anon_sym_TAB,
  [8078] = 2,
    STATE(181), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1050), 2,
      anon_sym_,
      anon_sym_TAB,
  [8086] = 2,
    STATE(180), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1052), 2,
      anon_sym_,
      anon_sym_TAB,
  [8094] = 2,
    STATE(293), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1054), 2,
      anon_sym_,
      anon_sym_TAB,
  [8102] = 2,
    STATE(310), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1056), 2,
      anon_sym_,
      anon_sym_TAB,
  [8110] = 2,
    STATE(227), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1058), 2,
      anon_sym_,
      anon_sym_TAB,
  [8118] = 2,
    STATE(294), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1060), 2,
      anon_sym_,
      anon_sym_TAB,
  [8126] = 3,
    ACTIONS(928), 1,
      anon_sym_LF,
    ACTIONS(1062), 1,
      aux_sym_note_token2,
    STATE(336), 1,
      aux_sym_note_repeat2,
  [8136] = 3,
    ACTIONS(911), 1,
      anon_sym_LF,
    ACTIONS(1042), 1,
      aux_sym_note_token2,
    STATE(336), 1,
      aux_sym_note_repeat2,
  [8146] = 3,
    ACTIONS(911), 1,
      anon_sym_LF,
    ACTIONS(1065), 1,
      aux_sym_note_token2,
    STATE(356), 1,
      aux_sym_note_repeat2,
  [8156] = 2,
    STATE(295), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1067), 2,
      anon_sym_,
      anon_sym_TAB,
  [8164] = 2,
    STATE(255), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1069), 2,
      anon_sym_,
      anon_sym_TAB,
  [8172] = 2,
    STATE(296), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1071), 2,
      anon_sym_,
      anon_sym_TAB,
  [8180] = 2,
    STATE(176), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1073), 2,
      anon_sym_,
      anon_sym_TAB,
  [8188] = 2,
    STATE(175), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1075), 2,
      anon_sym_,
      anon_sym_TAB,
  [8196] = 2,
    STATE(297), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1077), 2,
      anon_sym_,
      anon_sym_TAB,
  [8204] = 2,
    STATE(172), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1079), 2,
      anon_sym_,
      anon_sym_TAB,
  [8212] = 3,
    ACTIONS(1081), 1,
      anon_sym_LF,
    ACTIONS(1083), 1,
      anon_sym_SEMI,
    STATE(250), 1,
      sym_note,
  [8222] = 3,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(825), 1,
      anon_sym_LF,
    STATE(412), 1,
      sym_note,
  [8232] = 3,
    ACTIONS(1083), 1,
      anon_sym_SEMI,
    ACTIONS(1085), 1,
      anon_sym_LF,
    STATE(245), 1,
      sym_note,
  [8242] = 2,
    STATE(171), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1087), 2,
      anon_sym_,
      anon_sym_TAB,
  [8250] = 2,
    STATE(195), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1089), 2,
      anon_sym_,
      anon_sym_TAB,
  [8258] = 2,
    STATE(166), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1091), 2,
      anon_sym_,
      anon_sym_TAB,
  [8266] = 2,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1093), 2,
      anon_sym_,
      anon_sym_TAB,
  [8274] = 2,
    STATE(111), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1095), 2,
      anon_sym_,
      anon_sym_TAB,
  [8282] = 3,
    ACTIONS(915), 1,
      anon_sym_LF,
    ACTIONS(1097), 1,
      aux_sym_note_token2,
    STATE(337), 1,
      aux_sym_note_repeat2,
  [8292] = 2,
    STATE(254), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1099), 2,
      anon_sym_,
      anon_sym_TAB,
  [8300] = 3,
    ACTIONS(907), 1,
      anon_sym_LF,
    ACTIONS(1042), 1,
      aux_sym_note_token2,
    STATE(336), 1,
      aux_sym_note_repeat2,
  [8310] = 3,
    ACTIONS(932), 1,
      anon_sym_LF,
    ACTIONS(1042), 1,
      aux_sym_note_token2,
    STATE(336), 1,
      aux_sym_note_repeat2,
  [8320] = 2,
    STATE(276), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(1101), 2,
      anon_sym_,
      anon_sym_TAB,
  [8328] = 3,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(793), 1,
      anon_sym_LF,
    STATE(380), 1,
      sym_note,
  [8338] = 3,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(1103), 1,
      anon_sym_LF,
    STATE(385), 1,
      sym_note,
  [8348] = 1,
    ACTIONS(1105), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [8353] = 2,
    ACTIONS(807), 1,
      anon_sym_EQ,
    STATE(437), 1,
      sym_effective_date,
  [8360] = 2,
    ACTIONS(807), 1,
      anon_sym_EQ,
    STATE(384), 1,
      sym_effective_date,
  [8367] = 2,
    ACTIONS(807), 1,
      anon_sym_EQ,
    STATE(434), 1,
      sym_effective_date,
  [8374] = 2,
    ACTIONS(1107), 1,
      aux_sym_option_value_token1,
    STATE(408), 1,
      sym_option_value,
  [8381] = 2,
    ACTIONS(807), 1,
      anon_sym_EQ,
    STATE(433), 1,
      sym_effective_date,
  [8388] = 1,
    ACTIONS(809), 1,
      anon_sym_LF,
  [8392] = 1,
    ACTIONS(1109), 1,
      sym__quantity,
  [8396] = 1,
    ACTIONS(566), 1,
      anon_sym_LF,
  [8400] = 1,
    ACTIONS(1111), 1,
      anon_sym_LF,
  [8404] = 1,
    ACTIONS(695), 1,
      anon_sym_LF,
  [8408] = 1,
    ACTIONS(1113), 1,
      anon_sym_LF,
  [8412] = 1,
    ACTIONS(1115), 1,
      aux_sym_code_token1,
  [8416] = 1,
    ACTIONS(679), 1,
      anon_sym_LF,
  [8420] = 1,
    ACTIONS(1117), 1,
      anon_sym_RPAREN,
  [8424] = 1,
    ACTIONS(1119), 1,
      anon_sym_LF,
  [8428] = 1,
    ACTIONS(636), 1,
      sym__dsep,
  [8432] = 1,
    ACTIONS(821), 1,
      anon_sym_LF,
  [8436] = 1,
    ACTIONS(498), 1,
      anon_sym_LF,
  [8440] = 1,
    ACTIONS(1121), 1,
      anon_sym_LF,
  [8444] = 1,
    ACTIONS(1123), 1,
      sym__dsep,
  [8448] = 1,
    ACTIONS(1125), 1,
      anon_sym_LF,
  [8452] = 1,
    ACTIONS(945), 1,
      anon_sym_LF,
  [8456] = 1,
    ACTIONS(1127), 1,
      anon_sym_RBRACK,
  [8460] = 1,
    ACTIONS(1129), 1,
      anon_sym_LF,
  [8464] = 1,
    ACTIONS(1131), 1,
      anon_sym_LF,
  [8468] = 1,
    ACTIONS(1133), 1,
      anon_sym_LF,
  [8472] = 1,
    ACTIONS(1135), 1,
      anon_sym_LF,
  [8476] = 1,
    ACTIONS(1137), 1,
      anon_sym_LF,
  [8480] = 1,
    ACTIONS(1139), 1,
      anon_sym_LF,
  [8484] = 1,
    ACTIONS(1141), 1,
      anon_sym_LF,
  [8488] = 1,
    ACTIONS(1143), 1,
      anon_sym_LF,
  [8492] = 1,
    ACTIONS(1145), 1,
      ts_builtin_sym_end,
  [8496] = 1,
    ACTIONS(1147), 1,
      sym__dsep,
  [8500] = 1,
    ACTIONS(1149), 1,
      anon_sym_LF,
  [8504] = 1,
    ACTIONS(1151), 1,
      anon_sym_LF,
  [8508] = 1,
    ACTIONS(520), 1,
      anon_sym_LF,
  [8512] = 1,
    ACTIONS(1153), 1,
      anon_sym_LF,
  [8516] = 1,
    ACTIONS(1155), 1,
      sym__2d,
  [8520] = 1,
    ACTIONS(1157), 1,
      anon_sym_LF,
  [8524] = 1,
    ACTIONS(1159), 1,
      anon_sym_LF,
  [8528] = 1,
    ACTIONS(1161), 1,
      sym__quantity,
  [8532] = 1,
    ACTIONS(570), 1,
      anon_sym_LF,
  [8536] = 1,
    ACTIONS(1163), 1,
      sym__2d,
  [8540] = 1,
    ACTIONS(1165), 1,
      anon_sym_LF,
  [8544] = 1,
    ACTIONS(1167), 1,
      anon_sym_LF,
  [8548] = 1,
    ACTIONS(1169), 1,
      anon_sym_LF,
  [8552] = 1,
    ACTIONS(1171), 1,
      anon_sym_LF,
  [8556] = 1,
    ACTIONS(1173), 1,
      anon_sym_RPAREN,
  [8560] = 1,
    ACTIONS(1173), 1,
      anon_sym_RBRACK,
  [8564] = 1,
    ACTIONS(1175), 1,
      anon_sym_LF,
  [8568] = 1,
    ACTIONS(1177), 1,
      anon_sym_LF,
  [8572] = 1,
    ACTIONS(1179), 1,
      aux_sym_option_value_token1,
  [8576] = 1,
    ACTIONS(1181), 1,
      anon_sym_EQ,
  [8580] = 1,
    ACTIONS(1183), 1,
      anon_sym_LF,
  [8584] = 1,
    ACTIONS(1185), 1,
      anon_sym_LF,
  [8588] = 1,
    ACTIONS(1187), 1,
      anon_sym_LF,
  [8592] = 1,
    ACTIONS(1032), 1,
      anon_sym_LF,
  [8596] = 1,
    ACTIONS(1189), 1,
      anon_sym_LF,
  [8600] = 1,
    ACTIONS(1191), 1,
      sym_account_name,
  [8604] = 1,
    ACTIONS(1193), 1,
      sym_account_name,
  [8608] = 1,
    ACTIONS(1195), 1,
      anon_sym_LF,
  [8612] = 1,
    ACTIONS(470), 1,
      anon_sym_LF,
  [8616] = 1,
    ACTIONS(1197), 1,
      anon_sym_LF,
  [8620] = 1,
    ACTIONS(1199), 1,
      aux_sym_option_token1,
  [8624] = 1,
    ACTIONS(1201), 1,
      sym__2d,
  [8628] = 1,
    ACTIONS(1203), 1,
      anon_sym_LF,
  [8632] = 1,
    ACTIONS(1205), 1,
      anon_sym_LF,
  [8636] = 1,
    ACTIONS(1207), 1,
      anon_sym_LF,
  [8640] = 1,
    ACTIONS(1209), 1,
      sym__quantity,
  [8644] = 1,
    ACTIONS(1211), 1,
      sym__quantity,
  [8648] = 1,
    ACTIONS(1213), 1,
      anon_sym_LF,
  [8652] = 1,
    ACTIONS(1215), 1,
      anon_sym_RBRACK,
  [8656] = 1,
    ACTIONS(1217), 1,
      anon_sym_RBRACK,
  [8660] = 1,
    ACTIONS(1219), 1,
      sym__quantity,
  [8664] = 1,
    ACTIONS(1221), 1,
      sym__quantity,
  [8668] = 1,
    ACTIONS(1223), 1,
      anon_sym_RBRACK,
  [8672] = 1,
    ACTIONS(526), 1,
      anon_sym_LF,
  [8676] = 1,
    ACTIONS(1225), 1,
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
  [SMALL_STATE(17)] = 906,
  [SMALL_STATE(18)] = 952,
  [SMALL_STATE(19)] = 998,
  [SMALL_STATE(20)] = 1038,
  [SMALL_STATE(21)] = 1078,
  [SMALL_STATE(22)] = 1124,
  [SMALL_STATE(23)] = 1170,
  [SMALL_STATE(24)] = 1216,
  [SMALL_STATE(25)] = 1262,
  [SMALL_STATE(26)] = 1302,
  [SMALL_STATE(27)] = 1348,
  [SMALL_STATE(28)] = 1394,
  [SMALL_STATE(29)] = 1431,
  [SMALL_STATE(30)] = 1468,
  [SMALL_STATE(31)] = 1505,
  [SMALL_STATE(32)] = 1542,
  [SMALL_STATE(33)] = 1579,
  [SMALL_STATE(34)] = 1616,
  [SMALL_STATE(35)] = 1653,
  [SMALL_STATE(36)] = 1690,
  [SMALL_STATE(37)] = 1727,
  [SMALL_STATE(38)] = 1764,
  [SMALL_STATE(39)] = 1801,
  [SMALL_STATE(40)] = 1838,
  [SMALL_STATE(41)] = 1875,
  [SMALL_STATE(42)] = 1912,
  [SMALL_STATE(43)] = 1949,
  [SMALL_STATE(44)] = 1986,
  [SMALL_STATE(45)] = 2023,
  [SMALL_STATE(46)] = 2060,
  [SMALL_STATE(47)] = 2097,
  [SMALL_STATE(48)] = 2134,
  [SMALL_STATE(49)] = 2171,
  [SMALL_STATE(50)] = 2208,
  [SMALL_STATE(51)] = 2245,
  [SMALL_STATE(52)] = 2282,
  [SMALL_STATE(53)] = 2319,
  [SMALL_STATE(54)] = 2356,
  [SMALL_STATE(55)] = 2393,
  [SMALL_STATE(56)] = 2430,
  [SMALL_STATE(57)] = 2467,
  [SMALL_STATE(58)] = 2504,
  [SMALL_STATE(59)] = 2541,
  [SMALL_STATE(60)] = 2579,
  [SMALL_STATE(61)] = 2617,
  [SMALL_STATE(62)] = 2655,
  [SMALL_STATE(63)] = 2693,
  [SMALL_STATE(64)] = 2731,
  [SMALL_STATE(65)] = 2769,
  [SMALL_STATE(66)] = 2807,
  [SMALL_STATE(67)] = 2845,
  [SMALL_STATE(68)] = 2880,
  [SMALL_STATE(69)] = 2915,
  [SMALL_STATE(70)] = 2950,
  [SMALL_STATE(71)] = 2985,
  [SMALL_STATE(72)] = 3020,
  [SMALL_STATE(73)] = 3055,
  [SMALL_STATE(74)] = 3090,
  [SMALL_STATE(75)] = 3125,
  [SMALL_STATE(76)] = 3160,
  [SMALL_STATE(77)] = 3195,
  [SMALL_STATE(78)] = 3230,
  [SMALL_STATE(79)] = 3265,
  [SMALL_STATE(80)] = 3300,
  [SMALL_STATE(81)] = 3335,
  [SMALL_STATE(82)] = 3370,
  [SMALL_STATE(83)] = 3405,
  [SMALL_STATE(84)] = 3441,
  [SMALL_STATE(85)] = 3506,
  [SMALL_STATE(86)] = 3571,
  [SMALL_STATE(87)] = 3636,
  [SMALL_STATE(88)] = 3698,
  [SMALL_STATE(89)] = 3760,
  [SMALL_STATE(90)] = 3822,
  [SMALL_STATE(91)] = 3852,
  [SMALL_STATE(92)] = 3874,
  [SMALL_STATE(93)] = 3900,
  [SMALL_STATE(94)] = 3929,
  [SMALL_STATE(95)] = 3953,
  [SMALL_STATE(96)] = 3972,
  [SMALL_STATE(97)] = 3991,
  [SMALL_STATE(98)] = 4032,
  [SMALL_STATE(99)] = 4073,
  [SMALL_STATE(100)] = 4114,
  [SMALL_STATE(101)] = 4133,
  [SMALL_STATE(102)] = 4174,
  [SMALL_STATE(103)] = 4206,
  [SMALL_STATE(104)] = 4244,
  [SMALL_STATE(105)] = 4276,
  [SMALL_STATE(106)] = 4308,
  [SMALL_STATE(107)] = 4340,
  [SMALL_STATE(108)] = 4378,
  [SMALL_STATE(109)] = 4410,
  [SMALL_STATE(110)] = 4442,
  [SMALL_STATE(111)] = 4474,
  [SMALL_STATE(112)] = 4506,
  [SMALL_STATE(113)] = 4544,
  [SMALL_STATE(114)] = 4576,
  [SMALL_STATE(115)] = 4608,
  [SMALL_STATE(116)] = 4640,
  [SMALL_STATE(117)] = 4672,
  [SMALL_STATE(118)] = 4704,
  [SMALL_STATE(119)] = 4736,
  [SMALL_STATE(120)] = 4774,
  [SMALL_STATE(121)] = 4809,
  [SMALL_STATE(122)] = 4841,
  [SMALL_STATE(123)] = 4873,
  [SMALL_STATE(124)] = 4889,
  [SMALL_STATE(125)] = 4921,
  [SMALL_STATE(126)] = 4937,
  [SMALL_STATE(127)] = 4969,
  [SMALL_STATE(128)] = 5001,
  [SMALL_STATE(129)] = 5033,
  [SMALL_STATE(130)] = 5062,
  [SMALL_STATE(131)] = 5091,
  [SMALL_STATE(132)] = 5120,
  [SMALL_STATE(133)] = 5149,
  [SMALL_STATE(134)] = 5176,
  [SMALL_STATE(135)] = 5205,
  [SMALL_STATE(136)] = 5234,
  [SMALL_STATE(137)] = 5258,
  [SMALL_STATE(138)] = 5276,
  [SMALL_STATE(139)] = 5296,
  [SMALL_STATE(140)] = 5317,
  [SMALL_STATE(141)] = 5340,
  [SMALL_STATE(142)] = 5363,
  [SMALL_STATE(143)] = 5384,
  [SMALL_STATE(144)] = 5405,
  [SMALL_STATE(145)] = 5418,
  [SMALL_STATE(146)] = 5441,
  [SMALL_STATE(147)] = 5464,
  [SMALL_STATE(148)] = 5485,
  [SMALL_STATE(149)] = 5506,
  [SMALL_STATE(150)] = 5527,
  [SMALL_STATE(151)] = 5550,
  [SMALL_STATE(152)] = 5573,
  [SMALL_STATE(153)] = 5596,
  [SMALL_STATE(154)] = 5619,
  [SMALL_STATE(155)] = 5642,
  [SMALL_STATE(156)] = 5665,
  [SMALL_STATE(157)] = 5688,
  [SMALL_STATE(158)] = 5711,
  [SMALL_STATE(159)] = 5734,
  [SMALL_STATE(160)] = 5757,
  [SMALL_STATE(161)] = 5780,
  [SMALL_STATE(162)] = 5803,
  [SMALL_STATE(163)] = 5826,
  [SMALL_STATE(164)] = 5849,
  [SMALL_STATE(165)] = 5872,
  [SMALL_STATE(166)] = 5895,
  [SMALL_STATE(167)] = 5918,
  [SMALL_STATE(168)] = 5941,
  [SMALL_STATE(169)] = 5963,
  [SMALL_STATE(170)] = 5975,
  [SMALL_STATE(171)] = 5995,
  [SMALL_STATE(172)] = 6011,
  [SMALL_STATE(173)] = 6027,
  [SMALL_STATE(174)] = 6049,
  [SMALL_STATE(175)] = 6071,
  [SMALL_STATE(176)] = 6093,
  [SMALL_STATE(177)] = 6115,
  [SMALL_STATE(178)] = 6135,
  [SMALL_STATE(179)] = 6155,
  [SMALL_STATE(180)] = 6177,
  [SMALL_STATE(181)] = 6193,
  [SMALL_STATE(182)] = 6215,
  [SMALL_STATE(183)] = 6235,
  [SMALL_STATE(184)] = 6247,
  [SMALL_STATE(185)] = 6267,
  [SMALL_STATE(186)] = 6279,
  [SMALL_STATE(187)] = 6299,
  [SMALL_STATE(188)] = 6319,
  [SMALL_STATE(189)] = 6339,
  [SMALL_STATE(190)] = 6361,
  [SMALL_STATE(191)] = 6383,
  [SMALL_STATE(192)] = 6405,
  [SMALL_STATE(193)] = 6425,
  [SMALL_STATE(194)] = 6435,
  [SMALL_STATE(195)] = 6457,
  [SMALL_STATE(196)] = 6473,
  [SMALL_STATE(197)] = 6493,
  [SMALL_STATE(198)] = 6509,
  [SMALL_STATE(199)] = 6525,
  [SMALL_STATE(200)] = 6539,
  [SMALL_STATE(201)] = 6556,
  [SMALL_STATE(202)] = 6575,
  [SMALL_STATE(203)] = 6592,
  [SMALL_STATE(204)] = 6607,
  [SMALL_STATE(205)] = 6618,
  [SMALL_STATE(206)] = 6633,
  [SMALL_STATE(207)] = 6644,
  [SMALL_STATE(208)] = 6661,
  [SMALL_STATE(209)] = 6678,
  [SMALL_STATE(210)] = 6695,
  [SMALL_STATE(211)] = 6712,
  [SMALL_STATE(212)] = 6725,
  [SMALL_STATE(213)] = 6742,
  [SMALL_STATE(214)] = 6753,
  [SMALL_STATE(215)] = 6762,
  [SMALL_STATE(216)] = 6773,
  [SMALL_STATE(217)] = 6792,
  [SMALL_STATE(218)] = 6809,
  [SMALL_STATE(219)] = 6826,
  [SMALL_STATE(220)] = 6843,
  [SMALL_STATE(221)] = 6860,
  [SMALL_STATE(222)] = 6877,
  [SMALL_STATE(223)] = 6894,
  [SMALL_STATE(224)] = 6911,
  [SMALL_STATE(225)] = 6928,
  [SMALL_STATE(226)] = 6942,
  [SMALL_STATE(227)] = 6954,
  [SMALL_STATE(228)] = 6968,
  [SMALL_STATE(229)] = 6982,
  [SMALL_STATE(230)] = 6994,
  [SMALL_STATE(231)] = 7008,
  [SMALL_STATE(232)] = 7018,
  [SMALL_STATE(233)] = 7030,
  [SMALL_STATE(234)] = 7044,
  [SMALL_STATE(235)] = 7058,
  [SMALL_STATE(236)] = 7072,
  [SMALL_STATE(237)] = 7084,
  [SMALL_STATE(238)] = 7092,
  [SMALL_STATE(239)] = 7106,
  [SMALL_STATE(240)] = 7120,
  [SMALL_STATE(241)] = 7134,
  [SMALL_STATE(242)] = 7146,
  [SMALL_STATE(243)] = 7154,
  [SMALL_STATE(244)] = 7168,
  [SMALL_STATE(245)] = 7182,
  [SMALL_STATE(246)] = 7194,
  [SMALL_STATE(247)] = 7208,
  [SMALL_STATE(248)] = 7220,
  [SMALL_STATE(249)] = 7232,
  [SMALL_STATE(250)] = 7246,
  [SMALL_STATE(251)] = 7258,
  [SMALL_STATE(252)] = 7270,
  [SMALL_STATE(253)] = 7278,
  [SMALL_STATE(254)] = 7292,
  [SMALL_STATE(255)] = 7303,
  [SMALL_STATE(256)] = 7314,
  [SMALL_STATE(257)] = 7325,
  [SMALL_STATE(258)] = 7334,
  [SMALL_STATE(259)] = 7343,
  [SMALL_STATE(260)] = 7354,
  [SMALL_STATE(261)] = 7365,
  [SMALL_STATE(262)] = 7376,
  [SMALL_STATE(263)] = 7387,
  [SMALL_STATE(264)] = 7398,
  [SMALL_STATE(265)] = 7409,
  [SMALL_STATE(266)] = 7418,
  [SMALL_STATE(267)] = 7429,
  [SMALL_STATE(268)] = 7440,
  [SMALL_STATE(269)] = 7451,
  [SMALL_STATE(270)] = 7462,
  [SMALL_STATE(271)] = 7473,
  [SMALL_STATE(272)] = 7484,
  [SMALL_STATE(273)] = 7495,
  [SMALL_STATE(274)] = 7504,
  [SMALL_STATE(275)] = 7515,
  [SMALL_STATE(276)] = 7526,
  [SMALL_STATE(277)] = 7537,
  [SMALL_STATE(278)] = 7548,
  [SMALL_STATE(279)] = 7557,
  [SMALL_STATE(280)] = 7568,
  [SMALL_STATE(281)] = 7579,
  [SMALL_STATE(282)] = 7586,
  [SMALL_STATE(283)] = 7597,
  [SMALL_STATE(284)] = 7608,
  [SMALL_STATE(285)] = 7617,
  [SMALL_STATE(286)] = 7628,
  [SMALL_STATE(287)] = 7639,
  [SMALL_STATE(288)] = 7650,
  [SMALL_STATE(289)] = 7657,
  [SMALL_STATE(290)] = 7668,
  [SMALL_STATE(291)] = 7679,
  [SMALL_STATE(292)] = 7686,
  [SMALL_STATE(293)] = 7697,
  [SMALL_STATE(294)] = 7708,
  [SMALL_STATE(295)] = 7719,
  [SMALL_STATE(296)] = 7730,
  [SMALL_STATE(297)] = 7741,
  [SMALL_STATE(298)] = 7752,
  [SMALL_STATE(299)] = 7763,
  [SMALL_STATE(300)] = 7774,
  [SMALL_STATE(301)] = 7785,
  [SMALL_STATE(302)] = 7796,
  [SMALL_STATE(303)] = 7807,
  [SMALL_STATE(304)] = 7818,
  [SMALL_STATE(305)] = 7829,
  [SMALL_STATE(306)] = 7840,
  [SMALL_STATE(307)] = 7851,
  [SMALL_STATE(308)] = 7864,
  [SMALL_STATE(309)] = 7871,
  [SMALL_STATE(310)] = 7882,
  [SMALL_STATE(311)] = 7893,
  [SMALL_STATE(312)] = 7904,
  [SMALL_STATE(313)] = 7915,
  [SMALL_STATE(314)] = 7922,
  [SMALL_STATE(315)] = 7933,
  [SMALL_STATE(316)] = 7944,
  [SMALL_STATE(317)] = 7951,
  [SMALL_STATE(318)] = 7962,
  [SMALL_STATE(319)] = 7973,
  [SMALL_STATE(320)] = 7984,
  [SMALL_STATE(321)] = 7995,
  [SMALL_STATE(322)] = 8006,
  [SMALL_STATE(323)] = 8015,
  [SMALL_STATE(324)] = 8022,
  [SMALL_STATE(325)] = 8033,
  [SMALL_STATE(326)] = 8044,
  [SMALL_STATE(327)] = 8054,
  [SMALL_STATE(328)] = 8062,
  [SMALL_STATE(329)] = 8070,
  [SMALL_STATE(330)] = 8078,
  [SMALL_STATE(331)] = 8086,
  [SMALL_STATE(332)] = 8094,
  [SMALL_STATE(333)] = 8102,
  [SMALL_STATE(334)] = 8110,
  [SMALL_STATE(335)] = 8118,
  [SMALL_STATE(336)] = 8126,
  [SMALL_STATE(337)] = 8136,
  [SMALL_STATE(338)] = 8146,
  [SMALL_STATE(339)] = 8156,
  [SMALL_STATE(340)] = 8164,
  [SMALL_STATE(341)] = 8172,
  [SMALL_STATE(342)] = 8180,
  [SMALL_STATE(343)] = 8188,
  [SMALL_STATE(344)] = 8196,
  [SMALL_STATE(345)] = 8204,
  [SMALL_STATE(346)] = 8212,
  [SMALL_STATE(347)] = 8222,
  [SMALL_STATE(348)] = 8232,
  [SMALL_STATE(349)] = 8242,
  [SMALL_STATE(350)] = 8250,
  [SMALL_STATE(351)] = 8258,
  [SMALL_STATE(352)] = 8266,
  [SMALL_STATE(353)] = 8274,
  [SMALL_STATE(354)] = 8282,
  [SMALL_STATE(355)] = 8292,
  [SMALL_STATE(356)] = 8300,
  [SMALL_STATE(357)] = 8310,
  [SMALL_STATE(358)] = 8320,
  [SMALL_STATE(359)] = 8328,
  [SMALL_STATE(360)] = 8338,
  [SMALL_STATE(361)] = 8348,
  [SMALL_STATE(362)] = 8353,
  [SMALL_STATE(363)] = 8360,
  [SMALL_STATE(364)] = 8367,
  [SMALL_STATE(365)] = 8374,
  [SMALL_STATE(366)] = 8381,
  [SMALL_STATE(367)] = 8388,
  [SMALL_STATE(368)] = 8392,
  [SMALL_STATE(369)] = 8396,
  [SMALL_STATE(370)] = 8400,
  [SMALL_STATE(371)] = 8404,
  [SMALL_STATE(372)] = 8408,
  [SMALL_STATE(373)] = 8412,
  [SMALL_STATE(374)] = 8416,
  [SMALL_STATE(375)] = 8420,
  [SMALL_STATE(376)] = 8424,
  [SMALL_STATE(377)] = 8428,
  [SMALL_STATE(378)] = 8432,
  [SMALL_STATE(379)] = 8436,
  [SMALL_STATE(380)] = 8440,
  [SMALL_STATE(381)] = 8444,
  [SMALL_STATE(382)] = 8448,
  [SMALL_STATE(383)] = 8452,
  [SMALL_STATE(384)] = 8456,
  [SMALL_STATE(385)] = 8460,
  [SMALL_STATE(386)] = 8464,
  [SMALL_STATE(387)] = 8468,
  [SMALL_STATE(388)] = 8472,
  [SMALL_STATE(389)] = 8476,
  [SMALL_STATE(390)] = 8480,
  [SMALL_STATE(391)] = 8484,
  [SMALL_STATE(392)] = 8488,
  [SMALL_STATE(393)] = 8492,
  [SMALL_STATE(394)] = 8496,
  [SMALL_STATE(395)] = 8500,
  [SMALL_STATE(396)] = 8504,
  [SMALL_STATE(397)] = 8508,
  [SMALL_STATE(398)] = 8512,
  [SMALL_STATE(399)] = 8516,
  [SMALL_STATE(400)] = 8520,
  [SMALL_STATE(401)] = 8524,
  [SMALL_STATE(402)] = 8528,
  [SMALL_STATE(403)] = 8532,
  [SMALL_STATE(404)] = 8536,
  [SMALL_STATE(405)] = 8540,
  [SMALL_STATE(406)] = 8544,
  [SMALL_STATE(407)] = 8548,
  [SMALL_STATE(408)] = 8552,
  [SMALL_STATE(409)] = 8556,
  [SMALL_STATE(410)] = 8560,
  [SMALL_STATE(411)] = 8564,
  [SMALL_STATE(412)] = 8568,
  [SMALL_STATE(413)] = 8572,
  [SMALL_STATE(414)] = 8576,
  [SMALL_STATE(415)] = 8580,
  [SMALL_STATE(416)] = 8584,
  [SMALL_STATE(417)] = 8588,
  [SMALL_STATE(418)] = 8592,
  [SMALL_STATE(419)] = 8596,
  [SMALL_STATE(420)] = 8600,
  [SMALL_STATE(421)] = 8604,
  [SMALL_STATE(422)] = 8608,
  [SMALL_STATE(423)] = 8612,
  [SMALL_STATE(424)] = 8616,
  [SMALL_STATE(425)] = 8620,
  [SMALL_STATE(426)] = 8624,
  [SMALL_STATE(427)] = 8628,
  [SMALL_STATE(428)] = 8632,
  [SMALL_STATE(429)] = 8636,
  [SMALL_STATE(430)] = 8640,
  [SMALL_STATE(431)] = 8644,
  [SMALL_STATE(432)] = 8648,
  [SMALL_STATE(433)] = 8652,
  [SMALL_STATE(434)] = 8656,
  [SMALL_STATE(435)] = 8660,
  [SMALL_STATE(436)] = 8664,
  [SMALL_STATE(437)] = 8668,
  [SMALL_STATE(438)] = 8672,
  [SMALL_STATE(439)] = 8676,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(301),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(427),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(260),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(425),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(425),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(329),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(330),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(331),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(332),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(334),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(335),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(339),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(341),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(381),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(342),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(343),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(344),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(345),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(327),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(349),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(351),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(152),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(152),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(153),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(352),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(394),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 5),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 5),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2), SHIFT_REPEAT(133),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 4),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 5),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 5),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2), SHIFT_REPEAT(155),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 4),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_directive_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2), SHIFT_REPEAT(243),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(120),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 10),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 10),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_quantity, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_quantity, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 9),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 9),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_periodic_xact, 5),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_periodic_xact, 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 4),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automated_xact, 5),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automated_xact, 5),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 8),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 8),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 6),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 6),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 3),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 16),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 16),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 15),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 15),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 14),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 14),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 13),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 13),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 12),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 12),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 1),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 11),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 11),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_subdirective, 4),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_subdirective, 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_subdirective, 4),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_subdirective, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 10),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 10),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_subdirective, 4),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_subdirective, 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_subdirective, 4),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_subdirective, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_subdirective, 4),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_subdirective, 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 4),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_subdirective, 3),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_subdirective, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 9),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 9),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 6),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 6),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 5),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 5),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 6),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 6),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 4),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 4),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 3),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 5),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 5),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 4),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 4),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 7),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 7),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 5),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 7),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 7),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(83),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(92),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(94),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(137),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(138),
  [604] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(138),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(143),
  [626] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(401),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [631] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(311),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 3),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(147),
  [651] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(429),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(256),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lot_price, 4),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lot_price, 4),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lot_price, 5),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lot_price, 5),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lot_price, 3),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lot_price, 3),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 5),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(199),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(203),
  [777] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(203),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 3),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 3),
  [784] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_repeat1, 2), SHIFT_REPEAT(205),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_repeat1, 2),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_note_repeat1, 2),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xact_date, 1),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [851] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_repeat1, 2), SHIFT_REPEAT(234),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 3),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_date, 2),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [882] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(259),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [891] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(262),
  [894] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(263),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 6),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 5),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 4),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 5),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [925] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_repeat2, 2), SHIFT_REPEAT(275),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_repeat2, 2),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [936] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(280),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 7),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 2),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xact_date, 2),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3, .production_id = 2),
  [1019] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(315),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 3),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1, .production_id = 1),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1062] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_repeat2, 2), SHIFT_REPEAT(336),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval, 1),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 8),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_value, 1),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 9),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 5),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 5),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 7),
  [1145] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 10),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 6),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 3),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 3),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 5),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 4),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
