#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 484
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 162
#define ALIAS_COUNT 19
#define TOKEN_COUNT 80
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 48

enum {
  anon_sym_ATimport = 1,
  anon_sym_COMMA = 2,
  anon_sym_SEMI = 3,
  anon_sym_ATmedia = 4,
  anon_sym_ATcharset = 5,
  anon_sym_ATnamespace = 6,
  anon_sym_ATkeyframes = 7,
  aux_sym_keyframes_statement_token1 = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_from = 11,
  sym_to = 12,
  anon_sym_ATsupports = 13,
  anon_sym_ATuse = 14,
  anon_sym_ATforward = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_COLON = 18,
  anon_sym_ATmixin = 19,
  anon_sym_ATinclude = 20,
  anon_sym_LPAREN2 = 21,
  anon_sym_RPAREN2 = 22,
  anon_sym_PERCENT = 23,
  anon_sym_ATextend = 24,
  anon_sym_ATif = 25,
  anon_sym_ATelse = 26,
  anon_sym_if = 27,
  anon_sym_ATeach = 28,
  anon_sym_in = 29,
  anon_sym_ATfor = 30,
  anon_sym_through = 31,
  anon_sym_ATwhile = 32,
  anon_sym_ATfunction = 33,
  anon_sym_ATreturn = 34,
  anon_sym_ATat_DASHroot = 35,
  anon_sym_ATerror = 36,
  anon_sym_ATwarn = 37,
  anon_sym_ATdebug = 38,
  sym_nesting_selector = 39,
  anon_sym_STAR = 40,
  anon_sym_DOT = 41,
  anon_sym_COLON_COLON = 42,
  anon_sym_POUND = 43,
  anon_sym_LBRACK = 44,
  anon_sym_EQ = 45,
  anon_sym_TILDE_EQ = 46,
  anon_sym_CARET_EQ = 47,
  anon_sym_PIPE_EQ = 48,
  anon_sym_STAR_EQ = 49,
  anon_sym_DOLLAR_EQ = 50,
  anon_sym_RBRACK = 51,
  anon_sym_GT = 52,
  anon_sym_TILDE = 53,
  anon_sym_PLUS = 54,
  sym_important = 55,
  anon_sym_and = 56,
  anon_sym_or = 57,
  anon_sym_not = 58,
  anon_sym_only = 59,
  anon_sym_selector = 60,
  aux_sym_color_value_token1 = 61,
  sym_string_value = 62,
  sym_integer = 63,
  aux_sym_float_value_token1 = 64,
  sym_unit = 65,
  anon_sym_DASH = 66,
  anon_sym_SLASH = 67,
  anon_sym_EQ_EQ = 68,
  anon_sym_LT = 69,
  anon_sym_BANG_EQ = 70,
  anon_sym_LT_EQ = 71,
  anon_sym_GT_EQ = 72,
  sym_identifier = 73,
  sym_variable_identifier = 74,
  sym_at_keyword = 75,
  sym_comment = 76,
  sym_line_comment = 77,
  sym_plain_value = 78,
  sym__descendant_operator = 79,
  sym_program = 80,
  sym_statement = 81,
  sym_import_statement = 82,
  sym_media_statement = 83,
  sym_charset_statement = 84,
  sym_namespace_statement = 85,
  sym_keyframes_statement = 86,
  sym_keyframe_block_list = 87,
  sym_keyframe_block = 88,
  sym_from = 89,
  sym_supports_statement = 90,
  sym_at_rule = 91,
  sym_use_statement = 92,
  sym_forward_statement = 93,
  sym_parameters = 94,
  sym_parameter = 95,
  sym_css_mixin = 96,
  sym_css_include = 97,
  sym_include_arguments = 98,
  sym_include_argument = 99,
  sym_placeholder = 100,
  sym_extend_statement = 101,
  sym_if = 102,
  sym_if_clause = 103,
  sym_else_if_clause = 104,
  sym_else_clause = 105,
  sym_each_statement = 106,
  sym_for_statement = 107,
  sym_while_statement = 108,
  sym_function_statement = 109,
  sym_return_statement = 110,
  sym_at_root_statement = 111,
  sym_error_statement = 112,
  sym_warn_statement = 113,
  sym_debug_statement = 114,
  sym_css_ruleset = 115,
  sym_css_selector_list = 116,
  sym_enclosed_body = 117,
  sym_block_item = 118,
  sym__selector = 119,
  sym_universal_selector = 120,
  sym_class_selector = 121,
  sym_pseudo_class_selector = 122,
  sym_pseudo_element_selector = 123,
  sym_id_selector = 124,
  sym_attribute_selector = 125,
  sym_child_selector = 126,
  sym_descendant_selector = 127,
  sym_sibling_selector = 128,
  sym_adjacent_sibling_selector = 129,
  sym_pseudo_class_arguments = 130,
  sym_declaration = 131,
  sym_declaration_pair = 132,
  sym_last_declaration = 133,
  sym__query = 134,
  sym_feature_query = 135,
  sym_parenthesized_query = 136,
  sym_binary_query = 137,
  sym_unary_query = 138,
  sym_selector_query = 139,
  sym__value = 140,
  sym_parenthesized_value = 141,
  sym_color_value = 142,
  sym_integer_value = 143,
  sym_float_value = 144,
  sym_call_expression = 145,
  sym_binary_expression = 146,
  sym_arguments = 147,
  sym_argument = 148,
  aux_sym_program_repeat1 = 149,
  aux_sym_import_statement_repeat1 = 150,
  aux_sym_keyframe_block_list_repeat1 = 151,
  aux_sym_parameters_repeat1 = 152,
  aux_sym_include_arguments_repeat1 = 153,
  aux_sym_if_repeat1 = 154,
  aux_sym_css_selector_list_repeat1 = 155,
  aux_sym_enclosed_body_repeat1 = 156,
  aux_sym_pseudo_class_arguments_repeat1 = 157,
  aux_sym_pseudo_class_arguments_repeat2 = 158,
  aux_sym_declaration_pair_repeat1 = 159,
  aux_sym_arguments_repeat1 = 160,
  aux_sym_arguments_repeat2 = 161,
  alias_sym_argument_name = 162,
  alias_sym_argument_value = 163,
  alias_sym_attribute_name = 164,
  alias_sym_class_name = 165,
  alias_sym_condition = 166,
  alias_sym_default_value = 167,
  alias_sym_feature_name = 168,
  alias_sym_function_name = 169,
  alias_sym_id_name = 170,
  alias_sym_key = 171,
  alias_sym_keyframes_name = 172,
  alias_sym_keyword_query = 173,
  alias_sym_namespace_name = 174,
  alias_sym_tag_name = 175,
  alias_sym_through = 176,
  alias_sym_value = 177,
  alias_sym_variable = 178,
  alias_sym_variable_name = 179,
  alias_sym_variable_value = 180,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATimport] = "@import",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_ATmedia] = "@media",
  [anon_sym_ATcharset] = "@charset",
  [anon_sym_ATnamespace] = "@namespace",
  [anon_sym_ATkeyframes] = "@keyframes",
  [aux_sym_keyframes_statement_token1] = "keyframes_statement_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_from] = "from",
  [sym_to] = "to",
  [anon_sym_ATsupports] = "@supports",
  [anon_sym_ATuse] = "@use",
  [anon_sym_ATforward] = "@forward",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_ATmixin] = "@mixin",
  [anon_sym_ATinclude] = "@include",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_RPAREN2] = ")",
  [anon_sym_PERCENT] = "%",
  [anon_sym_ATextend] = "@extend",
  [anon_sym_ATif] = "@if",
  [anon_sym_ATelse] = "@else",
  [anon_sym_if] = "if",
  [anon_sym_ATeach] = "@each",
  [anon_sym_in] = "in",
  [anon_sym_ATfor] = "@for",
  [anon_sym_through] = "through",
  [anon_sym_ATwhile] = "@while",
  [anon_sym_ATfunction] = "@function",
  [anon_sym_ATreturn] = "@return",
  [anon_sym_ATat_DASHroot] = "@at-root",
  [anon_sym_ATerror] = "@error",
  [anon_sym_ATwarn] = "@warn",
  [anon_sym_ATdebug] = "@debug",
  [sym_nesting_selector] = "nesting_selector",
  [anon_sym_STAR] = "*",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACK] = "[",
  [anon_sym_EQ] = "=",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_DOLLAR_EQ] = "$=",
  [anon_sym_RBRACK] = "]",
  [anon_sym_GT] = ">",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS] = "+",
  [sym_important] = "important",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [anon_sym_only] = "only",
  [anon_sym_selector] = "selector",
  [aux_sym_color_value_token1] = "color_value_token1",
  [sym_string_value] = "string_value",
  [sym_integer] = "integer",
  [aux_sym_float_value_token1] = "float_value_token1",
  [sym_unit] = "unit",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_LT] = "<",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [sym_identifier] = "identifier",
  [sym_variable_identifier] = "variable_identifier",
  [sym_at_keyword] = "at_keyword",
  [sym_comment] = "comment",
  [sym_line_comment] = "line_comment",
  [sym_plain_value] = "plain_value",
  [sym__descendant_operator] = "_descendant_operator",
  [sym_program] = "program",
  [sym_statement] = "statement",
  [sym_import_statement] = "import_statement",
  [sym_media_statement] = "media_statement",
  [sym_charset_statement] = "charset_statement",
  [sym_namespace_statement] = "namespace_statement",
  [sym_keyframes_statement] = "keyframes_statement",
  [sym_keyframe_block_list] = "keyframe_block_list",
  [sym_keyframe_block] = "keyframe_block",
  [sym_from] = "from",
  [sym_supports_statement] = "supports_statement",
  [sym_at_rule] = "at_rule",
  [sym_use_statement] = "use_statement",
  [sym_forward_statement] = "forward_statement",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_css_mixin] = "css_mixin",
  [sym_css_include] = "css_include",
  [sym_include_arguments] = "include_arguments",
  [sym_include_argument] = "argument",
  [sym_placeholder] = "placeholder",
  [sym_extend_statement] = "extend_statement",
  [sym_if] = "if",
  [sym_if_clause] = "if_clause",
  [sym_else_if_clause] = "else_if_clause",
  [sym_else_clause] = "else_clause",
  [sym_each_statement] = "each_statement",
  [sym_for_statement] = "for_statement",
  [sym_while_statement] = "while_statement",
  [sym_function_statement] = "function_statement",
  [sym_return_statement] = "return_statement",
  [sym_at_root_statement] = "at_root_statement",
  [sym_error_statement] = "error_statement",
  [sym_warn_statement] = "warn_statement",
  [sym_debug_statement] = "debug_statement",
  [sym_css_ruleset] = "css_ruleset",
  [sym_css_selector_list] = "css_selector_list",
  [sym_enclosed_body] = "enclosed_body",
  [sym_block_item] = "block_item",
  [sym__selector] = "_selector",
  [sym_universal_selector] = "universal_selector",
  [sym_class_selector] = "class_selector",
  [sym_pseudo_class_selector] = "pseudo_class_selector",
  [sym_pseudo_element_selector] = "pseudo_element_selector",
  [sym_id_selector] = "id_selector",
  [sym_attribute_selector] = "attribute_selector",
  [sym_child_selector] = "child_selector",
  [sym_descendant_selector] = "descendant_selector",
  [sym_sibling_selector] = "sibling_selector",
  [sym_adjacent_sibling_selector] = "adjacent_sibling_selector",
  [sym_pseudo_class_arguments] = "arguments",
  [sym_declaration] = "declaration",
  [sym_declaration_pair] = "declaration_pair",
  [sym_last_declaration] = "declaration",
  [sym__query] = "_query",
  [sym_feature_query] = "feature_query",
  [sym_parenthesized_query] = "parenthesized_query",
  [sym_binary_query] = "binary_query",
  [sym_unary_query] = "unary_query",
  [sym_selector_query] = "selector_query",
  [sym__value] = "_value",
  [sym_parenthesized_value] = "parenthesized_value",
  [sym_color_value] = "color_value",
  [sym_integer_value] = "integer_value",
  [sym_float_value] = "float_value",
  [sym_call_expression] = "call_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_arguments] = "arguments",
  [sym_argument] = "argument",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [aux_sym_keyframe_block_list_repeat1] = "keyframe_block_list_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_include_arguments_repeat1] = "include_arguments_repeat1",
  [aux_sym_if_repeat1] = "if_repeat1",
  [aux_sym_css_selector_list_repeat1] = "css_selector_list_repeat1",
  [aux_sym_enclosed_body_repeat1] = "enclosed_body_repeat1",
  [aux_sym_pseudo_class_arguments_repeat1] = "pseudo_class_arguments_repeat1",
  [aux_sym_pseudo_class_arguments_repeat2] = "pseudo_class_arguments_repeat2",
  [aux_sym_declaration_pair_repeat1] = "declaration_pair_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_arguments_repeat2] = "arguments_repeat2",
  [alias_sym_argument_name] = "argument_name",
  [alias_sym_argument_value] = "argument_value",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_class_name] = "class_name",
  [alias_sym_condition] = "condition",
  [alias_sym_default_value] = "default_value",
  [alias_sym_feature_name] = "feature_name",
  [alias_sym_function_name] = "function_name",
  [alias_sym_id_name] = "id_name",
  [alias_sym_key] = "key",
  [alias_sym_keyframes_name] = "keyframes_name",
  [alias_sym_keyword_query] = "keyword_query",
  [alias_sym_namespace_name] = "namespace_name",
  [alias_sym_tag_name] = "tag_name",
  [alias_sym_through] = "through",
  [alias_sym_value] = "value",
  [alias_sym_variable] = "variable",
  [alias_sym_variable_name] = "variable_name",
  [alias_sym_variable_value] = "variable_value",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATimport] = anon_sym_ATimport,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_ATmedia] = anon_sym_ATmedia,
  [anon_sym_ATcharset] = anon_sym_ATcharset,
  [anon_sym_ATnamespace] = anon_sym_ATnamespace,
  [anon_sym_ATkeyframes] = anon_sym_ATkeyframes,
  [aux_sym_keyframes_statement_token1] = aux_sym_keyframes_statement_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_from] = anon_sym_from,
  [sym_to] = sym_to,
  [anon_sym_ATsupports] = anon_sym_ATsupports,
  [anon_sym_ATuse] = anon_sym_ATuse,
  [anon_sym_ATforward] = anon_sym_ATforward,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_ATmixin] = anon_sym_ATmixin,
  [anon_sym_ATinclude] = anon_sym_ATinclude,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_RPAREN2] = anon_sym_RPAREN,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_ATextend] = anon_sym_ATextend,
  [anon_sym_ATif] = anon_sym_ATif,
  [anon_sym_ATelse] = anon_sym_ATelse,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_ATeach] = anon_sym_ATeach,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_ATfor] = anon_sym_ATfor,
  [anon_sym_through] = anon_sym_through,
  [anon_sym_ATwhile] = anon_sym_ATwhile,
  [anon_sym_ATfunction] = anon_sym_ATfunction,
  [anon_sym_ATreturn] = anon_sym_ATreturn,
  [anon_sym_ATat_DASHroot] = anon_sym_ATat_DASHroot,
  [anon_sym_ATerror] = anon_sym_ATerror,
  [anon_sym_ATwarn] = anon_sym_ATwarn,
  [anon_sym_ATdebug] = anon_sym_ATdebug,
  [sym_nesting_selector] = sym_nesting_selector,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_DOLLAR_EQ] = anon_sym_DOLLAR_EQ,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_important] = sym_important,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_selector] = anon_sym_selector,
  [aux_sym_color_value_token1] = aux_sym_color_value_token1,
  [sym_string_value] = sym_string_value,
  [sym_integer] = sym_integer,
  [aux_sym_float_value_token1] = aux_sym_float_value_token1,
  [sym_unit] = sym_unit,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [sym_identifier] = sym_identifier,
  [sym_variable_identifier] = sym_variable_identifier,
  [sym_at_keyword] = sym_at_keyword,
  [sym_comment] = sym_comment,
  [sym_line_comment] = sym_line_comment,
  [sym_plain_value] = sym_plain_value,
  [sym__descendant_operator] = sym__descendant_operator,
  [sym_program] = sym_program,
  [sym_statement] = sym_statement,
  [sym_import_statement] = sym_import_statement,
  [sym_media_statement] = sym_media_statement,
  [sym_charset_statement] = sym_charset_statement,
  [sym_namespace_statement] = sym_namespace_statement,
  [sym_keyframes_statement] = sym_keyframes_statement,
  [sym_keyframe_block_list] = sym_keyframe_block_list,
  [sym_keyframe_block] = sym_keyframe_block,
  [sym_from] = sym_from,
  [sym_supports_statement] = sym_supports_statement,
  [sym_at_rule] = sym_at_rule,
  [sym_use_statement] = sym_use_statement,
  [sym_forward_statement] = sym_forward_statement,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_css_mixin] = sym_css_mixin,
  [sym_css_include] = sym_css_include,
  [sym_include_arguments] = sym_include_arguments,
  [sym_include_argument] = sym_argument,
  [sym_placeholder] = sym_placeholder,
  [sym_extend_statement] = sym_extend_statement,
  [sym_if] = sym_if,
  [sym_if_clause] = sym_if_clause,
  [sym_else_if_clause] = sym_else_if_clause,
  [sym_else_clause] = sym_else_clause,
  [sym_each_statement] = sym_each_statement,
  [sym_for_statement] = sym_for_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_function_statement] = sym_function_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_at_root_statement] = sym_at_root_statement,
  [sym_error_statement] = sym_error_statement,
  [sym_warn_statement] = sym_warn_statement,
  [sym_debug_statement] = sym_debug_statement,
  [sym_css_ruleset] = sym_css_ruleset,
  [sym_css_selector_list] = sym_css_selector_list,
  [sym_enclosed_body] = sym_enclosed_body,
  [sym_block_item] = sym_block_item,
  [sym__selector] = sym__selector,
  [sym_universal_selector] = sym_universal_selector,
  [sym_class_selector] = sym_class_selector,
  [sym_pseudo_class_selector] = sym_pseudo_class_selector,
  [sym_pseudo_element_selector] = sym_pseudo_element_selector,
  [sym_id_selector] = sym_id_selector,
  [sym_attribute_selector] = sym_attribute_selector,
  [sym_child_selector] = sym_child_selector,
  [sym_descendant_selector] = sym_descendant_selector,
  [sym_sibling_selector] = sym_sibling_selector,
  [sym_adjacent_sibling_selector] = sym_adjacent_sibling_selector,
  [sym_pseudo_class_arguments] = sym_arguments,
  [sym_declaration] = sym_declaration,
  [sym_declaration_pair] = sym_declaration_pair,
  [sym_last_declaration] = sym_declaration,
  [sym__query] = sym__query,
  [sym_feature_query] = sym_feature_query,
  [sym_parenthesized_query] = sym_parenthesized_query,
  [sym_binary_query] = sym_binary_query,
  [sym_unary_query] = sym_unary_query,
  [sym_selector_query] = sym_selector_query,
  [sym__value] = sym__value,
  [sym_parenthesized_value] = sym_parenthesized_value,
  [sym_color_value] = sym_color_value,
  [sym_integer_value] = sym_integer_value,
  [sym_float_value] = sym_float_value,
  [sym_call_expression] = sym_call_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_arguments] = sym_arguments,
  [sym_argument] = sym_argument,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [aux_sym_keyframe_block_list_repeat1] = aux_sym_keyframe_block_list_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_include_arguments_repeat1] = aux_sym_include_arguments_repeat1,
  [aux_sym_if_repeat1] = aux_sym_if_repeat1,
  [aux_sym_css_selector_list_repeat1] = aux_sym_css_selector_list_repeat1,
  [aux_sym_enclosed_body_repeat1] = aux_sym_enclosed_body_repeat1,
  [aux_sym_pseudo_class_arguments_repeat1] = aux_sym_pseudo_class_arguments_repeat1,
  [aux_sym_pseudo_class_arguments_repeat2] = aux_sym_pseudo_class_arguments_repeat2,
  [aux_sym_declaration_pair_repeat1] = aux_sym_declaration_pair_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_arguments_repeat2] = aux_sym_arguments_repeat2,
  [alias_sym_argument_name] = alias_sym_argument_name,
  [alias_sym_argument_value] = alias_sym_argument_value,
  [alias_sym_attribute_name] = alias_sym_attribute_name,
  [alias_sym_class_name] = alias_sym_class_name,
  [alias_sym_condition] = alias_sym_condition,
  [alias_sym_default_value] = alias_sym_default_value,
  [alias_sym_feature_name] = alias_sym_feature_name,
  [alias_sym_function_name] = alias_sym_function_name,
  [alias_sym_id_name] = alias_sym_id_name,
  [alias_sym_key] = alias_sym_key,
  [alias_sym_keyframes_name] = alias_sym_keyframes_name,
  [alias_sym_keyword_query] = alias_sym_keyword_query,
  [alias_sym_namespace_name] = alias_sym_namespace_name,
  [alias_sym_tag_name] = alias_sym_tag_name,
  [alias_sym_through] = alias_sym_through,
  [alias_sym_value] = alias_sym_value,
  [alias_sym_variable] = alias_sym_variable,
  [alias_sym_variable_name] = alias_sym_variable_name,
  [alias_sym_variable_value] = alias_sym_variable_value,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmedia] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATcharset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATnamespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATkeyframes] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keyframes_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [sym_to] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsupports] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATuse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATforward] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmixin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATextend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATelse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATeach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_through] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATwhile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATfunction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATreturn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATat_DASHroot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATerror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATwarn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATdebug] = {
    .visible = true,
    .named = false,
  },
  [sym_nesting_selector] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [sym_important] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selector] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_color_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_float_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_at_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_value] = {
    .visible = true,
    .named = true,
  },
  [sym__descendant_operator] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_media_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_charset_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframes_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block_list] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block] = {
    .visible = true,
    .named = true,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_supports_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_at_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_use_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_forward_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_css_mixin] = {
    .visible = true,
    .named = true,
  },
  [sym_css_include] = {
    .visible = true,
    .named = true,
  },
  [sym_include_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_include_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_placeholder] = {
    .visible = true,
    .named = true,
  },
  [sym_extend_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_if_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_else_if_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_each_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_function_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_at_root_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_error_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_warn_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_debug_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_css_ruleset] = {
    .visible = true,
    .named = true,
  },
  [sym_css_selector_list] = {
    .visible = true,
    .named = true,
  },
  [sym_enclosed_body] = {
    .visible = true,
    .named = true,
  },
  [sym_block_item] = {
    .visible = true,
    .named = true,
  },
  [sym__selector] = {
    .visible = false,
    .named = true,
  },
  [sym_universal_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_element_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_id_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_child_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_descendant_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_adjacent_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_last_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__query] = {
    .visible = false,
    .named = true,
  },
  [sym_feature_query] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_query] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_query] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_value] = {
    .visible = true,
    .named = true,
  },
  [sym_color_value] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_value] = {
    .visible = true,
    .named = true,
  },
  [sym_float_value] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyframe_block_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_include_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_selector_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enclosed_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_class_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_class_arguments_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_pair_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_argument_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_argument_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_condition] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_default_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_feature_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_id_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_key] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyframes_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyword_query] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_namespace_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_through] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable_value] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_argument_list = 1,
  field_argument_list_optional = 2,
  field_at_keyword = 3,
  field_css_selector = 4,
  field_else_clause_optional = 5,
  field_else_if_clause_list = 6,
  field_key_value_pair = 7,
  field_key_value_pair_key = 8,
  field_key_value_pair_value = 9,
  field_parameter_list = 10,
  field_parameter_list_optional = 11,
  field_statement = 12,
  field_statement_list = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument_list] = "argument_list",
  [field_argument_list_optional] = "argument_list_optional",
  [field_at_keyword] = "at_keyword",
  [field_css_selector] = "css_selector",
  [field_else_clause_optional] = "else_clause_optional",
  [field_else_if_clause_list] = "else_if_clause_list",
  [field_key_value_pair] = "key_value_pair",
  [field_key_value_pair_key] = "key_value_pair_key",
  [field_key_value_pair_value] = "key_value_pair_value",
  [field_parameter_list] = "parameter_list",
  [field_parameter_list_optional] = "parameter_list_optional",
  [field_statement] = "statement",
  [field_statement_list] = "statement_list",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [6] = {.index = 1, .length = 2},
  [7] = {.index = 1, .length = 2},
  [10] = {.index = 3, .length = 1},
  [11] = {.index = 4, .length = 1},
  [12] = {.index = 5, .length = 1},
  [15] = {.index = 6, .length = 1},
  [16] = {.index = 7, .length = 3},
  [19] = {.index = 10, .length = 2},
  [20] = {.index = 12, .length = 1},
  [21] = {.index = 13, .length = 2},
  [22] = {.index = 7, .length = 3},
  [23] = {.index = 7, .length = 3},
  [28] = {.index = 15, .length = 1},
  [30] = {.index = 16, .length = 1},
  [31] = {.index = 17, .length = 3},
  [32] = {.index = 20, .length = 1},
  [33] = {.index = 21, .length = 4},
  [35] = {.index = 25, .length = 1},
  [36] = {.index = 26, .length = 1},
  [38] = {.index = 27, .length = 4},
  [39] = {.index = 31, .length = 2},
  [41] = {.index = 33, .length = 2},
  [44] = {.index = 35, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_statement_list, 0},
  [1] =
    {field_css_selector, 0},
    {field_css_selector, 1},
  [3] =
    {field_else_clause_optional, 1},
  [4] =
    {field_else_if_clause_list, 1},
  [5] =
    {field_key_value_pair, 0},
  [6] =
    {field_at_keyword, 0},
  [7] =
    {field_css_selector, 0},
    {field_css_selector, 1},
    {field_css_selector, 2},
  [10] =
    {field_key_value_pair_key, 0},
    {field_key_value_pair_value, 2},
  [12] =
    {field_statement, 0},
  [13] =
    {field_else_clause_optional, 2},
    {field_else_if_clause_list, 1},
  [15] =
    {field_parameter_list_optional, 2},
  [16] =
    {field_argument_list_optional, 2},
  [17] =
    {field_key_value_pair_key, 0},
    {field_key_value_pair_value, 2},
    {field_key_value_pair_value, 3},
  [20] =
    {field_statement_list, 1},
  [21] =
    {field_css_selector, 0},
    {field_css_selector, 1},
    {field_css_selector, 2},
    {field_css_selector, 3},
  [25] =
    {field_argument_list, 1},
  [26] =
    {field_parameter_list, 1},
  [27] =
    {field_key_value_pair_key, 0},
    {field_key_value_pair_value, 2},
    {field_key_value_pair_value, 3},
    {field_key_value_pair_value, 4},
  [31] =
    {field_statement_list, 1},
    {field_statement_list, 2},
  [33] =
    {field_argument_list, 1},
    {field_argument_list, 2},
  [35] =
    {field_parameter_list, 1},
    {field_parameter_list, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_tag_name,
  },
  [3] = {
    [0] = sym_plain_value,
  },
  [4] = {
    [0] = alias_sym_variable_value,
  },
  [5] = {
    [0] = alias_sym_keyword_query,
  },
  [6] = {
    [1] = alias_sym_class_name,
  },
  [8] = {
    [1] = alias_sym_tag_name,
  },
  [9] = {
    [1] = alias_sym_id_name,
  },
  [13] = {
    [0] = alias_sym_function_name,
  },
  [14] = {
    [1] = alias_sym_keyframes_name,
  },
  [15] = {
    [1] = alias_sym_keyframes_name,
  },
  [16] = {
    [1] = alias_sym_class_name,
  },
  [17] = {
    [1] = alias_sym_condition,
  },
  [18] = {
    [1] = alias_sym_attribute_name,
  },
  [22] = {
    [2] = alias_sym_class_name,
  },
  [24] = {
    [2] = alias_sym_tag_name,
  },
  [25] = {
    [2] = alias_sym_id_name,
  },
  [26] = {
    [1] = alias_sym_namespace_name,
  },
  [27] = {
    [0] = alias_sym_variable_name,
  },
  [29] = {
    [0] = alias_sym_argument_value,
  },
  [33] = {
    [2] = alias_sym_class_name,
  },
  [34] = {
    [2] = alias_sym_attribute_name,
  },
  [37] = {
    [1] = alias_sym_value,
  },
  [40] = {
    [2] = alias_sym_condition,
  },
  [42] = {
    [1] = alias_sym_feature_name,
  },
  [43] = {
    [0] = alias_sym_variable_name,
    [2] = alias_sym_default_value,
  },
  [45] = {
    [0] = alias_sym_argument_name,
    [2] = alias_sym_argument_value,
  },
  [46] = {
    [1] = alias_sym_key,
    [3] = alias_sym_value,
  },
  [47] = {
    [1] = alias_sym_variable,
    [3] = sym_from,
    [5] = alias_sym_through,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__value, 6,
    sym__value,
    alias_sym_argument_value,
    alias_sym_condition,
    alias_sym_default_value,
    alias_sym_through,
    sym_from,
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < ','
    ? (c < '&'
      ? (c < '$'
        ? c == ' '
        : c <= '$')
      : (c <= '&' || (c >= '(' && c <= ')')))
    : (c <= '.' || (c < '_'
      ? (c < 'A'
        ? (c >= '0' && c <= '9')
        : c <= 'Z')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static inline bool sym_line_comment_character_set_1(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= '!' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= ',')))
    : (c <= ';' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_line_comment_character_set_2(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= '!' || (c < ','
        ? (c >= '(' && c <= '*')
        : c <= ',')))
    : (c <= ';' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_plain_value_character_set_1(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= ')')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_plain_value_character_set_2(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= '*')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_plain_value_character_set_3(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= ')')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(106);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '%') ADVANCE(130);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ')') ADVANCE(129);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(158);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == '^') ADVANCE(43);
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '}') ADVANCE(116);
      if (lookahead == '~') ADVANCE(168);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(102)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == '}') ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == '}') ADVANCE(116);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == '}') ADVANCE(116);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == '}') ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(61);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(36);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(262);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '_') ADVANCE(260);
      if (lookahead == '}') ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == 'o') ADVANCE(231);
      if (lookahead == 's') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead == 'o') ADVANCE(270);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead == 'o') ADVANCE(270);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead == 'o') ADVANCE(270);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ')') ADVANCE(129);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ')') ADVANCE(129);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '}') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '}') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '}') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == '>') ADVANCE(165);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == '>') ADVANCE(165);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == '^') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead == 'o') ADVANCE(270);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '~') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 27:
      if (lookahead == '$') ADVANCE(97);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(400);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(396);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '/') ADVANCE(395);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 37:
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 38:
      if (lookahead == '=') ADVANCE(257);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(163);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(162);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(255);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(160);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(161);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(159);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(378);
      if (lookahead == 'c') ADVANCE(330);
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'k') ADVANCE(311);
      if (lookahead == 'm') ADVANCE(312);
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == 'r') ADVANCE(319);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(375);
      if (lookahead == 'w') ADVANCE(295);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(378);
      if (lookahead == 'c') ADVANCE(330);
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead == 'f') ADVANCE(353);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'k') ADVANCE(311);
      if (lookahead == 'm') ADVANCE(312);
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == 'r') ADVANCE(319);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead == 'w') ADVANCE(295);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(378);
      if (lookahead == 'c') ADVANCE(330);
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == 'f') ADVANCE(353);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'k') ADVANCE(311);
      if (lookahead == 'm') ADVANCE(312);
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == 'r') ADVANCE(319);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead == 'w') ADVANCE(295);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(330);
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'k') ADVANCE(311);
      if (lookahead == 'm') ADVANCE(312);
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(375);
      if (lookahead == 'w') ADVANCE(295);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(330);
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'k') ADVANCE(311);
      if (lookahead == 'm') ADVANCE(312);
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(375);
      if (lookahead == 'w') ADVANCE(295);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 59:
      if (lookahead == 'h') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 60:
      if (lookahead == 'h') ADVANCE(139);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 65:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 87:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 88:
      if (lookahead == 'y') ADVANCE(177);
      END_STATE();
    case 89:
      if (lookahead == '{') ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == '}') ADVANCE(280);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == '}') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(91)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 97:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 98:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(37);
      END_STATE();
    case 99:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(404);
      END_STATE();
    case 100:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(23);
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(100);
      END_STATE();
    case 101:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(101);
      END_STATE();
    case 102:
      if (eof) ADVANCE(106);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '%') ADVANCE(130);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(158);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == '^') ADVANCE(43);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '}') ADVANCE(116);
      if (lookahead == '~') ADVANCE(168);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(102)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 103:
      if (eof) ADVANCE(106);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '%') ADVANCE(130);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '>') ADVANCE(165);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(104)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 104:
      if (eof) ADVANCE(106);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '%') ADVANCE(130);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '>') ADVANCE(165);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(104)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 105:
      if (eof) ADVANCE(106);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '%') ADVANCE(130);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(105)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_ATuse);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_ATforward);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(153);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_ATmixin);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_ATextend);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_ATif);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_ATelse);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_ATeach);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_ATfor);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'w') ADVANCE(298);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_ATfor);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_through);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_through);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_ATwhile);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_ATfunction);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_ATat_DASHroot);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_ATerror);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_ATwarn);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_ATdebug);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(162);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(90);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(255);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(259);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(159);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '#') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '/') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'c') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'l') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'l') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'n') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'o') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 't') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == 'y') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '%') ADVANCE(241);
      if (lookahead == '-') ADVANCE(284);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '_') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '%') ADVANCE(241);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '_') ADVANCE(283);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'g') ADVANCE(244);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'h') ADVANCE(246);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'h') ADVANCE(140);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'r') ADVANCE(245);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'u') ADVANCE(242);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(400);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(396);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(37);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(258);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '_') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '-') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'c') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'l') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'l') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 't') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == 'y') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '-') ADVANCE(284);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == '/') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '-') ADVANCE(284);
      if (lookahead == '/') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == '/') ADVANCE(99);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '/') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(402);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-') ADVANCE(363);
      if (lookahead == 'k') ADVANCE(324);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'l') ADVANCE(376);
      if (lookahead == 'r') ADVANCE(358);
      if (lookahead == 'x') ADVANCE(385);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'l') ADVANCE(376);
      if (lookahead == 'r') ADVANCE(358);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(358);
      if (lookahead == 'x') ADVANCE(385);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(358);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == 'h') ADVANCE(331);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(338);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(339);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'b') ADVANCE(386);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(335);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(329);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(384);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(317);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(332);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(316);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == 'i') ADVANCE(390);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(382);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(372);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(381);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'm') ADVANCE(355);
      if (lookahead == 'n') ADVANCE(302);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(369);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(370);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'g') ADVANCE(147);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(135);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(297);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(336);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(341);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(351);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'l') ADVANCE(388);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'l') ADVANCE(315);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'm') ADVANCE(318);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'm') ADVANCE(321);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'm') ADVANCE(322);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(306);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(304);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(359);
      if (lookahead == 'u') ADVANCE(345);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(349);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(360);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(380);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(365);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(367);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(361);
      if (lookahead == 'u') ADVANCE(345);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'p') ADVANCE(296);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'p') ADVANCE(350);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'p') ADVANCE(352);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'p') ADVANCE(356);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(348);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(340);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(347);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(379);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(342);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(383);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(377);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(299);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(300);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 's') ADVANCE(354);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 's') ADVANCE(313);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 's') ADVANCE(314);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 's') ADVANCE(323);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 't') ADVANCE(288);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 't') ADVANCE(389);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 't') ADVANCE(371);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 't') ADVANCE(334);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'u') ADVANCE(328);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'u') ADVANCE(357);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'u') ADVANCE(309);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'u') ADVANCE(366);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'x') ADVANCE(333);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'y') ADVANCE(326);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == 'y') ADVANCE(327);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '/') ADVANCE(398);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(396);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(400);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '/') ADVANCE(399);
      if (sym_line_comment_character_set_1(lookahead)) ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_line_comment);
      if (sym_line_comment_character_set_2(lookahead)) ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(396);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_line_comment);
      if (sym_line_comment_character_set_2(lookahead)) ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(397);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '$') ADVANCE(403);
      if (lookahead == '/') ADVANCE(99);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '{') ADVANCE(90);
      if (!sym_plain_value_character_set_3(lookahead)) ADVANCE(404);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(99);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(404);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 103},
  [2] = {.lex_state = 18},
  [3] = {.lex_state = 18},
  [4] = {.lex_state = 18},
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 103},
  [14] = {.lex_state = 103},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 105},
  [18] = {.lex_state = 105},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 105},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 105},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 105},
  [29] = {.lex_state = 105},
  [30] = {.lex_state = 105},
  [31] = {.lex_state = 20},
  [32] = {.lex_state = 105},
  [33] = {.lex_state = 103},
  [34] = {.lex_state = 103},
  [35] = {.lex_state = 103},
  [36] = {.lex_state = 103},
  [37] = {.lex_state = 18},
  [38] = {.lex_state = 103},
  [39] = {.lex_state = 103},
  [40] = {.lex_state = 103},
  [41] = {.lex_state = 103},
  [42] = {.lex_state = 103},
  [43] = {.lex_state = 103},
  [44] = {.lex_state = 103},
  [45] = {.lex_state = 103},
  [46] = {.lex_state = 103},
  [47] = {.lex_state = 103},
  [48] = {.lex_state = 18},
  [49] = {.lex_state = 103},
  [50] = {.lex_state = 18},
  [51] = {.lex_state = 103},
  [52] = {.lex_state = 103},
  [53] = {.lex_state = 18},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 18},
  [56] = {.lex_state = 103},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 18},
  [59] = {.lex_state = 18},
  [60] = {.lex_state = 103},
  [61] = {.lex_state = 18},
  [62] = {.lex_state = 18},
  [63] = {.lex_state = 18},
  [64] = {.lex_state = 18},
  [65] = {.lex_state = 18},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 18},
  [68] = {.lex_state = 18},
  [69] = {.lex_state = 18},
  [70] = {.lex_state = 18},
  [71] = {.lex_state = 103},
  [72] = {.lex_state = 103},
  [73] = {.lex_state = 103},
  [74] = {.lex_state = 18},
  [75] = {.lex_state = 18},
  [76] = {.lex_state = 18},
  [77] = {.lex_state = 18},
  [78] = {.lex_state = 18},
  [79] = {.lex_state = 18},
  [80] = {.lex_state = 103},
  [81] = {.lex_state = 18},
  [82] = {.lex_state = 18},
  [83] = {.lex_state = 103},
  [84] = {.lex_state = 103},
  [85] = {.lex_state = 103},
  [86] = {.lex_state = 103},
  [87] = {.lex_state = 18},
  [88] = {.lex_state = 18},
  [89] = {.lex_state = 18},
  [90] = {.lex_state = 18},
  [91] = {.lex_state = 103},
  [92] = {.lex_state = 103},
  [93] = {.lex_state = 103},
  [94] = {.lex_state = 18},
  [95] = {.lex_state = 18},
  [96] = {.lex_state = 103},
  [97] = {.lex_state = 18},
  [98] = {.lex_state = 103},
  [99] = {.lex_state = 103},
  [100] = {.lex_state = 18},
  [101] = {.lex_state = 103},
  [102] = {.lex_state = 103},
  [103] = {.lex_state = 103},
  [104] = {.lex_state = 18},
  [105] = {.lex_state = 18},
  [106] = {.lex_state = 18},
  [107] = {.lex_state = 103},
  [108] = {.lex_state = 103},
  [109] = {.lex_state = 103},
  [110] = {.lex_state = 18},
  [111] = {.lex_state = 18},
  [112] = {.lex_state = 103},
  [113] = {.lex_state = 18},
  [114] = {.lex_state = 18},
  [115] = {.lex_state = 103},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 2, .external_lex_state = 1},
  [118] = {.lex_state = 3, .external_lex_state = 1},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 6, .external_lex_state = 1},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 21},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 21},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 21},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 21},
  [151] = {.lex_state = 21},
  [152] = {.lex_state = 21},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 6, .external_lex_state = 1},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 10},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 14},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 6},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 14},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 6},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 6},
  [194] = {.lex_state = 6},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 5},
  [201] = {.lex_state = 5},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 103, .external_lex_state = 1},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 5},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 5},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 5},
  [221] = {.lex_state = 5},
  [222] = {.lex_state = 5},
  [223] = {.lex_state = 5},
  [224] = {.lex_state = 5},
  [225] = {.lex_state = 5},
  [226] = {.lex_state = 5},
  [227] = {.lex_state = 103, .external_lex_state = 1},
  [228] = {.lex_state = 5},
  [229] = {.lex_state = 5},
  [230] = {.lex_state = 5},
  [231] = {.lex_state = 5},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 5},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 5},
  [236] = {.lex_state = 5},
  [237] = {.lex_state = 5},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 5},
  [240] = {.lex_state = 103, .external_lex_state = 1},
  [241] = {.lex_state = 24},
  [242] = {.lex_state = 103, .external_lex_state = 1},
  [243] = {.lex_state = 12},
  [244] = {.lex_state = 21, .external_lex_state = 1},
  [245] = {.lex_state = 24},
  [246] = {.lex_state = 103, .external_lex_state = 1},
  [247] = {.lex_state = 103, .external_lex_state = 1},
  [248] = {.lex_state = 12},
  [249] = {.lex_state = 103, .external_lex_state = 1},
  [250] = {.lex_state = 103, .external_lex_state = 1},
  [251] = {.lex_state = 103, .external_lex_state = 1},
  [252] = {.lex_state = 103, .external_lex_state = 1},
  [253] = {.lex_state = 103, .external_lex_state = 1},
  [254] = {.lex_state = 103, .external_lex_state = 1},
  [255] = {.lex_state = 103, .external_lex_state = 1},
  [256] = {.lex_state = 103, .external_lex_state = 1},
  [257] = {.lex_state = 103, .external_lex_state = 1},
  [258] = {.lex_state = 103, .external_lex_state = 1},
  [259] = {.lex_state = 103, .external_lex_state = 1},
  [260] = {.lex_state = 103, .external_lex_state = 1},
  [261] = {.lex_state = 103, .external_lex_state = 1},
  [262] = {.lex_state = 103, .external_lex_state = 1},
  [263] = {.lex_state = 12},
  [264] = {.lex_state = 103, .external_lex_state = 1},
  [265] = {.lex_state = 103, .external_lex_state = 1},
  [266] = {.lex_state = 12},
  [267] = {.lex_state = 103, .external_lex_state = 1},
  [268] = {.lex_state = 103, .external_lex_state = 1},
  [269] = {.lex_state = 103, .external_lex_state = 1},
  [270] = {.lex_state = 6},
  [271] = {.lex_state = 12},
  [272] = {.lex_state = 12},
  [273] = {.lex_state = 103, .external_lex_state = 1},
  [274] = {.lex_state = 6},
  [275] = {.lex_state = 12},
  [276] = {.lex_state = 16},
  [277] = {.lex_state = 6},
  [278] = {.lex_state = 6},
  [279] = {.lex_state = 6},
  [280] = {.lex_state = 6},
  [281] = {.lex_state = 6},
  [282] = {.lex_state = 103, .external_lex_state = 1},
  [283] = {.lex_state = 12},
  [284] = {.lex_state = 6},
  [285] = {.lex_state = 6},
  [286] = {.lex_state = 12},
  [287] = {.lex_state = 12},
  [288] = {.lex_state = 12},
  [289] = {.lex_state = 6},
  [290] = {.lex_state = 12},
  [291] = {.lex_state = 12},
  [292] = {.lex_state = 6},
  [293] = {.lex_state = 6},
  [294] = {.lex_state = 6},
  [295] = {.lex_state = 16},
  [296] = {.lex_state = 12},
  [297] = {.lex_state = 6},
  [298] = {.lex_state = 12},
  [299] = {.lex_state = 12},
  [300] = {.lex_state = 103, .external_lex_state = 1},
  [301] = {.lex_state = 12},
  [302] = {.lex_state = 24},
  [303] = {.lex_state = 6},
  [304] = {.lex_state = 24},
  [305] = {.lex_state = 6},
  [306] = {.lex_state = 24},
  [307] = {.lex_state = 6},
  [308] = {.lex_state = 6},
  [309] = {.lex_state = 103, .external_lex_state = 1},
  [310] = {.lex_state = 6},
  [311] = {.lex_state = 24},
  [312] = {.lex_state = 6},
  [313] = {.lex_state = 6},
  [314] = {.lex_state = 24},
  [315] = {.lex_state = 6},
  [316] = {.lex_state = 24},
  [317] = {.lex_state = 6},
  [318] = {.lex_state = 6},
  [319] = {.lex_state = 6},
  [320] = {.lex_state = 6},
  [321] = {.lex_state = 103, .external_lex_state = 1},
  [322] = {.lex_state = 6},
  [323] = {.lex_state = 6},
  [324] = {.lex_state = 24},
  [325] = {.lex_state = 6},
  [326] = {.lex_state = 6},
  [327] = {.lex_state = 6},
  [328] = {.lex_state = 6},
  [329] = {.lex_state = 6},
  [330] = {.lex_state = 24},
  [331] = {.lex_state = 6},
  [332] = {.lex_state = 103, .external_lex_state = 1},
  [333] = {.lex_state = 91},
  [334] = {.lex_state = 91},
  [335] = {.lex_state = 91},
  [336] = {.lex_state = 91},
  [337] = {.lex_state = 91},
  [338] = {.lex_state = 24},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 24},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 6},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 6},
  [345] = {.lex_state = 6},
  [346] = {.lex_state = 6},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 6},
  [349] = {.lex_state = 6},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 21},
  [352] = {.lex_state = 21},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 103},
  [360] = {.lex_state = 18},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 103},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 18},
  [366] = {.lex_state = 103},
  [367] = {.lex_state = 103},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 103},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 91},
  [372] = {.lex_state = 18},
  [373] = {.lex_state = 91},
  [374] = {.lex_state = 18},
  [375] = {.lex_state = 91},
  [376] = {.lex_state = 6},
  [377] = {.lex_state = 91},
  [378] = {.lex_state = 103},
  [379] = {.lex_state = 18},
  [380] = {.lex_state = 103},
  [381] = {.lex_state = 103},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 6},
  [386] = {.lex_state = 18},
  [387] = {.lex_state = 18},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 103},
  [391] = {.lex_state = 103},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 21},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 21},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 103},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 18},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 103},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 103},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 103},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 25},
  [422] = {.lex_state = 14},
  [423] = {.lex_state = 25},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 6},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 21},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 21},
  [431] = {.lex_state = 21},
  [432] = {.lex_state = 21},
  [433] = {.lex_state = 21},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 21},
  [439] = {.lex_state = 6},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 21},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 21},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 21},
  [448] = {.lex_state = 103},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 21},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 21},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 21},
  [455] = {.lex_state = 103},
  [456] = {.lex_state = 21},
  [457] = {.lex_state = 21},
  [458] = {.lex_state = 103},
  [459] = {.lex_state = 21},
  [460] = {.lex_state = 21},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 21},
  [464] = {.lex_state = 6},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 6},
  [468] = {.lex_state = 18},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 21},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 21},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 21},
  [479] = {.lex_state = 103},
  [480] = {.lex_state = 103},
  [481] = {.lex_state = 21},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 103},
};

