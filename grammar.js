const WHITESPACE_CHAR = /[\f\n\r\t ]/

const WHITESPACE = token(repeat1(WHITESPACE_CHAR))

const SYMBOL_REGEX = /[a-zA-Z0-9+-_\|!?\$<>\.\*%=<>\/&]/

module.exports = grammar({
    name: 'piglet',

    rules: {
        source: $ =>
        repeat(choice($._form,
                      $._gap)),

        _gap: $ => choice($._ws),

        _ws: $ =>
        WHITESPACE,

        _form: $ =>
        choice($.list, $.keyword),

        keyword: $ =>
        seq(token(":"), repeat(SYMBOL_REGEX)),

        symbol: $ => choice($._symbol1, $._symbol2, $._symbol3),

        _symbol1: $ => seq(SYMBOL_REGEX, repeat(SYMBOL_REGEX)),
        _symbol2: $ => seq(
            SYMBOL_REGEX, repeat(SYMBOL_REGEX), token(":"),
            SYMBOL_REGEX, repeat(SYMBOL_REGEX)
        ),
        _symbol3: $ => seq(
            SYMBOL_REGEX, repeat(SYMBOL_REGEX), token(":"),
            SYMBOL_REGEX, repeat(SYMBOL_REGEX), token(":"),
            SYMBOL_REGEX, repeat(SYMBOL_REGEX)
        ),

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
