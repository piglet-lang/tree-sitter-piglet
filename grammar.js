const WHITESPACE_CHAR = /[\f\n\r\t ]/

const WHITESPACE = token(repeat1(WHITESPACE_CHAR))

const SYMBOL_HEAD_REGEX = /[\p{L}+_\|!?\$<>\.\*%=<>\/&-]/
const SYMBOL_REST_REGEX = /[\p{L}0-9+_\|!?\$<>\.\*%=<>\/&-]/

const SYMBOL_REGEX = /[\p{L}+_\|!?\$<>\.\*%=<>\/&-][\p{L}0-9+_\|!?\$<>\.\*%=<>\/&-]*/

module.exports = grammar({
  name: 'piglet',

  inline: $ => [],

  rules: {
    source: $ =>
    repeat(choice($._form,
                  $._gap)),

    _gap: $ => choice($._ws, $.elide, $.comment),

    _ws: $ =>
    WHITESPACE,

    _form: $ => choice($.number,
                       $.symbol,
                       $.keyword,
                       $.prefix_name,
                       $.qname,
                       $.string,
                       $.quote,
                       $.list,
                       $.vector,
                       $.dict,
                       $.deref,
                       $.var
                      ),

    keyword: $ => token(seq(":", repeat1(SYMBOL_REGEX))),

    symbol: $ => choice($._symbol1, $._symbol2, $._symbol3),

    _symbol1: $ => token(SYMBOL_REGEX),
    _symbol2: $ => token(seq(SYMBOL_REGEX, ":", SYMBOL_REGEX)),
    _symbol3: $ => token(seq(SYMBOL_REGEX, ":", SYMBOL_REGEX, ":", SYMBOL_REGEX)),

    _regular_number: $ => token(seq(optional("-"), /[0-9]/, repeat(/[0-9_]/), optional(seq(".", /[0-9]/, repeat(/[0-9_]/))))),
    _radix_number: $ => token(seq(optional("-"), /[0-9]{1,2}/, "r", repeat(/[0-9a-zA-Z_]/))),
    _hex_number: $ => token(seq(optional("-"), "0x", repeat(/[0-9a-fA-F_]/))),

    number: $ => choice($._regular_number, $._radix_number, $._hex_number),

    prefix_name: $ => token(seq(":", repeat(SYMBOL_REGEX), ":", repeat1(SYMBOL_REGEX))),

    /* This is going to need some fine tuning, we want to align ourselves with the URI/IRI specs. */
    qname: $ => token(seq(":", repeat(SYMBOL_REGEX), "://", repeat1(SYMBOL_REGEX))),

    string: $ => token(seq("\"", repeat(/[^"]|\\"/), "\"")),

    comment: $ => token(seq(";", repeat(/[^\n]/))),

    quote: $ => seq("'", repeat($._gap), $._form),
    deref: $ => seq("@", repeat($._gap), $._form),
    var: $ => seq("#'", repeat($._gap), $.symbol),

    elide: $ => seq("#_", repeat($._gap), $._form),

    _metadata: $ =>
    seq(field('marker', "^"),
        repeat($._gap),
        field('value', choice(/*$.dict,*/ $.string, $.keyword, $.symbol))),
    vector: $ =>
    seq(repeat($._metadata),
        $._bare_vector),

    list: $ =>
    seq(repeat($._metadata),
        $._bare_list),

    dict: $ =>
    seq(repeat($._metadata),
        $._bare_dict),

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

    _bare_dict: $ =>
    seq(field('open', "{"),
        repeat(choice($._form,
                      $._gap)),
        field('close', "}")),

  }
});