enum {
  ts_external_token__descendant_operator = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__descendant_operator] = sym__descendant_operator,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__descendant_operator] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATimport] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_ATmedia] = ACTIONS(1),
    [anon_sym_ATcharset] = ACTIONS(1),
    [anon_sym_ATnamespace] = ACTIONS(1),
    [anon_sym_ATkeyframes] = ACTIONS(1),
    [aux_sym_keyframes_statement_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [sym_to] = ACTIONS(1),
    [anon_sym_ATsupports] = ACTIONS(1),
    [anon_sym_ATuse] = ACTIONS(1),
    [anon_sym_ATforward] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_ATmixin] = ACTIONS(1),
    [anon_sym_ATinclude] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_RPAREN2] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_ATextend] = ACTIONS(1),
    [anon_sym_ATif] = ACTIONS(1),
    [anon_sym_ATelse] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_ATeach] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_ATfor] = ACTIONS(1),
    [anon_sym_through] = ACTIONS(1),
    [anon_sym_ATwhile] = ACTIONS(1),
    [anon_sym_ATfunction] = ACTIONS(1),
    [anon_sym_ATreturn] = ACTIONS(1),
    [anon_sym_ATat_DASHroot] = ACTIONS(1),
    [anon_sym_ATerror] = ACTIONS(1),
    [anon_sym_ATwarn] = ACTIONS(1),
    [anon_sym_ATdebug] = ACTIONS(1),
    [sym_nesting_selector] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_important] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_selector] = ACTIONS(1),
    [aux_sym_color_value_token1] = ACTIONS(1),
    [sym_string_value] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [aux_sym_float_value_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [sym_at_keyword] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(461),
    [sym_statement] = STATE(13),
    [sym_import_statement] = STATE(43),
    [sym_media_statement] = STATE(43),
    [sym_charset_statement] = STATE(43),
    [sym_namespace_statement] = STATE(43),
    [sym_keyframes_statement] = STATE(43),
    [sym_supports_statement] = STATE(43),
    [sym_at_rule] = STATE(43),
    [sym_use_statement] = STATE(43),
    [sym_forward_statement] = STATE(43),
    [sym_css_mixin] = STATE(43),
    [sym_css_include] = STATE(43),
    [sym_placeholder] = STATE(43),
    [sym_if] = STATE(43),
    [sym_if_clause] = STATE(17),
    [sym_each_statement] = STATE(43),
    [sym_for_statement] = STATE(43),
    [sym_while_statement] = STATE(43),
    [sym_function_statement] = STATE(43),
    [sym_error_statement] = STATE(43),
    [sym_warn_statement] = STATE(43),
    [sym_debug_statement] = STATE(43),
    [sym_css_ruleset] = STATE(43),
    [sym_css_selector_list] = STATE(407),
    [sym__selector] = STATE(252),
    [sym_universal_selector] = STATE(252),
    [sym_class_selector] = STATE(252),
    [sym_pseudo_class_selector] = STATE(252),
    [sym_pseudo_element_selector] = STATE(252),
    [sym_id_selector] = STATE(252),
    [sym_attribute_selector] = STATE(252),
    [sym_child_selector] = STATE(252),
    [sym_descendant_selector] = STATE(252),
    [sym_sibling_selector] = STATE(252),
    [sym_adjacent_sibling_selector] = STATE(252),
    [sym_declaration] = STATE(43),
    [sym_declaration_pair] = STATE(465),
    [aux_sym_program_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_keyframes_statement_token1] = ACTIONS(17),
    [anon_sym_ATsupports] = ACTIONS(19),
    [anon_sym_ATuse] = ACTIONS(21),
    [anon_sym_ATforward] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_ATmixin] = ACTIONS(27),
    [anon_sym_ATinclude] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(31),
    [anon_sym_ATif] = ACTIONS(33),
    [anon_sym_ATeach] = ACTIONS(35),
    [anon_sym_ATfor] = ACTIONS(37),
    [anon_sym_ATwhile] = ACTIONS(39),
    [anon_sym_ATfunction] = ACTIONS(41),
    [anon_sym_ATerror] = ACTIONS(43),
    [anon_sym_ATwarn] = ACTIONS(45),
    [anon_sym_ATdebug] = ACTIONS(47),
    [sym_nesting_selector] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [sym_string_value] = ACTIONS(61),
    [sym_identifier] = ACTIONS(63),
    [sym_variable_identifier] = ACTIONS(65),
    [sym_at_keyword] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_import_statement] = STATE(65),
    [sym_media_statement] = STATE(65),
    [sym_charset_statement] = STATE(65),
    [sym_namespace_statement] = STATE(65),
    [sym_keyframes_statement] = STATE(65),
    [sym_supports_statement] = STATE(65),
    [sym_at_rule] = STATE(65),
    [sym_css_mixin] = STATE(65),
    [sym_css_include] = STATE(65),
    [sym_extend_statement] = STATE(65),
    [sym_if] = STATE(65),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(65),
    [sym_for_statement] = STATE(65),
    [sym_while_statement] = STATE(65),
    [sym_function_statement] = STATE(65),
    [sym_return_statement] = STATE(65),
    [sym_at_root_statement] = STATE(65),
    [sym_error_statement] = STATE(65),
    [sym_warn_statement] = STATE(65),
    [sym_debug_statement] = STATE(65),
    [sym_css_ruleset] = STATE(65),
    [sym_css_selector_list] = STATE(409),
    [sym_block_item] = STATE(11),
    [sym__selector] = STATE(252),
    [sym_universal_selector] = STATE(252),
    [sym_class_selector] = STATE(252),
    [sym_pseudo_class_selector] = STATE(252),
    [sym_pseudo_element_selector] = STATE(252),
    [sym_id_selector] = STATE(252),
    [sym_attribute_selector] = STATE(252),
    [sym_child_selector] = STATE(252),
    [sym_descendant_selector] = STATE(252),
    [sym_sibling_selector] = STATE(252),
    [sym_adjacent_sibling_selector] = STATE(252),
    [sym_declaration] = STATE(65),
    [sym_declaration_pair] = STATE(424),
    [sym_last_declaration] = STATE(435),
    [aux_sym_enclosed_body_repeat1] = STATE(11),
    [anon_sym_ATimport] = ACTIONS(69),
    [anon_sym_ATmedia] = ACTIONS(71),
    [anon_sym_ATcharset] = ACTIONS(73),
    [anon_sym_ATnamespace] = ACTIONS(75),
    [anon_sym_ATkeyframes] = ACTIONS(77),
    [aux_sym_keyframes_statement_token1] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_ATsupports] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_ATmixin] = ACTIONS(85),
    [anon_sym_ATinclude] = ACTIONS(87),
    [anon_sym_ATextend] = ACTIONS(89),
    [anon_sym_ATif] = ACTIONS(91),
    [anon_sym_ATeach] = ACTIONS(93),
    [anon_sym_ATfor] = ACTIONS(95),
    [anon_sym_ATwhile] = ACTIONS(97),
    [anon_sym_ATfunction] = ACTIONS(99),
    [anon_sym_ATreturn] = ACTIONS(101),
    [anon_sym_ATat_DASHroot] = ACTIONS(103),
    [anon_sym_ATerror] = ACTIONS(105),
    [anon_sym_ATwarn] = ACTIONS(107),
    [anon_sym_ATdebug] = ACTIONS(109),
    [sym_nesting_selector] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [sym_string_value] = ACTIONS(61),
    [sym_identifier] = ACTIONS(63),
    [sym_variable_identifier] = ACTIONS(65),
    [sym_at_keyword] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_import_statement] = STATE(65),
    [sym_media_statement] = STATE(65),
    [sym_charset_statement] = STATE(65),
    [sym_namespace_statement] = STATE(65),
    [sym_keyframes_statement] = STATE(65),
    [sym_supports_statement] = STATE(65),
    [sym_at_rule] = STATE(65),
    [sym_css_mixin] = STATE(65),
    [sym_css_include] = STATE(65),
    [sym_extend_statement] = STATE(65),
    [sym_if] = STATE(65),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(65),
    [sym_for_statement] = STATE(65),
    [sym_while_statement] = STATE(65),
    [sym_function_statement] = STATE(65),
    [sym_return_statement] = STATE(65),
    [sym_at_root_statement] = STATE(65),
    [sym_error_statement] = STATE(65),
    [sym_warn_statement] = STATE(65),
    [sym_debug_statement] = STATE(65),
    [sym_css_ruleset] = STATE(65),
    [sym_css_selector_list] = STATE(409),
    [sym_block_item] = STATE(12),
    [sym__selector] = STATE(252),
    [sym_universal_selector] = STATE(252),
    [sym_class_selector] = STATE(252),
    [sym_pseudo_class_selector] = STATE(252),
    [sym_pseudo_element_selector] = STATE(252),
    [sym_id_selector] = STATE(252),
    [sym_attribute_selector] = STATE(252),
    [sym_child_selector] = STATE(252),
    [sym_descendant_selector] = STATE(252),
    [sym_sibling_selector] = STATE(252),
    [sym_adjacent_sibling_selector] = STATE(252),
    [sym_declaration] = STATE(65),
    [sym_declaration_pair] = STATE(424),
    [sym_last_declaration] = STATE(451),
    [aux_sym_enclosed_body_repeat1] = STATE(12),
    [anon_sym_ATimport] = ACTIONS(69),
    [anon_sym_ATmedia] = ACTIONS(71),
    [anon_sym_ATcharset] = ACTIONS(73),
    [anon_sym_ATnamespace] = ACTIONS(75),
    [anon_sym_ATkeyframes] = ACTIONS(77),
    [aux_sym_keyframes_statement_token1] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_ATsupports] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_ATmixin] = ACTIONS(85),
    [anon_sym_ATinclude] = ACTIONS(87),
    [anon_sym_ATextend] = ACTIONS(89),
    [anon_sym_ATif] = ACTIONS(91),
    [anon_sym_ATeach] = ACTIONS(93),
    [anon_sym_ATfor] = ACTIONS(95),
    [anon_sym_ATwhile] = ACTIONS(97),
    [anon_sym_ATfunction] = ACTIONS(99),
    [anon_sym_ATreturn] = ACTIONS(101),
    [anon_sym_ATat_DASHroot] = ACTIONS(103),
    [anon_sym_ATerror] = ACTIONS(105),
    [anon_sym_ATwarn] = ACTIONS(107),
    [anon_sym_ATdebug] = ACTIONS(109),
    [sym_nesting_selector] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [sym_string_value] = ACTIONS(61),
    [sym_identifier] = ACTIONS(63),
    [sym_variable_identifier] = ACTIONS(65),
    [sym_at_keyword] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_import_statement] = STATE(65),
    [sym_media_statement] = STATE(65),
    [sym_charset_statement] = STATE(65),
    [sym_namespace_statement] = STATE(65),
    [sym_keyframes_statement] = STATE(65),
    [sym_supports_statement] = STATE(65),
    [sym_at_rule] = STATE(65),
    [sym_css_mixin] = STATE(65),
    [sym_css_include] = STATE(65),
    [sym_extend_statement] = STATE(65),
    [sym_if] = STATE(65),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(65),
    [sym_for_statement] = STATE(65),
    [sym_while_statement] = STATE(65),
    [sym_function_statement] = STATE(65),
    [sym_return_statement] = STATE(65),
    [sym_at_root_statement] = STATE(65),
    [sym_error_statement] = STATE(65),
    [sym_warn_statement] = STATE(65),
    [sym_debug_statement] = STATE(65),
    [sym_css_ruleset] = STATE(65),
    [sym_css_selector_list] = STATE(409),
    [sym_block_item] = STATE(3),
    [sym__selector] = STATE(252),
    [sym_universal_selector] = STATE(252),
    [sym_class_selector] = STATE(252),
    [sym_pseudo_class_selector] = STATE(252),
    [sym_pseudo_element_selector] = STATE(252),
    [sym_id_selector] = STATE(252),
    [sym_attribute_selector] = STATE(252),
    [sym_child_selector] = STATE(252),
    [sym_descendant_selector] = STATE(252),
    [sym_sibling_selector] = STATE(252),
    [sym_adjacent_sibling_selector] = STATE(252),
    [sym_declaration] = STATE(65),
    [sym_declaration_pair] = STATE(424),
    [sym_last_declaration] = STATE(449),
    [aux_sym_enclosed_body_repeat1] = STATE(3),
    [anon_sym_ATimport] = ACTIONS(69),
    [anon_sym_ATmedia] = ACTIONS(71),
    [anon_sym_ATcharset] = ACTIONS(73),
    [anon_sym_ATnamespace] = ACTIONS(75),
    [anon_sym_ATkeyframes] = ACTIONS(77),
    [aux_sym_keyframes_statement_token1] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_ATsupports] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_ATmixin] = ACTIONS(85),
    [anon_sym_ATinclude] = ACTIONS(87),
    [anon_sym_ATextend] = ACTIONS(89),
    [anon_sym_ATif] = ACTIONS(91),
    [anon_sym_ATeach] = ACTIONS(93),
    [anon_sym_ATfor] = ACTIONS(95),
    [anon_sym_ATwhile] = ACTIONS(97),
    [anon_sym_ATfunction] = ACTIONS(99),
    [anon_sym_ATreturn] = ACTIONS(101),
    [anon_sym_ATat_DASHroot] = ACTIONS(103),
    [anon_sym_ATerror] = ACTIONS(105),
    [anon_sym_ATwarn] = ACTIONS(107),
    [anon_sym_ATdebug] = ACTIONS(109),
    [sym_nesting_selector] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [sym_string_value] = ACTIONS(61),
    [sym_identifier] = ACTIONS(63),
    [sym_variable_identifier] = ACTIONS(65),
    [sym_at_keyword] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_import_statement] = STATE(65),
    [sym_media_statement] = STATE(65),
    [sym_charset_statement] = STATE(65),
    [sym_namespace_statement] = STATE(65),
    [sym_keyframes_statement] = STATE(65),
    [sym_supports_statement] = STATE(65),
    [sym_at_rule] = STATE(65),
    [sym_css_mixin] = STATE(65),
    [sym_css_include] = STATE(65),
    [sym_extend_statement] = STATE(65),
    [sym_if] = STATE(65),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(65),
    [sym_for_statement] = STATE(65),
    [sym_while_statement] = STATE(65),
    [sym_function_statement] = STATE(65),
    [sym_return_statement] = STATE(65),
    [sym_at_root_statement] = STATE(65),
    [sym_error_statement] = STATE(65),
    [sym_warn_statement] = STATE(65),
    [sym_debug_statement] = STATE(65),
    [sym_css_ruleset] = STATE(65),
    [sym_css_selector_list] = STATE(409),
    [sym_block_item] = STATE(12),
    [sym__selector] = STATE(252),
    [sym_universal_selector] = STATE(252),
    [sym_class_selector] = STATE(252),
    [sym_pseudo_class_selector] = STATE(252),
    [sym_pseudo_element_selector] = STATE(252),
    [sym_id_selector] = STATE(252),
    [sym_attribute_selector] = STATE(252),
    [sym_child_selector] = STATE(252),
    [sym_descendant_selector] = STATE(252),
    [sym_sibling_selector] = STATE(252),
    [sym_adjacent_sibling_selector] = STATE(252),
    [sym_declaration] = STATE(65),
    [sym_declaration_pair] = STATE(424),
    [sym_last_declaration] = STATE(446),
    [aux_sym_enclosed_body_repeat1] = STATE(12),
    [anon_sym_ATimport] = ACTIONS(69),
    [anon_sym_ATmedia] = ACTIONS(71),
    [anon_sym_ATcharset] = ACTIONS(73),
    [anon_sym_ATnamespace] = ACTIONS(75),
    [anon_sym_ATkeyframes] = ACTIONS(77),
    [aux_sym_keyframes_statement_token1] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_ATsupports] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_ATmixin] = ACTIONS(85),
    [anon_sym_ATinclude] = ACTIONS(87),
    [anon_sym_ATextend] = ACTIONS(89),
    [anon_sym_ATif] = ACTIONS(91),
    [anon_sym_ATeach] = ACTIONS(93),
    [anon_sym_ATfor] = ACTIONS(95),
    [anon_sym_ATwhile] = ACTIONS(97),
    [anon_sym_ATfunction] = ACTIONS(99),
    [anon_sym_ATreturn] = ACTIONS(101),
    [anon_sym_ATat_DASHroot] = ACTIONS(103),
    [anon_sym_ATerror] = ACTIONS(105),
    [anon_sym_ATwarn] = ACTIONS(107),
    [anon_sym_ATdebug] = ACTIONS(109),
    [sym_nesting_selector] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [sym_string_value] = ACTIONS(61),
    [sym_identifier] = ACTIONS(63),
    [sym_variable_identifier] = ACTIONS(65),
    [sym_at_keyword] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_import_statement] = STATE(65),
    [sym_media_statement] = STATE(65),
    [sym_charset_statement] = STATE(65),
    [sym_namespace_statement] = STATE(65),
    [sym_keyframes_statement] = STATE(65),
    [sym_supports_statement] = STATE(65),
    [sym_at_rule] = STATE(65),
    [sym_css_mixin] = STATE(65),
    [sym_css_include] = STATE(65),
    [sym_extend_statement] = STATE(65),
    [sym_if] = STATE(65),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(65),
    [sym_for_statement] = STATE(65),
    [sym_while_statement] = STATE(65),
    [sym_function_statement] = STATE(65),
    [sym_return_statement] = STATE(65),
    [sym_at_root_statement] = STATE(65),
    [sym_error_statement] = STATE(65),
    [sym_warn_statement] = STATE(65),
    [sym_debug_statement] = STATE(65),
    [sym_css_ruleset] = STATE(65),
    [sym_css_selector_list] = STATE(409),
    [sym_block_item] = STATE(10),
    [sym__selector] = STATE(252),
    [sym_universal_selector] = STATE(252),
    [sym_class_selector] = STATE(252),
    [sym_pseudo_class_selector] = STATE(252),
    [sym_pseudo_element_selector] = STATE(252),
    [sym_id_selector] = STATE(252),
    [sym_attribute_selector] = STATE(252),
    [sym_child_selector] = STATE(252),
    [sym_descendant_selector] = STATE(252),
    [sym_sibling_selector] = STATE(252),
    [sym_adjacent_sibling_selector] = STATE(252),
    [sym_declaration] = STATE(65),
    [sym_declaration_pair] = STATE(424),
    [sym_last_declaration] = STATE(429),
    [aux_sym_enclosed_body_repeat1] = STATE(10),
    [anon_sym_ATimport] = ACTIONS(69),
    [anon_sym_ATmedia] = ACTIONS(71),
    [anon_sym_ATcharset] = ACTIONS(73),
    [anon_sym_ATnamespace] = ACTIONS(75),
    [anon_sym_ATkeyframes] = ACTIONS(77),
    [aux_sym_keyframes_statement_token1] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_ATsupports] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_ATmixin] = ACTIONS(85),
    [anon_sym_ATinclude] = ACTIONS(87),
    [anon_sym_ATextend] = ACTIONS(89),
    [anon_sym_ATif] = ACTIONS(91),
    [anon_sym_ATeach] = ACTIONS(93),
    [anon_sym_ATfor] = ACTIONS(95),
    [anon_sym_ATwhile] = ACTIONS(97),
    [anon_sym_ATfunction] = ACTIONS(99),
    [anon_sym_ATreturn] = ACTIONS(101),
    [anon_sym_ATat_DASHroot] = ACTIONS(103),
    [anon_sym_ATerror] = ACTIONS(105),
    [anon_sym_ATwarn] = ACTIONS(107),
    [anon_sym_ATdebug] = ACTIONS(109),
    [sym_nesting_selector] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [sym_string_value] = ACTIONS(61),
    [sym_identifier] = ACTIONS(63),
    [sym_variable_identifier] = ACTIONS(65),
    [sym_at_keyword] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_import_statement] = STATE(65),
    [sym_media_statement] = STATE(65),
    [sym_charset_statement] = STATE(65),
    [sym_namespace_statement] = STATE(65),
    [sym_keyframes_statement] = STATE(65),
    [sym_supports_statement] = STATE(65),
    [sym_at_rule] = STATE(65),
    [sym_css_mixin] = STATE(65),
    [sym_css_include] = STATE(65),
    [sym_extend_statement] = STATE(65),
    [sym_if] = STATE(65),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(65),
    [sym_for_statement] = STATE(65),
    [sym_while_statement] = STATE(65),
    [sym_function_statement] = STATE(65),
    [sym_return_statement] = STATE(65),
    [sym_at_root_statement] = STATE(65),
    [sym_error_statement] = STATE(65),
    [sym_warn_statement] = STATE(65),
    [sym_debug_statement] = STATE(65),
    [sym_css_ruleset] = STATE(65),
    [sym_css_selector_list] = STATE(409),
    [sym_block_item] = STATE(5),
    [sym__selector] = STATE(252),
    [sym_universal_selector] = STATE(252),
    [sym_class_selector] = STATE(252),
    [sym_pseudo_class_selector] = STATE(252),
    [sym_pseudo_element_selector] = STATE(252),
    [sym_id_selector] = STATE(252),
    [sym_attribute_selector] = STATE(252),
    [sym_child_selector] = STATE(252),
    [sym_descendant_selector] = STATE(252),
    [sym_sibling_selector] = STATE(252),
    [sym_adjacent_sibling_selector] = STATE(252),
    [sym_declaration] = STATE(65),
    [sym_declaration_pair] = STATE(424),
    [sym_last_declaration] = STATE(443),
    [aux_sym_enclosed_body_repeat1] = STATE(5),
    [anon_sym_ATimport] = ACTIONS(69),
    [anon_sym_ATmedia] = ACTIONS(71),
    [anon_sym_ATcharset] = ACTIONS(73),
    [anon_sym_ATnamespace] = ACTIONS(75),
    [anon_sym_ATkeyframes] = ACTIONS(77),
    [aux_sym_keyframes_statement_token1] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_ATsupports] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_ATmixin] = ACTIONS(85),
    [anon_sym_ATinclude] = ACTIONS(87),
    [anon_sym_ATextend] = ACTIONS(89),
    [anon_sym_ATif] = ACTIONS(91),
    [anon_sym_ATeach] = ACTIONS(93),
    [anon_sym_ATfor] = ACTIONS(95),
    [anon_sym_ATwhile] = ACTIONS(97),
    [anon_sym_ATfunction] = ACTIONS(99),
    [anon_sym_ATreturn] = ACTIONS(101),
    [anon_sym_ATat_DASHroot] = ACTIONS(103),
    [anon_sym_ATerror] = ACTIONS(105),
    [anon_sym_ATwarn] = ACTIONS(107),
    [anon_sym_ATdebug] = ACTIONS(109),
    [sym_nesting_selector] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [sym_string_value] = ACTIONS(61),
    [sym_identifier] = ACTIONS(63),
    [sym_variable_identifier] = ACTIONS(65),
    [sym_at_keyword] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_import_statement] = STATE(65),
    [sym_media_statement] = STATE(65),
    [sym_charset_statement] = STATE(65),
    [sym_namespace_statement] = STATE(65),
    [sym_keyframes_statement] = STATE(65),
    [sym_supports_statement] = STATE(65),
    [sym_at_rule] = STATE(65),
    [sym_css_mixin] = STATE(65),
    [sym_css_include] = STATE(65),
    [sym_extend_statement] = STATE(65),
    [sym_if] = STATE(65),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(65),
    [sym_for_statement] = STATE(65),
    [sym_while_statement] = STATE(65),
    [sym_function_statement] = STATE(65),
    [sym_return_statement] = STATE(65),
    [sym_at_root_statement] = STATE(65),
    [sym_error_statement] = STATE(65),
    [sym_warn_statement] = STATE(65),
    [sym_debug_statement] = STATE(65),
    [sym_css_ruleset] = STATE(65),
    [sym_css_selector_list] = STATE(409),
    [sym_block_item] = STATE(12),
    [sym__selector] = STATE(252),
    [sym_universal_selector] = STATE(252),
    [sym_class_selector] = STATE(252),
    [sym_pseudo_class_selector] = STATE(252),
    [sym_pseudo_element_selector] = STATE(252),
    [sym_id_selector] = STATE(252),
    [sym_attribute_selector] = STATE(252),
    [sym_child_selector] = STATE(252),
    [sym_descendant_selector] = STATE(252),
    [sym_sibling_selector] = STATE(252),
    [sym_adjacent_sibling_selector] = STATE(252),
    [sym_declaration] = STATE(65),
    [sym_declaration_pair] = STATE(424),
    [sym_last_declaration] = STATE(437),
    [aux_sym_enclosed_body_repeat1] = STATE(12),
    [anon_sym_ATimport] = ACTIONS(69),
    [anon_sym_ATmedia] = ACTIONS(71),
    [anon_sym_ATcharset] = ACTIONS(73),
    [anon_sym_ATnamespace] = ACTIONS(75),
    [anon_sym_ATkeyframes] = ACTIONS(77),
    [aux_sym_keyframes_statement_token1] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_ATsupports] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_ATmixin] = ACTIONS(85),
    [anon_sym_ATinclude] = ACTIONS(87),
    [anon_sym_ATextend] = ACTIONS(89),
    [anon_sym_ATif] = ACTIONS(91),
    [anon_sym_ATeach] = ACTIONS(93),
    [anon_sym_ATfor] = ACTIONS(95),
    [anon_sym_ATwhile] = ACTIONS(97),
    [anon_sym_ATfunction] = ACTIONS(99),
    [anon_sym_ATreturn] = ACTIONS(101),
    [anon_sym_ATat_DASHroot] = ACTIONS(103),
    [anon_sym_ATerror] = ACTIONS(105),
    [anon_sym_ATwarn] = ACTIONS(107),
    [anon_sym_ATdebug] = ACTIONS(109),
    [sym_nesting_selector] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [sym_string_value] = ACTIONS(61),
    [sym_identifier] = ACTIONS(63),
    [sym_variable_identifier] = ACTIONS(65),
    [sym_at_keyword] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_import_statement] = STATE(65),
    [sym_media_statement] = STATE(65),
    [sym_charset_statement] = STATE(65),
    [sym_namespace_statement] = STATE(65),
    [sym_keyframes_statement] = STATE(65),
    [sym_supports_statement] = STATE(65),
    [sym_at_rule] = STATE(65),
    [sym_css_mixin] = STATE(65),
    [sym_css_include] = STATE(65),
    [sym_extend_statement] = STATE(65),
    [sym_if] = STATE(65),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(65),
    [sym_for_statement] = STATE(65),
    [sym_while_statement] = STATE(65),
    [sym_function_statement] = STATE(65),
    [sym_return_statement] = STATE(65),
    [sym_at_root_statement] = STATE(65),
    [sym_error_statement] = STATE(65),
    [sym_warn_statement] = STATE(65),
    [sym_debug_statement] = STATE(65),
    [sym_css_ruleset] = STATE(65),
    [sym_css_selector_list] = STATE(409),
    [sym_block_item] = STATE(8),
    [sym__selector] = STATE(252),
    [sym_universal_selector] = STATE(252),
    [sym_class_selector] = STATE(252),
    [sym_pseudo_class_selector] = STATE(252),
    [sym_pseudo_element_selector] = STATE(252),
    [sym_id_selector] = STATE(252),
    [sym_attribute_selector] = STATE(252),
    [sym_child_selector] = STATE(252),
    [sym_descendant_selector] = STATE(252),
    [sym_sibling_selector] = STATE(252),
    [sym_adjacent_sibling_selector] = STATE(252),
    [sym_declaration] = STATE(65),
    [sym_declaration_pair] = STATE(424),
    [sym_last_declaration] = STATE(434),
    [aux_sym_enclosed_body_repeat1] = STATE(8),
    [anon_sym_ATimport] = ACTIONS(69),
    [anon_sym_ATmedia] = ACTIONS(71),
    [anon_sym_ATcharset] = ACTIONS(73),
    [anon_sym_ATnamespace] = ACTIONS(75),
    [anon_sym_ATkeyframes] = ACTIONS(77),
    [aux_sym_keyframes_statement_token1] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_ATsupports] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_ATmixin] = ACTIONS(85),
    [anon_sym_ATinclude] = ACTIONS(87),
    [anon_sym_ATextend] = ACTIONS(89),
    [anon_sym_ATif] = ACTIONS(91),
    [anon_sym_ATeach] = ACTIONS(93),
    [anon_sym_ATfor] = ACTIONS(95),
    [anon_sym_ATwhile] = ACTIONS(97),
    [anon_sym_ATfunction] = ACTIONS(99),
    [anon_sym_ATreturn] = ACTIONS(101),
    [anon_sym_ATat_DASHroot] = ACTIONS(103),
    [anon_sym_ATerror] = ACTIONS(105),
    [anon_sym_ATwarn] = ACTIONS(107),
    [anon_sym_ATdebug] = ACTIONS(109),
    [sym_nesting_selector] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [sym_string_value] = ACTIONS(61),
    [sym_identifier] = ACTIONS(63),
    [sym_variable_identifier] = ACTIONS(65),
    [sym_at_keyword] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_import_statement] = STATE(65),
    [sym_media_statement] = STATE(65),
    [sym_charset_statement] = STATE(65),
    [sym_namespace_statement] = STATE(65),
    [sym_keyframes_statement] = STATE(65),
    [sym_supports_statement] = STATE(65),
    [sym_at_rule] = STATE(65),
    [sym_css_mixin] = STATE(65),
    [sym_css_include] = STATE(65),
    [sym_extend_statement] = STATE(65),
    [sym_if] = STATE(65),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(65),
    [sym_for_statement] = STATE(65),
    [sym_while_statement] = STATE(65),
    [sym_function_statement] = STATE(65),
    [sym_return_statement] = STATE(65),
    [sym_at_root_statement] = STATE(65),
    [sym_error_statement] = STATE(65),
    [sym_warn_statement] = STATE(65),
    [sym_debug_statement] = STATE(65),
    [sym_css_ruleset] = STATE(65),
    [sym_css_selector_list] = STATE(409),
    [sym_block_item] = STATE(12),
    [sym__selector] = STATE(252),
    [sym_universal_selector] = STATE(252),
    [sym_class_selector] = STATE(252),
    [sym_pseudo_class_selector] = STATE(252),
    [sym_pseudo_element_selector] = STATE(252),
    [sym_id_selector] = STATE(252),
    [sym_attribute_selector] = STATE(252),
    [sym_child_selector] = STATE(252),
    [sym_descendant_selector] = STATE(252),
    [sym_sibling_selector] = STATE(252),
    [sym_adjacent_sibling_selector] = STATE(252),
    [sym_declaration] = STATE(65),
    [sym_declaration_pair] = STATE(424),
    [sym_last_declaration] = STATE(466),
    [aux_sym_enclosed_body_repeat1] = STATE(12),
    [anon_sym_ATimport] = ACTIONS(69),
    [anon_sym_ATmedia] = ACTIONS(71),
    [anon_sym_ATcharset] = ACTIONS(73),
    [anon_sym_ATnamespace] = ACTIONS(75),
    [anon_sym_ATkeyframes] = ACTIONS(77),
    [aux_sym_keyframes_statement_token1] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_ATsupports] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_ATmixin] = ACTIONS(85),
    [anon_sym_ATinclude] = ACTIONS(87),
    [anon_sym_ATextend] = ACTIONS(89),
    [anon_sym_ATif] = ACTIONS(91),
    [anon_sym_ATeach] = ACTIONS(93),
    [anon_sym_ATfor] = ACTIONS(95),
    [anon_sym_ATwhile] = ACTIONS(97),
    [anon_sym_ATfunction] = ACTIONS(99),
    [anon_sym_ATreturn] = ACTIONS(101),
    [anon_sym_ATat_DASHroot] = ACTIONS(103),
    [anon_sym_ATerror] = ACTIONS(105),
    [anon_sym_ATwarn] = ACTIONS(107),
    [anon_sym_ATdebug] = ACTIONS(109),
    [sym_nesting_selector] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [sym_string_value] = ACTIONS(61),
    [sym_identifier] = ACTIONS(63),
    [sym_variable_identifier] = ACTIONS(65),
    [sym_at_keyword] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_import_statement] = STATE(65),
    [sym_media_statement] = STATE(65),
    [sym_charset_statement] = STATE(65),
    [sym_namespace_statement] = STATE(65),
    [sym_keyframes_statement] = STATE(65),
    [sym_supports_statement] = STATE(65),
    [sym_at_rule] = STATE(65),
    [sym_css_mixin] = STATE(65),
    [sym_css_include] = STATE(65),
    [sym_extend_statement] = STATE(65),
    [sym_if] = STATE(65),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(65),
    [sym_for_statement] = STATE(65),
    [sym_while_statement] = STATE(65),
    [sym_function_statement] = STATE(65),
    [sym_return_statement] = STATE(65),
    [sym_at_root_statement] = STATE(65),
    [sym_error_statement] = STATE(65),
    [sym_warn_statement] = STATE(65),
    [sym_debug_statement] = STATE(65),
    [sym_css_ruleset] = STATE(65),
    [sym_css_selector_list] = STATE(409),
    [sym_block_item] = STATE(12),
    [sym__selector] = STATE(252),
    [sym_universal_selector] = STATE(252),
    [sym_class_selector] = STATE(252),
    [sym_pseudo_class_selector] = STATE(252),
    [sym_pseudo_element_selector] = STATE(252),
    [sym_id_selector] = STATE(252),
    [sym_attribute_selector] = STATE(252),
    [sym_child_selector] = STATE(252),
    [sym_descendant_selector] = STATE(252),
    [sym_sibling_selector] = STATE(252),
    [sym_adjacent_sibling_selector] = STATE(252),
    [sym_declaration] = STATE(65),
    [sym_declaration_pair] = STATE(424),
    [sym_last_declaration] = STATE(428),
    [aux_sym_enclosed_body_repeat1] = STATE(12),
    [anon_sym_ATimport] = ACTIONS(69),
    [anon_sym_ATmedia] = ACTIONS(71),
    [anon_sym_ATcharset] = ACTIONS(73),
    [anon_sym_ATnamespace] = ACTIONS(75),
    [anon_sym_ATkeyframes] = ACTIONS(77),
    [aux_sym_keyframes_statement_token1] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_ATsupports] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_ATmixin] = ACTIONS(85),
    [anon_sym_ATinclude] = ACTIONS(87),
    [anon_sym_ATextend] = ACTIONS(89),
    [anon_sym_ATif] = ACTIONS(91),
    [anon_sym_ATeach] = ACTIONS(93),
    [anon_sym_ATfor] = ACTIONS(95),
    [anon_sym_ATwhile] = ACTIONS(97),
    [anon_sym_ATfunction] = ACTIONS(99),
    [anon_sym_ATreturn] = ACTIONS(101),
    [anon_sym_ATat_DASHroot] = ACTIONS(103),
    [anon_sym_ATerror] = ACTIONS(105),
    [anon_sym_ATwarn] = ACTIONS(107),
    [anon_sym_ATdebug] = ACTIONS(109),
    [sym_nesting_selector] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [sym_string_value] = ACTIONS(61),
    [sym_identifier] = ACTIONS(63),
    [sym_variable_identifier] = ACTIONS(65),
    [sym_at_keyword] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_import_statement] = STATE(65),
    [sym_media_statement] = STATE(65),
    [sym_charset_statement] = STATE(65),
    [sym_namespace_statement] = STATE(65),
    [sym_keyframes_statement] = STATE(65),
    [sym_supports_statement] = STATE(65),
    [sym_at_rule] = STATE(65),
    [sym_css_mixin] = STATE(65),
    [sym_css_include] = STATE(65),
    [sym_extend_statement] = STATE(65),
    [sym_if] = STATE(65),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(65),
    [sym_for_statement] = STATE(65),
    [sym_while_statement] = STATE(65),
    [sym_function_statement] = STATE(65),
    [sym_return_statement] = STATE(65),
    [sym_at_root_statement] = STATE(65),
    [sym_error_statement] = STATE(65),
    [sym_warn_statement] = STATE(65),
    [sym_debug_statement] = STATE(65),
    [sym_css_ruleset] = STATE(65),
    [sym_css_selector_list] = STATE(409),
    [sym_block_item] = STATE(12),
    [sym__selector] = STATE(252),
    [sym_universal_selector] = STATE(252),
    [sym_class_selector] = STATE(252),
    [sym_pseudo_class_selector] = STATE(252),
    [sym_pseudo_element_selector] = STATE(252),
    [sym_id_selector] = STATE(252),
    [sym_attribute_selector] = STATE(252),
    [sym_child_selector] = STATE(252),
    [sym_descendant_selector] = STATE(252),
    [sym_sibling_selector] = STATE(252),
    [sym_adjacent_sibling_selector] = STATE(252),
    [sym_declaration] = STATE(65),
    [sym_declaration_pair] = STATE(470),
    [aux_sym_enclosed_body_repeat1] = STATE(12),
    [anon_sym_ATimport] = ACTIONS(131),
    [anon_sym_ATmedia] = ACTIONS(134),
    [anon_sym_ATcharset] = ACTIONS(137),
    [anon_sym_ATnamespace] = ACTIONS(140),
    [anon_sym_ATkeyframes] = ACTIONS(143),
    [aux_sym_keyframes_statement_token1] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_ATsupports] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(154),
    [anon_sym_ATmixin] = ACTIONS(157),
    [anon_sym_ATinclude] = ACTIONS(160),
    [anon_sym_ATextend] = ACTIONS(163),
    [anon_sym_ATif] = ACTIONS(166),
    [anon_sym_ATeach] = ACTIONS(169),
    [anon_sym_ATfor] = ACTIONS(172),
    [anon_sym_ATwhile] = ACTIONS(175),
    [anon_sym_ATfunction] = ACTIONS(178),
    [anon_sym_ATreturn] = ACTIONS(181),
    [anon_sym_ATat_DASHroot] = ACTIONS(184),
    [anon_sym_ATerror] = ACTIONS(187),
    [anon_sym_ATwarn] = ACTIONS(190),
    [anon_sym_ATdebug] = ACTIONS(193),
    [sym_nesting_selector] = ACTIONS(196),
    [anon_sym_STAR] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(202),
    [anon_sym_COLON_COLON] = ACTIONS(205),
    [anon_sym_POUND] = ACTIONS(208),
    [anon_sym_LBRACK] = ACTIONS(211),
    [sym_string_value] = ACTIONS(214),
    [sym_identifier] = ACTIONS(217),
    [sym_variable_identifier] = ACTIONS(220),
    [sym_at_keyword] = ACTIONS(223),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_statement] = STATE(14),
    [sym_import_statement] = STATE(43),
    [sym_media_statement] = STATE(43),
    [sym_charset_statement] = STATE(43),
    [sym_namespace_statement] = STATE(43),
    [sym_keyframes_statement] = STATE(43),
    [sym_supports_statement] = STATE(43),
    [sym_at_rule] = STATE(43),
    [sym_use_statement] = STATE(43),
    [sym_forward_statement] = STATE(43),
    [sym_css_mixin] = STATE(43),
    [sym_css_include] = STATE(43),
    [sym_placeholder] = STATE(43),
    [sym_if] = STATE(43),
    [sym_if_clause] = STATE(17),
    [sym_each_statement] = STATE(43),
    [sym_for_statement] = STATE(43),
    [sym_while_statement] = STATE(43),
    [sym_function_statement] = STATE(43),
    [sym_error_statement] = STATE(43),
    [sym_warn_statement] = STATE(43),
    [sym_debug_statement] = STATE(43),
    [sym_css_ruleset] = STATE(43),
    [sym_css_selector_list] = STATE(407),
    [sym__selector] = STATE(252),
    [sym_universal_selector] = STATE(252),
    [sym_class_selector] = STATE(252),
    [sym_pseudo_class_selector] = STATE(252),
    [sym_pseudo_element_selector] = STATE(252),
    [sym_id_selector] = STATE(252),
    [sym_attribute_selector] = STATE(252),
    [sym_child_selector] = STATE(252),
    [sym_descendant_selector] = STATE(252),
    [sym_sibling_selector] = STATE(252),
    [sym_adjacent_sibling_selector] = STATE(252),
    [sym_declaration] = STATE(43),
    [sym_declaration_pair] = STATE(465),
    [aux_sym_program_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(226),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_keyframes_statement_token1] = ACTIONS(17),
    [anon_sym_ATsupports] = ACTIONS(19),
    [anon_sym_ATuse] = ACTIONS(21),
    [anon_sym_ATforward] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_ATmixin] = ACTIONS(27),
    [anon_sym_ATinclude] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(31),
    [anon_sym_ATif] = ACTIONS(33),
    [anon_sym_ATeach] = ACTIONS(35),
    [anon_sym_ATfor] = ACTIONS(37),
    [anon_sym_ATwhile] = ACTIONS(39),
    [anon_sym_ATfunction] = ACTIONS(41),
    [anon_sym_ATerror] = ACTIONS(43),
    [anon_sym_ATwarn] = ACTIONS(45),
    [anon_sym_ATdebug] = ACTIONS(47),
    [sym_nesting_selector] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [sym_string_value] = ACTIONS(61),
    [sym_identifier] = ACTIONS(63),
    [sym_variable_identifier] = ACTIONS(65),
    [sym_at_keyword] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_statement] = STATE(14),
    [sym_import_statement] = STATE(43),
    [sym_media_statement] = STATE(43),
    [sym_charset_statement] = STATE(43),
    [sym_namespace_statement] = STATE(43),
    [sym_keyframes_statement] = STATE(43),
    [sym_supports_statement] = STATE(43),
    [sym_at_rule] = STATE(43),
    [sym_use_statement] = STATE(43),
    [sym_forward_statement] = STATE(43),
    [sym_css_mixin] = STATE(43),
    [sym_css_include] = STATE(43),
    [sym_placeholder] = STATE(43),
    [sym_if] = STATE(43),
    [sym_if_clause] = STATE(17),
    [sym_each_statement] = STATE(43),
    [sym_for_statement] = STATE(43),
    [sym_while_statement] = STATE(43),
    [sym_function_statement] = STATE(43),
    [sym_error_statement] = STATE(43),
    [sym_warn_statement] = STATE(43),
    [sym_debug_statement] = STATE(43),
    [sym_css_ruleset] = STATE(43),
    [sym_css_selector_list] = STATE(407),
    [sym__selector] = STATE(252),
    [sym_universal_selector] = STATE(252),
    [sym_class_selector] = STATE(252),
    [sym_pseudo_class_selector] = STATE(252),
    [sym_pseudo_element_selector] = STATE(252),
    [sym_id_selector] = STATE(252),
    [sym_attribute_selector] = STATE(252),
    [sym_child_selector] = STATE(252),
    [sym_descendant_selector] = STATE(252),
    [sym_sibling_selector] = STATE(252),
    [sym_adjacent_sibling_selector] = STATE(252),
    [sym_declaration] = STATE(43),
    [sym_declaration_pair] = STATE(465),
    [aux_sym_program_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(228),
    [anon_sym_ATimport] = ACTIONS(230),
    [anon_sym_ATmedia] = ACTIONS(233),
    [anon_sym_ATcharset] = ACTIONS(236),
    [anon_sym_ATnamespace] = ACTIONS(239),
    [anon_sym_ATkeyframes] = ACTIONS(242),
    [aux_sym_keyframes_statement_token1] = ACTIONS(245),
    [anon_sym_ATsupports] = ACTIONS(248),
    [anon_sym_ATuse] = ACTIONS(251),
    [anon_sym_ATforward] = ACTIONS(254),
    [anon_sym_COLON] = ACTIONS(257),
    [anon_sym_ATmixin] = ACTIONS(260),
    [anon_sym_ATinclude] = ACTIONS(263),
    [anon_sym_PERCENT] = ACTIONS(266),
    [anon_sym_ATif] = ACTIONS(269),
    [anon_sym_ATeach] = ACTIONS(272),
    [anon_sym_ATfor] = ACTIONS(275),
    [anon_sym_ATwhile] = ACTIONS(278),
    [anon_sym_ATfunction] = ACTIONS(281),
    [anon_sym_ATerror] = ACTIONS(284),
    [anon_sym_ATwarn] = ACTIONS(287),
    [anon_sym_ATdebug] = ACTIONS(290),
    [sym_nesting_selector] = ACTIONS(293),
    [anon_sym_STAR] = ACTIONS(296),
    [anon_sym_DOT] = ACTIONS(299),
    [anon_sym_COLON_COLON] = ACTIONS(302),
    [anon_sym_POUND] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(308),
    [sym_string_value] = ACTIONS(311),
    [sym_identifier] = ACTIONS(314),
    [sym_variable_identifier] = ACTIONS(317),
    [sym_at_keyword] = ACTIONS(320),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(327), 1,
      anon_sym_ATelse,
    STATE(110), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(16), 2,
      sym_else_if_clause,
      aux_sym_if_repeat1,
    ACTIONS(325), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(323), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [51] = 6,
    ACTIONS(327), 1,
      anon_sym_ATelse,
    STATE(74), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(19), 2,
      sym_else_if_clause,
      aux_sym_if_repeat1,
    ACTIONS(331), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(329), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [102] = 6,
    ACTIONS(333), 1,
      anon_sym_ATelse,
    STATE(83), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(18), 2,
      sym_else_if_clause,
      aux_sym_if_repeat1,
    ACTIONS(325), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(323), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [153] = 6,
    ACTIONS(333), 1,
      anon_sym_ATelse,
    STATE(51), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(20), 2,
      sym_else_if_clause,
      aux_sym_if_repeat1,
    ACTIONS(331), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(329), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [204] = 5,
    ACTIONS(339), 1,
      anon_sym_ATelse,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(19), 2,
      sym_else_if_clause,
      aux_sym_if_repeat1,
    ACTIONS(337), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(335), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [252] = 5,
    ACTIONS(342), 1,
      anon_sym_ATelse,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(20), 2,
      sym_else_if_clause,
      aux_sym_if_repeat1,
    ACTIONS(337), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(335), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [300] = 20,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      sym_nesting_selector,
    ACTIONS(51), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      anon_sym_COLON_COLON,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(351), 1,
      anon_sym_POUND,
    ACTIONS(353), 1,
      sym_string_value,
    ACTIONS(355), 1,
      sym_integer,
    ACTIONS(357), 1,
      aux_sym_float_value_token1,
    ACTIONS(359), 1,
      sym_identifier,
    ACTIONS(361), 1,
      sym_variable_identifier,
    ACTIONS(363), 1,
      sym_plain_value,
    STATE(147), 1,
      sym__value,
    STATE(154), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(123), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(251), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [377] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(367), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(365), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [419] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(371), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(369), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [461] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(375), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(373), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [503] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(379), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(377), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [545] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(367), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(365), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [587] = 19,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      sym_nesting_selector,
    ACTIONS(51), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      anon_sym_COLON_COLON,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(351), 1,
      anon_sym_POUND,
    ACTIONS(353), 1,
      sym_string_value,
    ACTIONS(355), 1,
      sym_integer,
    ACTIONS(357), 1,
      aux_sym_float_value_token1,
    ACTIONS(359), 1,
      sym_identifier,
    ACTIONS(361), 1,
      sym_variable_identifier,
    ACTIONS(363), 1,
      sym_plain_value,
    STATE(147), 1,
      sym__value,
    STATE(163), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(123), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(282), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [661] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(379), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(377), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [703] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(381), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(383), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [745] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(375), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(373), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [787] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(381), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(383), 25,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [829] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(371), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(369), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATelse,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [871] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(385), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(387), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [912] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(389), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(391), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [953] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(393), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(395), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [994] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(397), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(399), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1035] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(379), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(377), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1076] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(401), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(403), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1117] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(405), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(407), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1158] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(409), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(411), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1199] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(413), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(415), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1240] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(375), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(373), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1281] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(417), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(419), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1322] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(421), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(423), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1363] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(425), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(427), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1404] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(429), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(431), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1445] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(433), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(435), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1486] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(439), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(437), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1527] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(441), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(443), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1568] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(447), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(445), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1609] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(449), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(451), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1650] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(453), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(455), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1691] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(459), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(457), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1732] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(463), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(461), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1773] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(467), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(465), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1814] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(469), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(471), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1855] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(441), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(443), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1896] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(433), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(435), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1937] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(429), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(431), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [1978] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(371), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(369), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2019] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(421), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(423), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2060] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(401), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(403), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2101] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(397), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(399), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2142] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(393), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(395), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2183] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(475), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(473), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2224] = 19,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      sym_nesting_selector,
    ACTIONS(51), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      anon_sym_COLON_COLON,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(479), 1,
      anon_sym_POUND,
    ACTIONS(481), 1,
      sym_string_value,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    STATE(317), 1,
      sym__value,
    STATE(321), 1,
      sym_class_selector,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(332), 10,
      sym__selector,
      sym_universal_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [2297] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(405), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(407), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2338] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(409), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(411), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2379] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(413), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(415), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2420] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(425), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(427), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2461] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(379), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(377), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2502] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(467), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(465), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2543] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(493), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(495), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2584] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(449), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(451), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2625] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(453), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(455), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2666] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(469), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(471), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2707] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(493), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(495), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2748] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(499), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(497), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2789] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(503), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(501), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2830] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(505), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(507), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2871] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(511), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(509), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2912] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(515), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(513), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2953] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(517), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(519), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [2994] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(521), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(523), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3035] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(499), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(497), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3076] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(503), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(501), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3117] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(527), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(525), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3158] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(531), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(529), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3199] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(535), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(533), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3240] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(539), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(537), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3281] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(511), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(509), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3322] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(439), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(437), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3363] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(515), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(513), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3404] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(543), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(541), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3445] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(371), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(369), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3486] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(545), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(547), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3527] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(551), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(549), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3568] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(527), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(525), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3609] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(531), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(529), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3650] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(505), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(507), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3691] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(553), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(555), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3732] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(557), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(559), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3773] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(561), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(563), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3814] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(389), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(391), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3855] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(567), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(565), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3896] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(561), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(563), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3937] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(535), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(533), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [3978] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(539), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(537), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4019] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(543), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(541), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4060] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(517), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(519), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4101] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(375), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(373), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4142] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(567), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(565), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4183] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(385), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(387), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4224] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(521), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(523), 24,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATextend,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATreturn,
      anon_sym_ATat_DASHroot,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4265] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(551), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(549), 23,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_ATuse,
      anon_sym_ATforward,
      anon_sym_COLON,
      anon_sym_ATmixin,
      anon_sym_ATinclude,
      anon_sym_ATif,
      anon_sym_ATeach,
      anon_sym_ATfor,
      anon_sym_ATwhile,
      anon_sym_ATfunction,
      anon_sym_ATerror,
      anon_sym_ATwarn,
      anon_sym_ATdebug,
      anon_sym_POUND,
      sym_identifier,
      sym_at_keyword,
  [4306] = 17,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      sym_integer,
    ACTIONS(357), 1,
      aux_sym_float_value_token1,
    ACTIONS(361), 1,
      sym_variable_identifier,
    ACTIONS(363), 1,
      sym_plain_value,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(579), 1,
      sym_important,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    STATE(133), 1,
      sym__value,
    STATE(143), 1,
      aux_sym_declaration_pair_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(571), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(573), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(577), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(123), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4373] = 7,
    ACTIONS(591), 1,
      anon_sym_LPAREN2,
    STATE(128), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(589), 5,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
    ACTIONS(593), 6,
      anon_sym_STAR,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(585), 7,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_TILDE,
    ACTIONS(587), 9,
      anon_sym_LPAREN,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [4419] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(599), 5,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
    ACTIONS(595), 7,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_TILDE,
    ACTIONS(597), 7,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(601), 8,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [4459] = 5,
    ACTIONS(591), 1,
      anon_sym_LPAREN2,
    STATE(128), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(593), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(587), 12,
      anon_sym_LPAREN,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [4497] = 4,
    ACTIONS(607), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(605), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(603), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4532] = 4,
    ACTIONS(613), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(611), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(609), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4567] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(617), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(615), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4599] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(601), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(597), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4631] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(621), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(619), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4663] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(625), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(623), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4695] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(629), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(627), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4727] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(633), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(631), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4759] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(637), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(635), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4791] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(641), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(639), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4823] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(645), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(643), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4855] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(649), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(647), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4887] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(653), 11,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
    ACTIONS(651), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_important,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4919] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(573), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(577), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(655), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_important,
      sym_string_value,
    ACTIONS(657), 6,
      anon_sym_POUND,
      sym_integer,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [4954] = 9,
    ACTIONS(659), 1,
      anon_sym_SEMI,
    ACTIONS(661), 1,
      anon_sym_LPAREN,
    ACTIONS(669), 1,
      anon_sym_selector,
    ACTIONS(671), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(667), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(665), 4,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(663), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(356), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4997] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(573), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(577), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(673), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_important,
      sym_string_value,
    ACTIONS(675), 6,
      anon_sym_POUND,
      sym_integer,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [5032] = 9,
    ACTIONS(661), 1,
      anon_sym_LPAREN,
    ACTIONS(669), 1,
      anon_sym_selector,
    ACTIONS(671), 1,
      sym_identifier,
    ACTIONS(677), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(667), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(665), 4,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(663), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(353), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5075] = 15,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      sym_integer,
    ACTIONS(357), 1,
      aux_sym_float_value_token1,
    ACTIONS(361), 1,
      sym_variable_identifier,
    ACTIONS(363), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(681), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym__value,
    STATE(359), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(679), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(145), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(123), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5129] = 15,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      sym_integer,
    ACTIONS(357), 1,
      aux_sym_float_value_token1,
    ACTIONS(361), 1,
      sym_variable_identifier,
    ACTIONS(363), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(683), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym__value,
    STATE(369), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(679), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(145), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(123), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5183] = 15,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      sym_integer,
    ACTIONS(357), 1,
      aux_sym_float_value_token1,
    ACTIONS(361), 1,
      sym_variable_identifier,
    ACTIONS(363), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym__value,
    STATE(367), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(679), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(145), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(123), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5237] = 15,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      sym_integer,
    ACTIONS(357), 1,
      aux_sym_float_value_token1,
    ACTIONS(361), 1,
      sym_variable_identifier,
    ACTIONS(363), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(687), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym__value,
    STATE(366), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(679), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(145), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(123), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5291] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(573), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(577), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(689), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
    ACTIONS(691), 6,
      anon_sym_POUND,
      sym_integer,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [5325] = 7,
    ACTIONS(693), 1,
      anon_sym_LPAREN2,
    STATE(192), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(587), 2,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(589), 2,
      anon_sym_COLON,
      anon_sym_GT,
    ACTIONS(593), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(585), 8,
      sym__descendant_operator,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [5363] = 15,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      sym_integer,
    ACTIONS(357), 1,
      aux_sym_float_value_token1,
    ACTIONS(361), 1,
      sym_variable_identifier,
    ACTIONS(363), 1,
      sym_plain_value,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(697), 1,
      sym_important,
    STATE(133), 1,
      sym__value,
    STATE(153), 1,
      aux_sym_declaration_pair_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(695), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    STATE(123), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5416] = 11,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      sym_nesting_selector,
    ACTIONS(51), 1,
      anon_sym_STAR,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_COLON_COLON,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(699), 1,
      sym_string_value,
    ACTIONS(701), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(300), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [5461] = 13,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    ACTIONS(708), 1,
      anon_sym_POUND,
    ACTIONS(711), 1,
      sym_string_value,
    ACTIONS(714), 1,
      sym_integer,
    ACTIONS(717), 1,
      aux_sym_float_value_token1,
    ACTIONS(720), 1,
      sym_identifier,
    ACTIONS(723), 1,
      sym_variable_identifier,
    ACTIONS(726), 1,
      sym_plain_value,
    STATE(141), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(145), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    ACTIONS(703), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(123), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5510] = 11,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      sym_nesting_selector,
    ACTIONS(51), 1,
      anon_sym_STAR,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_COLON_COLON,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(701), 1,
      sym_identifier,
    ACTIONS(729), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(309), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [5555] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(731), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
    ACTIONS(573), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(577), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(733), 6,
      anon_sym_POUND,
      sym_integer,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [5588] = 11,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      sym_nesting_selector,
    ACTIONS(51), 1,
      anon_sym_STAR,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_COLON_COLON,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(701), 1,
      sym_identifier,
    ACTIONS(735), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(249), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [5633] = 13,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      sym_integer,
    ACTIONS(357), 1,
      aux_sym_float_value_token1,
    ACTIONS(361), 1,
      sym_variable_identifier,
    ACTIONS(363), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    STATE(141), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(145), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    ACTIONS(737), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(123), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5682] = 11,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      sym_nesting_selector,
    ACTIONS(51), 1,
      anon_sym_STAR,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_COLON_COLON,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(701), 1,
      sym_identifier,
    ACTIONS(739), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(267), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [5727] = 11,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      sym_nesting_selector,
    ACTIONS(51), 1,
      anon_sym_STAR,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_COLON_COLON,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(701), 1,
      sym_identifier,
    ACTIONS(741), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(261), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [5772] = 11,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      sym_nesting_selector,
    ACTIONS(51), 1,
      anon_sym_STAR,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_COLON_COLON,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(701), 1,
      sym_identifier,
    ACTIONS(743), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(257), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [5817] = 14,
    ACTIONS(745), 1,
      anon_sym_COMMA,
    ACTIONS(748), 1,
      anon_sym_LPAREN,
    ACTIONS(751), 1,
      anon_sym_POUND,
    ACTIONS(754), 1,
      sym_string_value,
    ACTIONS(757), 1,
      sym_integer,
    ACTIONS(760), 1,
      aux_sym_float_value_token1,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(766), 1,
      sym_variable_identifier,
    ACTIONS(769), 1,
      sym_plain_value,
    STATE(133), 1,
      sym__value,
    STATE(153), 1,
      aux_sym_declaration_pair_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(673), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_important,
    STATE(123), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5868] = 15,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      sym_integer,
    ACTIONS(357), 1,
      aux_sym_float_value_token1,
    ACTIONS(361), 1,
      sym_variable_identifier,
    ACTIONS(363), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(772), 1,
      anon_sym_COMMA,
    ACTIONS(774), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      sym__value,
    STATE(160), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(378), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(123), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5920] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(599), 2,
      anon_sym_COLON,
      anon_sym_GT,
    ACTIONS(601), 2,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(597), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(595), 8,
      sym__descendant_operator,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [5952] = 13,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      sym_integer,
    ACTIONS(357), 1,
      aux_sym_float_value_token1,
    ACTIONS(361), 1,
      sym_variable_identifier,
    ACTIONS(363), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(139), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(123), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5999] = 13,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      sym_integer,
    ACTIONS(357), 1,
      aux_sym_float_value_token1,
    ACTIONS(361), 1,
      sym_variable_identifier,
    ACTIONS(363), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(778), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(138), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(123), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6046] = 5,
    ACTIONS(780), 1,
      anon_sym_LPAREN2,
    STATE(191), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(593), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(587), 9,
      anon_sym_LPAREN,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6077] = 5,
    ACTIONS(693), 1,
      anon_sym_LPAREN2,
    STATE(192), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(587), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(593), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6108] = 13,
    ACTIONS(784), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym_POUND,
    ACTIONS(790), 1,
      sym_string_value,
    ACTIONS(793), 1,
      sym_integer,
    ACTIONS(796), 1,
      aux_sym_float_value_token1,
    ACTIONS(799), 1,
      sym_identifier,
    ACTIONS(802), 1,
      sym_variable_identifier,
    ACTIONS(805), 1,
      sym_plain_value,
    STATE(147), 1,
      sym__value,
    STATE(160), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(782), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(123), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6155] = 13,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      sym_integer,
    ACTIONS(357), 1,
      aux_sym_float_value_token1,
    ACTIONS(361), 1,
      sym_variable_identifier,
    ACTIONS(363), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(808), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(140), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(123), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6202] = 13,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      sym_integer,
    ACTIONS(357), 1,
      aux_sym_float_value_token1,
    ACTIONS(361), 1,
      sym_variable_identifier,
    ACTIONS(363), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(137), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(123), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6249] = 13,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      sym_integer,
    ACTIONS(357), 1,
      aux_sym_float_value_token1,
    ACTIONS(361), 1,
      sym_variable_identifier,
    ACTIONS(363), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    STATE(147), 1,
      sym__value,
    STATE(160), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(812), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(123), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6296] = 4,
    ACTIONS(814), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(609), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(611), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6324] = 4,
    ACTIONS(816), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(603), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(605), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6352] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(653), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(651), 9,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6378] = 13,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      sym_integer,
    ACTIONS(357), 1,
      aux_sym_float_value_token1,
    ACTIONS(361), 1,
      sym_variable_identifier,
    ACTIONS(363), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(818), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      sym__value,
    STATE(160), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(123), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6424] = 12,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      sym_integer,
    ACTIONS(357), 1,
      aux_sym_float_value_token1,
    ACTIONS(361), 1,
      sym_variable_identifier,
    ACTIONS(363), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    STATE(141), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(149), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(123), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6468] = 4,
    ACTIONS(820), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(605), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(603), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6495] = 12,
    ACTIONS(822), 1,
      anon_sym_LPAREN,
    ACTIONS(824), 1,
      anon_sym_POUND,
    ACTIONS(826), 1,
      sym_string_value,
    ACTIONS(828), 1,
      sym_integer,
    ACTIONS(830), 1,
      aux_sym_float_value_token1,
    ACTIONS(832), 1,
      sym_identifier,
    ACTIONS(834), 1,
      sym_variable_identifier,
    ACTIONS(836), 1,
      sym_plain_value,
    STATE(272), 1,
      sym__value,
    STATE(403), 1,
      sym_include_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(275), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6538] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(639), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(641), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6563] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(623), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(625), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6588] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(619), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(621), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6613] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(597), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(601), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6638] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(645), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(643), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6663] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(615), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(617), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6688] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(629), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(627), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6713] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(631), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(633), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6738] = 12,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      sym_integer,
    ACTIONS(357), 1,
      aux_sym_float_value_token1,
    ACTIONS(361), 1,
      sym_variable_identifier,
    ACTIONS(363), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    STATE(147), 1,
      sym__value,
    STATE(167), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(123), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6781] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(633), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(631), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6806] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(627), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(629), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6831] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(617), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(615), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6856] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(621), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(619), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6881] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(625), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(623), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6906] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(601), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(597), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6931] = 4,
    ACTIONS(838), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(611), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(609), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6958] = 12,
    ACTIONS(822), 1,
      anon_sym_LPAREN,
    ACTIONS(824), 1,
      anon_sym_POUND,
    ACTIONS(826), 1,
      sym_string_value,
    ACTIONS(828), 1,
      sym_integer,
    ACTIONS(830), 1,
      aux_sym_float_value_token1,
    ACTIONS(832), 1,
      sym_identifier,
    ACTIONS(834), 1,
      sym_variable_identifier,
    ACTIONS(836), 1,
      sym_plain_value,
    STATE(272), 1,
      sym__value,
    STATE(386), 1,
      sym_include_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(275), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7001] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(643), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(645), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7026] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(641), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(639), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7051] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(647), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(649), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7076] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(635), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(637), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [7101] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(637), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(635), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7126] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(649), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(647), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7151] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(653), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(651), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_through,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7176] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(289), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7216] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(277), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7256] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    ACTIONS(846), 1,
      sym_integer,
    ACTIONS(848), 1,
      aux_sym_float_value_token1,
    STATE(305), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7296] = 11,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      sym_integer,
    ACTIONS(357), 1,
      aux_sym_float_value_token1,
    ACTIONS(361), 1,
      sym_variable_identifier,
    ACTIONS(363), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    STATE(122), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(123), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7336] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(307), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7376] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(323), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7416] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(284), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7456] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(328), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7496] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(285), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7536] = 5,
    ACTIONS(852), 1,
      anon_sym_COLON,
    ACTIONS(854), 1,
      anon_sym_LPAREN2,
    STATE(265), 1,
      sym_pseudo_class_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(850), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [7564] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(318), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7604] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(319), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7644] = 11,
    ACTIONS(856), 1,
      anon_sym_LPAREN,
    ACTIONS(858), 1,
      anon_sym_POUND,
    ACTIONS(860), 1,
      sym_string_value,
    ACTIONS(862), 1,
      sym_integer,
    ACTIONS(864), 1,
      aux_sym_float_value_token1,
    ACTIONS(866), 1,
      sym_identifier,
    ACTIONS(868), 1,
      sym_variable_identifier,
    ACTIONS(870), 1,
      sym_plain_value,
    STATE(136), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(174), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7684] = 11,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      sym_integer,
    ACTIONS(357), 1,
      aux_sym_float_value_token1,
    ACTIONS(361), 1,
      sym_variable_identifier,
    ACTIONS(363), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    STATE(135), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(123), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7724] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(294), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7764] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(293), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7804] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(325), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7844] = 11,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      sym_integer,
    ACTIONS(357), 1,
      aux_sym_float_value_token1,
    ACTIONS(361), 1,
      sym_variable_identifier,
    ACTIONS(363), 1,
      sym_plain_value,
    ACTIONS(575), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_string_value,
    ACTIONS(583), 1,
      sym_identifier,
    STATE(116), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(123), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7884] = 11,
    ACTIONS(822), 1,
      anon_sym_LPAREN,
    ACTIONS(824), 1,
      anon_sym_POUND,
    ACTIONS(826), 1,
      sym_string_value,
    ACTIONS(828), 1,
      sym_integer,
    ACTIONS(830), 1,
      aux_sym_float_value_token1,
    ACTIONS(832), 1,
      sym_identifier,
    ACTIONS(836), 1,
      sym_plain_value,
    ACTIONS(872), 1,
      sym_variable_identifier,
    STATE(301), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(275), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7924] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(303), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7964] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(331), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8004] = 11,
    ACTIONS(856), 1,
      anon_sym_LPAREN,
    ACTIONS(858), 1,
      anon_sym_POUND,
    ACTIONS(860), 1,
      sym_string_value,
    ACTIONS(862), 1,
      sym_integer,
    ACTIONS(864), 1,
      aux_sym_float_value_token1,
    ACTIONS(866), 1,
      sym_identifier,
    ACTIONS(868), 1,
      sym_variable_identifier,
    ACTIONS(870), 1,
      sym_plain_value,
    STATE(176), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(174), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8044] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(312), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8084] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(315), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8124] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(326), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8164] = 11,
    ACTIONS(822), 1,
      anon_sym_LPAREN,
    ACTIONS(824), 1,
      anon_sym_POUND,
    ACTIONS(826), 1,
      sym_string_value,
    ACTIONS(828), 1,
      sym_integer,
    ACTIONS(830), 1,
      aux_sym_float_value_token1,
    ACTIONS(832), 1,
      sym_identifier,
    ACTIONS(836), 1,
      sym_plain_value,
    ACTIONS(872), 1,
      sym_variable_identifier,
    STATE(296), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(275), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8204] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(182), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8244] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(278), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8284] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    ACTIONS(846), 1,
      sym_integer,
    ACTIONS(848), 1,
      aux_sym_float_value_token1,
    STATE(182), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8324] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(308), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8364] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(320), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8404] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(281), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8444] = 5,
    ACTIONS(854), 1,
      anon_sym_LPAREN2,
    ACTIONS(876), 1,
      anon_sym_COLON,
    STATE(260), 1,
      sym_pseudo_class_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(874), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [8472] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(313), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8512] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(292), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8552] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(322), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8592] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(274), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8632] = 11,
    ACTIONS(856), 1,
      anon_sym_LPAREN,
    ACTIONS(858), 1,
      anon_sym_POUND,
    ACTIONS(860), 1,
      sym_string_value,
    ACTIONS(862), 1,
      sym_integer,
    ACTIONS(864), 1,
      aux_sym_float_value_token1,
    ACTIONS(866), 1,
      sym_identifier,
    ACTIONS(868), 1,
      sym_variable_identifier,
    ACTIONS(870), 1,
      sym_plain_value,
    STATE(134), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(174), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8672] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    ACTIONS(846), 1,
      sym_integer,
    ACTIONS(848), 1,
      aux_sym_float_value_token1,
    STATE(329), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8712] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(327), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8752] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(310), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8792] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(297), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8832] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(270), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8872] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(280), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8912] = 11,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_integer,
    ACTIONS(485), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      sym_variable_identifier,
    ACTIONS(491), 1,
      sym_plain_value,
    ACTIONS(840), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_string_value,
    ACTIONS(844), 1,
      sym_identifier,
    STATE(279), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(185), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8952] = 3,
    ACTIONS(880), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(878), 13,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [8975] = 9,
    ACTIONS(661), 1,
      anon_sym_LPAREN,
    ACTIONS(669), 1,
      anon_sym_selector,
    ACTIONS(671), 1,
      sym_identifier,
    ACTIONS(882), 1,
      anon_sym_SEMI,
    ACTIONS(884), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(667), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(341), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9010] = 3,
    ACTIONS(888), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(886), 13,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9033] = 5,
    ACTIONS(890), 1,
      anon_sym_LPAREN2,
    STATE(291), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(587), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(593), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9060] = 4,
    ACTIONS(892), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(599), 2,
      anon_sym_COLON,
      anon_sym_POUND,
    ACTIONS(595), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9085] = 9,
    ACTIONS(661), 1,
      anon_sym_LPAREN,
    ACTIONS(669), 1,
      anon_sym_selector,
    ACTIONS(671), 1,
      sym_identifier,
    ACTIONS(894), 1,
      anon_sym_SEMI,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(667), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(339), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9120] = 3,
    ACTIONS(900), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(898), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9142] = 3,
    ACTIONS(904), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(902), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9164] = 4,
    ACTIONS(906), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(641), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(639), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9188] = 4,
    ACTIONS(910), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(912), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(908), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9212] = 3,
    ACTIONS(916), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(914), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9234] = 13,
    ACTIONS(772), 1,
      anon_sym_COMMA,
    ACTIONS(774), 1,
      anon_sym_RPAREN,
    ACTIONS(918), 1,
      anon_sym_COLON,
    ACTIONS(920), 1,
      anon_sym_COLON_COLON,
    ACTIONS(922), 1,
      anon_sym_POUND,
    ACTIONS(924), 1,
      anon_sym_LBRACK,
    ACTIONS(926), 1,
      anon_sym_GT,
    ACTIONS(928), 1,
      anon_sym_TILDE,
    ACTIONS(930), 1,
      anon_sym_PLUS,
    ACTIONS(932), 1,
      sym__descendant_operator,
    STATE(378), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(912), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [9276] = 13,
    ACTIONS(918), 1,
      anon_sym_COLON,
    ACTIONS(920), 1,
      anon_sym_COLON_COLON,
    ACTIONS(922), 1,
      anon_sym_POUND,
    ACTIONS(924), 1,
      anon_sym_LBRACK,
    ACTIONS(926), 1,
      anon_sym_GT,
    ACTIONS(928), 1,
      anon_sym_TILDE,
    ACTIONS(930), 1,
      anon_sym_PLUS,
    ACTIONS(932), 1,
      sym__descendant_operator,
    ACTIONS(934), 1,
      anon_sym_COMMA,
    ACTIONS(936), 1,
      anon_sym_LBRACE,
    STATE(384), 1,
      aux_sym_css_selector_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(912), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [9318] = 3,
    ACTIONS(940), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(938), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9340] = 3,
    ACTIONS(944), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(942), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9362] = 3,
    ACTIONS(948), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(946), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9384] = 3,
    ACTIONS(952), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(950), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9406] = 4,
    ACTIONS(956), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(912), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(954), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9430] = 3,
    ACTIONS(960), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(958), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9452] = 3,
    ACTIONS(964), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(962), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9474] = 3,
    ACTIONS(968), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(966), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9496] = 4,
    ACTIONS(972), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(912), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(970), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9520] = 3,
    ACTIONS(589), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(585), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9542] = 4,
    ACTIONS(974), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(611), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(609), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9566] = 3,
    ACTIONS(978), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(976), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9588] = 3,
    ACTIONS(982), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(980), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9610] = 4,
    ACTIONS(984), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(605), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(603), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9634] = 4,
    ACTIONS(988), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(912), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(986), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9658] = 3,
    ACTIONS(992), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(990), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9680] = 3,
    ACTIONS(996), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(994), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9702] = 5,
    ACTIONS(998), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9727] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(621), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(619), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9748] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1004), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
    ACTIONS(1008), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1006), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9771] = 3,
    ACTIONS(1010), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(585), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [9792] = 5,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9817] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(601), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(597), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9838] = 4,
    ACTIONS(1013), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(611), 4,
      anon_sym_through,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(609), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9861] = 5,
    ACTIONS(884), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9886] = 5,
    ACTIONS(1015), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9911] = 5,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9936] = 5,
    ACTIONS(884), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9961] = 5,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9986] = 11,
    ACTIONS(918), 1,
      anon_sym_COLON,
    ACTIONS(920), 1,
      anon_sym_COLON_COLON,
    ACTIONS(922), 1,
      anon_sym_POUND,
    ACTIONS(924), 1,
      anon_sym_LBRACK,
    ACTIONS(926), 1,
      anon_sym_GT,
    ACTIONS(928), 1,
      anon_sym_TILDE,
    ACTIONS(930), 1,
      anon_sym_PLUS,
    ACTIONS(932), 1,
      sym__descendant_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(812), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(912), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [10023] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(625), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(623), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10044] = 5,
    ACTIONS(884), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10069] = 5,
    ACTIONS(884), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10094] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(641), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(639), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10115] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(645), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(643), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10136] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(653), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(651), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10157] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1017), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10180] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(649), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(647), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10201] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(637), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(635), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10222] = 5,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10247] = 5,
    ACTIONS(884), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10272] = 5,
    ACTIONS(1015), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10297] = 4,
    ACTIONS(1019), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(605), 4,
      anon_sym_through,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(603), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10320] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1021), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
    ACTIONS(1008), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1006), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10343] = 5,
    ACTIONS(998), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10368] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(629), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(627), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10389] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(633), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(631), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10410] = 11,
    ACTIONS(918), 1,
      anon_sym_COLON,
    ACTIONS(920), 1,
      anon_sym_COLON_COLON,
    ACTIONS(922), 1,
      anon_sym_POUND,
    ACTIONS(924), 1,
      anon_sym_LBRACK,
    ACTIONS(926), 1,
      anon_sym_GT,
    ACTIONS(928), 1,
      anon_sym_TILDE,
    ACTIONS(930), 1,
      anon_sym_PLUS,
    ACTIONS(932), 1,
      sym__descendant_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(912), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(1023), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [10447] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(617), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(615), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10468] = 6,
    ACTIONS(661), 1,
      anon_sym_LPAREN,
    ACTIONS(669), 1,
      anon_sym_selector,
    ACTIONS(671), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(667), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(370), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10494] = 4,
    ACTIONS(1025), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10516] = 6,
    ACTIONS(661), 1,
      anon_sym_LPAREN,
    ACTIONS(669), 1,
      anon_sym_selector,
    ACTIONS(671), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(667), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(348), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10542] = 4,
    ACTIONS(1027), 1,
      anon_sym_through,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1031), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1029), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10564] = 6,
    ACTIONS(661), 1,
      anon_sym_LPAREN,
    ACTIONS(669), 1,
      anon_sym_selector,
    ACTIONS(671), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(667), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(344), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10590] = 4,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10612] = 4,
    ACTIONS(1035), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10634] = 11,
    ACTIONS(918), 1,
      anon_sym_COLON,
    ACTIONS(920), 1,
      anon_sym_COLON_COLON,
    ACTIONS(922), 1,
      anon_sym_POUND,
    ACTIONS(924), 1,
      anon_sym_LBRACK,
    ACTIONS(926), 1,
      anon_sym_GT,
    ACTIONS(928), 1,
      anon_sym_TILDE,
    ACTIONS(930), 1,
      anon_sym_PLUS,
    ACTIONS(932), 1,
      sym__descendant_operator,
    ACTIONS(1037), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(912), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [10670] = 4,
    ACTIONS(1039), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10692] = 6,
    ACTIONS(661), 1,
      anon_sym_LPAREN,
    ACTIONS(669), 1,
      anon_sym_selector,
    ACTIONS(671), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(667), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(347), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10718] = 4,
    ACTIONS(1041), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10740] = 4,
    ACTIONS(1043), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10762] = 6,
    ACTIONS(661), 1,
      anon_sym_LPAREN,
    ACTIONS(669), 1,
      anon_sym_selector,
    ACTIONS(671), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(667), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(362), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10788] = 4,
    ACTIONS(1045), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10810] = 6,
    ACTIONS(661), 1,
      anon_sym_LPAREN,
    ACTIONS(669), 1,
      anon_sym_selector,
    ACTIONS(671), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(667), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(343), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10836] = 4,
    ACTIONS(1047), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10858] = 4,
    ACTIONS(1049), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10880] = 4,
    ACTIONS(1051), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10902] = 4,
    ACTIONS(1053), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10924] = 4,
    ACTIONS(599), 1,
      anon_sym_COLON,
    ACTIONS(1047), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(595), 9,
      sym__descendant_operator,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [10946] = 4,
    ACTIONS(1055), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10968] = 4,
    ACTIONS(1057), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10990] = 6,
    ACTIONS(661), 1,
      anon_sym_LPAREN,
    ACTIONS(669), 1,
      anon_sym_selector,
    ACTIONS(1059), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(667), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(385), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11016] = 4,
    ACTIONS(1061), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11038] = 4,
    ACTIONS(1063), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11060] = 4,
    ACTIONS(1065), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11082] = 4,
    ACTIONS(1067), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11104] = 4,
    ACTIONS(1069), 1,
      anon_sym_through,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1031), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1029), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11126] = 6,
    ACTIONS(661), 1,
      anon_sym_LPAREN,
    ACTIONS(669), 1,
      anon_sym_selector,
    ACTIONS(671), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(667), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(354), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11152] = 4,
    ACTIONS(1071), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1002), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1000), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11174] = 10,
    ACTIONS(918), 1,
      anon_sym_COLON,
    ACTIONS(920), 1,
      anon_sym_COLON_COLON,
    ACTIONS(922), 1,
      anon_sym_POUND,
    ACTIONS(924), 1,
      anon_sym_LBRACK,
    ACTIONS(926), 1,
      anon_sym_GT,
    ACTIONS(928), 1,
      anon_sym_TILDE,
    ACTIONS(930), 1,
      anon_sym_PLUS,
    ACTIONS(932), 1,
      sym__descendant_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(912), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [11207] = 7,
    ACTIONS(1073), 1,
      anon_sym_RBRACE,
    ACTIONS(1075), 1,
      anon_sym_from,
    ACTIONS(1077), 1,
      sym_to,
    ACTIONS(1079), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(337), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(410), 2,
      sym_from,
      sym_integer_value,
  [11232] = 7,
    ACTIONS(1075), 1,
      anon_sym_from,
    ACTIONS(1077), 1,
      sym_to,
    ACTIONS(1079), 1,
      sym_integer,
    ACTIONS(1081), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(335), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(410), 2,
      sym_from,
      sym_integer_value,
  [11257] = 7,
    ACTIONS(1075), 1,
      anon_sym_from,
    ACTIONS(1077), 1,
      sym_to,
    ACTIONS(1079), 1,
      sym_integer,
    ACTIONS(1083), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(337), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(410), 2,
      sym_from,
      sym_integer_value,
  [11282] = 7,
    ACTIONS(1075), 1,
      anon_sym_from,
    ACTIONS(1077), 1,
      sym_to,
    ACTIONS(1079), 1,
      sym_integer,
    ACTIONS(1085), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(333), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(410), 2,
      sym_from,
      sym_integer_value,
  [11307] = 7,
    ACTIONS(1087), 1,
      anon_sym_RBRACE,
    ACTIONS(1089), 1,
      anon_sym_from,
    ACTIONS(1092), 1,
      sym_to,
    ACTIONS(1095), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(337), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(410), 2,
      sym_from,
      sym_integer_value,
  [11332] = 3,
    ACTIONS(1100), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1098), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [11348] = 7,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
    ACTIONS(1102), 1,
      anon_sym_COMMA,
    ACTIONS(1104), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      sym_enclosed_body,
    STATE(357), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1106), 2,
      anon_sym_and,
      anon_sym_or,
  [11372] = 3,
    ACTIONS(1110), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1108), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [11388] = 7,
    ACTIONS(884), 1,
      anon_sym_LBRACE,
    ACTIONS(1102), 1,
      anon_sym_COMMA,
    ACTIONS(1112), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      sym_enclosed_body,
    STATE(358), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1106), 2,
      anon_sym_and,
      anon_sym_or,
  [11412] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1114), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11425] = 6,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
    ACTIONS(1102), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      sym_enclosed_body,
    STATE(368), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1106), 2,
      anon_sym_and,
      anon_sym_or,
  [11446] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1116), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11459] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1118), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11472] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1120), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11485] = 6,
    ACTIONS(884), 1,
      anon_sym_LBRACE,
    ACTIONS(1102), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      sym_enclosed_body,
    STATE(364), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1106), 2,
      anon_sym_and,
      anon_sym_or,
  [11506] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1122), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11519] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1124), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11532] = 6,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
    ACTIONS(1126), 1,
      anon_sym_SEMI,
    ACTIONS(1128), 1,
      anon_sym_LPAREN2,
    STATE(98), 1,
      sym_enclosed_body,
    STATE(383), 1,
      sym_include_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11552] = 6,
    ACTIONS(780), 1,
      anon_sym_LPAREN2,
    ACTIONS(1130), 1,
      sym_string_value,
    ACTIONS(1132), 1,
      sym_identifier,
    STATE(191), 1,
      sym_arguments,
    STATE(475), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11572] = 6,
    ACTIONS(780), 1,
      anon_sym_LPAREN2,
    ACTIONS(1132), 1,
      sym_identifier,
    ACTIONS(1134), 1,
      sym_string_value,
    STATE(191), 1,
      sym_arguments,
    STATE(436), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11592] = 5,
    ACTIONS(1102), 1,
      anon_sym_COMMA,
    ACTIONS(1136), 1,
      anon_sym_SEMI,
    STATE(394), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1106), 2,
      anon_sym_and,
      anon_sym_or,
  [11610] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1106), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(1138), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11624] = 6,
    ACTIONS(884), 1,
      anon_sym_LBRACE,
    ACTIONS(1128), 1,
      anon_sym_LPAREN2,
    ACTIONS(1140), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      sym_enclosed_body,
    STATE(388), 1,
      sym_include_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11644] = 5,
    ACTIONS(1102), 1,
      anon_sym_COMMA,
    ACTIONS(1142), 1,
      anon_sym_SEMI,
    STATE(382), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1106), 2,
      anon_sym_and,
      anon_sym_or,
  [11662] = 6,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
    ACTIONS(1102), 1,
      anon_sym_COMMA,
    ACTIONS(1144), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      sym_enclosed_body,
    STATE(361), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11682] = 6,
    ACTIONS(884), 1,
      anon_sym_LBRACE,
    ACTIONS(1102), 1,
      anon_sym_COMMA,
    ACTIONS(1146), 1,
      anon_sym_SEMI,
    STATE(61), 1,
      sym_enclosed_body,
    STATE(361), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11702] = 4,
    ACTIONS(1148), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(679), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11717] = 5,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
    ACTIONS(1150), 1,
      anon_sym_LPAREN,
    STATE(99), 1,
      sym_enclosed_body,
    STATE(398), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11734] = 4,
    ACTIONS(1152), 1,
      anon_sym_COMMA,
    STATE(361), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1138), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11749] = 4,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1106), 2,
      anon_sym_and,
      anon_sym_or,
  [11764] = 4,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1155), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11779] = 5,
    ACTIONS(884), 1,
      anon_sym_LBRACE,
    ACTIONS(1102), 1,
      anon_sym_COMMA,
    STATE(69), 1,
      sym_enclosed_body,
    STATE(361), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11796] = 5,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
    ACTIONS(1150), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_enclosed_body,
    STATE(401), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11813] = 4,
    ACTIONS(1158), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(679), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11828] = 4,
    ACTIONS(1160), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(679), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11843] = 5,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
    ACTIONS(1102), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      sym_enclosed_body,
    STATE(361), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11860] = 4,
    ACTIONS(1162), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(679), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11875] = 4,
    ACTIONS(884), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1106), 2,
      anon_sym_and,
      anon_sym_or,
  [11890] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(379), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      sym_integer,
  [11901] = 5,
    ACTIONS(884), 1,
      anon_sym_LBRACE,
    ACTIONS(1150), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_enclosed_body,
    STATE(414), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11918] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1164), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      sym_integer,
  [11929] = 5,
    ACTIONS(884), 1,
      anon_sym_LBRACE,
    ACTIONS(1150), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_enclosed_body,
    STATE(416), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11946] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(375), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      sym_integer,
  [11957] = 3,
    ACTIONS(1166), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1114), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11970] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(371), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      sym_integer,
  [11981] = 4,
    ACTIONS(772), 1,
      anon_sym_COMMA,
    ACTIONS(1168), 1,
      anon_sym_RPAREN,
    STATE(391), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11995] = 4,
    ACTIONS(1170), 1,
      anon_sym_COMMA,
    ACTIONS(1173), 1,
      anon_sym_RPAREN2,
    STATE(379), 1,
      aux_sym_include_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12009] = 3,
    ACTIONS(1177), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1175), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12021] = 4,
    ACTIONS(1179), 1,
      anon_sym_COMMA,
    ACTIONS(1181), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12035] = 4,
    ACTIONS(1102), 1,
      anon_sym_COMMA,
    ACTIONS(1183), 1,
      anon_sym_SEMI,
    STATE(361), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12049] = 4,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
    ACTIONS(1185), 1,
      anon_sym_SEMI,
    STATE(36), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12063] = 4,
    ACTIONS(934), 1,
      anon_sym_COMMA,
    ACTIONS(1187), 1,
      anon_sym_LBRACE,
    STATE(396), 1,
      aux_sym_css_selector_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12077] = 3,
    ACTIONS(1189), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1106), 2,
      anon_sym_and,
      anon_sym_or,
  [12089] = 4,
    ACTIONS(1191), 1,
      anon_sym_COMMA,
    ACTIONS(1193), 1,
      anon_sym_RPAREN2,
    STATE(387), 1,
      aux_sym_include_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12103] = 4,
    ACTIONS(1191), 1,
      anon_sym_COMMA,
    ACTIONS(1195), 1,
      anon_sym_RPAREN2,
    STATE(379), 1,
      aux_sym_include_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12117] = 4,
    ACTIONS(884), 1,
      anon_sym_LBRACE,
    ACTIONS(1197), 1,
      anon_sym_SEMI,
    STATE(63), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12131] = 4,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
    ACTIONS(1199), 1,
      anon_sym_if,
    STATE(52), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12145] = 4,
    ACTIONS(1179), 1,
      anon_sym_COMMA,
    ACTIONS(1201), 1,
      anon_sym_RPAREN,
    STATE(397), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12159] = 4,
    ACTIONS(812), 1,
      anon_sym_RPAREN,
    ACTIONS(1203), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12173] = 4,
    ACTIONS(884), 1,
      anon_sym_LBRACE,
    ACTIONS(1206), 1,
      anon_sym_if,
    STATE(75), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12187] = 4,
    ACTIONS(1208), 1,
      sym_string_value,
    ACTIONS(1210), 1,
      sym_identifier,
    STATE(441), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12201] = 4,
    ACTIONS(1102), 1,
      anon_sym_COMMA,
    ACTIONS(1212), 1,
      anon_sym_SEMI,
    STATE(361), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12215] = 4,
    ACTIONS(1214), 1,
      sym_string_value,
    ACTIONS(1216), 1,
      sym_identifier,
    STATE(453), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12229] = 4,
    ACTIONS(1023), 1,
      anon_sym_LBRACE,
    ACTIONS(1218), 1,
      anon_sym_COMMA,
    STATE(396), 1,
      aux_sym_css_selector_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12243] = 4,
    ACTIONS(1221), 1,
      anon_sym_COMMA,
    ACTIONS(1224), 1,
      anon_sym_RPAREN,
    STATE(397), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12257] = 3,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12268] = 3,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12279] = 3,
    ACTIONS(1226), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_keyframe_block_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12290] = 3,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12301] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1228), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [12310] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1173), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
  [12319] = 3,
    ACTIONS(1230), 1,
      anon_sym_COMMA,
    ACTIONS(1232), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12330] = 3,
    ACTIONS(1234), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym_keyframe_block_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12341] = 3,
    ACTIONS(1236), 1,
      sym_variable_identifier,
    STATE(408), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12352] = 3,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12363] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1224), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12372] = 3,
    ACTIONS(884), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12383] = 3,
    ACTIONS(1238), 1,
      anon_sym_LBRACE,
    STATE(373), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12394] = 3,
    ACTIONS(1226), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym_keyframe_block_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12405] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1240), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [12414] = 3,
    ACTIONS(1242), 1,
      anon_sym_COMMA,
    ACTIONS(1244), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12425] = 3,
    ACTIONS(884), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12436] = 3,
    ACTIONS(1236), 1,
      sym_variable_identifier,
    STATE(381), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12447] = 3,
    ACTIONS(884), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12458] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(695), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12467] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1246), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12476] = 3,
    ACTIONS(780), 1,
      anon_sym_LPAREN2,
    STATE(191), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12487] = 3,
    ACTIONS(1234), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym_keyframe_block_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12498] = 3,
    ACTIONS(1248), 1,
      aux_sym_color_value_token1,
    ACTIONS(1250), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12509] = 3,
    ACTIONS(603), 1,
      anon_sym_LBRACE,
    ACTIONS(1252), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12520] = 3,
    ACTIONS(1250), 1,
      sym_identifier,
    ACTIONS(1254), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12531] = 3,
    ACTIONS(1256), 1,
      anon_sym_SEMI,
    ACTIONS(1258), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12542] = 2,
    ACTIONS(1260), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12550] = 2,
    ACTIONS(1262), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12558] = 2,
    ACTIONS(1264), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12566] = 2,
    ACTIONS(1266), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12574] = 2,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12582] = 2,
    ACTIONS(1268), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12590] = 2,
    ACTIONS(1270), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12598] = 2,
    ACTIONS(1272), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12606] = 2,
    ACTIONS(1274), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12614] = 2,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12622] = 2,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12630] = 2,
    ACTIONS(1276), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12638] = 2,
    ACTIONS(1278), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12646] = 2,
    ACTIONS(892), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12654] = 2,
    ACTIONS(1280), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12662] = 2,
    ACTIONS(1282), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12670] = 2,
    ACTIONS(1284), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12678] = 2,
    ACTIONS(1286), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12686] = 2,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12694] = 2,
    ACTIONS(1288), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12702] = 2,
    ACTIONS(1290), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12710] = 2,
    ACTIONS(1292), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12718] = 2,
    ACTIONS(1294), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12726] = 2,
    ACTIONS(1296), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12734] = 2,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12742] = 2,
    ACTIONS(1298), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12750] = 2,
    ACTIONS(1300), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12758] = 2,
    ACTIONS(1302), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12766] = 2,
    ACTIONS(1304), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12774] = 2,
    ACTIONS(1306), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12782] = 2,
    ACTIONS(1308), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12790] = 2,
    ACTIONS(1310), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12798] = 2,
    ACTIONS(1312), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12806] = 2,
    ACTIONS(1314), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12814] = 2,
    ACTIONS(1316), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12822] = 2,
    ACTIONS(1318), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12830] = 2,
    ACTIONS(1320), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12838] = 2,
    ACTIONS(1199), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12846] = 2,
    ACTIONS(1322), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12854] = 2,
    ACTIONS(1324), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12862] = 2,
    ACTIONS(1326), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12870] = 2,
    ACTIONS(1328), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12878] = 2,
    ACTIONS(1330), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12886] = 2,
    ACTIONS(1332), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12894] = 2,
    ACTIONS(1334), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12902] = 2,
    ACTIONS(1256), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12910] = 2,
    ACTIONS(1206), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12918] = 2,
    ACTIONS(1336), 1,
      anon_sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12926] = 2,
    ACTIONS(1338), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12934] = 2,
    ACTIONS(1340), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12942] = 2,
    ACTIONS(1342), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12950] = 2,
    ACTIONS(1344), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12958] = 2,
    ACTIONS(1346), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12966] = 2,
    ACTIONS(1348), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12974] = 2,
    ACTIONS(1350), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12982] = 2,
    ACTIONS(1352), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12990] = 2,
    ACTIONS(1354), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12998] = 2,
    ACTIONS(1356), 1,
      anon_sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [13006] = 2,
    ACTIONS(1358), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 51,
  [SMALL_STATE(17)] = 102,
  [SMALL_STATE(18)] = 153,
  [SMALL_STATE(19)] = 204,
  [SMALL_STATE(20)] = 252,
  [SMALL_STATE(21)] = 300,
  [SMALL_STATE(22)] = 377,
  [SMALL_STATE(23)] = 419,
  [SMALL_STATE(24)] = 461,
  [SMALL_STATE(25)] = 503,
  [SMALL_STATE(26)] = 545,
  [SMALL_STATE(27)] = 587,
  [SMALL_STATE(28)] = 661,
  [SMALL_STATE(29)] = 703,
  [SMALL_STATE(30)] = 745,
  [SMALL_STATE(31)] = 787,
  [SMALL_STATE(32)] = 829,
  [SMALL_STATE(33)] = 871,
  [SMALL_STATE(34)] = 912,
  [SMALL_STATE(35)] = 953,
  [SMALL_STATE(36)] = 994,
  [SMALL_STATE(37)] = 1035,
  [SMALL_STATE(38)] = 1076,
  [SMALL_STATE(39)] = 1117,
  [SMALL_STATE(40)] = 1158,
  [SMALL_STATE(41)] = 1199,
  [SMALL_STATE(42)] = 1240,
  [SMALL_STATE(43)] = 1281,
  [SMALL_STATE(44)] = 1322,
  [SMALL_STATE(45)] = 1363,
  [SMALL_STATE(46)] = 1404,
  [SMALL_STATE(47)] = 1445,
  [SMALL_STATE(48)] = 1486,
  [SMALL_STATE(49)] = 1527,
  [SMALL_STATE(50)] = 1568,
  [SMALL_STATE(51)] = 1609,
  [SMALL_STATE(52)] = 1650,
  [SMALL_STATE(53)] = 1691,
  [SMALL_STATE(54)] = 1732,
  [SMALL_STATE(55)] = 1773,
  [SMALL_STATE(56)] = 1814,
  [SMALL_STATE(57)] = 1855,
  [SMALL_STATE(58)] = 1896,
  [SMALL_STATE(59)] = 1937,
  [SMALL_STATE(60)] = 1978,
  [SMALL_STATE(61)] = 2019,
  [SMALL_STATE(62)] = 2060,
  [SMALL_STATE(63)] = 2101,
  [SMALL_STATE(64)] = 2142,
  [SMALL_STATE(65)] = 2183,
  [SMALL_STATE(66)] = 2224,
  [SMALL_STATE(67)] = 2297,
  [SMALL_STATE(68)] = 2338,
  [SMALL_STATE(69)] = 2379,
  [SMALL_STATE(70)] = 2420,
  [SMALL_STATE(71)] = 2461,
  [SMALL_STATE(72)] = 2502,
  [SMALL_STATE(73)] = 2543,
  [SMALL_STATE(74)] = 2584,
  [SMALL_STATE(75)] = 2625,
  [SMALL_STATE(76)] = 2666,
  [SMALL_STATE(77)] = 2707,
  [SMALL_STATE(78)] = 2748,
  [SMALL_STATE(79)] = 2789,
  [SMALL_STATE(80)] = 2830,
  [SMALL_STATE(81)] = 2871,
  [SMALL_STATE(82)] = 2912,
  [SMALL_STATE(83)] = 2953,
  [SMALL_STATE(84)] = 2994,
  [SMALL_STATE(85)] = 3035,
  [SMALL_STATE(86)] = 3076,
  [SMALL_STATE(87)] = 3117,
  [SMALL_STATE(88)] = 3158,
  [SMALL_STATE(89)] = 3199,
  [SMALL_STATE(90)] = 3240,
  [SMALL_STATE(91)] = 3281,
  [SMALL_STATE(92)] = 3322,
  [SMALL_STATE(93)] = 3363,
  [SMALL_STATE(94)] = 3404,
  [SMALL_STATE(95)] = 3445,
  [SMALL_STATE(96)] = 3486,
  [SMALL_STATE(97)] = 3527,
  [SMALL_STATE(98)] = 3568,
  [SMALL_STATE(99)] = 3609,
  [SMALL_STATE(100)] = 3650,
  [SMALL_STATE(101)] = 3691,
  [SMALL_STATE(102)] = 3732,
  [SMALL_STATE(103)] = 3773,
  [SMALL_STATE(104)] = 3814,
  [SMALL_STATE(105)] = 3855,
  [SMALL_STATE(106)] = 3896,
  [SMALL_STATE(107)] = 3937,
  [SMALL_STATE(108)] = 3978,
  [SMALL_STATE(109)] = 4019,
  [SMALL_STATE(110)] = 4060,
  [SMALL_STATE(111)] = 4101,
  [SMALL_STATE(112)] = 4142,
  [SMALL_STATE(113)] = 4183,
  [SMALL_STATE(114)] = 4224,
  [SMALL_STATE(115)] = 4265,
  [SMALL_STATE(116)] = 4306,
  [SMALL_STATE(117)] = 4373,
  [SMALL_STATE(118)] = 4419,
  [SMALL_STATE(119)] = 4459,
  [SMALL_STATE(120)] = 4497,
  [SMALL_STATE(121)] = 4532,
  [SMALL_STATE(122)] = 4567,
  [SMALL_STATE(123)] = 4599,
  [SMALL_STATE(124)] = 4631,
  [SMALL_STATE(125)] = 4663,
  [SMALL_STATE(126)] = 4695,
  [SMALL_STATE(127)] = 4727,
  [SMALL_STATE(128)] = 4759,
  [SMALL_STATE(129)] = 4791,
  [SMALL_STATE(130)] = 4823,
  [SMALL_STATE(131)] = 4855,
  [SMALL_STATE(132)] = 4887,
  [SMALL_STATE(133)] = 4919,
  [SMALL_STATE(134)] = 4954,
  [SMALL_STATE(135)] = 4997,
  [SMALL_STATE(136)] = 5032,
  [SMALL_STATE(137)] = 5075,
  [SMALL_STATE(138)] = 5129,
  [SMALL_STATE(139)] = 5183,
  [SMALL_STATE(140)] = 5237,
  [SMALL_STATE(141)] = 5291,
  [SMALL_STATE(142)] = 5325,
  [SMALL_STATE(143)] = 5363,
  [SMALL_STATE(144)] = 5416,
  [SMALL_STATE(145)] = 5461,
  [SMALL_STATE(146)] = 5510,
  [SMALL_STATE(147)] = 5555,
  [SMALL_STATE(148)] = 5588,
  [SMALL_STATE(149)] = 5633,
  [SMALL_STATE(150)] = 5682,
  [SMALL_STATE(151)] = 5727,
  [SMALL_STATE(152)] = 5772,
  [SMALL_STATE(153)] = 5817,
  [SMALL_STATE(154)] = 5868,
  [SMALL_STATE(155)] = 5920,
  [SMALL_STATE(156)] = 5952,
  [SMALL_STATE(157)] = 5999,
  [SMALL_STATE(158)] = 6046,
  [SMALL_STATE(159)] = 6077,
  [SMALL_STATE(160)] = 6108,
  [SMALL_STATE(161)] = 6155,
  [SMALL_STATE(162)] = 6202,
  [SMALL_STATE(163)] = 6249,
  [SMALL_STATE(164)] = 6296,
  [SMALL_STATE(165)] = 6324,
  [SMALL_STATE(166)] = 6352,
  [SMALL_STATE(167)] = 6378,
  [SMALL_STATE(168)] = 6424,
  [SMALL_STATE(169)] = 6468,
  [SMALL_STATE(170)] = 6495,
  [SMALL_STATE(171)] = 6538,
  [SMALL_STATE(172)] = 6563,
  [SMALL_STATE(173)] = 6588,
  [SMALL_STATE(174)] = 6613,
  [SMALL_STATE(175)] = 6638,
  [SMALL_STATE(176)] = 6663,
  [SMALL_STATE(177)] = 6688,
  [SMALL_STATE(178)] = 6713,
  [SMALL_STATE(179)] = 6738,
  [SMALL_STATE(180)] = 6781,
  [SMALL_STATE(181)] = 6806,
  [SMALL_STATE(182)] = 6831,
  [SMALL_STATE(183)] = 6856,
  [SMALL_STATE(184)] = 6881,
  [SMALL_STATE(185)] = 6906,
  [SMALL_STATE(186)] = 6931,
  [SMALL_STATE(187)] = 6958,
  [SMALL_STATE(188)] = 7001,
  [SMALL_STATE(189)] = 7026,
  [SMALL_STATE(190)] = 7051,
  [SMALL_STATE(191)] = 7076,
  [SMALL_STATE(192)] = 7101,
  [SMALL_STATE(193)] = 7126,
  [SMALL_STATE(194)] = 7151,
  [SMALL_STATE(195)] = 7176,
  [SMALL_STATE(196)] = 7216,
  [SMALL_STATE(197)] = 7256,
  [SMALL_STATE(198)] = 7296,
  [SMALL_STATE(199)] = 7336,
  [SMALL_STATE(200)] = 7376,
  [SMALL_STATE(201)] = 7416,
  [SMALL_STATE(202)] = 7456,
  [SMALL_STATE(203)] = 7496,
  [SMALL_STATE(204)] = 7536,
  [SMALL_STATE(205)] = 7564,
  [SMALL_STATE(206)] = 7604,
  [SMALL_STATE(207)] = 7644,
  [SMALL_STATE(208)] = 7684,
  [SMALL_STATE(209)] = 7724,
  [SMALL_STATE(210)] = 7764,
  [SMALL_STATE(211)] = 7804,
  [SMALL_STATE(212)] = 7844,
  [SMALL_STATE(213)] = 7884,
  [SMALL_STATE(214)] = 7924,
  [SMALL_STATE(215)] = 7964,
  [SMALL_STATE(216)] = 8004,
  [SMALL_STATE(217)] = 8044,
  [SMALL_STATE(218)] = 8084,
  [SMALL_STATE(219)] = 8124,
  [SMALL_STATE(220)] = 8164,
  [SMALL_STATE(221)] = 8204,
  [SMALL_STATE(222)] = 8244,
  [SMALL_STATE(223)] = 8284,
  [SMALL_STATE(224)] = 8324,
  [SMALL_STATE(225)] = 8364,
  [SMALL_STATE(226)] = 8404,
  [SMALL_STATE(227)] = 8444,
  [SMALL_STATE(228)] = 8472,
  [SMALL_STATE(229)] = 8512,
  [SMALL_STATE(230)] = 8552,
  [SMALL_STATE(231)] = 8592,
  [SMALL_STATE(232)] = 8632,
  [SMALL_STATE(233)] = 8672,
  [SMALL_STATE(234)] = 8712,
  [SMALL_STATE(235)] = 8752,
  [SMALL_STATE(236)] = 8792,
  [SMALL_STATE(237)] = 8832,
  [SMALL_STATE(238)] = 8872,
  [SMALL_STATE(239)] = 8912,
  [SMALL_STATE(240)] = 8952,
  [SMALL_STATE(241)] = 8975,
  [SMALL_STATE(242)] = 9010,
  [SMALL_STATE(243)] = 9033,
  [SMALL_STATE(244)] = 9060,
  [SMALL_STATE(245)] = 9085,
  [SMALL_STATE(246)] = 9120,
  [SMALL_STATE(247)] = 9142,
  [SMALL_STATE(248)] = 9164,
  [SMALL_STATE(249)] = 9188,
  [SMALL_STATE(250)] = 9212,
  [SMALL_STATE(251)] = 9234,
  [SMALL_STATE(252)] = 9276,
  [SMALL_STATE(253)] = 9318,
  [SMALL_STATE(254)] = 9340,
  [SMALL_STATE(255)] = 9362,
  [SMALL_STATE(256)] = 9384,
  [SMALL_STATE(257)] = 9406,
  [SMALL_STATE(258)] = 9430,
  [SMALL_STATE(259)] = 9452,
  [SMALL_STATE(260)] = 9474,
  [SMALL_STATE(261)] = 9496,
  [SMALL_STATE(262)] = 9520,
  [SMALL_STATE(263)] = 9542,
  [SMALL_STATE(264)] = 9566,
  [SMALL_STATE(265)] = 9588,
  [SMALL_STATE(266)] = 9610,
  [SMALL_STATE(267)] = 9634,
  [SMALL_STATE(268)] = 9658,
  [SMALL_STATE(269)] = 9680,
  [SMALL_STATE(270)] = 9702,
  [SMALL_STATE(271)] = 9727,
  [SMALL_STATE(272)] = 9748,
  [SMALL_STATE(273)] = 9771,
  [SMALL_STATE(274)] = 9792,
  [SMALL_STATE(275)] = 9817,
  [SMALL_STATE(276)] = 9838,
  [SMALL_STATE(277)] = 9861,
  [SMALL_STATE(278)] = 9886,
  [SMALL_STATE(279)] = 9911,
  [SMALL_STATE(280)] = 9936,
  [SMALL_STATE(281)] = 9961,
  [SMALL_STATE(282)] = 9986,
  [SMALL_STATE(283)] = 10023,
  [SMALL_STATE(284)] = 10044,
  [SMALL_STATE(285)] = 10069,
  [SMALL_STATE(286)] = 10094,
  [SMALL_STATE(287)] = 10115,
  [SMALL_STATE(288)] = 10136,
  [SMALL_STATE(289)] = 10157,
  [SMALL_STATE(290)] = 10180,
  [SMALL_STATE(291)] = 10201,
  [SMALL_STATE(292)] = 10222,
  [SMALL_STATE(293)] = 10247,
  [SMALL_STATE(294)] = 10272,
  [SMALL_STATE(295)] = 10297,
  [SMALL_STATE(296)] = 10320,
  [SMALL_STATE(297)] = 10343,
  [SMALL_STATE(298)] = 10368,
  [SMALL_STATE(299)] = 10389,
  [SMALL_STATE(300)] = 10410,
  [SMALL_STATE(301)] = 10447,
  [SMALL_STATE(302)] = 10468,
  [SMALL_STATE(303)] = 10494,
  [SMALL_STATE(304)] = 10516,
  [SMALL_STATE(305)] = 10542,
  [SMALL_STATE(306)] = 10564,
  [SMALL_STATE(307)] = 10590,
  [SMALL_STATE(308)] = 10612,
  [SMALL_STATE(309)] = 10634,
  [SMALL_STATE(310)] = 10670,
  [SMALL_STATE(311)] = 10692,
  [SMALL_STATE(312)] = 10718,
  [SMALL_STATE(313)] = 10740,
  [SMALL_STATE(314)] = 10762,
  [SMALL_STATE(315)] = 10788,
  [SMALL_STATE(316)] = 10810,
  [SMALL_STATE(317)] = 10836,
  [SMALL_STATE(318)] = 10858,
  [SMALL_STATE(319)] = 10880,
  [SMALL_STATE(320)] = 10902,
  [SMALL_STATE(321)] = 10924,
  [SMALL_STATE(322)] = 10946,
  [SMALL_STATE(323)] = 10968,
  [SMALL_STATE(324)] = 10990,
  [SMALL_STATE(325)] = 11016,
  [SMALL_STATE(326)] = 11038,
  [SMALL_STATE(327)] = 11060,
  [SMALL_STATE(328)] = 11082,
  [SMALL_STATE(329)] = 11104,
  [SMALL_STATE(330)] = 11126,
  [SMALL_STATE(331)] = 11152,
  [SMALL_STATE(332)] = 11174,
  [SMALL_STATE(333)] = 11207,
  [SMALL_STATE(334)] = 11232,
  [SMALL_STATE(335)] = 11257,
  [SMALL_STATE(336)] = 11282,
  [SMALL_STATE(337)] = 11307,
  [SMALL_STATE(338)] = 11332,
  [SMALL_STATE(339)] = 11348,
  [SMALL_STATE(340)] = 11372,
  [SMALL_STATE(341)] = 11388,
  [SMALL_STATE(342)] = 11412,
  [SMALL_STATE(343)] = 11425,
  [SMALL_STATE(344)] = 11446,
  [SMALL_STATE(345)] = 11459,
  [SMALL_STATE(346)] = 11472,
  [SMALL_STATE(347)] = 11485,
  [SMALL_STATE(348)] = 11506,
  [SMALL_STATE(349)] = 11519,
  [SMALL_STATE(350)] = 11532,
  [SMALL_STATE(351)] = 11552,
  [SMALL_STATE(352)] = 11572,
  [SMALL_STATE(353)] = 11592,
  [SMALL_STATE(354)] = 11610,
  [SMALL_STATE(355)] = 11624,
  [SMALL_STATE(356)] = 11644,
  [SMALL_STATE(357)] = 11662,
  [SMALL_STATE(358)] = 11682,
  [SMALL_STATE(359)] = 11702,
  [SMALL_STATE(360)] = 11717,
  [SMALL_STATE(361)] = 11734,
  [SMALL_STATE(362)] = 11749,
  [SMALL_STATE(363)] = 11764,
  [SMALL_STATE(364)] = 11779,
  [SMALL_STATE(365)] = 11796,
  [SMALL_STATE(366)] = 11813,
  [SMALL_STATE(367)] = 11828,
  [SMALL_STATE(368)] = 11843,
  [SMALL_STATE(369)] = 11860,
  [SMALL_STATE(370)] = 11875,
  [SMALL_STATE(371)] = 11890,
  [SMALL_STATE(372)] = 11901,
  [SMALL_STATE(373)] = 11918,
  [SMALL_STATE(374)] = 11929,
  [SMALL_STATE(375)] = 11946,
  [SMALL_STATE(376)] = 11957,
  [SMALL_STATE(377)] = 11970,
  [SMALL_STATE(378)] = 11981,
  [SMALL_STATE(379)] = 11995,
  [SMALL_STATE(380)] = 12009,
  [SMALL_STATE(381)] = 12021,
  [SMALL_STATE(382)] = 12035,
  [SMALL_STATE(383)] = 12049,
  [SMALL_STATE(384)] = 12063,
  [SMALL_STATE(385)] = 12077,
  [SMALL_STATE(386)] = 12089,
  [SMALL_STATE(387)] = 12103,
  [SMALL_STATE(388)] = 12117,
  [SMALL_STATE(389)] = 12131,
  [SMALL_STATE(390)] = 12145,
  [SMALL_STATE(391)] = 12159,
  [SMALL_STATE(392)] = 12173,
  [SMALL_STATE(393)] = 12187,
  [SMALL_STATE(394)] = 12201,
  [SMALL_STATE(395)] = 12215,
  [SMALL_STATE(396)] = 12229,
  [SMALL_STATE(397)] = 12243,
  [SMALL_STATE(398)] = 12257,
  [SMALL_STATE(399)] = 12268,
  [SMALL_STATE(400)] = 12279,
  [SMALL_STATE(401)] = 12290,
  [SMALL_STATE(402)] = 12301,
  [SMALL_STATE(403)] = 12310,
  [SMALL_STATE(404)] = 12319,
  [SMALL_STATE(405)] = 12330,
  [SMALL_STATE(406)] = 12341,
  [SMALL_STATE(407)] = 12352,
  [SMALL_STATE(408)] = 12363,
  [SMALL_STATE(409)] = 12372,
  [SMALL_STATE(410)] = 12383,
  [SMALL_STATE(411)] = 12394,
  [SMALL_STATE(412)] = 12405,
  [SMALL_STATE(413)] = 12414,
  [SMALL_STATE(414)] = 12425,
  [SMALL_STATE(415)] = 12436,
  [SMALL_STATE(416)] = 12447,
  [SMALL_STATE(417)] = 12458,
  [SMALL_STATE(418)] = 12467,
  [SMALL_STATE(419)] = 12476,
  [SMALL_STATE(420)] = 12487,
  [SMALL_STATE(421)] = 12498,
  [SMALL_STATE(422)] = 12509,
  [SMALL_STATE(423)] = 12520,
  [SMALL_STATE(424)] = 12531,
  [SMALL_STATE(425)] = 12542,
  [SMALL_STATE(426)] = 12550,
  [SMALL_STATE(427)] = 12558,
  [SMALL_STATE(428)] = 12566,
  [SMALL_STATE(429)] = 12574,
  [SMALL_STATE(430)] = 12582,
  [SMALL_STATE(431)] = 12590,
  [SMALL_STATE(432)] = 12598,
  [SMALL_STATE(433)] = 12606,
  [SMALL_STATE(434)] = 12614,
  [SMALL_STATE(435)] = 12622,
  [SMALL_STATE(436)] = 12630,
  [SMALL_STATE(437)] = 12638,
  [SMALL_STATE(438)] = 12646,
  [SMALL_STATE(439)] = 12654,
  [SMALL_STATE(440)] = 12662,
  [SMALL_STATE(441)] = 12670,
  [SMALL_STATE(442)] = 12678,
  [SMALL_STATE(443)] = 12686,
  [SMALL_STATE(444)] = 12694,
  [SMALL_STATE(445)] = 12702,
  [SMALL_STATE(446)] = 12710,
  [SMALL_STATE(447)] = 12718,
  [SMALL_STATE(448)] = 12726,
  [SMALL_STATE(449)] = 12734,
  [SMALL_STATE(450)] = 12742,
  [SMALL_STATE(451)] = 12750,
  [SMALL_STATE(452)] = 12758,
  [SMALL_STATE(453)] = 12766,
  [SMALL_STATE(454)] = 12774,
  [SMALL_STATE(455)] = 12782,
  [SMALL_STATE(456)] = 12790,
  [SMALL_STATE(457)] = 12798,
  [SMALL_STATE(458)] = 12806,
  [SMALL_STATE(459)] = 12814,
  [SMALL_STATE(460)] = 12822,
  [SMALL_STATE(461)] = 12830,
  [SMALL_STATE(462)] = 12838,
  [SMALL_STATE(463)] = 12846,
  [SMALL_STATE(464)] = 12854,
  [SMALL_STATE(465)] = 12862,
  [SMALL_STATE(466)] = 12870,
  [SMALL_STATE(467)] = 12878,
  [SMALL_STATE(468)] = 12886,
  [SMALL_STATE(469)] = 12894,
  [SMALL_STATE(470)] = 12902,
  [SMALL_STATE(471)] = 12910,
  [SMALL_STATE(472)] = 12918,
  [SMALL_STATE(473)] = 12926,
  [SMALL_STATE(474)] = 12934,
  [SMALL_STATE(475)] = 12942,
  [SMALL_STATE(476)] = 12950,
  [SMALL_STATE(477)] = 12958,
  [SMALL_STATE(478)] = 12966,
  [SMALL_STATE(479)] = 12974,
  [SMALL_STATE(480)] = 12982,
  [SMALL_STATE(481)] = 12990,
  [SMALL_STATE(482)] = 12998,
  [SMALL_STATE(483)] = 13006,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(232),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(311),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(230),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(395),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(456),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(457),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enclosed_body_repeat1, 2),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(302),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(433),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(459),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(460),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(66),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(222),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(479),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(483),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(196),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(463),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(228),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(238),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(219),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(218),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(217),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(244),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(256),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(438),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(447),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(450),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(452),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(252),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(273),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(426),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(241),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, .production_id = 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(207),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(316),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(235),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(393),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(444),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(442),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(314),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(215),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(214),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(433),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(431),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(427),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(454),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(237),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(448),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(458),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(226),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(474),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(225),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(206),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(205),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(244),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(256),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(438),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(447),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(450),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(452),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(252),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(273),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(426),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(245),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 2, .production_id = 11),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 2, .production_id = 11),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_repeat1, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_repeat1, 2),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(471),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(462),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_clause, 3, .production_id = 17),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_clause, 3, .production_id = 17),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enclosed_body, 4, .production_id = 39),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enclosed_body, 4, .production_id = 39),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enclosed_body, 3, .production_id = 32),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enclosed_body, 3, .production_id = 32),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enclosed_body, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enclosed_body, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_clause, 4, .production_id = 40),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_clause, 4, .production_id = 40),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 2, .production_id = 12),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 2, .production_id = 12),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_mixin, 4, .production_id = 28),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_mixin, 4, .production_id = 28),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_include, 4, .production_id = 30),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_include, 4, .production_id = 30),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_statement, 4),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_statement, 4),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 26),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 26),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 7, .production_id = 47),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, .production_id = 47),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 5, .production_id = 37),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 5, .production_id = 37),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extend_statement, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend_statement, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3, .production_id = 21),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3, .production_id = 21),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_root_statement, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_root_statement, 3),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 7, .production_id = 46),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 7, .production_id = 46),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_item, 1, .production_id = 20),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_item, 1, .production_id = 20),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug_statement, 3),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_debug_statement, 3),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warn_statement, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warn_statement, 3),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_statement, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_statement, 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_statement, 3),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 2, .production_id = 10),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 2, .production_id = 10),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_ruleset, 2),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_ruleset, 2),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_include, 3),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_include, 3),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_mixin, 3),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_mixin, 3),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 15),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 15),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 14),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 14),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 3),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeholder, 3),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_statement, 3),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forward_statement, 3),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 3),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_pair, 3, .production_id = 19),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 3),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 3),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4, .production_id = 41),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4, .production_id = 41),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3, .production_id = 35),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3, .production_id = 35),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 13),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 13),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 4),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 4),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_pair_repeat1, 1),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_pair_repeat1, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_pair_repeat1, 2),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_pair_repeat1, 2),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_pair, 4, .production_id = 31),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [705] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(200),
  [708] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(425),
  [711] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(123),
  [714] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(120),
  [717] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(121),
  [720] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(119),
  [723] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(129),
  [726] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(123),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_pair_repeat1, 2), SHIFT_REPEAT(208),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_pair_repeat1, 2), SHIFT_REPEAT(200),
  [751] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_pair_repeat1, 2), SHIFT_REPEAT(425),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_pair_repeat1, 2), SHIFT_REPEAT(123),
  [757] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_pair_repeat1, 2), SHIFT_REPEAT(120),
  [760] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_pair_repeat1, 2), SHIFT_REPEAT(121),
  [763] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_pair_repeat1, 2), SHIFT_REPEAT(119),
  [766] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_pair_repeat1, 2), SHIFT_REPEAT(129),
  [769] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_pair_repeat1, 2), SHIFT_REPEAT(123),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [784] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(200),
  [787] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(425),
  [790] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(123),
  [793] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(120),
  [796] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(121),
  [799] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(119),
  [802] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(129),
  [805] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(123),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 6),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 6),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 22),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 22),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, .production_id = 23),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, .production_id = 23),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, .production_id = 7),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, .production_id = 7),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 8),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 8),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3, .production_id = 23),
  [910] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3, .production_id = 23),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_selector_list, 1),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 25),
  [940] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 25),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [944] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 24),
  [948] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 24),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [952] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [956] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, .production_id = 18),
  [960] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, .production_id = 18),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 9),
  [964] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 9),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 33),
  [968] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 33),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [972] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, .production_id = 34),
  [978] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, .production_id = 34),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 16),
  [982] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 16),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [988] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, .production_id = 18),
  [992] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, .production_id = 18),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, .production_id = 34),
  [996] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, .production_id = 34),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_argument, 1, .production_id = 29),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [1010] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(212),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 43),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_argument, 3, .production_id = 45),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_css_selector_list_repeat1, 2),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [1089] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(469),
  [1092] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(410),
  [1095] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(422),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 5),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 42),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(330),
  [1155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(168),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_include_arguments_repeat1, 2), SHIFT_REPEAT(170),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_arguments_repeat1, 2),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 27),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_selector_list, 2),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2), SHIFT_REPEAT(27),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_css_selector_list_repeat1, 2), SHIFT_REPEAT(144),
  [1221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(406),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_arguments, 4, .production_id = 41),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_arguments, 3, .production_id = 35),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_pair, 5, .production_id = 38),
  [1248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [1250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 1, .production_id = 12),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3, .production_id = 36),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4, .production_id = 44),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1320] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 1),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_scss_external_scanner_create(void);
void tree_sitter_scss_external_scanner_destroy(void *);
bool tree_sitter_scss_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_scss_external_scanner_serialize(void *, char *);
void tree_sitter_scss_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_scss(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_scss_external_scanner_create,
      tree_sitter_scss_external_scanner_destroy,
      tree_sitter_scss_external_scanner_scan,
      tree_sitter_scss_external_scanner_serialize,
      tree_sitter_scss_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
