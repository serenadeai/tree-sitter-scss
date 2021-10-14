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
#define STATE_COUNT 478
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 162
#define ALIAS_COUNT 19
#define TOKEN_COUNT 80
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 45

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
  [aux_sym_keyframes_statement_token1] = "at_keyword",
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
  [sym_include_arguments] = "arguments",
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
  [aux_sym_keyframes_statement_token1] = sym_at_keyword,
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
  [sym_include_arguments] = sym_arguments,
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
    .visible = true,
    .named = true,
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
  field_css_selector = 2,
  field_else_clause_optional = 3,
  field_else_if_clause_list = 4,
  field_key_value_pair = 5,
  field_key_value_pair_key = 6,
  field_key_value_pair_value = 7,
  field_parameter_list = 8,
  field_statement = 9,
  field_statement_list = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument_list] = "argument_list",
  [field_css_selector] = "css_selector",
  [field_else_clause_optional] = "else_clause_optional",
  [field_else_if_clause_list] = "else_if_clause_list",
  [field_key_value_pair] = "key_value_pair",
  [field_key_value_pair_key] = "key_value_pair_key",
  [field_key_value_pair_value] = "key_value_pair_value",
  [field_parameter_list] = "parameter_list",
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
  [15] = {.index = 6, .length = 3},
  [18] = {.index = 9, .length = 2},
  [19] = {.index = 11, .length = 1},
  [20] = {.index = 12, .length = 2},
  [21] = {.index = 6, .length = 3},
  [22] = {.index = 6, .length = 3},
  [28] = {.index = 14, .length = 3},
  [29] = {.index = 17, .length = 1},
  [30] = {.index = 18, .length = 4},
  [32] = {.index = 22, .length = 1},
  [33] = {.index = 23, .length = 1},
  [35] = {.index = 24, .length = 4},
  [36] = {.index = 28, .length = 2},
  [38] = {.index = 30, .length = 2},
  [41] = {.index = 32, .length = 2},
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
    {field_css_selector, 0},
    {field_css_selector, 1},
    {field_css_selector, 2},
  [9] =
    {field_key_value_pair_key, 0},
    {field_key_value_pair_value, 2},
  [11] =
    {field_statement, 0},
  [12] =
    {field_else_clause_optional, 2},
    {field_else_if_clause_list, 1},
  [14] =
    {field_key_value_pair_key, 0},
    {field_key_value_pair_value, 2},
    {field_key_value_pair_value, 3},
  [17] =
    {field_statement_list, 1},
  [18] =
    {field_css_selector, 0},
    {field_css_selector, 1},
    {field_css_selector, 2},
    {field_css_selector, 3},
  [22] =
    {field_argument_list, 1},
  [23] =
    {field_parameter_list, 1},
  [24] =
    {field_key_value_pair_key, 0},
    {field_key_value_pair_value, 2},
    {field_key_value_pair_value, 3},
    {field_key_value_pair_value, 4},
  [28] =
    {field_statement_list, 1},
    {field_statement_list, 2},
  [30] =
    {field_argument_list, 1},
    {field_argument_list, 2},
  [32] =
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
    [1] = alias_sym_class_name,
  },
  [16] = {
    [1] = alias_sym_condition,
  },
  [17] = {
    [1] = alias_sym_attribute_name,
  },
  [21] = {
    [2] = alias_sym_class_name,
  },
  [23] = {
    [2] = alias_sym_tag_name,
  },
  [24] = {
    [2] = alias_sym_id_name,
  },
  [25] = {
    [1] = alias_sym_namespace_name,
  },
  [26] = {
    [0] = alias_sym_variable_name,
  },
  [27] = {
    [0] = alias_sym_argument_value,
  },
  [30] = {
    [2] = alias_sym_class_name,
  },
  [31] = {
    [2] = alias_sym_attribute_name,
  },
  [34] = {
    [1] = alias_sym_value,
  },
  [37] = {
    [2] = alias_sym_condition,
  },
  [39] = {
    [1] = alias_sym_feature_name,
  },
  [40] = {
    [0] = alias_sym_variable_name,
    [2] = alias_sym_default_value,
  },
  [42] = {
    [0] = alias_sym_argument_name,
    [2] = alias_sym_argument_value,
  },
  [43] = {
    [1] = alias_sym_key,
    [3] = alias_sym_value,
  },
  [44] = {
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
  [15] = {.lex_state = 105},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 105},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 105},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 105},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 105},
  [27] = {.lex_state = 105},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 105},
  [30] = {.lex_state = 20},
  [31] = {.lex_state = 105},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 5},
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
  [48] = {.lex_state = 103},
  [49] = {.lex_state = 18},
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
  [60] = {.lex_state = 18},
  [61] = {.lex_state = 18},
  [62] = {.lex_state = 18},
  [63] = {.lex_state = 18},
  [64] = {.lex_state = 18},
  [65] = {.lex_state = 103},
  [66] = {.lex_state = 103},
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
  [78] = {.lex_state = 103},
  [79] = {.lex_state = 18},
  [80] = {.lex_state = 18},
  [81] = {.lex_state = 103},
  [82] = {.lex_state = 103},
  [83] = {.lex_state = 103},
  [84] = {.lex_state = 103},
  [85] = {.lex_state = 18},
  [86] = {.lex_state = 18},
  [87] = {.lex_state = 18},
  [88] = {.lex_state = 18},
  [89] = {.lex_state = 103},
  [90] = {.lex_state = 18},
  [91] = {.lex_state = 103},
  [92] = {.lex_state = 18},
  [93] = {.lex_state = 103},
  [94] = {.lex_state = 103},
  [95] = {.lex_state = 18},
  [96] = {.lex_state = 103},
  [97] = {.lex_state = 18},
  [98] = {.lex_state = 18},
  [99] = {.lex_state = 103},
  [100] = {.lex_state = 103},
  [101] = {.lex_state = 103},
  [102] = {.lex_state = 18},
  [103] = {.lex_state = 18},
  [104] = {.lex_state = 18},
  [105] = {.lex_state = 18},
  [106] = {.lex_state = 103},
  [107] = {.lex_state = 103},
  [108] = {.lex_state = 18},
  [109] = {.lex_state = 18},
  [110] = {.lex_state = 103},
  [111] = {.lex_state = 18},
  [112] = {.lex_state = 103},
  [113] = {.lex_state = 103},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 2, .external_lex_state = 1},
  [116] = {.lex_state = 3, .external_lex_state = 1},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
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
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 6, .external_lex_state = 1},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 21},
  [143] = {.lex_state = 21},
  [144] = {.lex_state = 21},
  [145] = {.lex_state = 21},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 21},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 21},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 6, .external_lex_state = 1},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 9},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 10},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 10},
  [168] = {.lex_state = 14},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 10},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 10},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 5},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 14},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 6},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 6},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 5},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 5},
  [201] = {.lex_state = 5},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 5},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 5},
  [211] = {.lex_state = 103, .external_lex_state = 1},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 103, .external_lex_state = 1},
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
  [227] = {.lex_state = 5},
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
  [238] = {.lex_state = 103, .external_lex_state = 1},
  [239] = {.lex_state = 24},
  [240] = {.lex_state = 21, .external_lex_state = 1},
  [241] = {.lex_state = 24},
  [242] = {.lex_state = 12},
  [243] = {.lex_state = 103, .external_lex_state = 1},
  [244] = {.lex_state = 103, .external_lex_state = 1},
  [245] = {.lex_state = 103, .external_lex_state = 1},
  [246] = {.lex_state = 103, .external_lex_state = 1},
  [247] = {.lex_state = 103, .external_lex_state = 1},
  [248] = {.lex_state = 103, .external_lex_state = 1},
  [249] = {.lex_state = 103, .external_lex_state = 1},
  [250] = {.lex_state = 103, .external_lex_state = 1},
  [251] = {.lex_state = 103, .external_lex_state = 1},
  [252] = {.lex_state = 103, .external_lex_state = 1},
  [253] = {.lex_state = 12},
  [254] = {.lex_state = 12},
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
  [266] = {.lex_state = 103, .external_lex_state = 1},
  [267] = {.lex_state = 103, .external_lex_state = 1},
  [268] = {.lex_state = 12},
  [269] = {.lex_state = 12},
  [270] = {.lex_state = 12},
  [271] = {.lex_state = 6},
  [272] = {.lex_state = 12},
  [273] = {.lex_state = 103, .external_lex_state = 1},
  [274] = {.lex_state = 6},
  [275] = {.lex_state = 6},
  [276] = {.lex_state = 6},
  [277] = {.lex_state = 6},
  [278] = {.lex_state = 12},
  [279] = {.lex_state = 6},
  [280] = {.lex_state = 16},
  [281] = {.lex_state = 103, .external_lex_state = 1},
  [282] = {.lex_state = 6},
  [283] = {.lex_state = 12},
  [284] = {.lex_state = 6},
  [285] = {.lex_state = 12},
  [286] = {.lex_state = 6},
  [287] = {.lex_state = 6},
  [288] = {.lex_state = 6},
  [289] = {.lex_state = 103, .external_lex_state = 1},
  [290] = {.lex_state = 6},
  [291] = {.lex_state = 6},
  [292] = {.lex_state = 6},
  [293] = {.lex_state = 12},
  [294] = {.lex_state = 12},
  [295] = {.lex_state = 12},
  [296] = {.lex_state = 12},
  [297] = {.lex_state = 12},
  [298] = {.lex_state = 16},
  [299] = {.lex_state = 12},
  [300] = {.lex_state = 6},
  [301] = {.lex_state = 6},
  [302] = {.lex_state = 6},
  [303] = {.lex_state = 24},
  [304] = {.lex_state = 6},
  [305] = {.lex_state = 24},
  [306] = {.lex_state = 24},
  [307] = {.lex_state = 6},
  [308] = {.lex_state = 24},
  [309] = {.lex_state = 24},
  [310] = {.lex_state = 6},
  [311] = {.lex_state = 24},
  [312] = {.lex_state = 6},
  [313] = {.lex_state = 24},
  [314] = {.lex_state = 103, .external_lex_state = 1},
  [315] = {.lex_state = 6},
  [316] = {.lex_state = 6},
  [317] = {.lex_state = 6},
  [318] = {.lex_state = 6},
  [319] = {.lex_state = 6},
  [320] = {.lex_state = 6},
  [321] = {.lex_state = 6},
  [322] = {.lex_state = 6},
  [323] = {.lex_state = 6},
  [324] = {.lex_state = 6},
  [325] = {.lex_state = 6},
  [326] = {.lex_state = 6},
  [327] = {.lex_state = 103, .external_lex_state = 1},
  [328] = {.lex_state = 24},
  [329] = {.lex_state = 6},
  [330] = {.lex_state = 103, .external_lex_state = 1},
  [331] = {.lex_state = 91},
  [332] = {.lex_state = 91},
  [333] = {.lex_state = 91},
  [334] = {.lex_state = 91},
  [335] = {.lex_state = 91},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 24},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 24},
  [340] = {.lex_state = 6},
  [341] = {.lex_state = 6},
  [342] = {.lex_state = 6},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 6},
  [345] = {.lex_state = 6},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 6},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 21},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 21},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 91},
  [358] = {.lex_state = 18},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 103},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 18},
  [364] = {.lex_state = 103},
  [365] = {.lex_state = 103},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 91},
  [368] = {.lex_state = 103},
  [369] = {.lex_state = 18},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 91},
  [372] = {.lex_state = 18},
  [373] = {.lex_state = 91},
  [374] = {.lex_state = 103},
  [375] = {.lex_state = 6},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 103},
  [378] = {.lex_state = 103},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 18},
  [381] = {.lex_state = 18},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 6},
  [384] = {.lex_state = 103},
  [385] = {.lex_state = 103},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 21},
  [388] = {.lex_state = 103},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 21},
  [394] = {.lex_state = 103},
  [395] = {.lex_state = 18},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 18},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 103},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 103},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 103},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 25},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 14},
  [418] = {.lex_state = 25},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 21},
  [422] = {.lex_state = 103},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 21},
  [425] = {.lex_state = 6},
  [426] = {.lex_state = 21},
  [427] = {.lex_state = 21},
  [428] = {.lex_state = 21},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 21},
  [431] = {.lex_state = 21},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 21},
  [434] = {.lex_state = 6},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 21},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 21},
  [443] = {.lex_state = 18},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 21},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 103},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 21},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 21},
  [454] = {.lex_state = 21},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 21},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 6},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 6},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 21},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 21},
  [470] = {.lex_state = 21},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 103},
  [473] = {.lex_state = 103},
  [474] = {.lex_state = 103},
  [475] = {.lex_state = 21},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 103},
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
    [sym_program] = STATE(456),
    [sym_statement] = STATE(13),
    [sym_import_statement] = STATE(42),
    [sym_media_statement] = STATE(42),
    [sym_charset_statement] = STATE(42),
    [sym_namespace_statement] = STATE(42),
    [sym_keyframes_statement] = STATE(42),
    [sym_supports_statement] = STATE(42),
    [sym_at_rule] = STATE(42),
    [sym_use_statement] = STATE(42),
    [sym_forward_statement] = STATE(42),
    [sym_css_mixin] = STATE(42),
    [sym_css_include] = STATE(42),
    [sym_placeholder] = STATE(42),
    [sym_if] = STATE(42),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(42),
    [sym_for_statement] = STATE(42),
    [sym_while_statement] = STATE(42),
    [sym_function_statement] = STATE(42),
    [sym_error_statement] = STATE(42),
    [sym_warn_statement] = STATE(42),
    [sym_debug_statement] = STATE(42),
    [sym_css_ruleset] = STATE(42),
    [sym_css_selector_list] = STATE(402),
    [sym__selector] = STATE(257),
    [sym_universal_selector] = STATE(257),
    [sym_class_selector] = STATE(257),
    [sym_pseudo_class_selector] = STATE(257),
    [sym_pseudo_element_selector] = STATE(257),
    [sym_id_selector] = STATE(257),
    [sym_attribute_selector] = STATE(257),
    [sym_child_selector] = STATE(257),
    [sym_descendant_selector] = STATE(257),
    [sym_sibling_selector] = STATE(257),
    [sym_adjacent_sibling_selector] = STATE(257),
    [sym_declaration] = STATE(42),
    [sym_declaration_pair] = STATE(460),
    [aux_sym_program_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_keyframes_statement_token1] = ACTIONS(15),
    [anon_sym_ATsupports] = ACTIONS(17),
    [anon_sym_ATuse] = ACTIONS(19),
    [anon_sym_ATforward] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(25),
    [anon_sym_ATinclude] = ACTIONS(27),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_ATif] = ACTIONS(31),
    [anon_sym_ATeach] = ACTIONS(33),
    [anon_sym_ATfor] = ACTIONS(35),
    [anon_sym_ATwhile] = ACTIONS(37),
    [anon_sym_ATfunction] = ACTIONS(39),
    [anon_sym_ATerror] = ACTIONS(41),
    [anon_sym_ATwarn] = ACTIONS(43),
    [anon_sym_ATdebug] = ACTIONS(45),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(59),
    [sym_identifier] = ACTIONS(61),
    [sym_variable_identifier] = ACTIONS(63),
    [sym_at_keyword] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_import_statement] = STATE(60),
    [sym_media_statement] = STATE(60),
    [sym_charset_statement] = STATE(60),
    [sym_namespace_statement] = STATE(60),
    [sym_keyframes_statement] = STATE(60),
    [sym_supports_statement] = STATE(60),
    [sym_at_rule] = STATE(60),
    [sym_css_mixin] = STATE(60),
    [sym_css_include] = STATE(60),
    [sym_extend_statement] = STATE(60),
    [sym_if] = STATE(60),
    [sym_if_clause] = STATE(18),
    [sym_each_statement] = STATE(60),
    [sym_for_statement] = STATE(60),
    [sym_while_statement] = STATE(60),
    [sym_function_statement] = STATE(60),
    [sym_return_statement] = STATE(60),
    [sym_at_root_statement] = STATE(60),
    [sym_error_statement] = STATE(60),
    [sym_warn_statement] = STATE(60),
    [sym_debug_statement] = STATE(60),
    [sym_css_ruleset] = STATE(60),
    [sym_css_selector_list] = STATE(404),
    [sym_block_item] = STATE(10),
    [sym__selector] = STATE(257),
    [sym_universal_selector] = STATE(257),
    [sym_class_selector] = STATE(257),
    [sym_pseudo_class_selector] = STATE(257),
    [sym_pseudo_element_selector] = STATE(257),
    [sym_id_selector] = STATE(257),
    [sym_attribute_selector] = STATE(257),
    [sym_child_selector] = STATE(257),
    [sym_descendant_selector] = STATE(257),
    [sym_sibling_selector] = STATE(257),
    [sym_adjacent_sibling_selector] = STATE(257),
    [sym_declaration] = STATE(60),
    [sym_declaration_pair] = STATE(419),
    [sym_last_declaration] = STATE(423),
    [aux_sym_enclosed_body_repeat1] = STATE(10),
    [anon_sym_ATimport] = ACTIONS(67),
    [anon_sym_ATmedia] = ACTIONS(69),
    [anon_sym_ATcharset] = ACTIONS(71),
    [anon_sym_ATnamespace] = ACTIONS(73),
    [anon_sym_ATkeyframes] = ACTIONS(75),
    [aux_sym_keyframes_statement_token1] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_ATsupports] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(81),
    [anon_sym_ATinclude] = ACTIONS(83),
    [anon_sym_ATextend] = ACTIONS(85),
    [anon_sym_ATif] = ACTIONS(87),
    [anon_sym_ATeach] = ACTIONS(89),
    [anon_sym_ATfor] = ACTIONS(91),
    [anon_sym_ATwhile] = ACTIONS(93),
    [anon_sym_ATfunction] = ACTIONS(95),
    [anon_sym_ATreturn] = ACTIONS(97),
    [anon_sym_ATat_DASHroot] = ACTIONS(99),
    [anon_sym_ATerror] = ACTIONS(101),
    [anon_sym_ATwarn] = ACTIONS(103),
    [anon_sym_ATdebug] = ACTIONS(105),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(59),
    [sym_identifier] = ACTIONS(61),
    [sym_variable_identifier] = ACTIONS(63),
    [sym_at_keyword] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_import_statement] = STATE(60),
    [sym_media_statement] = STATE(60),
    [sym_charset_statement] = STATE(60),
    [sym_namespace_statement] = STATE(60),
    [sym_keyframes_statement] = STATE(60),
    [sym_supports_statement] = STATE(60),
    [sym_at_rule] = STATE(60),
    [sym_css_mixin] = STATE(60),
    [sym_css_include] = STATE(60),
    [sym_extend_statement] = STATE(60),
    [sym_if] = STATE(60),
    [sym_if_clause] = STATE(18),
    [sym_each_statement] = STATE(60),
    [sym_for_statement] = STATE(60),
    [sym_while_statement] = STATE(60),
    [sym_function_statement] = STATE(60),
    [sym_return_statement] = STATE(60),
    [sym_at_root_statement] = STATE(60),
    [sym_error_statement] = STATE(60),
    [sym_warn_statement] = STATE(60),
    [sym_debug_statement] = STATE(60),
    [sym_css_ruleset] = STATE(60),
    [sym_css_selector_list] = STATE(404),
    [sym_block_item] = STATE(12),
    [sym__selector] = STATE(257),
    [sym_universal_selector] = STATE(257),
    [sym_class_selector] = STATE(257),
    [sym_pseudo_class_selector] = STATE(257),
    [sym_pseudo_element_selector] = STATE(257),
    [sym_id_selector] = STATE(257),
    [sym_attribute_selector] = STATE(257),
    [sym_child_selector] = STATE(257),
    [sym_descendant_selector] = STATE(257),
    [sym_sibling_selector] = STATE(257),
    [sym_adjacent_sibling_selector] = STATE(257),
    [sym_declaration] = STATE(60),
    [sym_declaration_pair] = STATE(419),
    [sym_last_declaration] = STATE(450),
    [aux_sym_enclosed_body_repeat1] = STATE(12),
    [anon_sym_ATimport] = ACTIONS(67),
    [anon_sym_ATmedia] = ACTIONS(69),
    [anon_sym_ATcharset] = ACTIONS(71),
    [anon_sym_ATnamespace] = ACTIONS(73),
    [anon_sym_ATkeyframes] = ACTIONS(75),
    [aux_sym_keyframes_statement_token1] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_ATsupports] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(81),
    [anon_sym_ATinclude] = ACTIONS(83),
    [anon_sym_ATextend] = ACTIONS(85),
    [anon_sym_ATif] = ACTIONS(87),
    [anon_sym_ATeach] = ACTIONS(89),
    [anon_sym_ATfor] = ACTIONS(91),
    [anon_sym_ATwhile] = ACTIONS(93),
    [anon_sym_ATfunction] = ACTIONS(95),
    [anon_sym_ATreturn] = ACTIONS(97),
    [anon_sym_ATat_DASHroot] = ACTIONS(99),
    [anon_sym_ATerror] = ACTIONS(101),
    [anon_sym_ATwarn] = ACTIONS(103),
    [anon_sym_ATdebug] = ACTIONS(105),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(59),
    [sym_identifier] = ACTIONS(61),
    [sym_variable_identifier] = ACTIONS(63),
    [sym_at_keyword] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_import_statement] = STATE(60),
    [sym_media_statement] = STATE(60),
    [sym_charset_statement] = STATE(60),
    [sym_namespace_statement] = STATE(60),
    [sym_keyframes_statement] = STATE(60),
    [sym_supports_statement] = STATE(60),
    [sym_at_rule] = STATE(60),
    [sym_css_mixin] = STATE(60),
    [sym_css_include] = STATE(60),
    [sym_extend_statement] = STATE(60),
    [sym_if] = STATE(60),
    [sym_if_clause] = STATE(18),
    [sym_each_statement] = STATE(60),
    [sym_for_statement] = STATE(60),
    [sym_while_statement] = STATE(60),
    [sym_function_statement] = STATE(60),
    [sym_return_statement] = STATE(60),
    [sym_at_root_statement] = STATE(60),
    [sym_error_statement] = STATE(60),
    [sym_warn_statement] = STATE(60),
    [sym_debug_statement] = STATE(60),
    [sym_css_ruleset] = STATE(60),
    [sym_css_selector_list] = STATE(404),
    [sym_block_item] = STATE(12),
    [sym__selector] = STATE(257),
    [sym_universal_selector] = STATE(257),
    [sym_class_selector] = STATE(257),
    [sym_pseudo_class_selector] = STATE(257),
    [sym_pseudo_element_selector] = STATE(257),
    [sym_id_selector] = STATE(257),
    [sym_attribute_selector] = STATE(257),
    [sym_child_selector] = STATE(257),
    [sym_descendant_selector] = STATE(257),
    [sym_sibling_selector] = STATE(257),
    [sym_adjacent_sibling_selector] = STATE(257),
    [sym_declaration] = STATE(60),
    [sym_declaration_pair] = STATE(419),
    [sym_last_declaration] = STATE(441),
    [aux_sym_enclosed_body_repeat1] = STATE(12),
    [anon_sym_ATimport] = ACTIONS(67),
    [anon_sym_ATmedia] = ACTIONS(69),
    [anon_sym_ATcharset] = ACTIONS(71),
    [anon_sym_ATnamespace] = ACTIONS(73),
    [anon_sym_ATkeyframes] = ACTIONS(75),
    [aux_sym_keyframes_statement_token1] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_ATsupports] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(81),
    [anon_sym_ATinclude] = ACTIONS(83),
    [anon_sym_ATextend] = ACTIONS(85),
    [anon_sym_ATif] = ACTIONS(87),
    [anon_sym_ATeach] = ACTIONS(89),
    [anon_sym_ATfor] = ACTIONS(91),
    [anon_sym_ATwhile] = ACTIONS(93),
    [anon_sym_ATfunction] = ACTIONS(95),
    [anon_sym_ATreturn] = ACTIONS(97),
    [anon_sym_ATat_DASHroot] = ACTIONS(99),
    [anon_sym_ATerror] = ACTIONS(101),
    [anon_sym_ATwarn] = ACTIONS(103),
    [anon_sym_ATdebug] = ACTIONS(105),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(59),
    [sym_identifier] = ACTIONS(61),
    [sym_variable_identifier] = ACTIONS(63),
    [sym_at_keyword] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_import_statement] = STATE(60),
    [sym_media_statement] = STATE(60),
    [sym_charset_statement] = STATE(60),
    [sym_namespace_statement] = STATE(60),
    [sym_keyframes_statement] = STATE(60),
    [sym_supports_statement] = STATE(60),
    [sym_at_rule] = STATE(60),
    [sym_css_mixin] = STATE(60),
    [sym_css_include] = STATE(60),
    [sym_extend_statement] = STATE(60),
    [sym_if] = STATE(60),
    [sym_if_clause] = STATE(18),
    [sym_each_statement] = STATE(60),
    [sym_for_statement] = STATE(60),
    [sym_while_statement] = STATE(60),
    [sym_function_statement] = STATE(60),
    [sym_return_statement] = STATE(60),
    [sym_at_root_statement] = STATE(60),
    [sym_error_statement] = STATE(60),
    [sym_warn_statement] = STATE(60),
    [sym_debug_statement] = STATE(60),
    [sym_css_ruleset] = STATE(60),
    [sym_css_selector_list] = STATE(404),
    [sym_block_item] = STATE(4),
    [sym__selector] = STATE(257),
    [sym_universal_selector] = STATE(257),
    [sym_class_selector] = STATE(257),
    [sym_pseudo_class_selector] = STATE(257),
    [sym_pseudo_element_selector] = STATE(257),
    [sym_id_selector] = STATE(257),
    [sym_attribute_selector] = STATE(257),
    [sym_child_selector] = STATE(257),
    [sym_descendant_selector] = STATE(257),
    [sym_sibling_selector] = STATE(257),
    [sym_adjacent_sibling_selector] = STATE(257),
    [sym_declaration] = STATE(60),
    [sym_declaration_pair] = STATE(419),
    [sym_last_declaration] = STATE(438),
    [aux_sym_enclosed_body_repeat1] = STATE(4),
    [anon_sym_ATimport] = ACTIONS(67),
    [anon_sym_ATmedia] = ACTIONS(69),
    [anon_sym_ATcharset] = ACTIONS(71),
    [anon_sym_ATnamespace] = ACTIONS(73),
    [anon_sym_ATkeyframes] = ACTIONS(75),
    [aux_sym_keyframes_statement_token1] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_ATsupports] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(81),
    [anon_sym_ATinclude] = ACTIONS(83),
    [anon_sym_ATextend] = ACTIONS(85),
    [anon_sym_ATif] = ACTIONS(87),
    [anon_sym_ATeach] = ACTIONS(89),
    [anon_sym_ATfor] = ACTIONS(91),
    [anon_sym_ATwhile] = ACTIONS(93),
    [anon_sym_ATfunction] = ACTIONS(95),
    [anon_sym_ATreturn] = ACTIONS(97),
    [anon_sym_ATat_DASHroot] = ACTIONS(99),
    [anon_sym_ATerror] = ACTIONS(101),
    [anon_sym_ATwarn] = ACTIONS(103),
    [anon_sym_ATdebug] = ACTIONS(105),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(59),
    [sym_identifier] = ACTIONS(61),
    [sym_variable_identifier] = ACTIONS(63),
    [sym_at_keyword] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_import_statement] = STATE(60),
    [sym_media_statement] = STATE(60),
    [sym_charset_statement] = STATE(60),
    [sym_namespace_statement] = STATE(60),
    [sym_keyframes_statement] = STATE(60),
    [sym_supports_statement] = STATE(60),
    [sym_at_rule] = STATE(60),
    [sym_css_mixin] = STATE(60),
    [sym_css_include] = STATE(60),
    [sym_extend_statement] = STATE(60),
    [sym_if] = STATE(60),
    [sym_if_clause] = STATE(18),
    [sym_each_statement] = STATE(60),
    [sym_for_statement] = STATE(60),
    [sym_while_statement] = STATE(60),
    [sym_function_statement] = STATE(60),
    [sym_return_statement] = STATE(60),
    [sym_at_root_statement] = STATE(60),
    [sym_error_statement] = STATE(60),
    [sym_warn_statement] = STATE(60),
    [sym_debug_statement] = STATE(60),
    [sym_css_ruleset] = STATE(60),
    [sym_css_selector_list] = STATE(404),
    [sym_block_item] = STATE(12),
    [sym__selector] = STATE(257),
    [sym_universal_selector] = STATE(257),
    [sym_class_selector] = STATE(257),
    [sym_pseudo_class_selector] = STATE(257),
    [sym_pseudo_element_selector] = STATE(257),
    [sym_id_selector] = STATE(257),
    [sym_attribute_selector] = STATE(257),
    [sym_child_selector] = STATE(257),
    [sym_descendant_selector] = STATE(257),
    [sym_sibling_selector] = STATE(257),
    [sym_adjacent_sibling_selector] = STATE(257),
    [sym_declaration] = STATE(60),
    [sym_declaration_pair] = STATE(419),
    [sym_last_declaration] = STATE(446),
    [aux_sym_enclosed_body_repeat1] = STATE(12),
    [anon_sym_ATimport] = ACTIONS(67),
    [anon_sym_ATmedia] = ACTIONS(69),
    [anon_sym_ATcharset] = ACTIONS(71),
    [anon_sym_ATnamespace] = ACTIONS(73),
    [anon_sym_ATkeyframes] = ACTIONS(75),
    [aux_sym_keyframes_statement_token1] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_ATsupports] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(81),
    [anon_sym_ATinclude] = ACTIONS(83),
    [anon_sym_ATextend] = ACTIONS(85),
    [anon_sym_ATif] = ACTIONS(87),
    [anon_sym_ATeach] = ACTIONS(89),
    [anon_sym_ATfor] = ACTIONS(91),
    [anon_sym_ATwhile] = ACTIONS(93),
    [anon_sym_ATfunction] = ACTIONS(95),
    [anon_sym_ATreturn] = ACTIONS(97),
    [anon_sym_ATat_DASHroot] = ACTIONS(99),
    [anon_sym_ATerror] = ACTIONS(101),
    [anon_sym_ATwarn] = ACTIONS(103),
    [anon_sym_ATdebug] = ACTIONS(105),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(59),
    [sym_identifier] = ACTIONS(61),
    [sym_variable_identifier] = ACTIONS(63),
    [sym_at_keyword] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_import_statement] = STATE(60),
    [sym_media_statement] = STATE(60),
    [sym_charset_statement] = STATE(60),
    [sym_namespace_statement] = STATE(60),
    [sym_keyframes_statement] = STATE(60),
    [sym_supports_statement] = STATE(60),
    [sym_at_rule] = STATE(60),
    [sym_css_mixin] = STATE(60),
    [sym_css_include] = STATE(60),
    [sym_extend_statement] = STATE(60),
    [sym_if] = STATE(60),
    [sym_if_clause] = STATE(18),
    [sym_each_statement] = STATE(60),
    [sym_for_statement] = STATE(60),
    [sym_while_statement] = STATE(60),
    [sym_function_statement] = STATE(60),
    [sym_return_statement] = STATE(60),
    [sym_at_root_statement] = STATE(60),
    [sym_error_statement] = STATE(60),
    [sym_warn_statement] = STATE(60),
    [sym_debug_statement] = STATE(60),
    [sym_css_ruleset] = STATE(60),
    [sym_css_selector_list] = STATE(404),
    [sym_block_item] = STATE(12),
    [sym__selector] = STATE(257),
    [sym_universal_selector] = STATE(257),
    [sym_class_selector] = STATE(257),
    [sym_pseudo_class_selector] = STATE(257),
    [sym_pseudo_element_selector] = STATE(257),
    [sym_id_selector] = STATE(257),
    [sym_attribute_selector] = STATE(257),
    [sym_child_selector] = STATE(257),
    [sym_descendant_selector] = STATE(257),
    [sym_sibling_selector] = STATE(257),
    [sym_adjacent_sibling_selector] = STATE(257),
    [sym_declaration] = STATE(60),
    [sym_declaration_pair] = STATE(419),
    [sym_last_declaration] = STATE(432),
    [aux_sym_enclosed_body_repeat1] = STATE(12),
    [anon_sym_ATimport] = ACTIONS(67),
    [anon_sym_ATmedia] = ACTIONS(69),
    [anon_sym_ATcharset] = ACTIONS(71),
    [anon_sym_ATnamespace] = ACTIONS(73),
    [anon_sym_ATkeyframes] = ACTIONS(75),
    [aux_sym_keyframes_statement_token1] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_ATsupports] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(81),
    [anon_sym_ATinclude] = ACTIONS(83),
    [anon_sym_ATextend] = ACTIONS(85),
    [anon_sym_ATif] = ACTIONS(87),
    [anon_sym_ATeach] = ACTIONS(89),
    [anon_sym_ATfor] = ACTIONS(91),
    [anon_sym_ATwhile] = ACTIONS(93),
    [anon_sym_ATfunction] = ACTIONS(95),
    [anon_sym_ATreturn] = ACTIONS(97),
    [anon_sym_ATat_DASHroot] = ACTIONS(99),
    [anon_sym_ATerror] = ACTIONS(101),
    [anon_sym_ATwarn] = ACTIONS(103),
    [anon_sym_ATdebug] = ACTIONS(105),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(59),
    [sym_identifier] = ACTIONS(61),
    [sym_variable_identifier] = ACTIONS(63),
    [sym_at_keyword] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_import_statement] = STATE(60),
    [sym_media_statement] = STATE(60),
    [sym_charset_statement] = STATE(60),
    [sym_namespace_statement] = STATE(60),
    [sym_keyframes_statement] = STATE(60),
    [sym_supports_statement] = STATE(60),
    [sym_at_rule] = STATE(60),
    [sym_css_mixin] = STATE(60),
    [sym_css_include] = STATE(60),
    [sym_extend_statement] = STATE(60),
    [sym_if] = STATE(60),
    [sym_if_clause] = STATE(18),
    [sym_each_statement] = STATE(60),
    [sym_for_statement] = STATE(60),
    [sym_while_statement] = STATE(60),
    [sym_function_statement] = STATE(60),
    [sym_return_statement] = STATE(60),
    [sym_at_root_statement] = STATE(60),
    [sym_error_statement] = STATE(60),
    [sym_warn_statement] = STATE(60),
    [sym_debug_statement] = STATE(60),
    [sym_css_ruleset] = STATE(60),
    [sym_css_selector_list] = STATE(404),
    [sym_block_item] = STATE(6),
    [sym__selector] = STATE(257),
    [sym_universal_selector] = STATE(257),
    [sym_class_selector] = STATE(257),
    [sym_pseudo_class_selector] = STATE(257),
    [sym_pseudo_element_selector] = STATE(257),
    [sym_id_selector] = STATE(257),
    [sym_attribute_selector] = STATE(257),
    [sym_child_selector] = STATE(257),
    [sym_descendant_selector] = STATE(257),
    [sym_sibling_selector] = STATE(257),
    [sym_adjacent_sibling_selector] = STATE(257),
    [sym_declaration] = STATE(60),
    [sym_declaration_pair] = STATE(419),
    [sym_last_declaration] = STATE(444),
    [aux_sym_enclosed_body_repeat1] = STATE(6),
    [anon_sym_ATimport] = ACTIONS(67),
    [anon_sym_ATmedia] = ACTIONS(69),
    [anon_sym_ATcharset] = ACTIONS(71),
    [anon_sym_ATnamespace] = ACTIONS(73),
    [anon_sym_ATkeyframes] = ACTIONS(75),
    [aux_sym_keyframes_statement_token1] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_ATsupports] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(81),
    [anon_sym_ATinclude] = ACTIONS(83),
    [anon_sym_ATextend] = ACTIONS(85),
    [anon_sym_ATif] = ACTIONS(87),
    [anon_sym_ATeach] = ACTIONS(89),
    [anon_sym_ATfor] = ACTIONS(91),
    [anon_sym_ATwhile] = ACTIONS(93),
    [anon_sym_ATfunction] = ACTIONS(95),
    [anon_sym_ATreturn] = ACTIONS(97),
    [anon_sym_ATat_DASHroot] = ACTIONS(99),
    [anon_sym_ATerror] = ACTIONS(101),
    [anon_sym_ATwarn] = ACTIONS(103),
    [anon_sym_ATdebug] = ACTIONS(105),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(59),
    [sym_identifier] = ACTIONS(61),
    [sym_variable_identifier] = ACTIONS(63),
    [sym_at_keyword] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_import_statement] = STATE(60),
    [sym_media_statement] = STATE(60),
    [sym_charset_statement] = STATE(60),
    [sym_namespace_statement] = STATE(60),
    [sym_keyframes_statement] = STATE(60),
    [sym_supports_statement] = STATE(60),
    [sym_at_rule] = STATE(60),
    [sym_css_mixin] = STATE(60),
    [sym_css_include] = STATE(60),
    [sym_extend_statement] = STATE(60),
    [sym_if] = STATE(60),
    [sym_if_clause] = STATE(18),
    [sym_each_statement] = STATE(60),
    [sym_for_statement] = STATE(60),
    [sym_while_statement] = STATE(60),
    [sym_function_statement] = STATE(60),
    [sym_return_statement] = STATE(60),
    [sym_at_root_statement] = STATE(60),
    [sym_error_statement] = STATE(60),
    [sym_warn_statement] = STATE(60),
    [sym_debug_statement] = STATE(60),
    [sym_css_ruleset] = STATE(60),
    [sym_css_selector_list] = STATE(404),
    [sym_block_item] = STATE(7),
    [sym__selector] = STATE(257),
    [sym_universal_selector] = STATE(257),
    [sym_class_selector] = STATE(257),
    [sym_pseudo_class_selector] = STATE(257),
    [sym_pseudo_element_selector] = STATE(257),
    [sym_id_selector] = STATE(257),
    [sym_attribute_selector] = STATE(257),
    [sym_child_selector] = STATE(257),
    [sym_descendant_selector] = STATE(257),
    [sym_sibling_selector] = STATE(257),
    [sym_adjacent_sibling_selector] = STATE(257),
    [sym_declaration] = STATE(60),
    [sym_declaration_pair] = STATE(419),
    [sym_last_declaration] = STATE(429),
    [aux_sym_enclosed_body_repeat1] = STATE(7),
    [anon_sym_ATimport] = ACTIONS(67),
    [anon_sym_ATmedia] = ACTIONS(69),
    [anon_sym_ATcharset] = ACTIONS(71),
    [anon_sym_ATnamespace] = ACTIONS(73),
    [anon_sym_ATkeyframes] = ACTIONS(75),
    [aux_sym_keyframes_statement_token1] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_ATsupports] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(81),
    [anon_sym_ATinclude] = ACTIONS(83),
    [anon_sym_ATextend] = ACTIONS(85),
    [anon_sym_ATif] = ACTIONS(87),
    [anon_sym_ATeach] = ACTIONS(89),
    [anon_sym_ATfor] = ACTIONS(91),
    [anon_sym_ATwhile] = ACTIONS(93),
    [anon_sym_ATfunction] = ACTIONS(95),
    [anon_sym_ATreturn] = ACTIONS(97),
    [anon_sym_ATat_DASHroot] = ACTIONS(99),
    [anon_sym_ATerror] = ACTIONS(101),
    [anon_sym_ATwarn] = ACTIONS(103),
    [anon_sym_ATdebug] = ACTIONS(105),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(59),
    [sym_identifier] = ACTIONS(61),
    [sym_variable_identifier] = ACTIONS(63),
    [sym_at_keyword] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_import_statement] = STATE(60),
    [sym_media_statement] = STATE(60),
    [sym_charset_statement] = STATE(60),
    [sym_namespace_statement] = STATE(60),
    [sym_keyframes_statement] = STATE(60),
    [sym_supports_statement] = STATE(60),
    [sym_at_rule] = STATE(60),
    [sym_css_mixin] = STATE(60),
    [sym_css_include] = STATE(60),
    [sym_extend_statement] = STATE(60),
    [sym_if] = STATE(60),
    [sym_if_clause] = STATE(18),
    [sym_each_statement] = STATE(60),
    [sym_for_statement] = STATE(60),
    [sym_while_statement] = STATE(60),
    [sym_function_statement] = STATE(60),
    [sym_return_statement] = STATE(60),
    [sym_at_root_statement] = STATE(60),
    [sym_error_statement] = STATE(60),
    [sym_warn_statement] = STATE(60),
    [sym_debug_statement] = STATE(60),
    [sym_css_ruleset] = STATE(60),
    [sym_css_selector_list] = STATE(404),
    [sym_block_item] = STATE(12),
    [sym__selector] = STATE(257),
    [sym_universal_selector] = STATE(257),
    [sym_class_selector] = STATE(257),
    [sym_pseudo_class_selector] = STATE(257),
    [sym_pseudo_element_selector] = STATE(257),
    [sym_id_selector] = STATE(257),
    [sym_attribute_selector] = STATE(257),
    [sym_child_selector] = STATE(257),
    [sym_descendant_selector] = STATE(257),
    [sym_sibling_selector] = STATE(257),
    [sym_adjacent_sibling_selector] = STATE(257),
    [sym_declaration] = STATE(60),
    [sym_declaration_pair] = STATE(419),
    [sym_last_declaration] = STATE(461),
    [aux_sym_enclosed_body_repeat1] = STATE(12),
    [anon_sym_ATimport] = ACTIONS(67),
    [anon_sym_ATmedia] = ACTIONS(69),
    [anon_sym_ATcharset] = ACTIONS(71),
    [anon_sym_ATnamespace] = ACTIONS(73),
    [anon_sym_ATkeyframes] = ACTIONS(75),
    [aux_sym_keyframes_statement_token1] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_ATsupports] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(81),
    [anon_sym_ATinclude] = ACTIONS(83),
    [anon_sym_ATextend] = ACTIONS(85),
    [anon_sym_ATif] = ACTIONS(87),
    [anon_sym_ATeach] = ACTIONS(89),
    [anon_sym_ATfor] = ACTIONS(91),
    [anon_sym_ATwhile] = ACTIONS(93),
    [anon_sym_ATfunction] = ACTIONS(95),
    [anon_sym_ATreturn] = ACTIONS(97),
    [anon_sym_ATat_DASHroot] = ACTIONS(99),
    [anon_sym_ATerror] = ACTIONS(101),
    [anon_sym_ATwarn] = ACTIONS(103),
    [anon_sym_ATdebug] = ACTIONS(105),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(59),
    [sym_identifier] = ACTIONS(61),
    [sym_variable_identifier] = ACTIONS(63),
    [sym_at_keyword] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_import_statement] = STATE(60),
    [sym_media_statement] = STATE(60),
    [sym_charset_statement] = STATE(60),
    [sym_namespace_statement] = STATE(60),
    [sym_keyframes_statement] = STATE(60),
    [sym_supports_statement] = STATE(60),
    [sym_at_rule] = STATE(60),
    [sym_css_mixin] = STATE(60),
    [sym_css_include] = STATE(60),
    [sym_extend_statement] = STATE(60),
    [sym_if] = STATE(60),
    [sym_if_clause] = STATE(18),
    [sym_each_statement] = STATE(60),
    [sym_for_statement] = STATE(60),
    [sym_while_statement] = STATE(60),
    [sym_function_statement] = STATE(60),
    [sym_return_statement] = STATE(60),
    [sym_at_root_statement] = STATE(60),
    [sym_error_statement] = STATE(60),
    [sym_warn_statement] = STATE(60),
    [sym_debug_statement] = STATE(60),
    [sym_css_ruleset] = STATE(60),
    [sym_css_selector_list] = STATE(404),
    [sym_block_item] = STATE(3),
    [sym__selector] = STATE(257),
    [sym_universal_selector] = STATE(257),
    [sym_class_selector] = STATE(257),
    [sym_pseudo_class_selector] = STATE(257),
    [sym_pseudo_element_selector] = STATE(257),
    [sym_id_selector] = STATE(257),
    [sym_attribute_selector] = STATE(257),
    [sym_child_selector] = STATE(257),
    [sym_descendant_selector] = STATE(257),
    [sym_sibling_selector] = STATE(257),
    [sym_adjacent_sibling_selector] = STATE(257),
    [sym_declaration] = STATE(60),
    [sym_declaration_pair] = STATE(419),
    [sym_last_declaration] = STATE(435),
    [aux_sym_enclosed_body_repeat1] = STATE(3),
    [anon_sym_ATimport] = ACTIONS(67),
    [anon_sym_ATmedia] = ACTIONS(69),
    [anon_sym_ATcharset] = ACTIONS(71),
    [anon_sym_ATnamespace] = ACTIONS(73),
    [anon_sym_ATkeyframes] = ACTIONS(75),
    [aux_sym_keyframes_statement_token1] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_ATsupports] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(81),
    [anon_sym_ATinclude] = ACTIONS(83),
    [anon_sym_ATextend] = ACTIONS(85),
    [anon_sym_ATif] = ACTIONS(87),
    [anon_sym_ATeach] = ACTIONS(89),
    [anon_sym_ATfor] = ACTIONS(91),
    [anon_sym_ATwhile] = ACTIONS(93),
    [anon_sym_ATfunction] = ACTIONS(95),
    [anon_sym_ATreturn] = ACTIONS(97),
    [anon_sym_ATat_DASHroot] = ACTIONS(99),
    [anon_sym_ATerror] = ACTIONS(101),
    [anon_sym_ATwarn] = ACTIONS(103),
    [anon_sym_ATdebug] = ACTIONS(105),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(59),
    [sym_identifier] = ACTIONS(61),
    [sym_variable_identifier] = ACTIONS(63),
    [sym_at_keyword] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_import_statement] = STATE(60),
    [sym_media_statement] = STATE(60),
    [sym_charset_statement] = STATE(60),
    [sym_namespace_statement] = STATE(60),
    [sym_keyframes_statement] = STATE(60),
    [sym_supports_statement] = STATE(60),
    [sym_at_rule] = STATE(60),
    [sym_css_mixin] = STATE(60),
    [sym_css_include] = STATE(60),
    [sym_extend_statement] = STATE(60),
    [sym_if] = STATE(60),
    [sym_if_clause] = STATE(18),
    [sym_each_statement] = STATE(60),
    [sym_for_statement] = STATE(60),
    [sym_while_statement] = STATE(60),
    [sym_function_statement] = STATE(60),
    [sym_return_statement] = STATE(60),
    [sym_at_root_statement] = STATE(60),
    [sym_error_statement] = STATE(60),
    [sym_warn_statement] = STATE(60),
    [sym_debug_statement] = STATE(60),
    [sym_css_ruleset] = STATE(60),
    [sym_css_selector_list] = STATE(404),
    [sym_block_item] = STATE(12),
    [sym__selector] = STATE(257),
    [sym_universal_selector] = STATE(257),
    [sym_class_selector] = STATE(257),
    [sym_pseudo_class_selector] = STATE(257),
    [sym_pseudo_element_selector] = STATE(257),
    [sym_id_selector] = STATE(257),
    [sym_attribute_selector] = STATE(257),
    [sym_child_selector] = STATE(257),
    [sym_descendant_selector] = STATE(257),
    [sym_sibling_selector] = STATE(257),
    [sym_adjacent_sibling_selector] = STATE(257),
    [sym_declaration] = STATE(60),
    [sym_declaration_pair] = STATE(464),
    [aux_sym_enclosed_body_repeat1] = STATE(12),
    [anon_sym_ATimport] = ACTIONS(127),
    [anon_sym_ATmedia] = ACTIONS(130),
    [anon_sym_ATcharset] = ACTIONS(133),
    [anon_sym_ATnamespace] = ACTIONS(136),
    [anon_sym_ATkeyframes] = ACTIONS(139),
    [aux_sym_keyframes_statement_token1] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(142),
    [anon_sym_ATsupports] = ACTIONS(144),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_ATmixin] = ACTIONS(150),
    [anon_sym_ATinclude] = ACTIONS(153),
    [anon_sym_ATextend] = ACTIONS(156),
    [anon_sym_ATif] = ACTIONS(159),
    [anon_sym_ATeach] = ACTIONS(162),
    [anon_sym_ATfor] = ACTIONS(165),
    [anon_sym_ATwhile] = ACTIONS(168),
    [anon_sym_ATfunction] = ACTIONS(171),
    [anon_sym_ATreturn] = ACTIONS(174),
    [anon_sym_ATat_DASHroot] = ACTIONS(177),
    [anon_sym_ATerror] = ACTIONS(180),
    [anon_sym_ATwarn] = ACTIONS(183),
    [anon_sym_ATdebug] = ACTIONS(186),
    [sym_nesting_selector] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_DOT] = ACTIONS(195),
    [anon_sym_COLON_COLON] = ACTIONS(198),
    [anon_sym_POUND] = ACTIONS(201),
    [anon_sym_LBRACK] = ACTIONS(204),
    [sym_string_value] = ACTIONS(207),
    [sym_identifier] = ACTIONS(210),
    [sym_variable_identifier] = ACTIONS(213),
    [sym_at_keyword] = ACTIONS(216),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_statement] = STATE(14),
    [sym_import_statement] = STATE(42),
    [sym_media_statement] = STATE(42),
    [sym_charset_statement] = STATE(42),
    [sym_namespace_statement] = STATE(42),
    [sym_keyframes_statement] = STATE(42),
    [sym_supports_statement] = STATE(42),
    [sym_at_rule] = STATE(42),
    [sym_use_statement] = STATE(42),
    [sym_forward_statement] = STATE(42),
    [sym_css_mixin] = STATE(42),
    [sym_css_include] = STATE(42),
    [sym_placeholder] = STATE(42),
    [sym_if] = STATE(42),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(42),
    [sym_for_statement] = STATE(42),
    [sym_while_statement] = STATE(42),
    [sym_function_statement] = STATE(42),
    [sym_error_statement] = STATE(42),
    [sym_warn_statement] = STATE(42),
    [sym_debug_statement] = STATE(42),
    [sym_css_ruleset] = STATE(42),
    [sym_css_selector_list] = STATE(402),
    [sym__selector] = STATE(257),
    [sym_universal_selector] = STATE(257),
    [sym_class_selector] = STATE(257),
    [sym_pseudo_class_selector] = STATE(257),
    [sym_pseudo_element_selector] = STATE(257),
    [sym_id_selector] = STATE(257),
    [sym_attribute_selector] = STATE(257),
    [sym_child_selector] = STATE(257),
    [sym_descendant_selector] = STATE(257),
    [sym_sibling_selector] = STATE(257),
    [sym_adjacent_sibling_selector] = STATE(257),
    [sym_declaration] = STATE(42),
    [sym_declaration_pair] = STATE(460),
    [aux_sym_program_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(219),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_keyframes_statement_token1] = ACTIONS(15),
    [anon_sym_ATsupports] = ACTIONS(17),
    [anon_sym_ATuse] = ACTIONS(19),
    [anon_sym_ATforward] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_ATmixin] = ACTIONS(25),
    [anon_sym_ATinclude] = ACTIONS(27),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_ATif] = ACTIONS(31),
    [anon_sym_ATeach] = ACTIONS(33),
    [anon_sym_ATfor] = ACTIONS(35),
    [anon_sym_ATwhile] = ACTIONS(37),
    [anon_sym_ATfunction] = ACTIONS(39),
    [anon_sym_ATerror] = ACTIONS(41),
    [anon_sym_ATwarn] = ACTIONS(43),
    [anon_sym_ATdebug] = ACTIONS(45),
    [sym_nesting_selector] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_POUND] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_string_value] = ACTIONS(59),
    [sym_identifier] = ACTIONS(61),
    [sym_variable_identifier] = ACTIONS(63),
    [sym_at_keyword] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_statement] = STATE(14),
    [sym_import_statement] = STATE(42),
    [sym_media_statement] = STATE(42),
    [sym_charset_statement] = STATE(42),
    [sym_namespace_statement] = STATE(42),
    [sym_keyframes_statement] = STATE(42),
    [sym_supports_statement] = STATE(42),
    [sym_at_rule] = STATE(42),
    [sym_use_statement] = STATE(42),
    [sym_forward_statement] = STATE(42),
    [sym_css_mixin] = STATE(42),
    [sym_css_include] = STATE(42),
    [sym_placeholder] = STATE(42),
    [sym_if] = STATE(42),
    [sym_if_clause] = STATE(15),
    [sym_each_statement] = STATE(42),
    [sym_for_statement] = STATE(42),
    [sym_while_statement] = STATE(42),
    [sym_function_statement] = STATE(42),
    [sym_error_statement] = STATE(42),
    [sym_warn_statement] = STATE(42),
    [sym_debug_statement] = STATE(42),
    [sym_css_ruleset] = STATE(42),
    [sym_css_selector_list] = STATE(402),
    [sym__selector] = STATE(257),
    [sym_universal_selector] = STATE(257),
    [sym_class_selector] = STATE(257),
    [sym_pseudo_class_selector] = STATE(257),
    [sym_pseudo_element_selector] = STATE(257),
    [sym_id_selector] = STATE(257),
    [sym_attribute_selector] = STATE(257),
    [sym_child_selector] = STATE(257),
    [sym_descendant_selector] = STATE(257),
    [sym_sibling_selector] = STATE(257),
    [sym_adjacent_sibling_selector] = STATE(257),
    [sym_declaration] = STATE(42),
    [sym_declaration_pair] = STATE(460),
    [aux_sym_program_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(221),
    [anon_sym_ATimport] = ACTIONS(223),
    [anon_sym_ATmedia] = ACTIONS(226),
    [anon_sym_ATcharset] = ACTIONS(229),
    [anon_sym_ATnamespace] = ACTIONS(232),
    [anon_sym_ATkeyframes] = ACTIONS(235),
    [aux_sym_keyframes_statement_token1] = ACTIONS(235),
    [anon_sym_ATsupports] = ACTIONS(238),
    [anon_sym_ATuse] = ACTIONS(241),
    [anon_sym_ATforward] = ACTIONS(244),
    [anon_sym_COLON] = ACTIONS(247),
    [anon_sym_ATmixin] = ACTIONS(250),
    [anon_sym_ATinclude] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(256),
    [anon_sym_ATif] = ACTIONS(259),
    [anon_sym_ATeach] = ACTIONS(262),
    [anon_sym_ATfor] = ACTIONS(265),
    [anon_sym_ATwhile] = ACTIONS(268),
    [anon_sym_ATfunction] = ACTIONS(271),
    [anon_sym_ATerror] = ACTIONS(274),
    [anon_sym_ATwarn] = ACTIONS(277),
    [anon_sym_ATdebug] = ACTIONS(280),
    [sym_nesting_selector] = ACTIONS(283),
    [anon_sym_STAR] = ACTIONS(286),
    [anon_sym_DOT] = ACTIONS(289),
    [anon_sym_COLON_COLON] = ACTIONS(292),
    [anon_sym_POUND] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(298),
    [sym_string_value] = ACTIONS(301),
    [sym_identifier] = ACTIONS(304),
    [sym_variable_identifier] = ACTIONS(307),
    [sym_at_keyword] = ACTIONS(310),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(317), 1,
      anon_sym_ATelse,
    STATE(81), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(17), 2,
      sym_else_if_clause,
      aux_sym_if_repeat1,
    ACTIONS(313), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(315), 23,
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
  [51] = 6,
    ACTIONS(323), 1,
      anon_sym_ATelse,
    STATE(74), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(19), 2,
      sym_else_if_clause,
      aux_sym_if_repeat1,
    ACTIONS(321), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(319), 24,
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
    ACTIONS(317), 1,
      anon_sym_ATelse,
    STATE(51), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(20), 2,
      sym_else_if_clause,
      aux_sym_if_repeat1,
    ACTIONS(321), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(319), 23,
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
    ACTIONS(323), 1,
      anon_sym_ATelse,
    STATE(98), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(16), 2,
      sym_else_if_clause,
      aux_sym_if_repeat1,
    ACTIONS(313), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(315), 24,
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
  [204] = 5,
    ACTIONS(329), 1,
      anon_sym_ATelse,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(19), 2,
      sym_else_if_clause,
      aux_sym_if_repeat1,
    ACTIONS(327), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(325), 24,
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
    ACTIONS(332), 1,
      anon_sym_ATelse,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(20), 2,
      sym_else_if_clause,
      aux_sym_if_repeat1,
    ACTIONS(327), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(325), 23,
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
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      sym_nesting_selector,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    ACTIONS(339), 1,
      anon_sym_DOT,
    ACTIONS(341), 1,
      anon_sym_POUND,
    ACTIONS(343), 1,
      sym_string_value,
    ACTIONS(345), 1,
      sym_integer,
    ACTIONS(347), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_identifier,
    ACTIONS(351), 1,
      sym_variable_identifier,
    ACTIONS(353), 1,
      sym_plain_value,
    STATE(141), 1,
      sym__value,
    STATE(153), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(128), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(262), 11,
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
    ACTIONS(355), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(357), 24,
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
  [419] = 19,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      sym_nesting_selector,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_DOT,
    ACTIONS(341), 1,
      anon_sym_POUND,
    ACTIONS(343), 1,
      sym_string_value,
    ACTIONS(345), 1,
      sym_integer,
    ACTIONS(347), 1,
      aux_sym_float_value_token1,
    ACTIONS(349), 1,
      sym_identifier,
    ACTIONS(351), 1,
      sym_variable_identifier,
    ACTIONS(353), 1,
      sym_plain_value,
    STATE(141), 1,
      sym__value,
    STATE(157), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(128), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(281), 11,
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
  [493] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(361), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(359), 25,
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
  [535] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(365), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(363), 25,
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
  [577] = 3,
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
  [619] = 3,
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
  [661] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(355), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(357), 25,
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
  [703] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(365), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(363), 24,
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
    ACTIONS(367), 8,
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
  [787] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(361), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(359), 24,
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
  [829] = 3,
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
  [871] = 19,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      sym_nesting_selector,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(339), 1,
      anon_sym_DOT,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      anon_sym_POUND,
    ACTIONS(379), 1,
      sym_string_value,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    STATE(326), 1,
      sym__value,
    STATE(327), 1,
      sym_class_selector,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(330), 10,
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
  [944] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(355), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(357), 23,
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
  [985] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(391), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(393), 23,
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
  [1026] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(395), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(397), 23,
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
  [1067] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(365), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(363), 24,
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
  [1108] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(399), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(401), 23,
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
  [1149] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(403), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(405), 23,
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
  [1190] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(407), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(409), 23,
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
  [1231] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(361), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(359), 23,
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
  [1272] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(411), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(413), 23,
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
  [1313] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(415), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(417), 23,
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
  [1354] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(419), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(421), 23,
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
  [1395] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(423), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(425), 23,
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
  [1436] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(427), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(429), 23,
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
  [1477] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(431), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(433), 23,
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
  [1518] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(435), 9,
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
  [1559] = 3,
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
    ACTIONS(439), 24,
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
  [1600] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(445), 8,
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
  [1641] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(447), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(449), 23,
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
  [1682] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(451), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(453), 23,
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
  [1723] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(457), 8,
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
  [1764] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(461), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(459), 24,
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
  [1805] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(465), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(463), 24,
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
  [1846] = 3,
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
    ACTIONS(469), 23,
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
  [1887] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(435), 8,
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
  [1928] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(431), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(433), 24,
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
  [1969] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(427), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(429), 24,
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
  [2010] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(473), 8,
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
  [2051] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(419), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(421), 24,
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
  [2092] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(399), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(401), 24,
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
  [2133] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(395), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(397), 24,
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
  [2174] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(391), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(393), 24,
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
  [2215] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(365), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(363), 23,
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
  [2256] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(465), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(463), 23,
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
  [2297] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(403), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(405), 24,
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
    ACTIONS(407), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(409), 24,
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
    ACTIONS(415), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(417), 24,
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
    ACTIONS(423), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(425), 24,
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
    ACTIONS(461), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(459), 23,
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
    ACTIONS(475), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(477), 23,
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
    ACTIONS(479), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(481), 23,
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
    ACTIONS(447), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(449), 24,
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
    ACTIONS(451), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(453), 24,
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
    ACTIONS(467), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(469), 24,
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
    ACTIONS(475), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(477), 24,
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
    ACTIONS(483), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(485), 23,
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
  [2789] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(479), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(481), 24,
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
    ACTIONS(489), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(487), 24,
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
  [2871] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(491), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(493), 23,
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
  [2912] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(495), 9,
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
  [2953] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(489), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(487), 23,
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
  [3035] = 3,
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
  [3076] = 3,
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
    ACTIONS(503), 24,
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
  [3117] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(509), 8,
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
  [3158] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(513), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(511), 24,
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
    ACTIONS(503), 23,
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
  [3240] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(355), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(357), 24,
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
    ACTIONS(517), 23,
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
    ACTIONS(521), 8,
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
  [3363] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(523), 9,
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
  [3404] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(509), 9,
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
  [3445] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(529), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(527), 24,
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
    ACTIONS(513), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(511), 23,
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
    ACTIONS(483), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(485), 24,
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
    ACTIONS(491), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(493), 24,
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
  [3650] = 3,
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
  [3691] = 3,
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
  [3732] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(545), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(543), 24,
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
  [3773] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(549), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(547), 24,
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
  [3814] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(553), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(551), 24,
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
    ACTIONS(539), 8,
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
  [3896] = 3,
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
  [3937] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(529), 9,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(527), 23,
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
    ACTIONS(361), 8,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      sym_string_value,
      sym_variable_identifier,
    ACTIONS(359), 24,
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
  [4019] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(495), 8,
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
  [4060] = 3,
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
    ACTIONS(551), 23,
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
  [4101] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(523), 8,
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
  [4142] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(549), 9,
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
  [4183] = 3,
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
    ACTIONS(543), 23,
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
  [4224] = 17,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_integer,
    ACTIONS(347), 1,
      aux_sym_float_value_token1,
    ACTIONS(351), 1,
      sym_variable_identifier,
    ACTIONS(353), 1,
      sym_plain_value,
    ACTIONS(555), 1,
      anon_sym_COMMA,
    ACTIONS(561), 1,
      anon_sym_POUND,
    ACTIONS(565), 1,
      sym_important,
    ACTIONS(567), 1,
      sym_string_value,
    ACTIONS(569), 1,
      sym_identifier,
    STATE(131), 1,
      sym__value,
    STATE(146), 1,
      aux_sym_declaration_pair_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(557), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(559), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(563), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    STATE(128), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4291] = 7,
    ACTIONS(577), 1,
      anon_sym_LPAREN2,
    STATE(127), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(575), 5,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
    ACTIONS(579), 6,
      anon_sym_STAR,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(571), 7,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_TILDE,
    ACTIONS(573), 9,
      anon_sym_LPAREN,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [4337] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(585), 5,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_GT,
      anon_sym_PLUS,
    ACTIONS(581), 7,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_nesting_selector,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK,
      anon_sym_TILDE,
    ACTIONS(583), 7,
      anon_sym_LPAREN,
      anon_sym_STAR,
      sym_string_value,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(587), 8,
      sym_integer,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [4377] = 5,
    ACTIONS(577), 1,
      anon_sym_LPAREN2,
    STATE(127), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(579), 11,
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
    ACTIONS(573), 12,
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
  [4415] = 4,
    ACTIONS(593), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(591), 11,
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
    ACTIONS(589), 12,
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
  [4450] = 4,
    ACTIONS(599), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(597), 11,
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
    ACTIONS(595), 12,
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
  [4485] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(603), 11,
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
    ACTIONS(601), 12,
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
  [4517] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(607), 11,
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
    ACTIONS(605), 12,
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
  [4549] = 3,
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
  [4581] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(615), 11,
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
    ACTIONS(613), 12,
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
  [4613] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(619), 11,
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
    ACTIONS(617), 12,
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
  [4645] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(623), 11,
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
    ACTIONS(621), 12,
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
  [4677] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(627), 11,
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
    ACTIONS(625), 12,
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
  [4709] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(631), 11,
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
    ACTIONS(629), 12,
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
  [4741] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(587), 11,
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
    ACTIONS(583), 12,
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
  [4773] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(635), 11,
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
    ACTIONS(633), 12,
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
  [4805] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(639), 11,
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
    ACTIONS(637), 12,
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
  [4837] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(559), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(563), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(641), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_important,
      sym_string_value,
    ACTIONS(643), 6,
      anon_sym_POUND,
      sym_integer,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [4872] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(559), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(563), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(645), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_important,
      sym_string_value,
    ACTIONS(647), 6,
      anon_sym_POUND,
      sym_integer,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [4907] = 9,
    ACTIONS(649), 1,
      anon_sym_SEMI,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(659), 1,
      anon_sym_selector,
    ACTIONS(661), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(657), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(655), 4,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(653), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(350), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4950] = 9,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(659), 1,
      anon_sym_selector,
    ACTIONS(661), 1,
      sym_identifier,
    ACTIONS(663), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(657), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(655), 4,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(653), 6,
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
  [4993] = 15,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_integer,
    ACTIONS(347), 1,
      aux_sym_float_value_token1,
    ACTIONS(351), 1,
      sym_variable_identifier,
    ACTIONS(353), 1,
      sym_plain_value,
    ACTIONS(561), 1,
      anon_sym_POUND,
    ACTIONS(567), 1,
      sym_string_value,
    ACTIONS(569), 1,
      sym_identifier,
    ACTIONS(667), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym__value,
    STATE(374), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(665), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(147), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(128), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5047] = 15,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_integer,
    ACTIONS(347), 1,
      aux_sym_float_value_token1,
    ACTIONS(351), 1,
      sym_variable_identifier,
    ACTIONS(353), 1,
      sym_plain_value,
    ACTIONS(561), 1,
      anon_sym_POUND,
    ACTIONS(567), 1,
      sym_string_value,
    ACTIONS(569), 1,
      sym_identifier,
    ACTIONS(669), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym__value,
    STATE(364), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(665), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(147), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(128), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5101] = 15,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_integer,
    ACTIONS(347), 1,
      aux_sym_float_value_token1,
    ACTIONS(351), 1,
      sym_variable_identifier,
    ACTIONS(353), 1,
      sym_plain_value,
    ACTIONS(561), 1,
      anon_sym_POUND,
    ACTIONS(567), 1,
      sym_string_value,
    ACTIONS(569), 1,
      sym_identifier,
    ACTIONS(671), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym__value,
    STATE(368), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(665), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(147), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(128), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5155] = 7,
    ACTIONS(673), 1,
      anon_sym_LPAREN2,
    STATE(189), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(573), 2,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(575), 2,
      anon_sym_COLON,
      anon_sym_GT,
    ACTIONS(579), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(571), 8,
      sym__descendant_operator,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [5193] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(559), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(563), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(675), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
    ACTIONS(677), 6,
      anon_sym_POUND,
      sym_integer,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [5227] = 15,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_integer,
    ACTIONS(347), 1,
      aux_sym_float_value_token1,
    ACTIONS(351), 1,
      sym_variable_identifier,
    ACTIONS(353), 1,
      sym_plain_value,
    ACTIONS(561), 1,
      anon_sym_POUND,
    ACTIONS(567), 1,
      sym_string_value,
    ACTIONS(569), 1,
      sym_identifier,
    ACTIONS(679), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym__value,
    STATE(365), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(665), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(147), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(128), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5281] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(681), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_value,
    ACTIONS(559), 5,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(563), 5,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(683), 6,
      anon_sym_POUND,
      sym_integer,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_variable_identifier,
      sym_plain_value,
  [5314] = 11,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      sym_nesting_selector,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(685), 1,
      sym_string_value,
    ACTIONS(687), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(246), 11,
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
  [5359] = 11,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      sym_nesting_selector,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(687), 1,
      sym_identifier,
    ACTIONS(689), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(289), 11,
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
  [5404] = 11,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      sym_nesting_selector,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(687), 1,
      sym_identifier,
    ACTIONS(691), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(245), 11,
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
  [5449] = 11,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      sym_nesting_selector,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(687), 1,
      sym_identifier,
    ACTIONS(693), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(314), 11,
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
  [5494] = 15,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_integer,
    ACTIONS(347), 1,
      aux_sym_float_value_token1,
    ACTIONS(351), 1,
      sym_variable_identifier,
    ACTIONS(353), 1,
      sym_plain_value,
    ACTIONS(555), 1,
      anon_sym_COMMA,
    ACTIONS(561), 1,
      anon_sym_POUND,
    ACTIONS(567), 1,
      sym_string_value,
    ACTIONS(569), 1,
      sym_identifier,
    ACTIONS(697), 1,
      sym_important,
    STATE(131), 1,
      sym__value,
    STATE(151), 1,
      aux_sym_declaration_pair_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(695), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    STATE(128), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5547] = 13,
    ACTIONS(701), 1,
      anon_sym_LPAREN,
    ACTIONS(704), 1,
      anon_sym_POUND,
    ACTIONS(707), 1,
      sym_string_value,
    ACTIONS(710), 1,
      sym_integer,
    ACTIONS(713), 1,
      aux_sym_float_value_token1,
    ACTIONS(716), 1,
      sym_identifier,
    ACTIONS(719), 1,
      sym_variable_identifier,
    ACTIONS(722), 1,
      sym_plain_value,
    STATE(139), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(147), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    ACTIONS(699), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(128), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5596] = 11,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      sym_nesting_selector,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(687), 1,
      sym_identifier,
    ACTIONS(725), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(258), 11,
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
  [5641] = 13,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_integer,
    ACTIONS(347), 1,
      aux_sym_float_value_token1,
    ACTIONS(351), 1,
      sym_variable_identifier,
    ACTIONS(353), 1,
      sym_plain_value,
    ACTIONS(561), 1,
      anon_sym_POUND,
    ACTIONS(567), 1,
      sym_string_value,
    ACTIONS(569), 1,
      sym_identifier,
    STATE(139), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(147), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    ACTIONS(727), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(128), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5690] = 11,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      sym_nesting_selector,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(687), 1,
      sym_identifier,
    ACTIONS(729), 1,
      sym_string_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(259), 11,
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
  [5735] = 14,
    ACTIONS(731), 1,
      anon_sym_COMMA,
    ACTIONS(734), 1,
      anon_sym_LPAREN,
    ACTIONS(737), 1,
      anon_sym_POUND,
    ACTIONS(740), 1,
      sym_string_value,
    ACTIONS(743), 1,
      sym_integer,
    ACTIONS(746), 1,
      aux_sym_float_value_token1,
    ACTIONS(749), 1,
      sym_identifier,
    ACTIONS(752), 1,
      sym_variable_identifier,
    ACTIONS(755), 1,
      sym_plain_value,
    STATE(131), 1,
      sym__value,
    STATE(151), 1,
      aux_sym_declaration_pair_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(645), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_important,
    STATE(128), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5786] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(585), 2,
      anon_sym_COLON,
      anon_sym_GT,
    ACTIONS(587), 2,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(583), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(581), 8,
      sym__descendant_operator,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [5818] = 15,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_integer,
    ACTIONS(347), 1,
      aux_sym_float_value_token1,
    ACTIONS(351), 1,
      sym_variable_identifier,
    ACTIONS(353), 1,
      sym_plain_value,
    ACTIONS(561), 1,
      anon_sym_POUND,
    ACTIONS(567), 1,
      sym_string_value,
    ACTIONS(569), 1,
      sym_identifier,
    ACTIONS(758), 1,
      anon_sym_COMMA,
    ACTIONS(760), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym__value,
    STATE(159), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(388), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(128), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5870] = 13,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_integer,
    ACTIONS(347), 1,
      aux_sym_float_value_token1,
    ACTIONS(351), 1,
      sym_variable_identifier,
    ACTIONS(353), 1,
      sym_plain_value,
    ACTIONS(561), 1,
      anon_sym_POUND,
    ACTIONS(567), 1,
      sym_string_value,
    ACTIONS(569), 1,
      sym_identifier,
    ACTIONS(762), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(140), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(128), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5917] = 13,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_integer,
    ACTIONS(347), 1,
      aux_sym_float_value_token1,
    ACTIONS(351), 1,
      sym_variable_identifier,
    ACTIONS(353), 1,
      sym_plain_value,
    ACTIONS(561), 1,
      anon_sym_POUND,
    ACTIONS(567), 1,
      sym_string_value,
    ACTIONS(569), 1,
      sym_identifier,
    ACTIONS(764), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(135), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(128), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [5964] = 5,
    ACTIONS(766), 1,
      anon_sym_LPAREN2,
    STATE(188), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(579), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(573), 9,
      anon_sym_LPAREN,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [5995] = 13,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_integer,
    ACTIONS(347), 1,
      aux_sym_float_value_token1,
    ACTIONS(351), 1,
      sym_variable_identifier,
    ACTIONS(353), 1,
      sym_plain_value,
    ACTIONS(561), 1,
      anon_sym_POUND,
    ACTIONS(567), 1,
      sym_string_value,
    ACTIONS(569), 1,
      sym_identifier,
    STATE(141), 1,
      sym__value,
    STATE(159), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(768), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(128), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6042] = 13,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_integer,
    ACTIONS(347), 1,
      aux_sym_float_value_token1,
    ACTIONS(351), 1,
      sym_variable_identifier,
    ACTIONS(353), 1,
      sym_plain_value,
    ACTIONS(561), 1,
      anon_sym_POUND,
    ACTIONS(567), 1,
      sym_string_value,
    ACTIONS(569), 1,
      sym_identifier,
    ACTIONS(770), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(137), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(128), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6089] = 13,
    ACTIONS(774), 1,
      anon_sym_LPAREN,
    ACTIONS(777), 1,
      anon_sym_POUND,
    ACTIONS(780), 1,
      sym_string_value,
    ACTIONS(783), 1,
      sym_integer,
    ACTIONS(786), 1,
      aux_sym_float_value_token1,
    ACTIONS(789), 1,
      sym_identifier,
    ACTIONS(792), 1,
      sym_variable_identifier,
    ACTIONS(795), 1,
      sym_plain_value,
    STATE(141), 1,
      sym__value,
    STATE(159), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(772), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(128), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6136] = 5,
    ACTIONS(673), 1,
      anon_sym_LPAREN2,
    STATE(189), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(573), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(579), 13,
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
  [6167] = 13,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_integer,
    ACTIONS(347), 1,
      aux_sym_float_value_token1,
    ACTIONS(351), 1,
      sym_variable_identifier,
    ACTIONS(353), 1,
      sym_plain_value,
    ACTIONS(561), 1,
      anon_sym_POUND,
    ACTIONS(567), 1,
      sym_string_value,
    ACTIONS(569), 1,
      sym_identifier,
    ACTIONS(798), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(136), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(128), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6214] = 13,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_integer,
    ACTIONS(347), 1,
      aux_sym_float_value_token1,
    ACTIONS(351), 1,
      sym_variable_identifier,
    ACTIONS(353), 1,
      sym_plain_value,
    ACTIONS(561), 1,
      anon_sym_POUND,
    ACTIONS(567), 1,
      sym_string_value,
    ACTIONS(569), 1,
      sym_identifier,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym__value,
    STATE(159), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(128), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6260] = 4,
    ACTIONS(802), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(595), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(597), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6288] = 4,
    ACTIONS(804), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(589), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(591), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6316] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(615), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(613), 9,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6342] = 12,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_integer,
    ACTIONS(347), 1,
      aux_sym_float_value_token1,
    ACTIONS(351), 1,
      sym_variable_identifier,
    ACTIONS(353), 1,
      sym_plain_value,
    ACTIONS(561), 1,
      anon_sym_POUND,
    ACTIONS(567), 1,
      sym_string_value,
    ACTIONS(569), 1,
      sym_identifier,
    STATE(139), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(149), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(128), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6386] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(637), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(639), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6411] = 4,
    ACTIONS(806), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(591), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(589), 12,
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
  [6438] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(633), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(635), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6463] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(625), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(627), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6488] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(607), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(605), 13,
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
  [6513] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(603), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(601), 13,
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
  [6538] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(615), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(613), 13,
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
  [6563] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(621), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(623), 8,
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
    ACTIONS(617), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(619), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6613] = 12,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_integer,
    ACTIONS(347), 1,
      aux_sym_float_value_token1,
    ACTIONS(351), 1,
      sym_variable_identifier,
    ACTIONS(353), 1,
      sym_plain_value,
    ACTIONS(561), 1,
      anon_sym_POUND,
    ACTIONS(567), 1,
      sym_string_value,
    ACTIONS(569), 1,
      sym_identifier,
    STATE(141), 1,
      sym__value,
    STATE(162), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(128), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6656] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(605), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(607), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6681] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(587), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(583), 13,
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
  [6706] = 12,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
    ACTIONS(810), 1,
      anon_sym_POUND,
    ACTIONS(812), 1,
      sym_string_value,
    ACTIONS(814), 1,
      sym_integer,
    ACTIONS(816), 1,
      aux_sym_float_value_token1,
    ACTIONS(818), 1,
      sym_identifier,
    ACTIONS(820), 1,
      sym_variable_identifier,
    ACTIONS(822), 1,
      sym_plain_value,
    STATE(270), 1,
      sym__value,
    STATE(380), 1,
      sym_include_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(278), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6749] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(619), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(617), 13,
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
  [6774] = 12,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
    ACTIONS(810), 1,
      anon_sym_POUND,
    ACTIONS(812), 1,
      sym_string_value,
    ACTIONS(814), 1,
      sym_integer,
    ACTIONS(816), 1,
      aux_sym_float_value_token1,
    ACTIONS(818), 1,
      sym_identifier,
    ACTIONS(820), 1,
      sym_variable_identifier,
    ACTIONS(822), 1,
      sym_plain_value,
    STATE(270), 1,
      sym__value,
    STATE(398), 1,
      sym_include_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(278), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [6817] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(601), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(603), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6842] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(623), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(621), 13,
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
  [6867] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(583), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(587), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6892] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(639), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(637), 13,
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
  [6917] = 3,
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
  [6942] = 4,
    ACTIONS(824), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(597), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(595), 12,
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
  [6969] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(629), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(631), 8,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      sym_identifier,
  [6994] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(631), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(629), 13,
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
  [7019] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(627), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(625), 13,
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
  [7044] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(611), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(609), 13,
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
  [7069] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(635), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(633), 13,
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
  [7094] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(279), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7134] = 11,
    ACTIONS(832), 1,
      anon_sym_LPAREN,
    ACTIONS(834), 1,
      anon_sym_POUND,
    ACTIONS(836), 1,
      sym_string_value,
    ACTIONS(838), 1,
      sym_integer,
    ACTIONS(840), 1,
      aux_sym_float_value_token1,
    ACTIONS(842), 1,
      sym_identifier,
    ACTIONS(844), 1,
      sym_variable_identifier,
    ACTIONS(846), 1,
      sym_plain_value,
    STATE(134), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(184), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7174] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(848), 1,
      sym_integer,
    ACTIONS(850), 1,
      aux_sym_float_value_token1,
    STATE(325), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7214] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(287), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7254] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(307), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7294] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(321), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7334] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(315), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7374] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(282), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7414] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(292), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7454] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(291), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7494] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(302), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7534] = 11,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_integer,
    ACTIONS(347), 1,
      aux_sym_float_value_token1,
    ACTIONS(351), 1,
      sym_variable_identifier,
    ACTIONS(353), 1,
      sym_plain_value,
    ACTIONS(561), 1,
      anon_sym_POUND,
    ACTIONS(567), 1,
      sym_string_value,
    ACTIONS(569), 1,
      sym_identifier,
    STATE(130), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(128), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7574] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(848), 1,
      sym_integer,
    ACTIONS(850), 1,
      aux_sym_float_value_token1,
    STATE(318), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7614] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(271), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7654] = 11,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_integer,
    ACTIONS(347), 1,
      aux_sym_float_value_token1,
    ACTIONS(351), 1,
      sym_variable_identifier,
    ACTIONS(353), 1,
      sym_plain_value,
    ACTIONS(561), 1,
      anon_sym_POUND,
    ACTIONS(567), 1,
      sym_string_value,
    ACTIONS(569), 1,
      sym_identifier,
    STATE(132), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(128), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7694] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(288), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7734] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(284), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7774] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(286), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7814] = 5,
    ACTIONS(854), 1,
      anon_sym_COLON,
    ACTIONS(856), 1,
      anon_sym_LPAREN2,
    STATE(252), 1,
      sym_pseudo_class_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(852), 12,
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
  [7842] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(316), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7882] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(290), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7922] = 11,
    ACTIONS(832), 1,
      anon_sym_LPAREN,
    ACTIONS(834), 1,
      anon_sym_POUND,
    ACTIONS(836), 1,
      sym_string_value,
    ACTIONS(838), 1,
      sym_integer,
    ACTIONS(840), 1,
      aux_sym_float_value_token1,
    ACTIONS(842), 1,
      sym_identifier,
    ACTIONS(844), 1,
      sym_variable_identifier,
    ACTIONS(846), 1,
      sym_plain_value,
    STATE(133), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(184), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [7962] = 5,
    ACTIONS(856), 1,
      anon_sym_LPAREN2,
    ACTIONS(860), 1,
      anon_sym_COLON,
    STATE(248), 1,
      sym_pseudo_class_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(858), 12,
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
  [7990] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(323), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8030] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(304), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8070] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(310), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8110] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(312), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8150] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(277), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8190] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(274), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8230] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(276), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8270] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(319), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8310] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(300), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8350] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(275), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8390] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(317), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8430] = 11,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_integer,
    ACTIONS(347), 1,
      aux_sym_float_value_token1,
    ACTIONS(351), 1,
      sym_variable_identifier,
    ACTIONS(353), 1,
      sym_plain_value,
    ACTIONS(561), 1,
      anon_sym_POUND,
    ACTIONS(567), 1,
      sym_string_value,
    ACTIONS(569), 1,
      sym_identifier,
    STATE(114), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(128), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8470] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(324), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8510] = 11,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
    ACTIONS(810), 1,
      anon_sym_POUND,
    ACTIONS(812), 1,
      sym_string_value,
    ACTIONS(814), 1,
      sym_integer,
    ACTIONS(816), 1,
      aux_sym_float_value_token1,
    ACTIONS(818), 1,
      sym_identifier,
    ACTIONS(822), 1,
      sym_plain_value,
    ACTIONS(862), 1,
      sym_variable_identifier,
    STATE(268), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(278), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8550] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(322), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8590] = 11,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
    ACTIONS(810), 1,
      anon_sym_POUND,
    ACTIONS(812), 1,
      sym_string_value,
    ACTIONS(814), 1,
      sym_integer,
    ACTIONS(816), 1,
      aux_sym_float_value_token1,
    ACTIONS(818), 1,
      sym_identifier,
    ACTIONS(822), 1,
      sym_plain_value,
    ACTIONS(862), 1,
      sym_variable_identifier,
    STATE(272), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(278), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8630] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(320), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8670] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(301), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8710] = 11,
    ACTIONS(832), 1,
      anon_sym_LPAREN,
    ACTIONS(834), 1,
      anon_sym_POUND,
    ACTIONS(836), 1,
      sym_string_value,
    ACTIONS(838), 1,
      sym_integer,
    ACTIONS(840), 1,
      aux_sym_float_value_token1,
    ACTIONS(842), 1,
      sym_identifier,
    ACTIONS(844), 1,
      sym_variable_identifier,
    ACTIONS(846), 1,
      sym_plain_value,
    STATE(167), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(184), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8750] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(329), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8790] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(848), 1,
      sym_integer,
    ACTIONS(850), 1,
      aux_sym_float_value_token1,
    STATE(185), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8830] = 11,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      sym_integer,
    ACTIONS(383), 1,
      aux_sym_float_value_token1,
    ACTIONS(387), 1,
      sym_variable_identifier,
    ACTIONS(389), 1,
      sym_plain_value,
    ACTIONS(826), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(185), 1,
      sym__value,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(178), 6,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [8870] = 3,
    ACTIONS(866), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(864), 13,
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
  [8893] = 9,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(659), 1,
      anon_sym_selector,
    ACTIONS(661), 1,
      sym_identifier,
    ACTIONS(868), 1,
      anon_sym_SEMI,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(657), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(338), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8928] = 4,
    ACTIONS(872), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(585), 2,
      anon_sym_COLON,
      anon_sym_POUND,
    ACTIONS(581), 11,
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
  [8953] = 9,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(659), 1,
      anon_sym_selector,
    ACTIONS(661), 1,
      sym_identifier,
    ACTIONS(874), 1,
      anon_sym_SEMI,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(657), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(336), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8988] = 5,
    ACTIONS(878), 1,
      anon_sym_LPAREN2,
    STATE(295), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(573), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(579), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9015] = 3,
    ACTIONS(882), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(880), 13,
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
  [9038] = 3,
    ACTIONS(886), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(884), 12,
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
  [9060] = 4,
    ACTIONS(890), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(892), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(888), 10,
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
  [9084] = 4,
    ACTIONS(896), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(892), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(894), 10,
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
  [9108] = 3,
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
  [9130] = 3,
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
  [9152] = 3,
    ACTIONS(908), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(906), 12,
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
  [9174] = 3,
    ACTIONS(912), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(910), 12,
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
  [9196] = 3,
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
  [9218] = 3,
    ACTIONS(920), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(918), 12,
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
  [9240] = 4,
    ACTIONS(922), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(597), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(595), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9264] = 4,
    ACTIONS(924), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(591), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(589), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9288] = 3,
    ACTIONS(928), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(926), 12,
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
  [9310] = 3,
    ACTIONS(575), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(571), 12,
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
  [9332] = 13,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    ACTIONS(932), 1,
      anon_sym_LBRACE,
    ACTIONS(934), 1,
      anon_sym_COLON,
    ACTIONS(936), 1,
      anon_sym_COLON_COLON,
    ACTIONS(938), 1,
      anon_sym_POUND,
    ACTIONS(940), 1,
      anon_sym_LBRACK,
    ACTIONS(942), 1,
      anon_sym_GT,
    ACTIONS(944), 1,
      anon_sym_TILDE,
    ACTIONS(946), 1,
      anon_sym_PLUS,
    ACTIONS(948), 1,
      sym__descendant_operator,
    STATE(382), 1,
      aux_sym_css_selector_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(892), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [9374] = 4,
    ACTIONS(952), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(892), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(950), 10,
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
  [9398] = 4,
    ACTIONS(956), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(892), 2,
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
  [9422] = 3,
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
  [9444] = 3,
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
  [9466] = 13,
    ACTIONS(758), 1,
      anon_sym_COMMA,
    ACTIONS(760), 1,
      anon_sym_RPAREN,
    ACTIONS(934), 1,
      anon_sym_COLON,
    ACTIONS(936), 1,
      anon_sym_COLON_COLON,
    ACTIONS(938), 1,
      anon_sym_POUND,
    ACTIONS(940), 1,
      anon_sym_LBRACK,
    ACTIONS(942), 1,
      anon_sym_GT,
    ACTIONS(944), 1,
      anon_sym_TILDE,
    ACTIONS(946), 1,
      anon_sym_PLUS,
    ACTIONS(948), 1,
      sym__descendant_operator,
    STATE(388), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(892), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [9508] = 4,
    ACTIONS(966), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(623), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(621), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9532] = 3,
    ACTIONS(970), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(968), 12,
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
  [9554] = 3,
    ACTIONS(974), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(972), 12,
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
  [9576] = 3,
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
  [9598] = 3,
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
  [9620] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(639), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(637), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9641] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(607), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(605), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9662] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(984), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
    ACTIONS(988), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(986), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9685] = 5,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9710] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(994), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
    ACTIONS(988), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(986), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9733] = 3,
    ACTIONS(996), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(571), 11,
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
  [9754] = 5,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9779] = 5,
    ACTIONS(999), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9804] = 5,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9829] = 5,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9854] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(587), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(583), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9875] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1001), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9898] = 4,
    ACTIONS(1003), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(597), 4,
      anon_sym_through,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(595), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9921] = 11,
    ACTIONS(934), 1,
      anon_sym_COLON,
    ACTIONS(936), 1,
      anon_sym_COLON_COLON,
    ACTIONS(938), 1,
      anon_sym_POUND,
    ACTIONS(940), 1,
      anon_sym_LBRACK,
    ACTIONS(942), 1,
      anon_sym_GT,
    ACTIONS(944), 1,
      anon_sym_TILDE,
    ACTIONS(946), 1,
      anon_sym_PLUS,
    ACTIONS(948), 1,
      sym__descendant_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(768), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(892), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [9958] = 5,
    ACTIONS(1005), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9983] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(623), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(621), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10004] = 5,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10029] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(603), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(601), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10050] = 5,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10075] = 5,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10100] = 5,
    ACTIONS(999), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10125] = 11,
    ACTIONS(934), 1,
      anon_sym_COLON,
    ACTIONS(936), 1,
      anon_sym_COLON_COLON,
    ACTIONS(938), 1,
      anon_sym_POUND,
    ACTIONS(940), 1,
      anon_sym_LBRACK,
    ACTIONS(942), 1,
      anon_sym_GT,
    ACTIONS(944), 1,
      anon_sym_TILDE,
    ACTIONS(946), 1,
      anon_sym_PLUS,
    ACTIONS(948), 1,
      sym__descendant_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(892), 2,
      sym_nesting_selector,
      anon_sym_DOT,
    ACTIONS(1007), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [10162] = 5,
    ACTIONS(1005), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10187] = 5,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10212] = 5,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10237] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(615), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(613), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10258] = 3,
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
  [10279] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(631), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(629), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10300] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(635), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(633), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10321] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(627), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(625), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10342] = 4,
    ACTIONS(1009), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(591), 4,
      anon_sym_through,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(589), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10365] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(619), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(617), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10386] = 4,
    ACTIONS(1011), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10408] = 4,
    ACTIONS(1013), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10430] = 4,
    ACTIONS(1015), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10452] = 6,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(659), 1,
      anon_sym_selector,
    ACTIONS(1017), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(657), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(383), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10478] = 4,
    ACTIONS(1019), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10500] = 6,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(659), 1,
      anon_sym_selector,
    ACTIONS(661), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(657), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(345), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10526] = 6,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(659), 1,
      anon_sym_selector,
    ACTIONS(661), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(657), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(346), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10552] = 4,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10574] = 6,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(659), 1,
      anon_sym_selector,
    ACTIONS(661), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(657), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(351), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10600] = 6,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(659), 1,
      anon_sym_selector,
    ACTIONS(661), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(657), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(341), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10626] = 4,
    ACTIONS(1023), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10648] = 6,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(659), 1,
      anon_sym_selector,
    ACTIONS(661), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(657), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(343), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10674] = 4,
    ACTIONS(1025), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10696] = 6,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(659), 1,
      anon_sym_selector,
    ACTIONS(661), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(657), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(370), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10722] = 11,
    ACTIONS(934), 1,
      anon_sym_COLON,
    ACTIONS(936), 1,
      anon_sym_COLON_COLON,
    ACTIONS(938), 1,
      anon_sym_POUND,
    ACTIONS(940), 1,
      anon_sym_LBRACK,
    ACTIONS(942), 1,
      anon_sym_GT,
    ACTIONS(944), 1,
      anon_sym_TILDE,
    ACTIONS(946), 1,
      anon_sym_PLUS,
    ACTIONS(948), 1,
      sym__descendant_operator,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(892), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [10758] = 4,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10780] = 4,
    ACTIONS(1031), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10802] = 4,
    ACTIONS(1033), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10824] = 4,
    ACTIONS(1035), 1,
      anon_sym_through,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1039), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1037), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10846] = 4,
    ACTIONS(1041), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10868] = 4,
    ACTIONS(1043), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10890] = 4,
    ACTIONS(1045), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10912] = 4,
    ACTIONS(1047), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10934] = 4,
    ACTIONS(1049), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10956] = 4,
    ACTIONS(1051), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10978] = 4,
    ACTIONS(1053), 1,
      anon_sym_through,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1039), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(1037), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11000] = 4,
    ACTIONS(1055), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11022] = 4,
    ACTIONS(585), 1,
      anon_sym_COLON,
    ACTIONS(1055), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(581), 9,
      sym__descendant_operator,
      sym_nesting_selector,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [11044] = 6,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(659), 1,
      anon_sym_selector,
    ACTIONS(661), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(657), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(360), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11070] = 4,
    ACTIONS(1057), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_LT,
    ACTIONS(990), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11092] = 10,
    ACTIONS(934), 1,
      anon_sym_COLON,
    ACTIONS(936), 1,
      anon_sym_COLON_COLON,
    ACTIONS(938), 1,
      anon_sym_POUND,
    ACTIONS(940), 1,
      anon_sym_LBRACK,
    ACTIONS(942), 1,
      anon_sym_GT,
    ACTIONS(944), 1,
      anon_sym_TILDE,
    ACTIONS(946), 1,
      anon_sym_PLUS,
    ACTIONS(948), 1,
      sym__descendant_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(892), 2,
      sym_nesting_selector,
      anon_sym_DOT,
  [11125] = 7,
    ACTIONS(1059), 1,
      anon_sym_RBRACE,
    ACTIONS(1061), 1,
      anon_sym_from,
    ACTIONS(1063), 1,
      sym_to,
    ACTIONS(1065), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(335), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(408), 2,
      sym_from,
      sym_integer_value,
  [11150] = 7,
    ACTIONS(1061), 1,
      anon_sym_from,
    ACTIONS(1063), 1,
      sym_to,
    ACTIONS(1065), 1,
      sym_integer,
    ACTIONS(1067), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(333), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(408), 2,
      sym_from,
      sym_integer_value,
  [11175] = 7,
    ACTIONS(1061), 1,
      anon_sym_from,
    ACTIONS(1063), 1,
      sym_to,
    ACTIONS(1065), 1,
      sym_integer,
    ACTIONS(1069), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(335), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(408), 2,
      sym_from,
      sym_integer_value,
  [11200] = 7,
    ACTIONS(1061), 1,
      anon_sym_from,
    ACTIONS(1063), 1,
      sym_to,
    ACTIONS(1065), 1,
      sym_integer,
    ACTIONS(1071), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(331), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(408), 2,
      sym_from,
      sym_integer_value,
  [11225] = 7,
    ACTIONS(1073), 1,
      anon_sym_RBRACE,
    ACTIONS(1075), 1,
      anon_sym_from,
    ACTIONS(1078), 1,
      sym_to,
    ACTIONS(1081), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    STATE(335), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
    STATE(408), 2,
      sym_from,
      sym_integer_value,
  [11250] = 7,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    ACTIONS(1084), 1,
      anon_sym_COMMA,
    ACTIONS(1086), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      sym_enclosed_body,
    STATE(348), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1088), 2,
      anon_sym_and,
      anon_sym_or,
  [11274] = 3,
    ACTIONS(1092), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1090), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [11290] = 7,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    ACTIONS(1084), 1,
      anon_sym_COMMA,
    ACTIONS(1094), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      sym_enclosed_body,
    STATE(354), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1088), 2,
      anon_sym_and,
      anon_sym_or,
  [11314] = 3,
    ACTIONS(1098), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1096), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [11330] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1100), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11343] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1102), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11356] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1104), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11369] = 6,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    ACTIONS(1084), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      sym_enclosed_body,
    STATE(362), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1088), 2,
      anon_sym_and,
      anon_sym_or,
  [11390] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1106), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11403] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1108), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11416] = 6,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    ACTIONS(1084), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      sym_enclosed_body,
    STATE(366), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1088), 2,
      anon_sym_and,
      anon_sym_or,
  [11437] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1110), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11450] = 6,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    ACTIONS(1084), 1,
      anon_sym_COMMA,
    ACTIONS(1112), 1,
      anon_sym_SEMI,
    STATE(61), 1,
      sym_enclosed_body,
    STATE(359), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11470] = 6,
    ACTIONS(766), 1,
      anon_sym_LPAREN2,
    ACTIONS(1114), 1,
      sym_string_value,
    ACTIONS(1116), 1,
      sym_identifier,
    STATE(188), 1,
      sym_arguments,
    STATE(440), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11490] = 5,
    ACTIONS(1084), 1,
      anon_sym_COMMA,
    ACTIONS(1118), 1,
      anon_sym_SEMI,
    STATE(391), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1088), 2,
      anon_sym_and,
      anon_sym_or,
  [11508] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1088), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(1120), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11522] = 6,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    ACTIONS(1122), 1,
      anon_sym_SEMI,
    ACTIONS(1124), 1,
      anon_sym_LPAREN2,
    STATE(87), 1,
      sym_enclosed_body,
    STATE(376), 1,
      sym_include_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11542] = 5,
    ACTIONS(1084), 1,
      anon_sym_COMMA,
    ACTIONS(1126), 1,
      anon_sym_SEMI,
    STATE(379), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1088), 2,
      anon_sym_and,
      anon_sym_or,
  [11560] = 6,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    ACTIONS(1084), 1,
      anon_sym_COMMA,
    ACTIONS(1128), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      sym_enclosed_body,
    STATE(359), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11580] = 6,
    ACTIONS(766), 1,
      anon_sym_LPAREN2,
    ACTIONS(1116), 1,
      sym_identifier,
    ACTIONS(1130), 1,
      sym_string_value,
    STATE(188), 1,
      sym_arguments,
    STATE(468), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11600] = 6,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    ACTIONS(1124), 1,
      anon_sym_LPAREN2,
    ACTIONS(1132), 1,
      anon_sym_SEMI,
    STATE(94), 1,
      sym_enclosed_body,
    STATE(392), 1,
      sym_include_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11620] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1134), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      sym_integer,
  [11631] = 5,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    ACTIONS(1136), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym_enclosed_body,
    STATE(400), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11648] = 4,
    ACTIONS(1138), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1120), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11663] = 4,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    STATE(106), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1088), 2,
      anon_sym_and,
      anon_sym_or,
  [11678] = 4,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
    STATE(361), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1141), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11693] = 5,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    ACTIONS(1084), 1,
      anon_sym_COMMA,
    STATE(69), 1,
      sym_enclosed_body,
    STATE(359), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11710] = 5,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    ACTIONS(1136), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_enclosed_body,
    STATE(396), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11727] = 4,
    ACTIONS(1144), 1,
      anon_sym_RPAREN,
    STATE(361), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(665), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11742] = 4,
    ACTIONS(1146), 1,
      anon_sym_RPAREN,
    STATE(361), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(665), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11757] = 5,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    ACTIONS(1084), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      sym_enclosed_body,
    STATE(359), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11774] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(365), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      sym_integer,
  [11785] = 4,
    ACTIONS(1148), 1,
      anon_sym_RPAREN,
    STATE(361), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(665), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11800] = 5,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    ACTIONS(1136), 1,
      anon_sym_LPAREN,
    STATE(85), 1,
      sym_enclosed_body,
    STATE(411), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11817] = 4,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1088), 2,
      anon_sym_and,
      anon_sym_or,
  [11832] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(361), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      sym_integer,
  [11843] = 5,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    ACTIONS(1136), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_enclosed_body,
    STATE(409), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11860] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(355), 4,
      anon_sym_RBRACE,
      anon_sym_from,
      sym_to,
      sym_integer,
  [11871] = 4,
    ACTIONS(1150), 1,
      anon_sym_RPAREN,
    STATE(361), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(665), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11886] = 3,
    ACTIONS(1152), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1100), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11899] = 4,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    ACTIONS(1154), 1,
      anon_sym_SEMI,
    STATE(63), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11913] = 4,
    ACTIONS(1156), 1,
      anon_sym_COMMA,
    ACTIONS(1158), 1,
      anon_sym_RPAREN,
    STATE(394), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11927] = 4,
    ACTIONS(1156), 1,
      anon_sym_COMMA,
    ACTIONS(1160), 1,
      anon_sym_RPAREN,
    STATE(377), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11941] = 4,
    ACTIONS(1084), 1,
      anon_sym_COMMA,
    ACTIONS(1162), 1,
      anon_sym_SEMI,
    STATE(359), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11955] = 4,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    ACTIONS(1166), 1,
      anon_sym_RPAREN2,
    STATE(381), 1,
      aux_sym_include_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11969] = 4,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    ACTIONS(1168), 1,
      anon_sym_RPAREN2,
    STATE(395), 1,
      aux_sym_include_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11983] = 4,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    ACTIONS(1170), 1,
      anon_sym_LBRACE,
    STATE(390), 1,
      aux_sym_css_selector_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [11997] = 3,
    ACTIONS(1172), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1088), 2,
      anon_sym_and,
      anon_sym_or,
  [12009] = 3,
    ACTIONS(1176), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1174), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12021] = 4,
    ACTIONS(768), 1,
      anon_sym_RPAREN,
    ACTIONS(1178), 1,
      anon_sym_COMMA,
    STATE(385), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12035] = 4,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    ACTIONS(1181), 1,
      anon_sym_if,
    STATE(52), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12049] = 4,
    ACTIONS(1183), 1,
      sym_string_value,
    ACTIONS(1185), 1,
      sym_identifier,
    STATE(447), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12063] = 4,
    ACTIONS(758), 1,
      anon_sym_COMMA,
    ACTIONS(1187), 1,
      anon_sym_RPAREN,
    STATE(385), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12077] = 4,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    ACTIONS(1189), 1,
      anon_sym_if,
    STATE(75), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12091] = 4,
    ACTIONS(1007), 1,
      anon_sym_LBRACE,
    ACTIONS(1191), 1,
      anon_sym_COMMA,
    STATE(390), 1,
      aux_sym_css_selector_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12105] = 4,
    ACTIONS(1084), 1,
      anon_sym_COMMA,
    ACTIONS(1194), 1,
      anon_sym_SEMI,
    STATE(359), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12119] = 4,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    ACTIONS(1196), 1,
      anon_sym_SEMI,
    STATE(36), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12133] = 4,
    ACTIONS(1198), 1,
      sym_string_value,
    ACTIONS(1200), 1,
      sym_identifier,
    STATE(452), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12147] = 4,
    ACTIONS(1202), 1,
      anon_sym_COMMA,
    ACTIONS(1205), 1,
      anon_sym_RPAREN,
    STATE(394), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12161] = 4,
    ACTIONS(1207), 1,
      anon_sym_COMMA,
    ACTIONS(1210), 1,
      anon_sym_RPAREN2,
    STATE(395), 1,
      aux_sym_include_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12175] = 3,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12186] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1212), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [12195] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1210), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN2,
  [12204] = 3,
    ACTIONS(1214), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym_keyframe_block_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12215] = 3,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12226] = 3,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12237] = 3,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12248] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1205), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12257] = 3,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12268] = 3,
    ACTIONS(1216), 1,
      sym_variable_identifier,
    STATE(378), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12279] = 3,
    ACTIONS(766), 1,
      anon_sym_LPAREN2,
    STATE(188), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12290] = 3,
    ACTIONS(1216), 1,
      sym_variable_identifier,
    STATE(403), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12301] = 3,
    ACTIONS(1218), 1,
      anon_sym_LBRACE,
    STATE(357), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12312] = 3,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12323] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1220), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12332] = 3,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      sym_enclosed_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12343] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(1222), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [12352] = 3,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    ACTIONS(1226), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12363] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
    ACTIONS(695), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [12372] = 3,
    ACTIONS(1228), 1,
      aux_sym_color_value_token1,
    ACTIONS(1230), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12383] = 3,
    ACTIONS(1232), 1,
      anon_sym_COMMA,
    ACTIONS(1234), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12394] = 3,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    ACTIONS(1236), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12405] = 3,
    ACTIONS(1230), 1,
      sym_identifier,
    ACTIONS(1238), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12416] = 3,
    ACTIONS(1240), 1,
      anon_sym_SEMI,
    ACTIONS(1242), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12427] = 3,
    ACTIONS(1244), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      sym_keyframe_block_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12438] = 2,
    ACTIONS(1246), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12446] = 2,
    ACTIONS(1248), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12454] = 2,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12462] = 2,
    ACTIONS(872), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12470] = 2,
    ACTIONS(1250), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12478] = 2,
    ACTIONS(1252), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12486] = 2,
    ACTIONS(1254), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12494] = 2,
    ACTIONS(1256), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12502] = 2,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12510] = 2,
    ACTIONS(1258), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12518] = 2,
    ACTIONS(1260), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12526] = 2,
    ACTIONS(1262), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12534] = 2,
    ACTIONS(1264), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12542] = 2,
    ACTIONS(1266), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12550] = 2,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12558] = 2,
    ACTIONS(1268), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12566] = 2,
    ACTIONS(1270), 1,
      anon_sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12574] = 2,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12582] = 2,
    ACTIONS(1272), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12590] = 2,
    ACTIONS(1274), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12598] = 2,
    ACTIONS(1276), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12606] = 2,
    ACTIONS(1278), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12614] = 2,
    ACTIONS(1280), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12622] = 2,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12630] = 2,
    ACTIONS(1282), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12638] = 2,
    ACTIONS(1284), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12646] = 2,
    ACTIONS(1286), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12654] = 2,
    ACTIONS(1288), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12662] = 2,
    ACTIONS(1290), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12670] = 2,
    ACTIONS(1292), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12678] = 2,
    ACTIONS(1294), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12686] = 2,
    ACTIONS(1296), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12694] = 2,
    ACTIONS(1298), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12702] = 2,
    ACTIONS(1300), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12710] = 2,
    ACTIONS(1302), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12718] = 2,
    ACTIONS(1304), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12726] = 2,
    ACTIONS(1306), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12734] = 2,
    ACTIONS(1181), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12742] = 2,
    ACTIONS(1308), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12750] = 2,
    ACTIONS(1310), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12758] = 2,
    ACTIONS(1312), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12766] = 2,
    ACTIONS(1314), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12774] = 2,
    ACTIONS(1316), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12782] = 2,
    ACTIONS(1240), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12790] = 2,
    ACTIONS(1189), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12798] = 2,
    ACTIONS(1318), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12806] = 2,
    ACTIONS(1320), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12814] = 2,
    ACTIONS(1322), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12822] = 2,
    ACTIONS(1324), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12830] = 2,
    ACTIONS(1326), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12838] = 2,
    ACTIONS(1328), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12846] = 2,
    ACTIONS(1330), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12854] = 2,
    ACTIONS(1332), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12862] = 2,
    ACTIONS(1334), 1,
      sym_variable_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12870] = 2,
    ACTIONS(1336), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12878] = 2,
    ACTIONS(1338), 1,
      anon_sym_from,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_comment,
  [12886] = 2,
    ACTIONS(1340), 1,
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
  [SMALL_STATE(24)] = 493,
  [SMALL_STATE(25)] = 535,
  [SMALL_STATE(26)] = 577,
  [SMALL_STATE(27)] = 619,
  [SMALL_STATE(28)] = 661,
  [SMALL_STATE(29)] = 703,
  [SMALL_STATE(30)] = 745,
  [SMALL_STATE(31)] = 787,
  [SMALL_STATE(32)] = 829,
  [SMALL_STATE(33)] = 871,
  [SMALL_STATE(34)] = 944,
  [SMALL_STATE(35)] = 985,
  [SMALL_STATE(36)] = 1026,
  [SMALL_STATE(37)] = 1067,
  [SMALL_STATE(38)] = 1108,
  [SMALL_STATE(39)] = 1149,
  [SMALL_STATE(40)] = 1190,
  [SMALL_STATE(41)] = 1231,
  [SMALL_STATE(42)] = 1272,
  [SMALL_STATE(43)] = 1313,
  [SMALL_STATE(44)] = 1354,
  [SMALL_STATE(45)] = 1395,
  [SMALL_STATE(46)] = 1436,
  [SMALL_STATE(47)] = 1477,
  [SMALL_STATE(48)] = 1518,
  [SMALL_STATE(49)] = 1559,
  [SMALL_STATE(50)] = 1600,
  [SMALL_STATE(51)] = 1641,
  [SMALL_STATE(52)] = 1682,
  [SMALL_STATE(53)] = 1723,
  [SMALL_STATE(54)] = 1764,
  [SMALL_STATE(55)] = 1805,
  [SMALL_STATE(56)] = 1846,
  [SMALL_STATE(57)] = 1887,
  [SMALL_STATE(58)] = 1928,
  [SMALL_STATE(59)] = 1969,
  [SMALL_STATE(60)] = 2010,
  [SMALL_STATE(61)] = 2051,
  [SMALL_STATE(62)] = 2092,
  [SMALL_STATE(63)] = 2133,
  [SMALL_STATE(64)] = 2174,
  [SMALL_STATE(65)] = 2215,
  [SMALL_STATE(66)] = 2256,
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
  [SMALL_STATE(115)] = 4291,
  [SMALL_STATE(116)] = 4337,
  [SMALL_STATE(117)] = 4377,
  [SMALL_STATE(118)] = 4415,
  [SMALL_STATE(119)] = 4450,
  [SMALL_STATE(120)] = 4485,
  [SMALL_STATE(121)] = 4517,
  [SMALL_STATE(122)] = 4549,
  [SMALL_STATE(123)] = 4581,
  [SMALL_STATE(124)] = 4613,
  [SMALL_STATE(125)] = 4645,
  [SMALL_STATE(126)] = 4677,
  [SMALL_STATE(127)] = 4709,
  [SMALL_STATE(128)] = 4741,
  [SMALL_STATE(129)] = 4773,
  [SMALL_STATE(130)] = 4805,
  [SMALL_STATE(131)] = 4837,
  [SMALL_STATE(132)] = 4872,
  [SMALL_STATE(133)] = 4907,
  [SMALL_STATE(134)] = 4950,
  [SMALL_STATE(135)] = 4993,
  [SMALL_STATE(136)] = 5047,
  [SMALL_STATE(137)] = 5101,
  [SMALL_STATE(138)] = 5155,
  [SMALL_STATE(139)] = 5193,
  [SMALL_STATE(140)] = 5227,
  [SMALL_STATE(141)] = 5281,
  [SMALL_STATE(142)] = 5314,
  [SMALL_STATE(143)] = 5359,
  [SMALL_STATE(144)] = 5404,
  [SMALL_STATE(145)] = 5449,
  [SMALL_STATE(146)] = 5494,
  [SMALL_STATE(147)] = 5547,
  [SMALL_STATE(148)] = 5596,
  [SMALL_STATE(149)] = 5641,
  [SMALL_STATE(150)] = 5690,
  [SMALL_STATE(151)] = 5735,
  [SMALL_STATE(152)] = 5786,
  [SMALL_STATE(153)] = 5818,
  [SMALL_STATE(154)] = 5870,
  [SMALL_STATE(155)] = 5917,
  [SMALL_STATE(156)] = 5964,
  [SMALL_STATE(157)] = 5995,
  [SMALL_STATE(158)] = 6042,
  [SMALL_STATE(159)] = 6089,
  [SMALL_STATE(160)] = 6136,
  [SMALL_STATE(161)] = 6167,
  [SMALL_STATE(162)] = 6214,
  [SMALL_STATE(163)] = 6260,
  [SMALL_STATE(164)] = 6288,
  [SMALL_STATE(165)] = 6316,
  [SMALL_STATE(166)] = 6342,
  [SMALL_STATE(167)] = 6386,
  [SMALL_STATE(168)] = 6411,
  [SMALL_STATE(169)] = 6438,
  [SMALL_STATE(170)] = 6463,
  [SMALL_STATE(171)] = 6488,
  [SMALL_STATE(172)] = 6513,
  [SMALL_STATE(173)] = 6538,
  [SMALL_STATE(174)] = 6563,
  [SMALL_STATE(175)] = 6588,
  [SMALL_STATE(176)] = 6613,
  [SMALL_STATE(177)] = 6656,
  [SMALL_STATE(178)] = 6681,
  [SMALL_STATE(179)] = 6706,
  [SMALL_STATE(180)] = 6749,
  [SMALL_STATE(181)] = 6774,
  [SMALL_STATE(182)] = 6817,
  [SMALL_STATE(183)] = 6842,
  [SMALL_STATE(184)] = 6867,
  [SMALL_STATE(185)] = 6892,
  [SMALL_STATE(186)] = 6917,
  [SMALL_STATE(187)] = 6942,
  [SMALL_STATE(188)] = 6969,
  [SMALL_STATE(189)] = 6994,
  [SMALL_STATE(190)] = 7019,
  [SMALL_STATE(191)] = 7044,
  [SMALL_STATE(192)] = 7069,
  [SMALL_STATE(193)] = 7094,
  [SMALL_STATE(194)] = 7134,
  [SMALL_STATE(195)] = 7174,
  [SMALL_STATE(196)] = 7214,
  [SMALL_STATE(197)] = 7254,
  [SMALL_STATE(198)] = 7294,
  [SMALL_STATE(199)] = 7334,
  [SMALL_STATE(200)] = 7374,
  [SMALL_STATE(201)] = 7414,
  [SMALL_STATE(202)] = 7454,
  [SMALL_STATE(203)] = 7494,
  [SMALL_STATE(204)] = 7534,
  [SMALL_STATE(205)] = 7574,
  [SMALL_STATE(206)] = 7614,
  [SMALL_STATE(207)] = 7654,
  [SMALL_STATE(208)] = 7694,
  [SMALL_STATE(209)] = 7734,
  [SMALL_STATE(210)] = 7774,
  [SMALL_STATE(211)] = 7814,
  [SMALL_STATE(212)] = 7842,
  [SMALL_STATE(213)] = 7882,
  [SMALL_STATE(214)] = 7922,
  [SMALL_STATE(215)] = 7962,
  [SMALL_STATE(216)] = 7990,
  [SMALL_STATE(217)] = 8030,
  [SMALL_STATE(218)] = 8070,
  [SMALL_STATE(219)] = 8110,
  [SMALL_STATE(220)] = 8150,
  [SMALL_STATE(221)] = 8190,
  [SMALL_STATE(222)] = 8230,
  [SMALL_STATE(223)] = 8270,
  [SMALL_STATE(224)] = 8310,
  [SMALL_STATE(225)] = 8350,
  [SMALL_STATE(226)] = 8390,
  [SMALL_STATE(227)] = 8430,
  [SMALL_STATE(228)] = 8470,
  [SMALL_STATE(229)] = 8510,
  [SMALL_STATE(230)] = 8550,
  [SMALL_STATE(231)] = 8590,
  [SMALL_STATE(232)] = 8630,
  [SMALL_STATE(233)] = 8670,
  [SMALL_STATE(234)] = 8710,
  [SMALL_STATE(235)] = 8750,
  [SMALL_STATE(236)] = 8790,
  [SMALL_STATE(237)] = 8830,
  [SMALL_STATE(238)] = 8870,
  [SMALL_STATE(239)] = 8893,
  [SMALL_STATE(240)] = 8928,
  [SMALL_STATE(241)] = 8953,
  [SMALL_STATE(242)] = 8988,
  [SMALL_STATE(243)] = 9015,
  [SMALL_STATE(244)] = 9038,
  [SMALL_STATE(245)] = 9060,
  [SMALL_STATE(246)] = 9084,
  [SMALL_STATE(247)] = 9108,
  [SMALL_STATE(248)] = 9130,
  [SMALL_STATE(249)] = 9152,
  [SMALL_STATE(250)] = 9174,
  [SMALL_STATE(251)] = 9196,
  [SMALL_STATE(252)] = 9218,
  [SMALL_STATE(253)] = 9240,
  [SMALL_STATE(254)] = 9264,
  [SMALL_STATE(255)] = 9288,
  [SMALL_STATE(256)] = 9310,
  [SMALL_STATE(257)] = 9332,
  [SMALL_STATE(258)] = 9374,
  [SMALL_STATE(259)] = 9398,
  [SMALL_STATE(260)] = 9422,
  [SMALL_STATE(261)] = 9444,
  [SMALL_STATE(262)] = 9466,
  [SMALL_STATE(263)] = 9508,
  [SMALL_STATE(264)] = 9532,
  [SMALL_STATE(265)] = 9554,
  [SMALL_STATE(266)] = 9576,
  [SMALL_STATE(267)] = 9598,
  [SMALL_STATE(268)] = 9620,
  [SMALL_STATE(269)] = 9641,
  [SMALL_STATE(270)] = 9662,
  [SMALL_STATE(271)] = 9685,
  [SMALL_STATE(272)] = 9710,
  [SMALL_STATE(273)] = 9733,
  [SMALL_STATE(274)] = 9754,
  [SMALL_STATE(275)] = 9779,
  [SMALL_STATE(276)] = 9804,
  [SMALL_STATE(277)] = 9829,
  [SMALL_STATE(278)] = 9854,
  [SMALL_STATE(279)] = 9875,
  [SMALL_STATE(280)] = 9898,
  [SMALL_STATE(281)] = 9921,
  [SMALL_STATE(282)] = 9958,
  [SMALL_STATE(283)] = 9983,
  [SMALL_STATE(284)] = 10004,
  [SMALL_STATE(285)] = 10029,
  [SMALL_STATE(286)] = 10050,
  [SMALL_STATE(287)] = 10075,
  [SMALL_STATE(288)] = 10100,
  [SMALL_STATE(289)] = 10125,
  [SMALL_STATE(290)] = 10162,
  [SMALL_STATE(291)] = 10187,
  [SMALL_STATE(292)] = 10212,
  [SMALL_STATE(293)] = 10237,
  [SMALL_STATE(294)] = 10258,
  [SMALL_STATE(295)] = 10279,
  [SMALL_STATE(296)] = 10300,
  [SMALL_STATE(297)] = 10321,
  [SMALL_STATE(298)] = 10342,
  [SMALL_STATE(299)] = 10365,
  [SMALL_STATE(300)] = 10386,
  [SMALL_STATE(301)] = 10408,
  [SMALL_STATE(302)] = 10430,
  [SMALL_STATE(303)] = 10452,
  [SMALL_STATE(304)] = 10478,
  [SMALL_STATE(305)] = 10500,
  [SMALL_STATE(306)] = 10526,
  [SMALL_STATE(307)] = 10552,
  [SMALL_STATE(308)] = 10574,
  [SMALL_STATE(309)] = 10600,
  [SMALL_STATE(310)] = 10626,
  [SMALL_STATE(311)] = 10648,
  [SMALL_STATE(312)] = 10674,
  [SMALL_STATE(313)] = 10696,
  [SMALL_STATE(314)] = 10722,
  [SMALL_STATE(315)] = 10758,
  [SMALL_STATE(316)] = 10780,
  [SMALL_STATE(317)] = 10802,
  [SMALL_STATE(318)] = 10824,
  [SMALL_STATE(319)] = 10846,
  [SMALL_STATE(320)] = 10868,
  [SMALL_STATE(321)] = 10890,
  [SMALL_STATE(322)] = 10912,
  [SMALL_STATE(323)] = 10934,
  [SMALL_STATE(324)] = 10956,
  [SMALL_STATE(325)] = 10978,
  [SMALL_STATE(326)] = 11000,
  [SMALL_STATE(327)] = 11022,
  [SMALL_STATE(328)] = 11044,
  [SMALL_STATE(329)] = 11070,
  [SMALL_STATE(330)] = 11092,
  [SMALL_STATE(331)] = 11125,
  [SMALL_STATE(332)] = 11150,
  [SMALL_STATE(333)] = 11175,
  [SMALL_STATE(334)] = 11200,
  [SMALL_STATE(335)] = 11225,
  [SMALL_STATE(336)] = 11250,
  [SMALL_STATE(337)] = 11274,
  [SMALL_STATE(338)] = 11290,
  [SMALL_STATE(339)] = 11314,
  [SMALL_STATE(340)] = 11330,
  [SMALL_STATE(341)] = 11343,
  [SMALL_STATE(342)] = 11356,
  [SMALL_STATE(343)] = 11369,
  [SMALL_STATE(344)] = 11390,
  [SMALL_STATE(345)] = 11403,
  [SMALL_STATE(346)] = 11416,
  [SMALL_STATE(347)] = 11437,
  [SMALL_STATE(348)] = 11450,
  [SMALL_STATE(349)] = 11470,
  [SMALL_STATE(350)] = 11490,
  [SMALL_STATE(351)] = 11508,
  [SMALL_STATE(352)] = 11522,
  [SMALL_STATE(353)] = 11542,
  [SMALL_STATE(354)] = 11560,
  [SMALL_STATE(355)] = 11580,
  [SMALL_STATE(356)] = 11600,
  [SMALL_STATE(357)] = 11620,
  [SMALL_STATE(358)] = 11631,
  [SMALL_STATE(359)] = 11648,
  [SMALL_STATE(360)] = 11663,
  [SMALL_STATE(361)] = 11678,
  [SMALL_STATE(362)] = 11693,
  [SMALL_STATE(363)] = 11710,
  [SMALL_STATE(364)] = 11727,
  [SMALL_STATE(365)] = 11742,
  [SMALL_STATE(366)] = 11757,
  [SMALL_STATE(367)] = 11774,
  [SMALL_STATE(368)] = 11785,
  [SMALL_STATE(369)] = 11800,
  [SMALL_STATE(370)] = 11817,
  [SMALL_STATE(371)] = 11832,
  [SMALL_STATE(372)] = 11843,
  [SMALL_STATE(373)] = 11860,
  [SMALL_STATE(374)] = 11871,
  [SMALL_STATE(375)] = 11886,
  [SMALL_STATE(376)] = 11899,
  [SMALL_STATE(377)] = 11913,
  [SMALL_STATE(378)] = 11927,
  [SMALL_STATE(379)] = 11941,
  [SMALL_STATE(380)] = 11955,
  [SMALL_STATE(381)] = 11969,
  [SMALL_STATE(382)] = 11983,
  [SMALL_STATE(383)] = 11997,
  [SMALL_STATE(384)] = 12009,
  [SMALL_STATE(385)] = 12021,
  [SMALL_STATE(386)] = 12035,
  [SMALL_STATE(387)] = 12049,
  [SMALL_STATE(388)] = 12063,
  [SMALL_STATE(389)] = 12077,
  [SMALL_STATE(390)] = 12091,
  [SMALL_STATE(391)] = 12105,
  [SMALL_STATE(392)] = 12119,
  [SMALL_STATE(393)] = 12133,
  [SMALL_STATE(394)] = 12147,
  [SMALL_STATE(395)] = 12161,
  [SMALL_STATE(396)] = 12175,
  [SMALL_STATE(397)] = 12186,
  [SMALL_STATE(398)] = 12195,
  [SMALL_STATE(399)] = 12204,
  [SMALL_STATE(400)] = 12215,
  [SMALL_STATE(401)] = 12226,
  [SMALL_STATE(402)] = 12237,
  [SMALL_STATE(403)] = 12248,
  [SMALL_STATE(404)] = 12257,
  [SMALL_STATE(405)] = 12268,
  [SMALL_STATE(406)] = 12279,
  [SMALL_STATE(407)] = 12290,
  [SMALL_STATE(408)] = 12301,
  [SMALL_STATE(409)] = 12312,
  [SMALL_STATE(410)] = 12323,
  [SMALL_STATE(411)] = 12332,
  [SMALL_STATE(412)] = 12343,
  [SMALL_STATE(413)] = 12352,
  [SMALL_STATE(414)] = 12363,
  [SMALL_STATE(415)] = 12372,
  [SMALL_STATE(416)] = 12383,
  [SMALL_STATE(417)] = 12394,
  [SMALL_STATE(418)] = 12405,
  [SMALL_STATE(419)] = 12416,
  [SMALL_STATE(420)] = 12427,
  [SMALL_STATE(421)] = 12438,
  [SMALL_STATE(422)] = 12446,
  [SMALL_STATE(423)] = 12454,
  [SMALL_STATE(424)] = 12462,
  [SMALL_STATE(425)] = 12470,
  [SMALL_STATE(426)] = 12478,
  [SMALL_STATE(427)] = 12486,
  [SMALL_STATE(428)] = 12494,
  [SMALL_STATE(429)] = 12502,
  [SMALL_STATE(430)] = 12510,
  [SMALL_STATE(431)] = 12518,
  [SMALL_STATE(432)] = 12526,
  [SMALL_STATE(433)] = 12534,
  [SMALL_STATE(434)] = 12542,
  [SMALL_STATE(435)] = 12550,
  [SMALL_STATE(436)] = 12558,
  [SMALL_STATE(437)] = 12566,
  [SMALL_STATE(438)] = 12574,
  [SMALL_STATE(439)] = 12582,
  [SMALL_STATE(440)] = 12590,
  [SMALL_STATE(441)] = 12598,
  [SMALL_STATE(442)] = 12606,
  [SMALL_STATE(443)] = 12614,
  [SMALL_STATE(444)] = 12622,
  [SMALL_STATE(445)] = 12630,
  [SMALL_STATE(446)] = 12638,
  [SMALL_STATE(447)] = 12646,
  [SMALL_STATE(448)] = 12654,
  [SMALL_STATE(449)] = 12662,
  [SMALL_STATE(450)] = 12670,
  [SMALL_STATE(451)] = 12678,
  [SMALL_STATE(452)] = 12686,
  [SMALL_STATE(453)] = 12694,
  [SMALL_STATE(454)] = 12702,
  [SMALL_STATE(455)] = 12710,
  [SMALL_STATE(456)] = 12718,
  [SMALL_STATE(457)] = 12726,
  [SMALL_STATE(458)] = 12734,
  [SMALL_STATE(459)] = 12742,
  [SMALL_STATE(460)] = 12750,
  [SMALL_STATE(461)] = 12758,
  [SMALL_STATE(462)] = 12766,
  [SMALL_STATE(463)] = 12774,
  [SMALL_STATE(464)] = 12782,
  [SMALL_STATE(465)] = 12790,
  [SMALL_STATE(466)] = 12798,
  [SMALL_STATE(467)] = 12806,
  [SMALL_STATE(468)] = 12814,
  [SMALL_STATE(469)] = 12822,
  [SMALL_STATE(470)] = 12830,
  [SMALL_STATE(471)] = 12838,
  [SMALL_STATE(472)] = 12846,
  [SMALL_STATE(473)] = 12854,
  [SMALL_STATE(474)] = 12862,
  [SMALL_STATE(475)] = 12870,
  [SMALL_STATE(476)] = 12878,
  [SMALL_STATE(477)] = 12886,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(194),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(311),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(228),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(393),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(451),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enclosed_body_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(313),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(430),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(453),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(454),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(33),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(225),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(473),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(477),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(221),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(457),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(230),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(196),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(219),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(218),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(217),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(240),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(260),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(424),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(433),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(442),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(445),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(257),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(273),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(455),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enclosed_body_repeat1, 2), SHIFT_REPEAT(241),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, .production_id = 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(214),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(306),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(232),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(387),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(439),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(328),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(235),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(233),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(430),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(428),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(421),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(431),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(200),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(448),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(422),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(209),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(466),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(224),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(226),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(212),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(240),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(260),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(424),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(433),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(442),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(445),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(257),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(273),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(455),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(239),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 1),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 2, .production_id = 11),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 2, .production_id = 11),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_repeat1, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_repeat1, 2),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(465),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(458),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enclosed_body, 4, .production_id = 36),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enclosed_body, 4, .production_id = 36),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enclosed_body, 3, .production_id = 29),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enclosed_body, 3, .production_id = 29),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enclosed_body, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enclosed_body, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_clause, 3, .production_id = 16),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_clause, 3, .production_id = 16),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_clause, 4, .production_id = 37),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_clause, 4, .production_id = 37),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_mixin, 4),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_mixin, 4),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_include, 4),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_include, 4),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_statement, 4),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_statement, 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 25),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 25),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 5, .production_id = 34),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 5, .production_id = 34),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extend_statement, 3),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend_statement, 3),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3, .production_id = 20),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3, .production_id = 20),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_root_statement, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_root_statement, 3),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 7, .production_id = 44),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, .production_id = 44),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_each_statement, 7, .production_id = 43),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_statement, 7, .production_id = 43),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_item, 1, .production_id = 19),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_item, 1, .production_id = 19),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug_statement, 3),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_debug_statement, 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warn_statement, 3),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warn_statement, 3),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error_statement, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 2, .production_id = 10),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 2, .production_id = 10),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_ruleset, 2),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_ruleset, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_statement, 3),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_statement, 3),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_include, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_include, 3),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_mixin, 3),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_mixin, 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 3),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeholder, 3),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 2, .production_id = 12),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 2, .production_id = 12),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 14),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 14),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_statement, 3),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forward_statement, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 3),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 3),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_pair, 3, .production_id = 18),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 3),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 3),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3, .production_id = 32),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3, .production_id = 32),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4, .production_id = 38),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4, .production_id = 38),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 4),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 4),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 13),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 13),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_pair_repeat1, 1),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_pair_repeat1, 1),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_pair_repeat1, 2),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_pair_repeat1, 2),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_pair, 4, .production_id = 28),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(199),
  [704] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(425),
  [707] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(128),
  [710] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(118),
  [713] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(119),
  [716] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(117),
  [719] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(125),
  [722] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(128),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_pair_repeat1, 2), SHIFT_REPEAT(207),
  [734] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_pair_repeat1, 2), SHIFT_REPEAT(199),
  [737] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_pair_repeat1, 2), SHIFT_REPEAT(425),
  [740] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_pair_repeat1, 2), SHIFT_REPEAT(128),
  [743] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_pair_repeat1, 2), SHIFT_REPEAT(118),
  [746] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_pair_repeat1, 2), SHIFT_REPEAT(119),
  [749] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_pair_repeat1, 2), SHIFT_REPEAT(117),
  [752] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_pair_repeat1, 2), SHIFT_REPEAT(125),
  [755] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_pair_repeat1, 2), SHIFT_REPEAT(128),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(199),
  [777] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(425),
  [780] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(128),
  [783] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(118),
  [786] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(119),
  [789] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(117),
  [792] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(125),
  [795] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(128),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 6),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 6),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 21),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 21),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, .production_id = 22),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, .production_id = 22),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, .production_id = 7),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, .production_id = 7),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 9),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 9),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3, .production_id = 22),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3, .production_id = 22),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, .production_id = 31),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, .production_id = 31),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 30),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 30),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 23),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 23),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 8),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 8),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, .production_id = 17),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, .production_id = 17),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 15),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 15),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 24),
  [928] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 24),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_selector_list, 1),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [952] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [956] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [960] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [964] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, .production_id = 17),
  [970] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, .production_id = 17),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [974] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [978] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, .production_id = 31),
  [982] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, .production_id = 31),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_argument, 1, .production_id = 27),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_argument, 3, .production_id = 42),
  [996] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(227),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 40),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_css_selector_list_repeat1, 2),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [1075] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(463),
  [1078] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(408),
  [1081] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(417),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 5),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 39),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(308),
  [1141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(166),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_selector_list, 2),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 26),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2), SHIFT_REPEAT(23),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_css_selector_list_repeat1, 2), SHIFT_REPEAT(143),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(407),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [1207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_include_arguments_repeat1, 2), SHIFT_REPEAT(181),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_arguments_repeat1, 2),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_arguments, 4, .production_id = 38),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_pair, 5, .production_id = 35),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_arguments, 3, .production_id = 32),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [1230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 1, .production_id = 12),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3, .production_id = 33),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4, .production_id = 41),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1304] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 1),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
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
