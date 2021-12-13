module.exports = grammar({
  name: "scss",

  extras: ($) => [/\s/, $.comment, $.line_comment],

  externals: ($) => [$._descendant_operator],

  conflicts: ($) => [[$._selector, $.declaration_pair]],

  inline: ($) => [
    // $._block_item
  ],

  rules: {
    program: ($) => optional_with_placeholder("statement_list", repeat($.statement)),

    statement: ($) =>
      choice(
        $.declaration,
        $.css_ruleset,
        $.import_statement,
        $.media_statement,
        $.charset_statement,
        $.namespace_statement,
        $.keyframes_statement,
        $.supports_statement,
        $.use_statement,
        $.forward_statement,
        $.css_mixin,
        $.css_include,
        $.if,
        $.each_statement,
        $.for_statement,
        $.while_statement,
        $.function_statement,
        $.error_statement,
        $.warn_statement,
        $.debug_statement,
        $.at_rule,
        $.placeholder
      ),

    // Statements

    import_statement: ($) => seq("@import", $._value, sep(",", $._query), ";"),

    media_statement: ($) => seq("@media", sep1(",", $._query), $.enclosed_body),

    charset_statement: ($) => seq("@charset", $._value, ";"),

    namespace_statement: ($) =>
      seq(
        "@namespace",
        optional(alias($.identifier, $.namespace_name)),
        choice($.string_value, $.call_expression),
        ";"
      ),

    keyframes_statement: ($) =>
      seq(
        choice("@keyframes", field("at_keyword", /@[-a-z]+keyframes/)),
        alias($.identifier, $.keyframes_name),
        $.keyframe_block_list
      ),

    keyframe_block_list: ($) => seq("{", repeat($.keyframe_block), "}"),

    keyframe_block: ($) => seq(choice($.from, $.to, $.integer_value), $.enclosed_body),

    from: ($) => "from",
    to: ($) => "to",

    supports_statement: ($) => seq("@supports", $._query, $.enclosed_body),

    at_rule: ($) => seq($.at_keyword, sep(",", $._query), choice(";", $.enclosed_body)),

    use_statement: ($) => seq("@use", $._value, ";"),

    forward_statement: ($) => seq("@forward", $._value, ";"),

    parameters: ($) => seq("(", field("parameter_list", sep1(",", $.parameter)), ")"),

    parameter: ($) =>
      seq(
        alias($.variable_identifier, $.variable_name),
        optional(seq(":", alias($._value, $.default_value)))
      ),

    css_mixin: ($) =>
      seq(
        "@mixin",
        $.identifier,
        optional_with_placeholder("parameter_list_optional", $.parameters),
        $.enclosed_body
      ),

    css_include: ($) =>
      seq(
        "@include",
        $.identifier,
        optional_with_placeholder("argument_list_optional", $.include_arguments),
        choice($.enclosed_body, ";")
      ),

    include_arguments: ($) =>
      seq(
        token.immediate("("),
        field("argument_list", sep1(",", alias($.include_argument, $.argument))),
        token.immediate(")")
      ),

    include_argument: ($) =>
      seq(
        optional(seq(alias($.variable_identifier, $.argument_name), ":")),
        alias($._value, $.argument_value)
      ),

    placeholder: ($) => seq("%", $.identifier, $.enclosed_body),

    extend_statement: ($) => seq("@extend", choice($._value, $.class_selector), ";"),

    if: ($) =>
      seq(
        $.if_clause,
        optional_with_placeholder("else_if_clause_list", repeat($.else_if_clause)),
        optional_with_placeholder("else_clause_optional", $.else_clause)
      ),

    if_clause: ($) => seq("@if", alias($._value, $.condition), $.enclosed_body),

    else_if_clause: ($) => seq("@else", "if", alias($._value, $.condition), $.enclosed_body),

    else_clause: ($) => seq("@else", $.enclosed_body),

    each_statement: ($) =>
      seq(
        "@each",
        optional(seq(alias($.variable_identifier, $.key), ",")),
        alias($.variable_identifier, $.value),
        "in",
        $._value,
        $.enclosed_body
      ),

    for_statement: ($) =>
      seq(
        "@for",
        alias($.variable_identifier, $.variable),
        "from",
        alias($._value, $.from),
        "through",
        alias($._value, $.through),
        $.enclosed_body
      ),

    while_statement: ($) => seq("@while", $._value, $.enclosed_body),

    function_statement: ($) =>
      seq("@function", $.identifier, optional($.parameters), $.enclosed_body),

    return_statement: ($) => seq("@return", $._value, ";"),

    at_root_statement: ($) => seq("@at-root", $._value, $.enclosed_body),

    error_statement: ($) => seq("@error", $._value, ";"),

    warn_statement: ($) => seq("@warn", $._value, ";"),

    debug_statement: ($) => seq("@debug", $._value, ";"),

    // Rule sets

    css_ruleset: ($) => seq($.css_selector_list, $.enclosed_body),

    css_selector_list: ($) => sep1(",", $._selector),

    enclosed_body: ($) =>
      seq(
        "{",
        optional_with_placeholder(
          "statement_list",
          seq(repeat($.block_item), optional(alias($.last_declaration, $.declaration)))
        ),
        "}"
      ),

    block_item: ($) =>
      field(
        "statement",
        choice(
          $.declaration,
          $.css_ruleset,
          $.import_statement,
          $.media_statement,
          $.charset_statement,
          $.namespace_statement,
          $.keyframes_statement,
          $.supports_statement,
          $.css_mixin,
          $.css_include,
          $.extend_statement,
          $.if,
          $.each_statement,
          $.for_statement,
          $.while_statement,
          $.function_statement,
          $.return_statement,
          $.at_root_statement,
          $.error_statement,
          $.warn_statement,
          $.debug_statement,
          $.at_rule
        )
      ),

    // Selectors

    _selector: ($) =>
      choice(
        $.universal_selector,
        alias($.identifier, $.tag_name),
        $.class_selector,
        $.nesting_selector,
        $.pseudo_class_selector,
        $.pseudo_element_selector,
        $.id_selector,
        $.attribute_selector,
        $.string_value,
        $.child_selector,
        $.descendant_selector,
        $.sibling_selector,
        $.adjacent_sibling_selector
      ),

    nesting_selector: ($) => "&",

    universal_selector: ($) => "*",

    class_selector: ($) =>
      prec(
        1,
        field(
          "css_selector",
          seq(optional($._selector), choice(".", $.nesting_selector), $.identifier)
        )
      ),

    pseudo_class_selector: ($) =>
      field(
        "css_selector",
        seq(
          optional($._selector),
          ":",
          alias($.identifier, $.class_name),
          optional(alias($.pseudo_class_arguments, $.arguments))
        )
      ),

    pseudo_element_selector: ($) =>
      seq(optional($._selector), "::", alias($.identifier, $.tag_name)),

    id_selector: ($) => seq(optional($._selector), "#", alias($.identifier, $.id_name)),

    attribute_selector: ($) =>
      seq(
        optional($._selector),
        "[",
        alias($.identifier, $.attribute_name),
        optional(seq(choice("=", "~=", "^=", "|=", "*=", "$="), $._value)),
        "]"
      ),

    child_selector: ($) => prec.left(field("css_selector", seq($._selector, ">", $._selector))),

    descendant_selector: ($) => prec.left(seq($._selector, $._descendant_operator, $._selector)),

    sibling_selector: ($) => prec.left(seq($._selector, "~", $._selector)),

    adjacent_sibling_selector: ($) => prec.left(seq($._selector, "+", $._selector)),

    pseudo_class_arguments: ($) =>
      seq(token.immediate("("), sep(",", choice($._selector, repeat1($._value))), ")"),

    // Declarations

    declaration: ($) => seq(field("key_value_pair", $.declaration_pair), ";"),

    declaration_pair: ($) =>
      seq(
        field("key_value_pair_key", choice($.variable_identifier, $.identifier)),
        ":",
        field(
          "key_value_pair_value",
          seq($._value, repeat(seq(optional(","), $._value)), optional($.important))
        )
      ),

    last_declaration: ($) => prec(1, field("key_value_pair", $.declaration_pair)),

    important: ($) => "!important",

    // Media queries

    _query: ($) =>
      choice(
        alias($.identifier, $.keyword_query),
        $.feature_query,
        $.binary_query,
        $.unary_query,
        $.selector_query,
        $.parenthesized_query
      ),

    feature_query: ($) =>
      seq("(", alias($.identifier, $.feature_name), ":", repeat1($._value), ")"),

    parenthesized_query: ($) => seq("(", $._query, ")"),

    binary_query: ($) => prec.left(seq($._query, choice("and", "or"), $._query)),

    unary_query: ($) => prec(1, seq(choice("not", "only"), $._query)),

    selector_query: ($) => seq("selector", "(", $._selector, ")"),

    // Property Values

    _value: ($) =>
      prec(
        -1,
        choice(
          alias($.identifier, $.plain_value),
          alias($.variable_identifier, $.variable_value),
          $.plain_value,
          $.color_value,
          $.integer_value,
          $.float_value,
          $.string_value,
          $.binary_expression,
          $.parenthesized_value,
          $.call_expression
        )
      ),

    parenthesized_value: ($) => seq("(", $._value, ")"),

    color_value: ($) => seq("#", token.immediate(/[0-9a-fA-F]{3,8}/)),

    string_value: ($) =>
      token(choice(seq("'", /([^'\n]|\\(.|\n))*/, "'"), seq('"', /([^"\n]|\\(.|\n))*/, '"'))),

    integer: ($) => token(seq(optional(choice("+", "-")), /\d+/)),

    integer_value: ($) => seq($.integer, optional($.unit)),

    float_value: ($) =>
      seq(
        token(
          seq(
            optional(choice("+", "-")),
            /\d*/,
            choice(
              seq(".", /\d+/),
              seq(/[eE]/, optional("-"), /\d+/),
              seq(".", /\d+/, /[eE]/, optional("-"), /\d+/)
            )
          )
        ),
        optional($.unit)
      ),

    unit: ($) => token.immediate(/[a-zA-Z%]+/),

    call_expression: ($) => seq(alias($.identifier, $.function_name), $.arguments),

    binary_expression: ($) =>
      prec.left(
        seq($._value, choice("+", "-", "*", "/", "==", "<", ">", "!=", "<=", ">="), $._value)
      ),

    arguments: ($) =>
      seq(
        token.immediate("("),
        optional_with_placeholder("argument_list", sep(choice(",", ";"), repeat1($.argument))),
        ")"
      ),

    argument: ($) => $._value,

    identifier: ($) =>
      /((#\{[a-zA-Z0-9-_,&\$\.\(\) ]*\})|[a-zA-Z-_])([a-zA-Z0-9-_]|(#\{[a-zA-Z0-9-_,&\$\.\(\) ]*\}))*/,

    variable_identifier: ($) => /([a-zA-Z_]+\.)?\$[a-zA-Z-_][a-zA-Z0-9-_]*/,

    at_keyword: ($) => /@[a-zA-Z-_]+/,

    comment: ($) => token(seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),

    line_comment: ($) => token(seq("//", /.*/)),

    plain_value: ($) =>
      token(
        seq(
          repeat(
            choice(
              /[-_]/,
              /\/[^\*\s,;!{}()\[\]]/ // Slash not followed by a '*' (which would be a comment)
            )
          ),
          /[a-zA-Z]/,
          repeat(
            choice(
              /[^/\s,;!{}()\[\]]/, // Not a slash, not a delimiter character
              /\/[^\*\s,;!{}()\[\]]/ // Slash not followed by a '*' (which would be a comment)
            )
          )
        )
      ),
  },
});

function sep(separator, rule) {
  return optional(sep1(separator, rule));
}

function sep1(separator, rule) {
  return seq(rule, repeat(seq(separator, rule)));
}

function optional_with_placeholder(field_name, rule) {
  return choice(field(field_name, rule), field(field_name, blank()));
}
