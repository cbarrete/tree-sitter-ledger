module.exports = grammar({
    name: 'ledger',

    extras: $ => [' ', '\t'],

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
            // TODO $.char_directive
        ),

        word_directive: $ => choice(
            seq('include', /.+/),
            seq('account', /.+/),
            'end',
            seq('alias', /[^=]+/, '=', /.+/),
            seq('def', /.+/),
        ),

        xact: $ => choice(
            $.plain_xact,
            // TODO $.periodic_xact,
            // TODO $.automated_xact,
        ),

        plain_xact: $ => seq(
            seq($.date, optional($.status), optional($.payee), '\n'), // TODO code opt, note opt
            repeat1($.posting),
        ),

        // date, optionally with an effective date, e.g.:
        // 2020-01-01
        // 2020/01/01=2020.01-02
        date: $ => /\d{4}[-\.\/]\d{2}[-\.\/]\d{2}(=\d{4}[-\.\/]\d{2}[-\.\/]\d{2})?/,

        status: $ => choice('*', '!'),

        payee: $ => /[^*!\n]+/,

        note: $ => seq(';', /.*/),

        posting: $ => seq($.whitespace, $.account, optional($.values), optional($.note), '\n'),

        account: $ => alias(choice(
            $.account_name,
            seq('(', $.account_name, ')'),
            seq('[', $.account_name, ']'),
        ), ''),

        account_name: $ => /(\S \S|\S)+/,

        values: $ => seq($.spacer, $.amount_expr, optional($.price)),

        amount_expr: $ => seq($.quantity, $.commodity),

        quantity: $ => seq(
            optional('-'), /\d+(\.\d+)?/
        ),

        commodity: $ => /[a-zA-Z ]+/,

        price: $ => seq(choice('@', '@@'), $.amount_expr),

        whitespace: $ => repeat1(choice(' ', '\t')),

        spacer: $ => choice('  ', '\t', ' \t'),
    }
})
