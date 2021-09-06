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
#define STATE_COUNT 293
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 122
#define ALIAS_COUNT 0
#define TOKEN_COUNT 79
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LF = 1,
  anon_sym_SEMI = 2,
  anon_sym_STAR = 3,
  aux_sym_comment_token1 = 4,
  anon_sym_account = 5,
  anon_sym_eval = 6,
  aux_sym_account_subdirective_token1 = 7,
  anon_sym_payee = 8,
  anon_sym_commodity = 9,
  anon_sym_nomarket = 10,
  anon_sym_tag = 11,
  aux_sym_tag_directive_token1 = 12,
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
  anon_sym_assert = 32,
  anon_sym_check = 33,
  anon_sym_i = 34,
  anon_sym_I = 35,
  anon_sym_o = 36,
  anon_sym_O = 37,
  anon_sym_TILDE = 38,
  aux_sym_interval_token1 = 39,
  aux_sym_interval_token2 = 40,
  aux_sym_interval_token3 = 41,
  aux_sym_interval_token4 = 42,
  aux_sym_interval_token5 = 43,
  aux_sym_interval_token6 = 44,
  aux_sym_interval_token7 = 45,
  aux_sym_interval_token8 = 46,
  aux_sym_interval_token9 = 47,
  aux_sym_interval_token10 = 48,
  aux_sym_interval_token11 = 49,
  aux_sym_interval_token12 = 50,
  aux_sym_interval_token13 = 51,
  aux_sym_interval_token14 = 52,
  aux_sym_interval_token15 = 53,
  aux_sym_interval_token16 = 54,
  aux_sym_interval_token17 = 55,
  sym__dsep = 56,
  sym__2d = 57,
  sym_time = 58,
  anon_sym_BANG = 59,
  anon_sym_LPAREN = 60,
  aux_sym_code_token1 = 61,
  anon_sym_RPAREN = 62,
  sym_payee = 63,
  aux_sym_note_token1 = 64,
  anon_sym_LBRACK = 65,
  anon_sym_RBRACK = 66,
  sym_account_name = 67,
  anon_sym_DASH = 68,
  aux_sym_quantity_token1 = 69,
  aux_sym_commodity_token1 = 70,
  aux_sym_commodity_token2 = 71,
  aux_sym_commodity_token3 = 72,
  anon_sym_AT = 73,
  anon_sym_AT_AT = 74,
  anon_sym_ = 75,
  anon_sym_TAB = 76,
  anon_sym_2 = 77,
  anon_sym_TAB2 = 78,
  sym_source_file = 79,
  sym_journal_item = 80,
  sym_comment = 81,
  sym_directive = 82,
  sym_account_directive = 83,
  sym_account_subdirective = 84,
  sym_commodity_directive = 85,
  sym_commodity_subdirective = 86,
  sym_tag_directive = 87,
  sym_word_directive = 88,
  sym_filename = 89,
  sym_char_directive = 90,
  sym_alias_subdirective = 91,
  sym_default_subdirective = 92,
  sym_format_subdirective = 93,
  sym_note_subdirective = 94,
  sym_assert_subdirective = 95,
  sym_check_subdirective = 96,
  sym_check_in = 97,
  sym_check_out = 98,
  sym_xact = 99,
  sym_plain_xact = 100,
  sym_periodic_xact = 101,
  sym_interval = 102,
  sym_date = 103,
  sym__4d = 104,
  sym__single_date = 105,
  sym_status = 106,
  sym_code = 107,
  sym_note = 108,
  sym_posting = 109,
  sym_account = 110,
  sym_amount = 111,
  sym_quantity = 112,
  sym_commodity = 113,
  sym_price = 114,
  sym_balance_assertion = 115,
  aux_sym_source_file_repeat1 = 116,
  aux_sym_account_directive_repeat1 = 117,
  aux_sym_commodity_directive_repeat1 = 118,
  aux_sym_tag_directive_repeat1 = 119,
  aux_sym_plain_xact_repeat1 = 120,
  aux_sym_whitespace_repeat1 = 121,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_STAR] = "*",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_account] = "account",
  [anon_sym_eval] = "eval",
  [aux_sym_account_subdirective_token1] = "account_subdirective_token1",
  [anon_sym_payee] = "payee",
  [anon_sym_commodity] = "commodity",
  [anon_sym_nomarket] = "nomarket",
  [anon_sym_tag] = "tag",
  [aux_sym_tag_directive_token1] = "tag_directive_token1",
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
  [anon_sym_BANG] = "!",
  [anon_sym_LPAREN] = "(",
  [aux_sym_code_token1] = "code_token1",
  [anon_sym_RPAREN] = ")",
  [sym_payee] = "payee",
  [aux_sym_note_token1] = "note_token1",
  [anon_sym_LBRACK] = "",
  [anon_sym_RBRACK] = "",
  [sym_account_name] = "",
  [anon_sym_DASH] = "-",
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
  [sym_comment] = "comment",
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
  [aux_sym_account_directive_repeat1] = "account_directive_repeat1",
  [aux_sym_commodity_directive_repeat1] = "commodity_directive_repeat1",
  [aux_sym_tag_directive_repeat1] = "tag_directive_repeat1",
  [aux_sym_plain_xact_repeat1] = "plain_xact_repeat1",
  [aux_sym_whitespace_repeat1] = "whitespace_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_account] = anon_sym_account,
  [anon_sym_eval] = anon_sym_eval,
  [aux_sym_account_subdirective_token1] = aux_sym_account_subdirective_token1,
  [anon_sym_payee] = anon_sym_payee,
  [anon_sym_commodity] = anon_sym_commodity,
  [anon_sym_nomarket] = anon_sym_nomarket,
  [anon_sym_tag] = anon_sym_tag,
  [aux_sym_tag_directive_token1] = aux_sym_tag_directive_token1,
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
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_code_token1] = aux_sym_code_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_payee] = sym_payee,
  [aux_sym_note_token1] = aux_sym_note_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_LBRACK,
  [sym_account_name] = anon_sym_LBRACK,
  [anon_sym_DASH] = anon_sym_DASH,
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
  [sym_comment] = sym_comment,
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

