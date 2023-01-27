module.exports = grammar({
    name: 'hexdump',
    extras: $ => [
        / |\t|\r/,
        $.line_comment,
    ],

    rules: {
        program: $ => sep(repeat1('\n'), $.address),
        address: $ => seq($.int, optional(':'), repeat(choice($.int, $.string))),

        int: $ => /[0-9A-Fa-f_]+/,
        string: $ => /[^;#\s]+/,

        line_comment: $ => /(#|;).*/,
    },
})

function sep(separator, rule) {
    return optional(seq(rule, repeat(seq(separator, rule)), optional(separator)))
}
