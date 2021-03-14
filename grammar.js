module.exports = grammar({
    name: 'ledger',

    extras: $ => [' ', '\t'],

    inline: $ => [
        $.indented_line,
        $.spacer,
        $.whitespace,
    ],

    rules: {
        source_file: $ => repeat(choice($.journal_item, '\n')),

        journal_item: $ => choice(
            $.comment,
            $.directive,
            $.xact,
        ),

        comment: $ => seq(choice(';', '*'), /.*\n/),

        indented_line: $ => seq($.whitespace, /[^\n]+\n/),

        // ! and @ are deprecated, let's not take them into account
        directive: $ => choice(
            $.account_directive,
            $.commodity_directive,
            seq($.word_directive, '\n'),
            seq($.char_directive, '\n'),
        ),

        account_directive: $ => seq(
            seq('account', $.whitespace, $.account, '\n'),
            repeat($.account_subdirective),
        ),

        account_subdirective: $ => choice(
            $.alias_subdirective,
            $.assert_subdirective,
            $.check_subdirective,
            $.default_subdirective,
            $.eval_subdirective,
            $.note_subdirective,
            $.payee_subdirective,
        ),

        commodity_directive: $ => seq(
            seq('commodity', $.whitespace, $.commodity, '\n'),
            repeat($.commodity_subdirective),
        ),

        commodity_subdirective: $ => choice(
            $.alias_subdirective,
            $.default_subdirective,
            $.format_subdirective,
            $.note_subdirective,
            $.nomarket_subdirective,
        ),

        word_directive: $ => choice(
            seq('include', /.+/),
            'end',
            seq('alias', /[^=]+/, '=', /.+/),
            seq('def', /.+/),
            seq('year', /\d{4}/),
            seq('bucket', $.account),
        ),

        char_directive: $ => choice(
            // timeclock.el
            $.check_in,
            $.check_out,

            seq('A', $.account),
            seq('Y', /\d{4}/),
            seq('N', $.commodity),
            seq('D', $.amount),
            seq('C', seq($.commodity, '=', $.amount)),
            seq('P', seq($.date, $.commodity, $.amount))
        ),

        alias_subdirective: $ => seq(
            $.whitespace,
            'alias',
            $.whitespace,
            /.+\n/,
        ),

        assert_subdirective: $ => seq(
            $.whitespace,
            'assert',
            $.whitespace,
            /.+\n/,
        ),

        check_subdirective: $ => seq(
            $.whitespace,
            'check',
            $.whitespace,
            /.+\n/,
        ),

        default_subdirective: $ => seq(
            $.whitespace,
            'default',
            /\n/,
        ),

        eval_subdirective: $ => seq(
            $.whitespace,
            'eval',
            $.whitespace,
            /.+\n/,
        ),

        format_subdirective: $ => seq(
            $.whitespace,
            'format',
            $.whitespace,
            $.amount,
        ),

        nomarket_subdirective: $ => seq(
            $.whitespace,
            'nomarket',
            /\n/,
        ),

        note_subdirective: $ => seq(
            $.whitespace,
            'note',
            $.whitespace,
            /.+\n/,
        ),

        payee_subdirective: $ => seq(
            $.whitespace,
            'payee',
            $.whitespace,
            /.+\n/,
        ),

        check_in: $ => seq(choice('i', 'I'), $.date, $.time, $.account, optional(seq($.spacer, $.payee))),

        check_out: $ => seq(choice('o', 'O'), $.date, $.time),

        xact: $ => choice(
            $.plain_xact,
            // TODO $.periodic_xact,
            // TODO $.automated_xact,
        ),

        plain_xact: $ => seq(
            seq($.date, optional(seq($.whitespace, $.status)), optional(seq($.whitespace, $.payee)), '\n'), // TODO code opt, note opt
            repeat1(choice($.posting, seq($.whitespace, $.note, '\n'))),
        ),

        // date, optionally with an effective date, e.g.:
        // 2020-01-01
        // 2020/01/01=2020.01-02
        date: $ => seq($.single_date, optional(seq('=', $.single_date))),

        single_date: $ => /\d{4}[-\.\/]\d{2}[-\.\/]\d{2}/,

        time: $ => /\d{2}:\d{2}:\d{2}/,

        status: $ => choice('*', '!'),

        payee: $ => /[^*!\n]+/,

        note: $ => seq(';', /.*/),

        posting: $ => seq(
            $.whitespace,
            optional($.status),
            $.account,
            optional(seq(
                $.spacer,
                optional($.values),
                optional($.balance_assertion),
            )),
            optional($.note),
            '\n'),

        account: $ => alias(choice(
            $.account_name,
            seq('(', $.account_name, ')'),
            seq('[', $.account_name, ']'),
        ), ''),

        account_name: $ => /(\p{L} \p{L}|\p{L}:?)+/,

        values: $ => seq($.amount, optional($.price)),

        amount: $ => choice(
            seq($.quantity, $.commodity),
            seq($.commodity, $.quantity),
        ),

        quantity: $ => seq(
            optional('-'), /\d([\d., ]*\d)?/,
        ),

        commodity: $ => choice(/\p{L}+/, /"[^"\n]*"/),

        price: $ => seq(choice('@', '@@'), $.amount),

        balance_assertion: $ => seq('=', choice($.amount)),

        whitespace: $ => repeat1(choice(' ', '\t')),

        spacer: $ => choice('  ', '\t', ' \t'),
    }
})