static inline bool aux_sym_tag_directive_token1_character_set_1(int32_t c) {
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
          : c <= 8383)
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
      if (eof) ADVANCE(204);
      if (lookahead == '\t') ADVANCE(431);
      if (lookahead == '\n') ADVANCE(205);
      if (lookahead == ' ') ADVANCE(426);
      if (lookahead == '!') ADVANCE(302);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '(') ADVANCE(304);
      if (lookahead == ')') ADVANCE(307);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead == '-') ADVANCE(315);
      if (lookahead == ';') ADVANCE(206);
      if (lookahead == '=') ADVANCE(231);
      if (lookahead == '@') ADVANCE(424);
      if (lookahead == 'A') ADVANCE(241);
      if (lookahead == 'B') ADVANCE(391);
      if (lookahead == 'C') ADVANCE(249);
      if (lookahead == 'D') ADVANCE(247);
      if (lookahead == 'I') ADVANCE(267);
      if (lookahead == 'N') ADVANCE(245);
      if (lookahead == 'O') ADVANCE(271);
      if (lookahead == 'P') ADVANCE(251);
      if (lookahead == 'Y') ADVANCE(243);
      if (lookahead == '[') ADVANCE(310);
      if (lookahead == ']') ADVANCE(312);
      if (lookahead == 'a') ADVANCE(326);
      if (lookahead == 'b') ADVANCE(377);
      if (lookahead == 'c') ADVANCE(345);
      if (lookahead == 'd') ADVANCE(334);
      if (lookahead == 'e') ADVANCE(358);
      if (lookahead == 'f') ADVANCE(360);
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(361);
      if (lookahead == 'o') ADVANCE(269);
      if (lookahead == 'p') ADVANCE(320);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == 'y') ADVANCE(318);
      if (lookahead == '~') ADVANCE(272);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(405);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(413);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(385);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(422);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(421);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(431);
      if (lookahead == '\n') ADVANCE(205);
      if (lookahead == ' ') ADVANCE(426);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '-') ADVANCE(315);
      if (lookahead == ';') ADVANCE(206);
      if (lookahead == '=') ADVANCE(231);
      if (lookahead == '@') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(422);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(431);
      if (lookahead == '\n') ADVANCE(205);
      if (lookahead == ' ') ADVANCE(426);
      if (lookahead == '=') ADVANCE(231);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(431);
      if (lookahead == '\n') ADVANCE(205);
      if (lookahead == ' ') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(426);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == ';') ADVANCE(206);
      if (lookahead == '=') ADVANCE(231);
      if (lookahead == '@') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(422);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(426);
      if (lookahead == '-') ADVANCE(315);
      if (lookahead == 'D') ADVANCE(102);
      if (lookahead == 'E') ADVANCE(179);
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(132);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(150);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(176);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(117);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(426);
      if (lookahead == '-') ADVANCE(315);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(426);
      if (lookahead == '!') ADVANCE(303);
      if (lookahead == '(') ADVANCE(305);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == ';') ADVANCE(206);
      if (lookahead == '[') ADVANCE(311);
      if (lookahead != 0) ADVANCE(314);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(426);
      if (lookahead == '(') ADVANCE(305);
      if (lookahead == '[') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(314);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(428);
      if (lookahead == '!') ADVANCE(302);
      if (lookahead == '(') ADVANCE(304);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 11:
      if (lookahead == '\t') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == '\t') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(230);
      END_STATE();
    case 13:
      if (lookahead == '\t') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(437);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == 'c') ADVANCE(18);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == 'e') ADVANCE(14);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == 'e') ADVANCE(19);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == 'h') ADVANCE(15);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == 'k') ADVANCE(262);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == 'r') ADVANCE(22);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == 's') ADVANCE(21);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == 's') ADVANCE(16);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == 't') ADVANCE(259);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(223);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(209);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(197);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(198);
      END_STATE();
    case 31:
      if (lookahead == 'V') ADVANCE(113);
      if (lookahead == 'v') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 'l') ADVANCE(64);
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(226);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(233);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(221);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(56);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 66:
      if (lookahead == 'k') ADVANCE(261);
      END_STATE();
    case 67:
      if (lookahead == 'k') ADVANCE(55);
      END_STATE();
    case 68:
      if (lookahead == 'k') ADVANCE(57);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(64);
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(38);
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 96:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 100:
      if (lookahead == 'y') ADVANCE(217);
      END_STATE();
    case 101:
      if (lookahead == 'y') ADVANCE(58);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 111:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(107);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(151);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(177);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(118);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 112:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(108);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(152);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(178);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 128:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(275);
      END_STATE();
    case 129:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(167);
      END_STATE();
    case 130:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 131:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(143);
      END_STATE();
    case 132:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 134:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(274);
      END_STATE();
    case 135:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(165);
      END_STATE();
    case 136:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(139);
      END_STATE();
    case 137:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(142);
      END_STATE();
    case 138:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 139:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 140:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 141:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 142:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 143:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 144:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 145:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(153);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(127);
      END_STATE();
    case 146:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 147:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 148:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 149:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 150:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 151:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 152:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 153:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 154:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 155:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 156:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 157:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 158:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 159:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 160:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 161:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 162:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 163:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 164:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(278);
      END_STATE();
    case 165:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(279);
      END_STATE();
    case 166:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(282);
      END_STATE();
    case 167:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(280);
      END_STATE();
    case 168:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(281);
      END_STATE();
    case 169:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
      END_STATE();
    case 170:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(128);
      END_STATE();
    case 171:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 172:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(126);
      END_STATE();
    case 173:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 174:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 175:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(131);
      END_STATE();
    case 176:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 177:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 178:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 179:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(113);
      END_STATE();
    case 180:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(283);
      END_STATE();
    case 181:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(26);
      END_STATE();
    case 182:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(285);
      END_STATE();
    case 183:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(295);
      END_STATE();
    case 184:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(289);
      END_STATE();
    case 185:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(287);
      END_STATE();
    case 186:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(273);
      END_STATE();
    case 187:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(291);
      END_STATE();
    case 188:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(293);
      END_STATE();
    case 189:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(164);
      END_STATE();
    case 190:
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 200:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(314);
      END_STATE();
    case 201:
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(314);
      END_STATE();
    case 202:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 203:
      if (eof) ADVANCE(204);
      if (lookahead == '\t') ADVANCE(431);
      if (lookahead == '\n') ADVANCE(205);
      if (lookahead == ' ') ADVANCE(426);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead == ';') ADVANCE(206);
      if (lookahead == '=') ADVANCE(231);
      if (lookahead == '@') ADVANCE(424);
      if (lookahead == 'A') ADVANCE(240);
      if (lookahead == 'C') ADVANCE(248);
      if (lookahead == 'D') ADVANCE(246);
      if (lookahead == 'I') ADVANCE(266);
      if (lookahead == 'N') ADVANCE(244);
      if (lookahead == 'O') ADVANCE(270);
      if (lookahead == 'P') ADVANCE(250);
      if (lookahead == 'Y') ADVANCE(242);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(265);
      if (lookahead == 'o') ADVANCE(268);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == 'y') ADVANCE(52);
      if (lookahead == '~') ADVANCE(272);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(313);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_account);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_eval);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_eval);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_account_subdirective_token1);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_payee);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_payee);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_nomarket);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_nomarket);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_tag);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_tag_directive_token1);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_include);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_end);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_alias);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_word_directive_token1);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_word_directive_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'a') ADVANCE(379);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(421);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(415);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_word_directive_token3);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_bucket);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_A);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(382);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_N);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(392);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(421);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_C);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_P);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_default);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_format);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_note);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_assert);
      if (lookahead == '\n') ADVANCE(223);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_assert);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_check);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '\n') ADVANCE(223);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_check);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(329);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_I);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_o);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_O);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_interval_token1);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_interval_token2);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_interval_token3);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_interval_token4);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_interval_token5);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_interval_token6);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_interval_token7);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_interval_token8);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_interval_token9);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_interval_token10);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_interval_token11);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_interval_token11);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_interval_token12);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_interval_token12);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_interval_token13);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_interval_token13);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_interval_token14);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_interval_token14);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_interval_token15);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_interval_token15);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_interval_token16);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_interval_token16);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_interval_token17);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_interval_token17);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__dsep);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__2d);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__2d);
      if (lookahead == ':') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(313);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(313);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(313);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(313);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'A') ADVANCE(408);
      if (lookahead == 'a') ADVANCE(319);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(421);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E') ADVANCE(382);
      if (lookahead == 'e') ADVANCE(317);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'R') ADVANCE(396);
      if (lookahead == 'r') ADVANCE(236);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(381);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(421);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(344);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(421);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(351);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(421);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(367);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(421);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(366);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(421);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(371);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(421);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(330);
      if (lookahead == 'l') ADVANCE(346);
      if (lookahead == 's') ADVANCE(368);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(349);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(348);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(352);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(362);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(227);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(347);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(343);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(392);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(421);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(257);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(216);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(225);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(364);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(370);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(328);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(374);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'f') ADVANCE(234);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'g') ADVANCE(222);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'h') ADVANCE(340);
      if (lookahead == 'o') ADVANCE(354);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(323);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(375);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(263);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(339);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(342);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(213);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(378);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(373);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(355);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(363);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(324);
      if (lookahead == 't') ADVANCE(335);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(325);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(331);
      if (lookahead == 'v') ADVANCE(322);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(372);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(365);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(356);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(376);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(332);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(369);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(357);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(350);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(229);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(338);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(260);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(239);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(255);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(211);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(253);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(220);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(380);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(359);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(327);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(402);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(333);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(353);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'y') ADVANCE(218);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'y') ADVANCE(341);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(408);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(421);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(407);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(421);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(384);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(409);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(394);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(398);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(400);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(402);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(395);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(397);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(399);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(414);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(415);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(416);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(417);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(418);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(419);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(420);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(406);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(388);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(410);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(412);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(403);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(404);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(411);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(396);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(401);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(389);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(386);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(390);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(383);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(284);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(296);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(286);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(290);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(288);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(292);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(294);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_commodity_token3);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(425);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(308);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(230);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(313);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(308);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(230);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 203},
  [2] = {.lex_state = 203},
  [3] = {.lex_state = 203},
  [4] = {.lex_state = 203},
  [5] = {.lex_state = 203},
  [6] = {.lex_state = 203},
  [7] = {.lex_state = 203},
  [8] = {.lex_state = 203},
  [9] = {.lex_state = 203},
  [10] = {.lex_state = 203},
  [11] = {.lex_state = 203},
  [12] = {.lex_state = 203},
  [13] = {.lex_state = 203},
  [14] = {.lex_state = 203},
  [15] = {.lex_state = 203},
  [16] = {.lex_state = 203},
  [17] = {.lex_state = 203},
  [18] = {.lex_state = 203},
  [19] = {.lex_state = 203},
  [20] = {.lex_state = 203},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 203},
  [23] = {.lex_state = 203},
  [24] = {.lex_state = 203},
  [25] = {.lex_state = 203},
  [26] = {.lex_state = 203},
  [27] = {.lex_state = 203},
  [28] = {.lex_state = 203},
  [29] = {.lex_state = 203},
  [30] = {.lex_state = 203},
  [31] = {.lex_state = 203},
  [32] = {.lex_state = 203},
  [33] = {.lex_state = 203},
  [34] = {.lex_state = 203},
  [35] = {.lex_state = 203},
  [36] = {.lex_state = 203},
  [37] = {.lex_state = 203},
  [38] = {.lex_state = 203},
  [39] = {.lex_state = 203},
  [40] = {.lex_state = 203},
  [41] = {.lex_state = 203},
  [42] = {.lex_state = 203},
  [43] = {.lex_state = 203},
  [44] = {.lex_state = 203},
  [45] = {.lex_state = 203},
  [46] = {.lex_state = 203},
  [47] = {.lex_state = 203},
  [48] = {.lex_state = 203},
  [49] = {.lex_state = 203},
  [50] = {.lex_state = 203},
  [51] = {.lex_state = 203},
  [52] = {.lex_state = 203},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 203},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 203},
  [94] = {.lex_state = 203},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 203},
  [97] = {.lex_state = 203},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 10},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 203},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 9},
  [162] = {.lex_state = 9},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 11},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 10},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 11},
  [172] = {.lex_state = 11},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 9},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 9},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 9},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 9},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 9},
  [188] = {.lex_state = 11},
  [189] = {.lex_state = 11},
  [190] = {.lex_state = 11},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 12},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 9},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 203},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 10},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 9},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
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
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 306},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 203},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 203},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 5},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 309},
  [263] = {.lex_state = 3},
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
  [277] = {.lex_state = 3},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 202},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 25},
  [284] = {.lex_state = 3},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 203},
  [290] = {.lex_state = 201},
  [291] = {.lex_state = 201},
  [292] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_account] = ACTIONS(1),
    [anon_sym_eval] = ACTIONS(1),
    [anon_sym_payee] = ACTIONS(1),
    [anon_sym_commodity] = ACTIONS(1),
    [anon_sym_nomarket] = ACTIONS(1),
    [anon_sym_tag] = ACTIONS(1),
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
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_check] = ACTIONS(1),
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
    [sym__dsep] = ACTIONS(1),
    [sym__2d] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_commodity_token1] = ACTIONS(1),
    [aux_sym_commodity_token2] = ACTIONS(1),
    [aux_sym_commodity_token3] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(248),
    [sym_journal_item] = STATE(2),
    [sym_comment] = STATE(52),
    [sym_directive] = STATE(52),
    [sym_account_directive] = STATE(51),
    [sym_commodity_directive] = STATE(51),
    [sym_tag_directive] = STATE(51),
    [sym_word_directive] = STATE(246),
    [sym_char_directive] = STATE(246),
    [sym_check_in] = STATE(245),
    [sym_check_out] = STATE(245),
    [sym_xact] = STATE(52),
    [sym_plain_xact] = STATE(50),
    [sym_periodic_xact] = STATE(50),
    [sym_date] = STATE(182),
    [sym__4d] = STATE(243),
    [sym__single_date] = STATE(157),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_account] = ACTIONS(9),
    [anon_sym_commodity] = ACTIONS(11),
    [anon_sym_tag] = ACTIONS(13),
    [anon_sym_include] = ACTIONS(15),
    [anon_sym_end] = ACTIONS(17),
    [anon_sym_alias] = ACTIONS(19),
    [anon_sym_def] = ACTIONS(21),
    [anon_sym_year] = ACTIONS(23),
    [aux_sym_word_directive_token3] = ACTIONS(25),
    [anon_sym_bucket] = ACTIONS(27),
    [anon_sym_A] = ACTIONS(29),
    [anon_sym_Y] = ACTIONS(31),
    [anon_sym_N] = ACTIONS(33),
    [anon_sym_D] = ACTIONS(35),
    [anon_sym_C] = ACTIONS(37),
    [anon_sym_P] = ACTIONS(39),
    [anon_sym_i] = ACTIONS(41),
    [anon_sym_I] = ACTIONS(43),
    [anon_sym_o] = ACTIONS(45),
    [anon_sym_O] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(47),
    [sym__2d] = ACTIONS(49),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 33,
    ACTIONS(9), 1,
      anon_sym_account,
    ACTIONS(11), 1,
      anon_sym_commodity,
    ACTIONS(13), 1,
      anon_sym_tag,
    ACTIONS(15), 1,
      anon_sym_include,
    ACTIONS(17), 1,
      anon_sym_end,
    ACTIONS(19), 1,
      anon_sym_alias,
    ACTIONS(21), 1,
      anon_sym_def,
    ACTIONS(23), 1,
      anon_sym_year,
    ACTIONS(25), 1,
      aux_sym_word_directive_token3,
    ACTIONS(27), 1,
      anon_sym_bucket,
    ACTIONS(29), 1,
      anon_sym_A,
    ACTIONS(31), 1,
      anon_sym_Y,
    ACTIONS(33), 1,
      anon_sym_N,
    ACTIONS(35), 1,
      anon_sym_D,
    ACTIONS(37), 1,
      anon_sym_C,
    ACTIONS(39), 1,
      anon_sym_P,
    ACTIONS(41), 1,
      anon_sym_i,
    ACTIONS(43), 1,
      anon_sym_I,
    ACTIONS(47), 1,
      anon_sym_TILDE,
    ACTIONS(49), 1,
      sym__2d,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      anon_sym_LF,
    STATE(157), 1,
      sym__single_date,
    STATE(182), 1,
      sym_date,
    STATE(243), 1,
      sym__4d,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(45), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(50), 2,
      sym_plain_xact,
      sym_periodic_xact,
    STATE(245), 2,
      sym_check_in,
      sym_check_out,
    STATE(246), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(51), 3,
      sym_account_directive,
      sym_commodity_directive,
      sym_tag_directive,
    STATE(52), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [110] = 33,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      anon_sym_account,
    ACTIONS(66), 1,
      anon_sym_commodity,
    ACTIONS(69), 1,
      anon_sym_tag,
    ACTIONS(72), 1,
      anon_sym_include,
    ACTIONS(75), 1,
      anon_sym_end,
    ACTIONS(78), 1,
      anon_sym_alias,
    ACTIONS(81), 1,
      anon_sym_def,
    ACTIONS(84), 1,
      anon_sym_year,
    ACTIONS(87), 1,
      aux_sym_word_directive_token3,
    ACTIONS(90), 1,
      anon_sym_bucket,
    ACTIONS(93), 1,
      anon_sym_A,
    ACTIONS(96), 1,
      anon_sym_Y,
    ACTIONS(99), 1,
      anon_sym_N,
    ACTIONS(102), 1,
      anon_sym_D,
    ACTIONS(105), 1,
      anon_sym_C,
    ACTIONS(108), 1,
      anon_sym_P,
    ACTIONS(111), 1,
      anon_sym_i,
    ACTIONS(114), 1,
      anon_sym_I,
    ACTIONS(120), 1,
      anon_sym_TILDE,
    ACTIONS(123), 1,
      sym__2d,
    STATE(157), 1,
      sym__single_date,
    STATE(182), 1,
      sym_date,
    STATE(243), 1,
      sym__4d,
    ACTIONS(60), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(117), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(50), 2,
      sym_plain_xact,
      sym_periodic_xact,
    STATE(245), 2,
      sym_check_in,
      sym_check_out,
    STATE(246), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(51), 3,
      sym_account_directive,
      sym_commodity_directive,
      sym_tag_directive,
    STATE(52), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [220] = 6,
    STATE(81), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(128), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(130), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    STATE(47), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_note_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
    ACTIONS(126), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [269] = 6,
    STATE(81), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(134), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(136), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    STATE(47), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_note_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
    ACTIONS(132), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [318] = 6,
    STATE(81), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(130), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(141), 2,
      anon_sym_i,
      sym__2d,
    STATE(4), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    STATE(47), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_note_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
    ACTIONS(139), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [367] = 6,
    STATE(88), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(145), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(147), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(7), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    STATE(24), 4,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_note_subdirective,
    ACTIONS(143), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [415] = 6,
    STATE(88), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(152), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(154), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(9), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    STATE(24), 4,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_note_subdirective,
    ACTIONS(150), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [463] = 6,
    STATE(88), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(154), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(158), 2,
      anon_sym_i,
      sym__2d,
    STATE(7), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    STATE(24), 4,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_note_subdirective,
    ACTIONS(156), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [511] = 5,
    STATE(151), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(162), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(164), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(11), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(160), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [554] = 5,
    STATE(151), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(164), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(168), 2,
      anon_sym_i,
      sym__2d,
    STATE(12), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(166), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [597] = 5,
    STATE(151), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(172), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(174), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(12), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(170), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [640] = 5,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(179), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(181), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(16), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(177), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [682] = 5,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(181), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(185), 2,
      anon_sym_i,
      sym__2d,
    STATE(16), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(183), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [724] = 5,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(181), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(189), 2,
      anon_sym_i,
      sym__2d,
    STATE(16), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(187), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [766] = 5,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(193), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(195), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(16), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(191), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [808] = 2,
    ACTIONS(200), 3,
      anon_sym_i,
      sym__2d,
      anon_sym_AT,
    ACTIONS(198), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_EQ,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [844] = 2,
    ACTIONS(204), 3,
      anon_sym_i,
      sym__2d,
      anon_sym_AT,
    ACTIONS(202), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_EQ,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [880] = 5,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(181), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(208), 2,
      anon_sym_i,
      sym__2d,
    STATE(16), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(206), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [922] = 5,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(181), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(212), 2,
      anon_sym_i,
      sym__2d,
    STATE(16), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(210), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [964] = 3,
    STATE(21), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(214), 26,
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
  [1000] = 2,
    ACTIONS(221), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(219), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
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
  [1033] = 2,
    ACTIONS(225), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(223), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
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
  [1066] = 2,
    ACTIONS(229), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(227), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
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
  [1099] = 2,
    ACTIONS(233), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(231), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
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
  [1132] = 2,
    ACTIONS(237), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(235), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
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
  [1165] = 2,
    ACTIONS(241), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(239), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
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
  [1198] = 2,
    ACTIONS(245), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(243), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
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
  [1231] = 2,
    ACTIONS(249), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(247), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
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
  [1264] = 2,
    ACTIONS(253), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(251), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
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
    ACTIONS(257), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(255), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
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
  [1330] = 2,
    ACTIONS(261), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(259), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
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
  [1363] = 2,
    ACTIONS(265), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(263), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
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
  [1396] = 2,
    ACTIONS(269), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(267), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
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
  [1429] = 2,
    ACTIONS(273), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(271), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
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
  [1462] = 2,
    ACTIONS(277), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(275), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
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
  [1495] = 2,
    ACTIONS(281), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(279), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
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
  [1528] = 2,
    ACTIONS(285), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(283), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
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
  [1561] = 2,
    ACTIONS(289), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(287), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
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
  [1594] = 2,
    ACTIONS(293), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(291), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
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
  [1627] = 2,
    ACTIONS(297), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(295), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
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
  [1660] = 2,
    ACTIONS(301), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(299), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
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
  [1693] = 2,
    ACTIONS(305), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(303), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
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
  [1726] = 2,
    ACTIONS(309), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(307), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
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
  [1759] = 2,
    ACTIONS(313), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(311), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
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
  [1792] = 2,
    ACTIONS(317), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(315), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
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
  [1825] = 2,
    ACTIONS(321), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(319), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
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
  [1858] = 2,
    ACTIONS(325), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(323), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [1889] = 2,
    ACTIONS(329), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(327), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [1920] = 2,
    ACTIONS(333), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(331), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [1951] = 2,
    ACTIONS(337), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(335), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [1982] = 2,
    ACTIONS(341), 2,
      anon_sym_i,
      sym__2d,
    ACTIONS(339), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token3,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [2013] = 4,
    STATE(21), 1,
      aux_sym_whitespace_repeat1,
    STATE(260), 1,
      sym_interval,
    ACTIONS(345), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(343), 17,
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
  [2043] = 16,
    ACTIONS(347), 1,
      anon_sym_LF,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_EQ,
    ACTIONS(353), 1,
      anon_sym_DASH,
    ACTIONS(355), 1,
      aux_sym_quantity_token1,
    ACTIONS(359), 1,
      anon_sym_AT,
    ACTIONS(361), 1,
      anon_sym_AT_AT,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    STATE(77), 1,
      sym_amount,
    STATE(87), 1,
      sym_price,
    STATE(100), 1,
      sym_quantity,
    STATE(126), 1,
      sym_balance_assertion,
    STATE(129), 1,
      sym_commodity,
    STATE(271), 1,
      sym_note,
    ACTIONS(363), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(357), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2095] = 16,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_EQ,
    ACTIONS(353), 1,
      anon_sym_DASH,
    ACTIONS(355), 1,
      aux_sym_quantity_token1,
    ACTIONS(359), 1,
      anon_sym_AT,
    ACTIONS(361), 1,
      anon_sym_AT_AT,
    ACTIONS(365), 1,
      anon_sym_LF,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(65), 1,
      sym_amount,
    STATE(92), 1,
      sym_price,
    STATE(100), 1,
      sym_quantity,
    STATE(129), 1,
      sym_commodity,
    STATE(134), 1,
      sym_balance_assertion,
    STATE(285), 1,
      sym_note,
    ACTIONS(367), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(357), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2147] = 16,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_EQ,
    ACTIONS(353), 1,
      anon_sym_DASH,
    ACTIONS(355), 1,
      aux_sym_quantity_token1,
    ACTIONS(359), 1,
      anon_sym_AT,
    ACTIONS(361), 1,
      anon_sym_AT_AT,
    ACTIONS(369), 1,
      anon_sym_LF,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    STATE(67), 1,
      sym_amount,
    STATE(99), 1,
      sym_price,
    STATE(100), 1,
      sym_quantity,
    STATE(129), 1,
      sym_commodity,
    STATE(133), 1,
      sym_balance_assertion,
    STATE(244), 1,
      sym_note,
    ACTIONS(371), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(357), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2199] = 15,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_EQ,
    ACTIONS(353), 1,
      anon_sym_DASH,
    ACTIONS(355), 1,
      aux_sym_quantity_token1,
    ACTIONS(359), 1,
      anon_sym_AT,
    ACTIONS(361), 1,
      anon_sym_AT_AT,
    STATE(61), 1,
      aux_sym_whitespace_repeat1,
    STATE(77), 1,
      sym_amount,
    STATE(87), 1,
      sym_price,
    STATE(100), 1,
      sym_quantity,
    STATE(126), 1,
      sym_balance_assertion,
    STATE(129), 1,
      sym_commodity,
    STATE(271), 1,
      sym_note,
    ACTIONS(373), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(357), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2248] = 15,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_EQ,
    ACTIONS(353), 1,
      anon_sym_DASH,
    ACTIONS(355), 1,
      aux_sym_quantity_token1,
    ACTIONS(359), 1,
      anon_sym_AT,
    ACTIONS(361), 1,
      anon_sym_AT_AT,
    STATE(61), 1,
      aux_sym_whitespace_repeat1,
    STATE(70), 1,
      sym_amount,
    STATE(91), 1,
      sym_price,
    STATE(100), 1,
      sym_quantity,
    STATE(129), 1,
      sym_commodity,
    STATE(132), 1,
      sym_balance_assertion,
    STATE(240), 1,
      sym_note,
    ACTIONS(373), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(357), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2297] = 15,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_EQ,
    ACTIONS(353), 1,
      anon_sym_DASH,
    ACTIONS(355), 1,
      aux_sym_quantity_token1,
    ACTIONS(359), 1,
      anon_sym_AT,
    ACTIONS(361), 1,
      anon_sym_AT_AT,
    STATE(61), 1,
      aux_sym_whitespace_repeat1,
    STATE(65), 1,
      sym_amount,
    STATE(92), 1,
      sym_price,
    STATE(100), 1,
      sym_quantity,
    STATE(129), 1,
      sym_commodity,
    STATE(134), 1,
      sym_balance_assertion,
    STATE(285), 1,
      sym_note,
    ACTIONS(373), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(357), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2346] = 4,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(375), 2,
      sym__2d,
      anon_sym_AT,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(214), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      aux_sym_word_directive_token3,
      sym_time,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
  [2368] = 4,
    ACTIONS(375), 1,
      anon_sym_AT,
    STATE(61), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(380), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(214), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      aux_sym_quantity_token1,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
  [2389] = 11,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      anon_sym_LBRACK,
    ACTIONS(389), 1,
      sym_account_name,
    ACTIONS(391), 1,
      anon_sym_,
    ACTIONS(393), 1,
      anon_sym_TAB,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    STATE(122), 1,
      sym_status,
    STATE(175), 1,
      sym_account,
    STATE(258), 1,
      sym_note,
    ACTIONS(383), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [2424] = 2,
    ACTIONS(317), 1,
      anon_sym_AT,
    ACTIONS(315), 11,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      aux_sym_quantity_token1,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [2441] = 8,
    ACTIONS(353), 1,
      anon_sym_DASH,
    ACTIONS(355), 1,
      aux_sym_quantity_token1,
    STATE(37), 1,
      sym_amount,
    STATE(61), 1,
      aux_sym_whitespace_repeat1,
    STATE(108), 1,
      sym_quantity,
    STATE(135), 1,
      sym_commodity,
    ACTIONS(373), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(357), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2469] = 10,
    ACTIONS(347), 1,
      anon_sym_LF,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_EQ,
    ACTIONS(359), 1,
      anon_sym_AT,
    ACTIONS(361), 1,
      anon_sym_AT_AT,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(87), 1,
      sym_price,
    STATE(126), 1,
      sym_balance_assertion,
    STATE(271), 1,
      sym_note,
    ACTIONS(395), 2,
      anon_sym_,
      anon_sym_TAB,
  [2501] = 8,
    ACTIONS(353), 1,
      anon_sym_DASH,
    ACTIONS(355), 1,
      aux_sym_quantity_token1,
    STATE(71), 1,
      aux_sym_whitespace_repeat1,
    STATE(100), 1,
      sym_quantity,
    STATE(129), 1,
      sym_commodity,
    STATE(254), 1,
      sym_amount,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(357), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2529] = 10,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_EQ,
    ACTIONS(359), 1,
      anon_sym_AT,
    ACTIONS(361), 1,
      anon_sym_AT_AT,
    ACTIONS(365), 1,
      anon_sym_LF,
    STATE(80), 1,
      aux_sym_whitespace_repeat1,
    STATE(92), 1,
      sym_price,
    STATE(134), 1,
      sym_balance_assertion,
    STATE(285), 1,
      sym_note,
    ACTIONS(399), 2,
      anon_sym_,
      anon_sym_TAB,
  [2561] = 8,
    ACTIONS(353), 1,
      anon_sym_DASH,
    ACTIONS(355), 1,
      aux_sym_quantity_token1,
    STATE(76), 1,
      aux_sym_whitespace_repeat1,
    STATE(100), 1,
      sym_quantity,
    STATE(129), 1,
      sym_commodity,
    STATE(153), 1,
      sym_amount,
    ACTIONS(401), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(357), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2589] = 8,
    ACTIONS(353), 1,
      anon_sym_DASH,
    ACTIONS(355), 1,
      aux_sym_quantity_token1,
    STATE(73), 1,
      aux_sym_whitespace_repeat1,
    STATE(100), 1,
      sym_quantity,
    STATE(129), 1,
      sym_commodity,
    STATE(207), 1,
      sym_amount,
    ACTIONS(403), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(357), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2617] = 10,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_EQ,
    ACTIONS(359), 1,
      anon_sym_AT,
    ACTIONS(361), 1,
      anon_sym_AT_AT,
    ACTIONS(405), 1,
      anon_sym_LF,
    STATE(84), 1,
      aux_sym_whitespace_repeat1,
    STATE(89), 1,
      sym_price,
    STATE(128), 1,
      sym_balance_assertion,
    STATE(249), 1,
      sym_note,
    ACTIONS(407), 2,
      anon_sym_,
      anon_sym_TAB,
  [2649] = 8,
    ACTIONS(353), 1,
      anon_sym_DASH,
    ACTIONS(355), 1,
      aux_sym_quantity_token1,
    STATE(61), 1,
      aux_sym_whitespace_repeat1,
    STATE(100), 1,
      sym_quantity,
    STATE(129), 1,
      sym_commodity,
    STATE(268), 1,
      sym_amount,
    ACTIONS(373), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(357), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2677] = 8,
    ACTIONS(353), 1,
      anon_sym_DASH,
    ACTIONS(355), 1,
      aux_sym_quantity_token1,
    STATE(74), 1,
      aux_sym_whitespace_repeat1,
    STATE(100), 1,
      sym_quantity,
    STATE(129), 1,
      sym_commodity,
    STATE(268), 1,
      sym_amount,
    ACTIONS(409), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(357), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2705] = 8,
    ACTIONS(353), 1,
      anon_sym_DASH,
    ACTIONS(355), 1,
      aux_sym_quantity_token1,
    STATE(61), 1,
      aux_sym_whitespace_repeat1,
    STATE(100), 1,
      sym_quantity,
    STATE(129), 1,
      sym_commodity,
    STATE(184), 1,
      sym_amount,
    ACTIONS(373), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(357), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2733] = 8,
    ACTIONS(353), 1,
      anon_sym_DASH,
    ACTIONS(355), 1,
      aux_sym_quantity_token1,
    STATE(61), 1,
      aux_sym_whitespace_repeat1,
    STATE(100), 1,
      sym_quantity,
    STATE(129), 1,
      sym_commodity,
    STATE(288), 1,
      sym_amount,
    ACTIONS(373), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(357), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2761] = 8,
    ACTIONS(353), 1,
      anon_sym_DASH,
    ACTIONS(355), 1,
      aux_sym_quantity_token1,
    STATE(61), 1,
      aux_sym_whitespace_repeat1,
    STATE(100), 1,
      sym_quantity,
    STATE(129), 1,
      sym_commodity,
    STATE(251), 1,
      sym_amount,
    ACTIONS(373), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(357), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2789] = 8,
    ACTIONS(353), 1,
      anon_sym_DASH,
    ACTIONS(355), 1,
      aux_sym_quantity_token1,
    STATE(61), 1,
      aux_sym_whitespace_repeat1,
    STATE(100), 1,
      sym_quantity,
    STATE(129), 1,
      sym_commodity,
    STATE(154), 1,
      sym_amount,
    ACTIONS(373), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(357), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2817] = 10,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_EQ,
    ACTIONS(359), 1,
      anon_sym_AT,
    ACTIONS(361), 1,
      anon_sym_AT_AT,
    ACTIONS(411), 1,
      anon_sym_LF,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    STATE(91), 1,
      sym_price,
    STATE(132), 1,
      sym_balance_assertion,
    STATE(240), 1,
      sym_note,
    ACTIONS(413), 2,
      anon_sym_,
      anon_sym_TAB,
  [2849] = 2,
    ACTIONS(241), 1,
      anon_sym_AT,
    ACTIONS(239), 9,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [2864] = 9,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_EQ,
    ACTIONS(359), 1,
      anon_sym_AT,
    ACTIONS(361), 1,
      anon_sym_AT_AT,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(91), 1,
      sym_price,
    STATE(132), 1,
      sym_balance_assertion,
    STATE(240), 1,
      sym_note,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [2893] = 9,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_EQ,
    ACTIONS(359), 1,
      anon_sym_AT,
    ACTIONS(361), 1,
      anon_sym_AT_AT,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(87), 1,
      sym_price,
    STATE(126), 1,
      sym_balance_assertion,
    STATE(271), 1,
      sym_note,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [2922] = 8,
    ACTIONS(419), 1,
      anon_sym_alias,
    ACTIONS(421), 1,
      anon_sym_default,
    ACTIONS(423), 1,
      anon_sym_note,
    ACTIONS(425), 1,
      anon_sym_assert,
    ACTIONS(427), 1,
      anon_sym_check,
    STATE(21), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(345), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(417), 2,
      anon_sym_eval,
      anon_sym_payee,
  [2949] = 9,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_EQ,
    ACTIONS(359), 1,
      anon_sym_AT,
    ACTIONS(361), 1,
      anon_sym_AT_AT,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(89), 1,
      sym_price,
    STATE(128), 1,
      sym_balance_assertion,
    STATE(249), 1,
      sym_note,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [2978] = 2,
    ACTIONS(257), 1,
      anon_sym_AT,
    ACTIONS(255), 9,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [2993] = 9,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_EQ,
    ACTIONS(359), 1,
      anon_sym_AT,
    ACTIONS(361), 1,
      anon_sym_AT_AT,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(95), 1,
      sym_price,
    STATE(136), 1,
      sym_balance_assertion,
    STATE(255), 1,
      sym_note,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [3022] = 7,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      sym_payee,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    STATE(198), 1,
      sym_status,
    STATE(203), 1,
      sym_code,
    ACTIONS(429), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(435), 2,
      anon_sym_,
      anon_sym_TAB,
  [3046] = 5,
    ACTIONS(214), 1,
      anon_sym_SEMI,
    ACTIONS(437), 1,
      anon_sym_,
    ACTIONS(440), 1,
      anon_sym_TAB,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(375), 5,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [3066] = 7,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_EQ,
    ACTIONS(411), 1,
      anon_sym_LF,
    STATE(124), 1,
      aux_sym_whitespace_repeat1,
    STATE(132), 1,
      sym_balance_assertion,
    STATE(240), 1,
      sym_note,
    ACTIONS(443), 2,
      anon_sym_,
      anon_sym_TAB,
  [3089] = 7,
    ACTIONS(419), 1,
      anon_sym_alias,
    ACTIONS(421), 1,
      anon_sym_default,
    ACTIONS(423), 1,
      anon_sym_note,
    ACTIONS(445), 1,
      anon_sym_nomarket,
    ACTIONS(447), 1,
      anon_sym_format,
    STATE(21), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(345), 2,
      anon_sym_,
      anon_sym_TAB,
  [3112] = 7,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_EQ,
    ACTIONS(449), 1,
      anon_sym_LF,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    STATE(136), 1,
      sym_balance_assertion,
    STATE(255), 1,
      sym_note,
    ACTIONS(451), 2,
      anon_sym_,
      anon_sym_TAB,
  [3135] = 7,
    ACTIONS(25), 1,
      aux_sym_word_directive_token3,
    ACTIONS(49), 1,
      sym__2d,
    STATE(97), 1,
      aux_sym_whitespace_repeat1,
    STATE(157), 1,
      sym__single_date,
    STATE(206), 1,
      sym_date,
    STATE(243), 1,
      sym__4d,
    ACTIONS(453), 2,
      anon_sym_,
      anon_sym_TAB,
  [3158] = 7,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_EQ,
    ACTIONS(405), 1,
      anon_sym_LF,
    STATE(125), 1,
      aux_sym_whitespace_repeat1,
    STATE(128), 1,
      sym_balance_assertion,
    STATE(249), 1,
      sym_note,
    ACTIONS(455), 2,
      anon_sym_,
      anon_sym_TAB,
  [3181] = 7,
    ACTIONS(347), 1,
      anon_sym_LF,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_EQ,
    STATE(119), 1,
      aux_sym_whitespace_repeat1,
    STATE(126), 1,
      sym_balance_assertion,
    STATE(271), 1,
      sym_note,
    ACTIONS(457), 2,
      anon_sym_,
      anon_sym_TAB,
  [3204] = 7,
    ACTIONS(25), 1,
      aux_sym_word_directive_token3,
    ACTIONS(49), 1,
      sym__2d,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(157), 1,
      sym__single_date,
    STATE(208), 1,
      sym_date,
    STATE(243), 1,
      sym__4d,
    ACTIONS(459), 2,
      anon_sym_,
      anon_sym_TAB,
  [3227] = 7,
    ACTIONS(25), 1,
      aux_sym_word_directive_token3,
    ACTIONS(49), 1,
      sym__2d,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(157), 1,
      sym__single_date,
    STATE(212), 1,
      sym_date,
    STATE(243), 1,
      sym__4d,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [3250] = 7,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_EQ,
    ACTIONS(461), 1,
      anon_sym_LF,
    STATE(117), 1,
      aux_sym_whitespace_repeat1,
    STATE(140), 1,
      sym_balance_assertion,
    STATE(261), 1,
      sym_note,
    ACTIONS(463), 2,
      anon_sym_,
      anon_sym_TAB,
  [3273] = 7,
    ACTIONS(25), 1,
      aux_sym_word_directive_token3,
    ACTIONS(49), 1,
      sym__2d,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(157), 1,
      sym__single_date,
    STATE(210), 1,
      sym_date,
    STATE(243), 1,
      sym__4d,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [3296] = 7,
    ACTIONS(25), 1,
      aux_sym_word_directive_token3,
    ACTIONS(49), 1,
      sym__2d,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(157), 1,
      sym__single_date,
    STATE(196), 1,
      sym_date,
    STATE(243), 1,
      sym__4d,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [3319] = 4,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(375), 2,
      anon_sym_assert,
      anon_sym_check,
    ACTIONS(465), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(214), 3,
      aux_sym_tag_directive_token1,
      anon_sym_DASH,
      aux_sym_quantity_token1,
  [3336] = 7,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_EQ,
    ACTIONS(365), 1,
      anon_sym_LF,
    STATE(111), 1,
      aux_sym_whitespace_repeat1,
    STATE(134), 1,
      sym_balance_assertion,
    STATE(285), 1,
      sym_note,
    ACTIONS(468), 2,
      anon_sym_,
      anon_sym_TAB,
  [3359] = 4,
    STATE(18), 1,
      sym_commodity,
    STATE(109), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(470), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(357), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3375] = 7,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      anon_sym_LBRACK,
    ACTIONS(389), 1,
      sym_account_name,
    ACTIONS(472), 1,
      anon_sym_,
    ACTIONS(474), 1,
      anon_sym_TAB,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    STATE(251), 1,
      sym_account,
  [3397] = 4,
    ACTIONS(375), 1,
      sym_payee,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(476), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(214), 3,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
  [3413] = 7,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      anon_sym_LBRACK,
    ACTIONS(389), 1,
      sym_account_name,
    ACTIONS(472), 1,
      anon_sym_,
    ACTIONS(474), 1,
      anon_sym_TAB,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    STATE(199), 1,
      sym_account,
  [3435] = 4,
    STATE(17), 1,
      sym_commodity,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(479), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3451] = 7,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      anon_sym_LBRACK,
    ACTIONS(389), 1,
      sym_account_name,
    ACTIONS(481), 1,
      anon_sym_,
    ACTIONS(483), 1,
      anon_sym_TAB,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    STATE(169), 1,
      sym_account,
  [3473] = 4,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(174), 1,
      sym_commodity,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(357), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3489] = 4,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(251), 1,
      sym_commodity,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(357), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3505] = 4,
    STATE(18), 1,
      sym_commodity,
    STATE(104), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(485), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(479), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3521] = 4,
    STATE(17), 1,
      sym_commodity,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(357), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3537] = 7,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      anon_sym_LBRACK,
    ACTIONS(389), 1,
      sym_account_name,
    ACTIONS(472), 1,
      anon_sym_,
    ACTIONS(474), 1,
      anon_sym_TAB,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    STATE(180), 1,
      sym_account,
  [3559] = 6,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_EQ,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(126), 1,
      sym_balance_assertion,
    STATE(271), 1,
      sym_note,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [3579] = 4,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(72), 1,
      sym_commodity,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(357), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3595] = 7,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      anon_sym_LBRACK,
    ACTIONS(389), 1,
      sym_account_name,
    ACTIONS(472), 1,
      anon_sym_,
    ACTIONS(474), 1,
      anon_sym_TAB,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    STATE(239), 1,
      sym_account,
  [3617] = 7,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      anon_sym_LBRACK,
    ACTIONS(389), 1,
      sym_account_name,
    ACTIONS(472), 1,
      anon_sym_,
    ACTIONS(474), 1,
      anon_sym_TAB,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    STATE(195), 1,
      sym_account,
  [3639] = 7,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      anon_sym_LBRACK,
    ACTIONS(389), 1,
      sym_account_name,
    ACTIONS(487), 1,
      anon_sym_,
    ACTIONS(489), 1,
      anon_sym_TAB,
    STATE(118), 1,
      aux_sym_whitespace_repeat1,
    STATE(195), 1,
      sym_account,
  [3661] = 7,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      anon_sym_LBRACK,
    ACTIONS(389), 1,
      sym_account_name,
    ACTIONS(491), 1,
      anon_sym_,
    ACTIONS(493), 1,
      anon_sym_TAB,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    STATE(178), 1,
      sym_account,
  [3683] = 6,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_EQ,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(139), 1,
      sym_balance_assertion,
    STATE(266), 1,
      sym_note,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [3703] = 7,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      anon_sym_LBRACK,
    ACTIONS(389), 1,
      sym_account_name,
    ACTIONS(472), 1,
      anon_sym_,
    ACTIONS(474), 1,
      anon_sym_TAB,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    STATE(178), 1,
      sym_account,
  [3725] = 6,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_EQ,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(132), 1,
      sym_balance_assertion,
    STATE(240), 1,
      sym_note,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [3745] = 4,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(264), 1,
      sym_commodity,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(357), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3761] = 6,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_EQ,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(140), 1,
      sym_balance_assertion,
    STATE(261), 1,
      sym_note,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [3781] = 7,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      anon_sym_LBRACK,
    ACTIONS(389), 1,
      sym_account_name,
    ACTIONS(495), 1,
      anon_sym_,
    ACTIONS(497), 1,
      anon_sym_TAB,
    STATE(110), 1,
      aux_sym_whitespace_repeat1,
    STATE(191), 1,
      sym_account,
  [3803] = 7,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      anon_sym_LBRACK,
    ACTIONS(389), 1,
      sym_account_name,
    ACTIONS(472), 1,
      anon_sym_,
    ACTIONS(474), 1,
      anon_sym_TAB,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    STATE(253), 1,
      sym_account,
  [3825] = 6,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_EQ,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(128), 1,
      sym_balance_assertion,
    STATE(249), 1,
      sym_note,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [3845] = 6,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_EQ,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(136), 1,
      sym_balance_assertion,
    STATE(255), 1,
      sym_note,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [3865] = 5,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(411), 1,
      anon_sym_LF,
    STATE(160), 1,
      aux_sym_whitespace_repeat1,
    STATE(240), 1,
      sym_note,
    ACTIONS(499), 2,
      anon_sym_,
      anon_sym_TAB,
  [3882] = 5,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(501), 1,
      sym_payee,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    STATE(163), 1,
      sym_code,
    ACTIONS(435), 2,
      anon_sym_,
      anon_sym_TAB,
  [3899] = 5,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(449), 1,
      anon_sym_LF,
    STATE(159), 1,
      aux_sym_whitespace_repeat1,
    STATE(255), 1,
      sym_note,
    ACTIONS(503), 2,
      anon_sym_,
      anon_sym_TAB,
  [3916] = 5,
    ACTIONS(353), 1,
      anon_sym_DASH,
    ACTIONS(355), 1,
      aux_sym_quantity_token1,
    STATE(18), 1,
      sym_quantity,
    STATE(138), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(505), 2,
      anon_sym_,
      anon_sym_TAB,
  [3933] = 5,
    ACTIONS(507), 1,
      anon_sym_DASH,
    ACTIONS(509), 1,
      aux_sym_quantity_token1,
    STATE(17), 1,
      sym_quantity,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(511), 2,
      anon_sym_,
      anon_sym_TAB,
  [3950] = 4,
    ACTIONS(513), 1,
      anon_sym_,
    ACTIONS(516), 1,
      anon_sym_TAB,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(375), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [3965] = 5,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(405), 1,
      anon_sym_LF,
    STATE(145), 1,
      aux_sym_whitespace_repeat1,
    STATE(249), 1,
      sym_note,
    ACTIONS(519), 2,
      anon_sym_,
      anon_sym_TAB,
  [3982] = 5,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(365), 1,
      anon_sym_LF,
    STATE(148), 1,
      aux_sym_whitespace_repeat1,
    STATE(285), 1,
      sym_note,
    ACTIONS(521), 2,
      anon_sym_,
      anon_sym_TAB,
  [3999] = 5,
    ACTIONS(347), 1,
      anon_sym_LF,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    STATE(150), 1,
      aux_sym_whitespace_repeat1,
    STATE(271), 1,
      sym_note,
    ACTIONS(523), 2,
      anon_sym_,
      anon_sym_TAB,
  [4016] = 5,
    ACTIONS(507), 1,
      anon_sym_DASH,
    ACTIONS(509), 1,
      aux_sym_quantity_token1,
    STATE(18), 1,
      sym_quantity,
    STATE(130), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(525), 2,
      anon_sym_,
      anon_sym_TAB,
  [4033] = 5,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(461), 1,
      anon_sym_LF,
    STATE(152), 1,
      aux_sym_whitespace_repeat1,
    STATE(261), 1,
      sym_note,
    ACTIONS(527), 2,
      anon_sym_,
      anon_sym_TAB,
  [4050] = 2,
    ACTIONS(531), 1,
      sym__dsep,
    ACTIONS(529), 5,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_,
      anon_sym_TAB,
  [4061] = 5,
    ACTIONS(353), 1,
      anon_sym_DASH,
    ACTIONS(355), 1,
      aux_sym_quantity_token1,
    STATE(17), 1,
      sym_quantity,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(511), 2,
      anon_sym_,
      anon_sym_TAB,
  [4078] = 5,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(533), 1,
      anon_sym_LF,
    STATE(149), 1,
      aux_sym_whitespace_repeat1,
    STATE(270), 1,
      sym_note,
    ACTIONS(535), 2,
      anon_sym_,
      anon_sym_TAB,
  [4095] = 5,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(537), 1,
      anon_sym_LF,
    STATE(144), 1,
      aux_sym_whitespace_repeat1,
    STATE(266), 1,
      sym_note,
    ACTIONS(539), 2,
      anon_sym_,
      anon_sym_TAB,
  [4112] = 3,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(181), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(13), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [4124] = 3,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(181), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(19), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [4136] = 4,
    ACTIONS(541), 1,
      aux_sym_word_directive_token2,
    STATE(166), 1,
      aux_sym_whitespace_repeat1,
    STATE(239), 1,
      sym_filename,
    ACTIONS(543), 2,
      anon_sym_,
      anon_sym_TAB,
  [4150] = 4,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(270), 1,
      sym_note,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [4164] = 4,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(255), 1,
      sym_note,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [4178] = 3,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(181), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [4190] = 1,
    ACTIONS(545), 5,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_,
      anon_sym_TAB,
  [4198] = 4,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(271), 1,
      sym_note,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [4212] = 4,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(273), 1,
      sym_note,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [4226] = 4,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(240), 1,
      sym_note,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [4240] = 4,
    ACTIONS(425), 1,
      anon_sym_assert,
    ACTIONS(427), 1,
      anon_sym_check,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(511), 2,
      anon_sym_,
      anon_sym_TAB,
  [4254] = 4,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(266), 1,
      sym_note,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [4268] = 1,
    ACTIONS(547), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_,
      anon_sym_TAB,
  [4276] = 1,
    ACTIONS(549), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_,
      anon_sym_TAB,
  [4284] = 3,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(181), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(20), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [4296] = 3,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(181), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(15), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [4308] = 2,
    ACTIONS(553), 1,
      anon_sym_EQ,
    ACTIONS(551), 4,
      anon_sym_LF,
      sym_time,
      anon_sym_,
      anon_sym_TAB,
  [4318] = 2,
    ACTIONS(557), 1,
      anon_sym_,
    ACTIONS(555), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
      anon_sym_TAB,
  [4328] = 4,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(261), 1,
      sym_note,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [4342] = 4,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(249), 1,
      sym_note,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [4356] = 3,
    ACTIONS(559), 1,
      sym_payee,
    STATE(209), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(561), 2,
      anon_sym_,
      anon_sym_TAB,
  [4367] = 3,
    ACTIONS(563), 1,
      sym_payee,
    STATE(183), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(565), 2,
      anon_sym_,
      anon_sym_TAB,
  [4378] = 3,
    ACTIONS(567), 1,
      anon_sym_LF,
    STATE(187), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(569), 2,
      anon_sym_,
      anon_sym_TAB,
  [4389] = 3,
    ACTIONS(214), 1,
      aux_sym_account_subdirective_token1,
    STATE(164), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(571), 2,
      anon_sym_,
      anon_sym_TAB,
  [4400] = 3,
    ACTIONS(375), 1,
      aux_sym_word_directive_token1,
    STATE(165), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(574), 2,
      anon_sym_,
      anon_sym_TAB,
  [4411] = 3,
    ACTIONS(375), 1,
      aux_sym_word_directive_token2,
    STATE(166), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(577), 2,
      anon_sym_,
      anon_sym_TAB,
  [4422] = 1,
    ACTIONS(580), 4,
      anon_sym_LF,
      sym_time,
      anon_sym_,
      anon_sym_TAB,
  [4429] = 3,
    ACTIONS(582), 1,
      anon_sym_EQ,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [4440] = 2,
    ACTIONS(584), 1,
      anon_sym_LF,
    ACTIONS(586), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4449] = 3,
    ACTIONS(588), 1,
      sym_time,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [4460] = 3,
    ACTIONS(590), 1,
      aux_sym_account_subdirective_token1,
    STATE(164), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(592), 2,
      anon_sym_,
      anon_sym_TAB,
  [4471] = 3,
    ACTIONS(594), 1,
      aux_sym_account_subdirective_token1,
    STATE(164), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(592), 2,
      anon_sym_,
      anon_sym_TAB,
  [4482] = 3,
    ACTIONS(596), 1,
      sym_time,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [4493] = 3,
    ACTIONS(598), 1,
      anon_sym_EQ,
    STATE(168), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(600), 2,
      anon_sym_,
      anon_sym_TAB,
  [4504] = 2,
    ACTIONS(602), 1,
      anon_sym_LF,
    ACTIONS(604), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4513] = 3,
    ACTIONS(606), 1,
      sym_payee,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(435), 2,
      anon_sym_,
      anon_sym_TAB,
  [4524] = 3,
    ACTIONS(606), 1,
      sym_payee,
    STATE(197), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(608), 2,
      anon_sym_,
      anon_sym_TAB,
  [4535] = 2,
    ACTIONS(610), 1,
      anon_sym_LF,
    ACTIONS(612), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4544] = 3,
    ACTIONS(501), 1,
      sym_payee,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(435), 2,
      anon_sym_,
      anon_sym_TAB,
  [4555] = 2,
    ACTIONS(365), 1,
      anon_sym_LF,
    ACTIONS(614), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4564] = 1,
    ACTIONS(616), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4571] = 3,
    ACTIONS(618), 1,
      anon_sym_LF,
    STATE(85), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(620), 2,
      anon_sym_,
      anon_sym_TAB,
  [4582] = 3,
    ACTIONS(622), 1,
      sym_payee,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(435), 2,
      anon_sym_,
      anon_sym_TAB,
  [4593] = 1,
    ACTIONS(624), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [4600] = 3,
    ACTIONS(626), 1,
      sym_payee,
    STATE(176), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(628), 2,
      anon_sym_,
      anon_sym_TAB,
  [4611] = 3,
    ACTIONS(630), 1,
      sym_time,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [4622] = 3,
    ACTIONS(632), 1,
      sym_payee,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(435), 2,
      anon_sym_,
      anon_sym_TAB,
  [4633] = 3,
    ACTIONS(634), 1,
      aux_sym_account_subdirective_token1,
    STATE(164), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(592), 2,
      anon_sym_,
      anon_sym_TAB,
  [4644] = 3,
    ACTIONS(636), 1,
      aux_sym_account_subdirective_token1,
    STATE(164), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(592), 2,
      anon_sym_,
      anon_sym_TAB,
  [4655] = 3,
    ACTIONS(638), 1,
      aux_sym_account_subdirective_token1,
    STATE(164), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(592), 2,
      anon_sym_,
      anon_sym_TAB,
  [4666] = 2,
    ACTIONS(369), 1,
      anon_sym_LF,
    ACTIONS(640), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4675] = 1,
    ACTIONS(642), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4682] = 3,
    ACTIONS(644), 1,
      aux_sym_word_directive_token3,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [4693] = 3,
    ACTIONS(646), 1,
      aux_sym_word_directive_token1,
    STATE(165), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(648), 2,
      anon_sym_,
      anon_sym_TAB,
  [4704] = 2,
    ACTIONS(650), 1,
      anon_sym_LF,
    ACTIONS(652), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4713] = 3,
    ACTIONS(630), 1,
      sym_time,
    STATE(173), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(654), 2,
      anon_sym_,
      anon_sym_TAB,
  [4724] = 3,
    ACTIONS(559), 1,
      sym_payee,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(435), 2,
      anon_sym_,
      anon_sym_TAB,
  [4735] = 3,
    ACTIONS(656), 1,
      anon_sym_LF,
    STATE(127), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(658), 2,
      anon_sym_,
      anon_sym_TAB,
  [4746] = 2,
    ACTIONS(660), 1,
      anon_sym_LF,
    ACTIONS(662), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4755] = 4,
    ACTIONS(25), 1,
      aux_sym_word_directive_token3,
    ACTIONS(49), 1,
      sym__2d,
    STATE(167), 1,
      sym__single_date,
    STATE(243), 1,
      sym__4d,
  [4768] = 3,
    ACTIONS(664), 1,
      aux_sym_word_directive_token3,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [4779] = 3,
    ACTIONS(666), 1,
      aux_sym_word_directive_token2,
    STATE(166), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(543), 2,
      anon_sym_,
      anon_sym_TAB,
  [4790] = 3,
    ACTIONS(656), 1,
      anon_sym_LF,
    STATE(179), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(668), 2,
      anon_sym_,
      anon_sym_TAB,
  [4801] = 3,
    ACTIONS(670), 1,
      sym_time,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [4812] = 3,
    ACTIONS(672), 1,
      aux_sym_tag_directive_token1,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(511), 2,
      anon_sym_,
      anon_sym_TAB,
  [4823] = 3,
    ACTIONS(674), 1,
      sym_time,
    STATE(186), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(676), 2,
      anon_sym_,
      anon_sym_TAB,
  [4834] = 1,
    ACTIONS(678), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [4841] = 3,
    ACTIONS(680), 1,
      sym_time,
    STATE(204), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(682), 2,
      anon_sym_,
      anon_sym_TAB,
  [4852] = 3,
    ACTIONS(563), 1,
      sym_payee,
    STATE(102), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(435), 2,
      anon_sym_,
      anon_sym_TAB,
  [4863] = 3,
    ACTIONS(670), 1,
      sym_time,
    STATE(170), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(684), 2,
      anon_sym_,
      anon_sym_TAB,
  [4874] = 2,
    STATE(106), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(686), 2,
      anon_sym_,
      anon_sym_TAB,
  [4882] = 2,
    STATE(112), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(688), 2,
      anon_sym_,
      anon_sym_TAB,
  [4890] = 2,
    STATE(189), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(690), 2,
      anon_sym_,
      anon_sym_TAB,
  [4898] = 2,
    STATE(123), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(692), 2,
      anon_sym_,
      anon_sym_TAB,
  [4906] = 2,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(694), 2,
      anon_sym_,
      anon_sym_TAB,
  [4914] = 2,
    STATE(205), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(696), 2,
      anon_sym_,
      anon_sym_TAB,
  [4922] = 2,
    STATE(190), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(698), 2,
      anon_sym_,
      anon_sym_TAB,
  [4930] = 2,
    STATE(143), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(700), 2,
      anon_sym_,
      anon_sym_TAB,
  [4938] = 2,
    STATE(194), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(702), 2,
      anon_sym_,
      anon_sym_TAB,
  [4946] = 2,
    STATE(202), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(704), 2,
      anon_sym_,
      anon_sym_TAB,
  [4954] = 1,
    ACTIONS(706), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [4960] = 2,
    STATE(201), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(708), 2,
      anon_sym_,
      anon_sym_TAB,
  [4968] = 2,
    STATE(113), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(710), 2,
      anon_sym_,
      anon_sym_TAB,
  [4976] = 2,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(712), 2,
      anon_sym_,
      anon_sym_TAB,
  [4984] = 2,
    STATE(64), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(714), 2,
      anon_sym_,
      anon_sym_TAB,
  [4992] = 2,
    STATE(193), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(716), 2,
      anon_sym_,
      anon_sym_TAB,
  [5000] = 2,
    STATE(107), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(718), 2,
      anon_sym_,
      anon_sym_TAB,
  [5008] = 2,
    STATE(188), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(720), 2,
      anon_sym_,
      anon_sym_TAB,
  [5016] = 2,
    STATE(75), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(722), 2,
      anon_sym_,
      anon_sym_TAB,
  [5024] = 2,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(724), 2,
      anon_sym_,
      anon_sym_TAB,
  [5032] = 2,
    STATE(53), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(726), 2,
      anon_sym_,
      anon_sym_TAB,
  [5040] = 1,
    ACTIONS(557), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [5046] = 2,
    STATE(171), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(728), 2,
      anon_sym_,
      anon_sym_TAB,
  [5054] = 2,
    STATE(172), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(730), 2,
      anon_sym_,
      anon_sym_TAB,
  [5062] = 1,
    ACTIONS(732), 1,
      anon_sym_LF,
  [5066] = 1,
    ACTIONS(610), 1,
      anon_sym_LF,
  [5070] = 1,
    ACTIONS(734), 1,
      anon_sym_LF,
  [5074] = 1,
    ACTIONS(736), 1,
      anon_sym_LF,
  [5078] = 1,
    ACTIONS(738), 1,
      anon_sym_LF,
  [5082] = 1,
    ACTIONS(405), 1,
      anon_sym_LF,
  [5086] = 1,
    ACTIONS(740), 1,
      aux_sym_code_token1,
  [5090] = 1,
    ACTIONS(656), 1,
      anon_sym_LF,
  [5094] = 1,
    ACTIONS(742), 1,
      sym__dsep,
  [5098] = 1,
    ACTIONS(365), 1,
      anon_sym_LF,
  [5102] = 1,
    ACTIONS(744), 1,
      anon_sym_LF,
  [5106] = 1,
    ACTIONS(746), 1,
      anon_sym_LF,
  [5110] = 1,
    ACTIONS(748), 1,
      anon_sym_LF,
  [5114] = 1,
    ACTIONS(750), 1,
      ts_builtin_sym_end,
  [5118] = 1,
    ACTIONS(449), 1,
      anon_sym_LF,
  [5122] = 1,
    ACTIONS(752), 1,
      anon_sym_EQ,
  [5126] = 1,
    ACTIONS(754), 1,
      anon_sym_LF,
  [5130] = 1,
    ACTIONS(756), 1,
      sym__dsep,
  [5134] = 1,
    ACTIONS(758), 1,
      anon_sym_LF,
  [5138] = 1,
    ACTIONS(760), 1,
      anon_sym_LF,
  [5142] = 1,
    ACTIONS(461), 1,
      anon_sym_LF,
  [5146] = 1,
    ACTIONS(762), 1,
      anon_sym_RPAREN,
  [5150] = 1,
    ACTIONS(764), 1,
      aux_sym_quantity_token1,
  [5154] = 1,
    ACTIONS(766), 1,
      anon_sym_LF,
  [5158] = 1,
    ACTIONS(567), 1,
      anon_sym_LF,
  [5162] = 1,
    ACTIONS(768), 1,
      anon_sym_LF,
  [5166] = 1,
    ACTIONS(537), 1,
      anon_sym_LF,
  [5170] = 1,
    ACTIONS(770), 1,
      aux_sym_note_token1,
  [5174] = 1,
    ACTIONS(772), 1,
      sym__2d,
  [5178] = 1,
    ACTIONS(774), 1,
      anon_sym_LF,
  [5182] = 1,
    ACTIONS(776), 1,
      anon_sym_LF,
  [5186] = 1,
    ACTIONS(533), 1,
      anon_sym_LF,
  [5190] = 1,
    ACTIONS(778), 1,
      anon_sym_LF,
  [5194] = 1,
    ACTIONS(780), 1,
      anon_sym_LF,
  [5198] = 1,
    ACTIONS(782), 1,
      anon_sym_LF,
  [5202] = 1,
    ACTIONS(784), 1,
      anon_sym_LF,
  [5206] = 1,
    ACTIONS(411), 1,
      anon_sym_LF,
  [5210] = 1,
    ACTIONS(786), 1,
      anon_sym_LF,
  [5214] = 1,
    ACTIONS(788), 1,
      anon_sym_LF,
  [5218] = 1,
    ACTIONS(790), 1,
      anon_sym_LF,
  [5222] = 1,
    ACTIONS(792), 1,
      anon_sym_LF,
  [5226] = 1,
    ACTIONS(794), 1,
      anon_sym_LF,
  [5230] = 1,
    ACTIONS(796), 1,
      sym__2d,
  [5234] = 1,
    ACTIONS(798), 1,
      anon_sym_LF,
  [5238] = 1,
    ACTIONS(800), 1,
      aux_sym_word_directive_token2,
  [5242] = 1,
    ACTIONS(802), 1,
      anon_sym_RBRACK,
  [5246] = 1,
    ACTIONS(804), 1,
      anon_sym_LF,
  [5250] = 1,
    ACTIONS(802), 1,
      anon_sym_RPAREN,
  [5254] = 1,
    ACTIONS(806), 1,
      aux_sym_comment_token1,
  [5258] = 1,
    ACTIONS(808), 1,
      sym__2d,
  [5262] = 1,
    ACTIONS(347), 1,
      anon_sym_LF,
  [5266] = 1,
    ACTIONS(810), 1,
      anon_sym_LF,
  [5270] = 1,
    ACTIONS(660), 1,
      anon_sym_LF,
  [5274] = 1,
    ACTIONS(812), 1,
      anon_sym_LF,
  [5278] = 1,
    ACTIONS(531), 1,
      sym__dsep,
  [5282] = 1,
    ACTIONS(814), 1,
      sym_account_name,
  [5286] = 1,
    ACTIONS(816), 1,
      sym_account_name,
  [5290] = 1,
    ACTIONS(818), 1,
      aux_sym_quantity_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 110,
  [SMALL_STATE(4)] = 220,
  [SMALL_STATE(5)] = 269,
  [SMALL_STATE(6)] = 318,
  [SMALL_STATE(7)] = 367,
  [SMALL_STATE(8)] = 415,
  [SMALL_STATE(9)] = 463,
  [SMALL_STATE(10)] = 511,
  [SMALL_STATE(11)] = 554,
  [SMALL_STATE(12)] = 597,
  [SMALL_STATE(13)] = 640,
  [SMALL_STATE(14)] = 682,
  [SMALL_STATE(15)] = 724,
  [SMALL_STATE(16)] = 766,
  [SMALL_STATE(17)] = 808,
  [SMALL_STATE(18)] = 844,
  [SMALL_STATE(19)] = 880,
  [SMALL_STATE(20)] = 922,
  [SMALL_STATE(21)] = 964,
  [SMALL_STATE(22)] = 1000,
  [SMALL_STATE(23)] = 1033,
  [SMALL_STATE(24)] = 1066,
  [SMALL_STATE(25)] = 1099,
  [SMALL_STATE(26)] = 1132,
  [SMALL_STATE(27)] = 1165,
  [SMALL_STATE(28)] = 1198,
  [SMALL_STATE(29)] = 1231,
  [SMALL_STATE(30)] = 1264,
  [SMALL_STATE(31)] = 1297,
  [SMALL_STATE(32)] = 1330,
  [SMALL_STATE(33)] = 1363,
  [SMALL_STATE(34)] = 1396,
  [SMALL_STATE(35)] = 1429,
  [SMALL_STATE(36)] = 1462,
  [SMALL_STATE(37)] = 1495,
  [SMALL_STATE(38)] = 1528,
  [SMALL_STATE(39)] = 1561,
  [SMALL_STATE(40)] = 1594,
  [SMALL_STATE(41)] = 1627,
  [SMALL_STATE(42)] = 1660,
  [SMALL_STATE(43)] = 1693,
  [SMALL_STATE(44)] = 1726,
  [SMALL_STATE(45)] = 1759,
  [SMALL_STATE(46)] = 1792,
  [SMALL_STATE(47)] = 1825,
  [SMALL_STATE(48)] = 1858,
  [SMALL_STATE(49)] = 1889,
  [SMALL_STATE(50)] = 1920,
  [SMALL_STATE(51)] = 1951,
  [SMALL_STATE(52)] = 1982,
  [SMALL_STATE(53)] = 2013,
  [SMALL_STATE(54)] = 2043,
  [SMALL_STATE(55)] = 2095,
  [SMALL_STATE(56)] = 2147,
  [SMALL_STATE(57)] = 2199,
  [SMALL_STATE(58)] = 2248,
  [SMALL_STATE(59)] = 2297,
  [SMALL_STATE(60)] = 2346,
  [SMALL_STATE(61)] = 2368,
  [SMALL_STATE(62)] = 2389,
  [SMALL_STATE(63)] = 2424,
  [SMALL_STATE(64)] = 2441,
  [SMALL_STATE(65)] = 2469,
  [SMALL_STATE(66)] = 2501,
  [SMALL_STATE(67)] = 2529,
  [SMALL_STATE(68)] = 2561,
  [SMALL_STATE(69)] = 2589,
  [SMALL_STATE(70)] = 2617,
  [SMALL_STATE(71)] = 2649,
  [SMALL_STATE(72)] = 2677,
  [SMALL_STATE(73)] = 2705,
  [SMALL_STATE(74)] = 2733,
  [SMALL_STATE(75)] = 2761,
  [SMALL_STATE(76)] = 2789,
  [SMALL_STATE(77)] = 2817,
  [SMALL_STATE(78)] = 2849,
  [SMALL_STATE(79)] = 2864,
  [SMALL_STATE(80)] = 2893,
  [SMALL_STATE(81)] = 2922,
  [SMALL_STATE(82)] = 2949,
  [SMALL_STATE(83)] = 2978,
  [SMALL_STATE(84)] = 2993,
  [SMALL_STATE(85)] = 3022,
  [SMALL_STATE(86)] = 3046,
  [SMALL_STATE(87)] = 3066,
  [SMALL_STATE(88)] = 3089,
  [SMALL_STATE(89)] = 3112,
  [SMALL_STATE(90)] = 3135,
  [SMALL_STATE(91)] = 3158,
  [SMALL_STATE(92)] = 3181,
  [SMALL_STATE(93)] = 3204,
  [SMALL_STATE(94)] = 3227,
  [SMALL_STATE(95)] = 3250,
  [SMALL_STATE(96)] = 3273,
  [SMALL_STATE(97)] = 3296,
  [SMALL_STATE(98)] = 3319,
  [SMALL_STATE(99)] = 3336,
  [SMALL_STATE(100)] = 3359,
  [SMALL_STATE(101)] = 3375,
  [SMALL_STATE(102)] = 3397,
  [SMALL_STATE(103)] = 3413,
  [SMALL_STATE(104)] = 3435,
  [SMALL_STATE(105)] = 3451,
  [SMALL_STATE(106)] = 3473,
  [SMALL_STATE(107)] = 3489,
  [SMALL_STATE(108)] = 3505,
  [SMALL_STATE(109)] = 3521,
  [SMALL_STATE(110)] = 3537,
  [SMALL_STATE(111)] = 3559,
  [SMALL_STATE(112)] = 3579,
  [SMALL_STATE(113)] = 3595,
  [SMALL_STATE(114)] = 3617,
  [SMALL_STATE(115)] = 3639,
  [SMALL_STATE(116)] = 3661,
  [SMALL_STATE(117)] = 3683,
  [SMALL_STATE(118)] = 3703,
  [SMALL_STATE(119)] = 3725,
  [SMALL_STATE(120)] = 3745,
  [SMALL_STATE(121)] = 3761,
  [SMALL_STATE(122)] = 3781,
  [SMALL_STATE(123)] = 3803,
  [SMALL_STATE(124)] = 3825,
  [SMALL_STATE(125)] = 3845,
  [SMALL_STATE(126)] = 3865,
  [SMALL_STATE(127)] = 3882,
  [SMALL_STATE(128)] = 3899,
  [SMALL_STATE(129)] = 3916,
  [SMALL_STATE(130)] = 3933,
  [SMALL_STATE(131)] = 3950,
  [SMALL_STATE(132)] = 3965,
  [SMALL_STATE(133)] = 3982,
  [SMALL_STATE(134)] = 3999,
  [SMALL_STATE(135)] = 4016,
  [SMALL_STATE(136)] = 4033,
  [SMALL_STATE(137)] = 4050,
  [SMALL_STATE(138)] = 4061,
  [SMALL_STATE(139)] = 4078,
  [SMALL_STATE(140)] = 4095,
  [SMALL_STATE(141)] = 4112,
  [SMALL_STATE(142)] = 4124,
  [SMALL_STATE(143)] = 4136,
  [SMALL_STATE(144)] = 4150,
  [SMALL_STATE(145)] = 4164,
  [SMALL_STATE(146)] = 4178,
  [SMALL_STATE(147)] = 4190,
  [SMALL_STATE(148)] = 4198,
  [SMALL_STATE(149)] = 4212,
  [SMALL_STATE(150)] = 4226,
  [SMALL_STATE(151)] = 4240,
  [SMALL_STATE(152)] = 4254,
  [SMALL_STATE(153)] = 4268,
  [SMALL_STATE(154)] = 4276,
  [SMALL_STATE(155)] = 4284,
  [SMALL_STATE(156)] = 4296,
  [SMALL_STATE(157)] = 4308,
  [SMALL_STATE(158)] = 4318,
  [SMALL_STATE(159)] = 4328,
  [SMALL_STATE(160)] = 4342,
  [SMALL_STATE(161)] = 4356,
  [SMALL_STATE(162)] = 4367,
  [SMALL_STATE(163)] = 4378,
  [SMALL_STATE(164)] = 4389,
  [SMALL_STATE(165)] = 4400,
  [SMALL_STATE(166)] = 4411,
  [SMALL_STATE(167)] = 4422,
  [SMALL_STATE(168)] = 4429,
  [SMALL_STATE(169)] = 4440,
  [SMALL_STATE(170)] = 4449,
  [SMALL_STATE(171)] = 4460,
  [SMALL_STATE(172)] = 4471,
  [SMALL_STATE(173)] = 4482,
  [SMALL_STATE(174)] = 4493,
  [SMALL_STATE(175)] = 4504,
  [SMALL_STATE(176)] = 4513,
  [SMALL_STATE(177)] = 4524,
  [SMALL_STATE(178)] = 4535,
  [SMALL_STATE(179)] = 4544,
  [SMALL_STATE(180)] = 4555,
  [SMALL_STATE(181)] = 4564,
  [SMALL_STATE(182)] = 4571,
  [SMALL_STATE(183)] = 4582,
  [SMALL_STATE(184)] = 4593,
  [SMALL_STATE(185)] = 4600,
  [SMALL_STATE(186)] = 4611,
  [SMALL_STATE(187)] = 4622,
  [SMALL_STATE(188)] = 4633,
  [SMALL_STATE(189)] = 4644,
  [SMALL_STATE(190)] = 4655,
  [SMALL_STATE(191)] = 4666,
  [SMALL_STATE(192)] = 4675,
  [SMALL_STATE(193)] = 4682,
  [SMALL_STATE(194)] = 4693,
  [SMALL_STATE(195)] = 4704,
  [SMALL_STATE(196)] = 4713,
  [SMALL_STATE(197)] = 4724,
  [SMALL_STATE(198)] = 4735,
  [SMALL_STATE(199)] = 4746,
  [SMALL_STATE(200)] = 4755,
  [SMALL_STATE(201)] = 4768,
  [SMALL_STATE(202)] = 4779,
  [SMALL_STATE(203)] = 4790,
  [SMALL_STATE(204)] = 4801,
  [SMALL_STATE(205)] = 4812,
  [SMALL_STATE(206)] = 4823,
  [SMALL_STATE(207)] = 4834,
  [SMALL_STATE(208)] = 4841,
  [SMALL_STATE(209)] = 4852,
  [SMALL_STATE(210)] = 4863,
  [SMALL_STATE(211)] = 4874,
  [SMALL_STATE(212)] = 4882,
  [SMALL_STATE(213)] = 4890,
  [SMALL_STATE(214)] = 4898,
  [SMALL_STATE(215)] = 4906,
  [SMALL_STATE(216)] = 4914,
  [SMALL_STATE(217)] = 4922,
  [SMALL_STATE(218)] = 4930,
  [SMALL_STATE(219)] = 4938,
  [SMALL_STATE(220)] = 4946,
  [SMALL_STATE(221)] = 4954,
  [SMALL_STATE(222)] = 4960,
  [SMALL_STATE(223)] = 4968,
  [SMALL_STATE(224)] = 4976,
  [SMALL_STATE(225)] = 4984,
  [SMALL_STATE(226)] = 4992,
  [SMALL_STATE(227)] = 5000,
  [SMALL_STATE(228)] = 5008,
  [SMALL_STATE(229)] = 5016,
  [SMALL_STATE(230)] = 5024,
  [SMALL_STATE(231)] = 5032,
  [SMALL_STATE(232)] = 5040,
  [SMALL_STATE(233)] = 5046,
  [SMALL_STATE(234)] = 5054,
  [SMALL_STATE(235)] = 5062,
  [SMALL_STATE(236)] = 5066,
  [SMALL_STATE(237)] = 5070,
  [SMALL_STATE(238)] = 5074,
  [SMALL_STATE(239)] = 5078,
  [SMALL_STATE(240)] = 5082,
  [SMALL_STATE(241)] = 5086,
  [SMALL_STATE(242)] = 5090,
  [SMALL_STATE(243)] = 5094,
  [SMALL_STATE(244)] = 5098,
  [SMALL_STATE(245)] = 5102,
  [SMALL_STATE(246)] = 5106,
  [SMALL_STATE(247)] = 5110,
  [SMALL_STATE(248)] = 5114,
  [SMALL_STATE(249)] = 5118,
  [SMALL_STATE(250)] = 5122,
  [SMALL_STATE(251)] = 5126,
  [SMALL_STATE(252)] = 5130,
  [SMALL_STATE(253)] = 5134,
  [SMALL_STATE(254)] = 5138,
  [SMALL_STATE(255)] = 5142,
  [SMALL_STATE(256)] = 5146,
  [SMALL_STATE(257)] = 5150,
  [SMALL_STATE(258)] = 5154,
  [SMALL_STATE(259)] = 5158,
  [SMALL_STATE(260)] = 5162,
  [SMALL_STATE(261)] = 5166,
  [SMALL_STATE(262)] = 5170,
  [SMALL_STATE(263)] = 5174,
  [SMALL_STATE(264)] = 5178,
  [SMALL_STATE(265)] = 5182,
  [SMALL_STATE(266)] = 5186,
  [SMALL_STATE(267)] = 5190,
  [SMALL_STATE(268)] = 5194,
  [SMALL_STATE(269)] = 5198,
  [SMALL_STATE(270)] = 5202,
  [SMALL_STATE(271)] = 5206,
  [SMALL_STATE(272)] = 5210,
  [SMALL_STATE(273)] = 5214,
  [SMALL_STATE(274)] = 5218,
  [SMALL_STATE(275)] = 5222,
  [SMALL_STATE(276)] = 5226,
  [SMALL_STATE(277)] = 5230,
  [SMALL_STATE(278)] = 5234,
  [SMALL_STATE(279)] = 5238,
  [SMALL_STATE(280)] = 5242,
  [SMALL_STATE(281)] = 5246,
  [SMALL_STATE(282)] = 5250,
  [SMALL_STATE(283)] = 5254,
  [SMALL_STATE(284)] = 5258,
  [SMALL_STATE(285)] = 5262,
  [SMALL_STATE(286)] = 5266,
  [SMALL_STATE(287)] = 5270,
  [SMALL_STATE(288)] = 5274,
  [SMALL_STATE(289)] = 5278,
  [SMALL_STATE(290)] = 5282,
  [SMALL_STATE(291)] = 5286,
  [SMALL_STATE(292)] = 5290,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(283),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(214),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(215),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(216),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(218),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(281),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(219),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(220),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(222),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(243),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(223),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(224),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(226),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(227),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(229),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(211),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(230),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(231),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(252),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 5),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 5),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2), SHIFT_REPEAT(81),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2), SHIFT_REPEAT(88),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 5),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 5),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 4),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_directive_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2), SHIFT_REPEAT(151),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 9),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 9),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(62),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_periodic_xact, 5),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_periodic_xact, 5),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(21),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 11),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 11),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_subdirective, 4),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_subdirective, 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_subdirective, 4),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_subdirective, 4),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_subdirective, 4),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_subdirective, 4),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_subdirective, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_subdirective, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 10),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 10),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_subdirective, 4),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_subdirective, 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_subdirective, 4),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_subdirective, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 9),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 9),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 4),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 4),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 12),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 12),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 13),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 13),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 14),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 14),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(60),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(61),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(86),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(86),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(98),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(102),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(131),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(131),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 3),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 5),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(164),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(165),
  [577] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(166),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3, .production_id = 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 3),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1, .production_id = 1),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 5),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 7),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 2),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 5),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 9),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 3),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 10),
  [750] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 3),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 5),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval, 1),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 4),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 6),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 5),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 8),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 7),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
