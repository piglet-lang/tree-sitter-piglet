const WHITESPACE_CHAR =
      /[\f\n\r\t, \u000B\u001C\u001D\u001E\u001F\u2028\u2029\u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006\u2008\u2009\u200a\u205f\u3000]/;

const WHITESPACE =
      token(repeat1(WHITESPACE_CHAR));

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
        choice($.list_lit, $.keyword_lit),

        keyword_lit: $ =>
        seq(token(":"), repeat(/[a-zA-Z0-9-!?\/]/)),

        list_lit: $ =>
        seq(//repeat($._metadata_lit),
            $._bare_list_lit),

        _bare_list_lit: $ =>
        seq(field('open', "("),
            repeat(choice(field('value', $._form),
                          $._gap)),
            field('close', ")")),

    }
});
