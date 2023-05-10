const WHITESPACE_CHAR = /[\f\n\r\t ]/

const WHITESPACE = token(repeat1(WHITESPACE_CHAR))

const SYMBOL_REGEX = /[\p{L}0-9+_\|!?\$<>\.\*%=<>\/&-]/

module.exports = grammar({
    name: 'piglet',

    inline: $ => [],

    rules: {
        source: $ =>
        repeat(choice($._form,
                      $._gap)),

        _gap: $ => choice($._ws),

        _ws: $ =>
        WHITESPACE,

        _form: $ => choice($.symbol,
                           $.keyword,
                           $.prefix_name,
                           $.list,
                           $.vector),

        keyword: $ => token(seq(":", repeat1(SYMBOL_REGEX))),

        symbol: $ => choice($._symbol1, $._symbol2, $._symbol3),

        _symbol1: $ => token(repeat1(SYMBOL_REGEX)),
        _symbol2: $ => token(seq(repeat1(SYMBOL_REGEX), token(":"), repeat1(SYMBOL_REGEX))),
        _symbol3: $ => token(seq(repeat1(SYMBOL_REGEX), token(":"), repeat1(SYMBOL_REGEX), token(":"), repeat1(SYMBOL_REGEX))),

        prefix_name: $ => token(seq(":", repeat(SYMBOL_REGEX), ":", repeat1(SYMBOL_REGEX))),

        /* This is going to need some fine tuning, we want to align ourselves with the URI/IRI specs. */
        qname: $ => token(seq(":", repeat(SYMBOL_REGEX), "://", repeat1(SYMBOL_REGEX))),

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
            repeat(choice($._form,
                          $._gap)),
            field('close', ")")),

        _bare_vector: $ =>
        seq(field('open', "["),
            repeat(choice($._form,
                          $._gap)),
            field('close', "]")),

    }
});
