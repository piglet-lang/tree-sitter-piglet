const WHITESPACE_CHAR = /[\f\n\r\t ]/

const WHITESPACE = token(repeat1(WHITESPACE_CHAR))

const SYMBOL_REGEX = /[a-zA-Z0-9+-_\|!?\$<>\.\*%=<>\/&]/

module.exports = grammar({
    name: 'piglet',

    inline: $ =>
    [$.keyword,
     $.symbol],

    rules: {
        source: $ =>
        repeat(choice($._form,
                      $._gap)),

        _gap: $ => choice($._ws),

        _ws: $ =>
        WHITESPACE,

        _form: $ =>
        choice($.list, $.keyword, $.symbol, $.vector),

        keyword: $ =>
        prec(4, seq(token(":"), repeat1(SYMBOL_REGEX))),

        symbol: $ =>
        prec(3, choice($.symbol1/*, $._symbol2, $._symbol3*/)),

        symbol1: $ =>
        prec(2, repeat1(SYMBOL_REGEX)),

        // _symbol2: $ =>
        // prec(1, seq(
        //     repeat1(SYMBOL_REGEX), token(":"),
        //     repeat1(SYMBOL_REGEX)
        // )),

        // _symbol3: $ =>
        // prec(0, seq(
        //     repeat1(SYMBOL_REGEX), token(":"),
        //     repeat1(SYMBOL_REGEX), token(":"),
        //     repeat1(SYMBOL_REGEX)
        // )),

        _metadata: $ =>
        seq(field('marker', "^"),
            repeat($._gap),
            field('value', choice(/*$.dict, $.string,*/ $.keyword, $.symbol))),
        vector: $ =>
        seq(repeat($._metadata),
            $._bare_vector),

        list: $ =>
        seq(repeat($._metadata),
            $._bare_list),

        _bare_list: $ =>
        seq(field('open', "("),
            repeat(choice(field('value', $._form),
                          $._gap)),
            field('close', ")")),

        _bare_vector: $ =>
        seq(field('open', "["),
            repeat(choice(field('value', $._form),
                          $._gap)),
            field('close', "]")),

    }
});
