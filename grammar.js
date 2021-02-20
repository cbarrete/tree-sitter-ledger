module.exports = grammar({
    name: 'ledger',

    extras: $ => [' ', '\t'],

    inline: $ => [$.whitespace],

    rules: {
        source_file: $ => repeat(choice($.journal_item, '\n')),

        journal_item: $ => choice(
            $.comment,
            $.directive,
            $.xact,
        ),

        comment: $ => seq(choice(';', '*'), /.*\n/),

        // ! and @ are deprecated, let's not take them into account
        directive: $ => choice(
            $.word_directive,
            $.char_directive,
        ),

        word_directive: $ => choice(
            seq('include', /.+/),
            seq('account', /.+/),
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

        posting: $ => seq($.whitespace, optional($.status), $.account, optional($.values), optional($.note), '\n'),

        account: $ => alias(choice(
            $.account_name,
            seq('(', $.account_name, ')'),
            seq('[', $.account_name, ']'),
        ), ''),

        // TODO can just use /(\p{L} \p{L}|\p{L})+/ once
        // https://github.com/tree-sitter/tree-sitter/pull/906 is merged
        account_name: $ => /[^ ;](\S \S|\S)+/,

        values: $ => seq($.spacer, $.amount, optional($.price), optional($.balance_assertion)),

        amount: $ => choice(
            seq($.quantity, $.commodity),
            seq($.commodity, $.quantity),
        ),

        quantity: $ => seq(
            optional('-'), /\d([\d., ]*\d)?/,
        ),

        commodity: $ => choice(/[a-zA-Z]+/, /"[^"\n]*"/),

        price: $ => seq(choice('@', '@@'), $.amount),

        balance_assertion: $ => seq('=', choice($.amount)),

        whitespace: $ => repeat1(choice(' ', '\t')),

        spacer: $ => choice('  ', '\t', ' \t'),
    }
})
