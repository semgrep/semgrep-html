#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 128
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 3
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 9
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  anon_sym_LT_BANG = 1,
  aux_sym_doctype__token1 = 2,
  anon_sym_GT = 3,
  sym_doctype = 4,
  anon_sym_LT = 5,
  anon_sym_SLASH_GT = 6,
  anon_sym_LT_SLASH = 7,
  anon_sym_EQ = 8,
  sym_attribute_name = 9,
  sym_attribute_value = 10,
  sym_entity = 11,
  anon_sym_SQUOTE = 12,
  aux_sym_quoted_attribute_value_token1 = 13,
  anon_sym_DQUOTE = 14,
  aux_sym_quoted_attribute_value_token2 = 15,
  sym_text = 16,
  anon_sym_LT_QMARKxml = 17,
  anon_sym_QMARK_GT = 18,
  sym_semgrep_metavariable = 19,
  sym_start_tag_name = 20,
  sym_script_start_tag_name = 21,
  sym_style_start_tag_name = 22,
  sym_end_tag_name = 23,
  sym_erroneous_end_tag_name = 24,
  sym_implicit_end_tag = 25,
  sym_raw_text = 26,
  sym_comment = 27,
  sym_document = 28,
  sym_doctype_ = 29,
  sym_node = 30,
  sym_element = 31,
  sym_script_element = 32,
  sym_style_element = 33,
  sym_start_tag = 34,
  sym_script_start_tag = 35,
  sym_style_start_tag = 36,
  sym_self_closing_tag = 37,
  sym_end_tag = 38,
  sym_erroneous_end_tag = 39,
  sym_attribute = 40,
  sym_quoted_attribute_value = 41,
  sym_toplevel_node = 42,
  sym_toplevel_attribute = 43,
  sym_xmldoctype = 44,
  sym_semgrep_start_tag = 45,
  sym_semgrep_end_tag = 46,
  aux_sym_document_repeat1 = 47,
  aux_sym_element_repeat1 = 48,
  aux_sym_start_tag_repeat1 = 49,
  alias_sym_pat_03aa317 = 50,
  alias_sym_pat_58fbb2e = 51,
  alias_sym_pat_98d585a = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_BANG] = "<!",
  [aux_sym_doctype__token1] = "doctype__token1",
  [anon_sym_GT] = ">",
  [sym_doctype] = "doctype",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_EQ] = "=",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [sym_entity] = "entity",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "quoted_attribute_value_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "quoted_attribute_value_token2",
  [sym_text] = "text",
  [anon_sym_LT_QMARKxml] = "<\?xml",
  [anon_sym_QMARK_GT] = "\?>",
  [sym_semgrep_metavariable] = "semgrep_metavariable",
  [sym_start_tag_name] = "start_tag_name",
  [sym_script_start_tag_name] = "script_start_tag_name",
  [sym_style_start_tag_name] = "style_start_tag_name",
  [sym_end_tag_name] = "end_tag_name",
  [sym_erroneous_end_tag_name] = "erroneous_end_tag_name",
  [sym_implicit_end_tag] = "implicit_end_tag",
  [sym_raw_text] = "raw_text",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym_doctype_] = "doctype_",
  [sym_node] = "node",
  [sym_element] = "element",
  [sym_script_element] = "script_element",
  [sym_style_element] = "style_element",
  [sym_start_tag] = "start_tag",
  [sym_script_start_tag] = "script_start_tag",
  [sym_style_start_tag] = "style_start_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_end_tag] = "end_tag",
  [sym_erroneous_end_tag] = "erroneous_end_tag",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym_toplevel_node] = "toplevel_node",
  [sym_toplevel_attribute] = "toplevel_attribute",
  [sym_xmldoctype] = "xmldoctype",
  [sym_semgrep_start_tag] = "semgrep_start_tag",
  [sym_semgrep_end_tag] = "semgrep_end_tag",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_element_repeat1] = "element_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [alias_sym_pat_03aa317] = "pat_03aa317",
  [alias_sym_pat_58fbb2e] = "pat_58fbb2e",
  [alias_sym_pat_98d585a] = "pat_98d585a",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_BANG] = anon_sym_LT_BANG,
  [aux_sym_doctype__token1] = aux_sym_doctype__token1,
  [anon_sym_GT] = anon_sym_GT,
  [sym_doctype] = sym_doctype,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [sym_entity] = sym_entity,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = aux_sym_quoted_attribute_value_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = aux_sym_quoted_attribute_value_token2,
  [sym_text] = sym_text,
  [anon_sym_LT_QMARKxml] = anon_sym_LT_QMARKxml,
  [anon_sym_QMARK_GT] = anon_sym_QMARK_GT,
  [sym_semgrep_metavariable] = sym_semgrep_metavariable,
  [sym_start_tag_name] = sym_start_tag_name,
  [sym_script_start_tag_name] = sym_script_start_tag_name,
  [sym_style_start_tag_name] = sym_style_start_tag_name,
  [sym_end_tag_name] = sym_end_tag_name,
  [sym_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [sym_implicit_end_tag] = sym_implicit_end_tag,
  [sym_raw_text] = sym_raw_text,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym_doctype_] = sym_doctype_,
  [sym_node] = sym_node,
  [sym_element] = sym_element,
  [sym_script_element] = sym_script_element,
  [sym_style_element] = sym_style_element,
  [sym_start_tag] = sym_start_tag,
  [sym_script_start_tag] = sym_script_start_tag,
  [sym_style_start_tag] = sym_style_start_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_erroneous_end_tag] = sym_erroneous_end_tag,
  [sym_attribute] = sym_attribute,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym_toplevel_node] = sym_toplevel_node,
  [sym_toplevel_attribute] = sym_toplevel_attribute,
  [sym_xmldoctype] = sym_xmldoctype,
  [sym_semgrep_start_tag] = sym_semgrep_start_tag,
  [sym_semgrep_end_tag] = sym_semgrep_end_tag,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_element_repeat1] = aux_sym_element_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [alias_sym_pat_03aa317] = alias_sym_pat_03aa317,
  [alias_sym_pat_58fbb2e] = alias_sym_pat_58fbb2e,
  [alias_sym_pat_98d585a] = alias_sym_pat_98d585a,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_doctype__token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_entity] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_QMARKxml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_semgrep_metavariable] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_script_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_style_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_implicit_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_doctype_] = {
    .visible = true,
    .named = true,
  },
  [sym_node] = {
    .visible = true,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_script_element] = {
    .visible = true,
    .named = true,
  },
  [sym_style_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_script_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_style_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_toplevel_node] = {
    .visible = true,
    .named = true,
  },
  [sym_toplevel_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_xmldoctype] = {
    .visible = true,
    .named = true,
  },
  [sym_semgrep_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_semgrep_end_tag] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_element_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_pat_03aa317] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_58fbb2e] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_98d585a] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_pat_03aa317,
  },
  [2] = {
    [1] = alias_sym_pat_58fbb2e,
  },
  [3] = {
    [1] = alias_sym_pat_98d585a,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 20,
  [31] = 31,
  [32] = 14,
  [33] = 19,
  [34] = 21,
  [35] = 18,
  [36] = 22,
  [37] = 37,
  [38] = 24,
  [39] = 16,
  [40] = 40,
  [41] = 26,
  [42] = 37,
  [43] = 25,
  [44] = 40,
  [45] = 11,
  [46] = 23,
  [47] = 47,
  [48] = 10,
  [49] = 49,
  [50] = 15,
  [51] = 51,
  [52] = 52,
  [53] = 49,
  [54] = 54,
  [55] = 54,
  [56] = 56,
  [57] = 49,
  [58] = 58,
  [59] = 58,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 58,
  [66] = 61,
  [67] = 63,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 71,
  [75] = 75,
  [76] = 75,
  [77] = 77,
  [78] = 78,
  [79] = 72,
  [80] = 73,
  [81] = 81,
  [82] = 77,
  [83] = 71,
  [84] = 81,
  [85] = 85,
  [86] = 78,
  [87] = 87,
  [88] = 88,
  [89] = 85,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 88,
  [94] = 92,
  [95] = 88,
  [96] = 81,
  [97] = 85,
  [98] = 78,
  [99] = 75,
  [100] = 92,
  [101] = 91,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 104,
  [108] = 105,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 110,
  [114] = 111,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 116,
  [119] = 119,
  [120] = 115,
  [121] = 116,
  [122] = 122,
  [123] = 123,
  [124] = 109,
  [125] = 123,
  [126] = 115,
  [127] = 117,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      ADVANCE_MAP(
        '"', 81,
        '$', 21,
        '&', 3,
        '\'', 78,
        '/', 6,
        '<', 31,
        '=', 34,
        '>', 28,
        '?', 7,
        'D', 13,
        'd', 13,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(37);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '<') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(84);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(86);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 9:
      if (lookahead == 'm') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'x') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(14);
      END_STATE();
    case 18:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(84);
      END_STATE();
    case 19:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(27);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 21:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(87);
      END_STATE();
    case 22:
      if (eof) ADVANCE(24);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '>') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(36);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '?') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead)) ADVANCE(36);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_doctype__token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_doctype__token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_doctype);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '/') ADVANCE(33);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '?') ADVANCE(10);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '>') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LT_QMARKxml);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_semgrep_metavariable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(87);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 22, .external_lex_state = 2},
  [2] = {.lex_state = 4, .external_lex_state = 3},
  [3] = {.lex_state = 4, .external_lex_state = 3},
  [4] = {.lex_state = 4, .external_lex_state = 3},
  [5] = {.lex_state = 4, .external_lex_state = 3},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 0, .external_lex_state = 2},
  [8] = {.lex_state = 4, .external_lex_state = 3},
  [9] = {.lex_state = 4, .external_lex_state = 3},
  [10] = {.lex_state = 4, .external_lex_state = 3},
  [11] = {.lex_state = 4, .external_lex_state = 3},
  [12] = {.lex_state = 4, .external_lex_state = 3},
  [13] = {.lex_state = 4, .external_lex_state = 3},
  [14] = {.lex_state = 4, .external_lex_state = 3},
  [15] = {.lex_state = 4, .external_lex_state = 3},
  [16] = {.lex_state = 4, .external_lex_state = 3},
  [17] = {.lex_state = 4, .external_lex_state = 3},
  [18] = {.lex_state = 4, .external_lex_state = 3},
  [19] = {.lex_state = 4, .external_lex_state = 3},
  [20] = {.lex_state = 4, .external_lex_state = 3},
  [21] = {.lex_state = 4, .external_lex_state = 3},
  [22] = {.lex_state = 4, .external_lex_state = 3},
  [23] = {.lex_state = 4, .external_lex_state = 3},
  [24] = {.lex_state = 4, .external_lex_state = 3},
  [25] = {.lex_state = 4, .external_lex_state = 3},
  [26] = {.lex_state = 4, .external_lex_state = 3},
  [27] = {.lex_state = 4, .external_lex_state = 3},
  [28] = {.lex_state = 4, .external_lex_state = 3},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 0, .external_lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 22, .external_lex_state = 4},
  [38] = {.lex_state = 0, .external_lex_state = 2},
  [39] = {.lex_state = 0, .external_lex_state = 2},
  [40] = {.lex_state = 22, .external_lex_state = 4},
  [41] = {.lex_state = 0, .external_lex_state = 2},
  [42] = {.lex_state = 22, .external_lex_state = 4},
  [43] = {.lex_state = 0, .external_lex_state = 2},
  [44] = {.lex_state = 22, .external_lex_state = 4},
  [45] = {.lex_state = 0, .external_lex_state = 2},
  [46] = {.lex_state = 0, .external_lex_state = 2},
  [47] = {.lex_state = 0, .external_lex_state = 2},
  [48] = {.lex_state = 0, .external_lex_state = 2},
  [49] = {.lex_state = 22, .external_lex_state = 4},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {.lex_state = 1, .external_lex_state = 2},
  [52] = {.lex_state = 22, .external_lex_state = 2},
  [53] = {.lex_state = 23, .external_lex_state = 2},
  [54] = {.lex_state = 0, .external_lex_state = 5},
  [55] = {.lex_state = 0, .external_lex_state = 5},
  [56] = {.lex_state = 22, .external_lex_state = 2},
  [57] = {.lex_state = 22, .external_lex_state = 2},
  [58] = {.lex_state = 1, .external_lex_state = 2},
  [59] = {.lex_state = 1, .external_lex_state = 2},
  [60] = {.lex_state = 22, .external_lex_state = 2},
  [61] = {.lex_state = 0, .external_lex_state = 6},
  [62] = {.lex_state = 22, .external_lex_state = 2},
  [63] = {.lex_state = 0, .external_lex_state = 6},
  [64] = {.lex_state = 23, .external_lex_state = 2},
  [65] = {.lex_state = 1, .external_lex_state = 2},
  [66] = {.lex_state = 0, .external_lex_state = 6},
  [67] = {.lex_state = 0, .external_lex_state = 6},
  [68] = {.lex_state = 22, .external_lex_state = 2},
  [69] = {.lex_state = 22, .external_lex_state = 2},
  [70] = {.lex_state = 23, .external_lex_state = 2},
  [71] = {.lex_state = 22, .external_lex_state = 4},
  [72] = {.lex_state = 0, .external_lex_state = 7},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 23, .external_lex_state = 2},
  [75] = {.lex_state = 22, .external_lex_state = 4},
  [76] = {.lex_state = 23, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 23, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 7},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 23, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 22, .external_lex_state = 2},
  [84] = {.lex_state = 22, .external_lex_state = 4},
  [85] = {.lex_state = 22, .external_lex_state = 4},
  [86] = {.lex_state = 22, .external_lex_state = 4},
  [87] = {.lex_state = 0, .external_lex_state = 6},
  [88] = {.lex_state = 2, .external_lex_state = 2},
  [89] = {.lex_state = 23, .external_lex_state = 2},
  [90] = {.lex_state = 0, .external_lex_state = 6},
  [91] = {.lex_state = 0, .external_lex_state = 8},
  [92] = {.lex_state = 5, .external_lex_state = 2},
  [93] = {.lex_state = 2, .external_lex_state = 2},
  [94] = {.lex_state = 5, .external_lex_state = 2},
  [95] = {.lex_state = 2, .external_lex_state = 2},
  [96] = {.lex_state = 22, .external_lex_state = 2},
  [97] = {.lex_state = 22, .external_lex_state = 2},
  [98] = {.lex_state = 22, .external_lex_state = 2},
  [99] = {.lex_state = 22, .external_lex_state = 2},
  [100] = {.lex_state = 5, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 8},
  [102] = {.lex_state = 0, .external_lex_state = 6},
  [103] = {.lex_state = 0, .external_lex_state = 6},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 19, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 9},
  [124] = {.lex_state = 19, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 9},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 0, .external_lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_doctype] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_entity] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LT_QMARKxml] = ACTIONS(1),
    [anon_sym_QMARK_GT] = ACTIONS(1),
    [sym_semgrep_metavariable] = ACTIONS(1),
    [sym_start_tag_name] = ACTIONS(1),
    [sym_script_start_tag_name] = ACTIONS(1),
    [sym_style_start_tag_name] = ACTIONS(1),
    [sym_end_tag_name] = ACTIONS(1),
    [sym_erroneous_end_tag_name] = ACTIONS(1),
    [sym_implicit_end_tag] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(119),
    [sym_doctype_] = STATE(31),
    [sym_element] = STATE(31),
    [sym_script_element] = STATE(31),
    [sym_style_element] = STATE(31),
    [sym_start_tag] = STATE(2),
    [sym_script_start_tag] = STATE(66),
    [sym_style_start_tag] = STATE(67),
    [sym_self_closing_tag] = STATE(46),
    [sym_erroneous_end_tag] = STATE(31),
    [sym_toplevel_node] = STATE(7),
    [sym_toplevel_attribute] = STATE(112),
    [sym_xmldoctype] = STATE(31),
    [sym_semgrep_start_tag] = STATE(9),
    [aux_sym_document_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(9),
    [anon_sym_LT_SLASH] = ACTIONS(11),
    [sym_attribute_name] = ACTIONS(13),
    [anon_sym_LT_QMARKxml] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_BANG,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_implicit_end_tag,
    STATE(5), 1,
      sym_start_tag,
    STATE(9), 1,
      sym_semgrep_start_tag,
    STATE(23), 1,
      sym_self_closing_tag,
    STATE(30), 1,
      sym_semgrep_end_tag,
    STATE(34), 1,
      sym_end_tag,
    STATE(61), 1,
      sym_script_start_tag,
    STATE(63), 1,
      sym_style_start_tag,
    ACTIONS(23), 2,
      sym_entity,
      sym_text,
    STATE(4), 2,
      sym_node,
      aux_sym_element_repeat1,
    STATE(28), 5,
      sym_doctype_,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
  [52] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_BANG,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_LT_SLASH,
    ACTIONS(29), 1,
      sym_implicit_end_tag,
    STATE(5), 1,
      sym_start_tag,
    STATE(9), 1,
      sym_semgrep_start_tag,
    STATE(10), 1,
      sym_end_tag,
    STATE(20), 1,
      sym_semgrep_end_tag,
    STATE(23), 1,
      sym_self_closing_tag,
    STATE(61), 1,
      sym_script_start_tag,
    STATE(63), 1,
      sym_style_start_tag,
    ACTIONS(23), 2,
      sym_entity,
      sym_text,
    STATE(8), 2,
      sym_node,
      aux_sym_element_repeat1,
    STATE(28), 5,
      sym_doctype_,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
  [104] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_BANG,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(31), 1,
      sym_implicit_end_tag,
    STATE(5), 1,
      sym_start_tag,
    STATE(9), 1,
      sym_semgrep_start_tag,
    STATE(23), 1,
      sym_self_closing_tag,
    STATE(30), 1,
      sym_semgrep_end_tag,
    STATE(48), 1,
      sym_end_tag,
    STATE(61), 1,
      sym_script_start_tag,
    STATE(63), 1,
      sym_style_start_tag,
    ACTIONS(23), 2,
      sym_entity,
      sym_text,
    STATE(8), 2,
      sym_node,
      aux_sym_element_repeat1,
    STATE(28), 5,
      sym_doctype_,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
  [156] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_BANG,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_LT_SLASH,
    ACTIONS(33), 1,
      sym_implicit_end_tag,
    STATE(5), 1,
      sym_start_tag,
    STATE(9), 1,
      sym_semgrep_start_tag,
    STATE(20), 1,
      sym_semgrep_end_tag,
    STATE(21), 1,
      sym_end_tag,
    STATE(23), 1,
      sym_self_closing_tag,
    STATE(61), 1,
      sym_script_start_tag,
    STATE(63), 1,
      sym_style_start_tag,
    ACTIONS(23), 2,
      sym_entity,
      sym_text,
    STATE(3), 2,
      sym_node,
      aux_sym_element_repeat1,
    STATE(28), 5,
      sym_doctype_,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
  [208] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_LT_BANG,
    ACTIONS(40), 1,
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_LT_SLASH,
    ACTIONS(46), 1,
      anon_sym_LT_QMARKxml,
    STATE(2), 1,
      sym_start_tag,
    STATE(9), 1,
      sym_semgrep_start_tag,
    STATE(46), 1,
      sym_self_closing_tag,
    STATE(66), 1,
      sym_script_start_tag,
    STATE(67), 1,
      sym_style_start_tag,
    STATE(6), 2,
      sym_toplevel_node,
      aux_sym_document_repeat1,
    STATE(31), 6,
      sym_doctype_,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_xmldoctype,
  [254] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LT_SLASH,
    ACTIONS(15), 1,
      anon_sym_LT_QMARKxml,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_start_tag,
    STATE(9), 1,
      sym_semgrep_start_tag,
    STATE(46), 1,
      sym_self_closing_tag,
    STATE(66), 1,
      sym_script_start_tag,
    STATE(67), 1,
      sym_style_start_tag,
    STATE(6), 2,
      sym_toplevel_node,
      aux_sym_document_repeat1,
    STATE(31), 6,
      sym_doctype_,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_xmldoctype,
  [300] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LT_BANG,
    ACTIONS(54), 1,
      anon_sym_LT,
    ACTIONS(57), 1,
      anon_sym_LT_SLASH,
    ACTIONS(63), 1,
      sym_implicit_end_tag,
    STATE(5), 1,
      sym_start_tag,
    STATE(9), 1,
      sym_semgrep_start_tag,
    STATE(23), 1,
      sym_self_closing_tag,
    STATE(61), 1,
      sym_script_start_tag,
    STATE(63), 1,
      sym_style_start_tag,
    ACTIONS(60), 2,
      sym_entity,
      sym_text,
    STATE(8), 2,
      sym_node,
      aux_sym_element_repeat1,
    STATE(28), 5,
      sym_doctype_,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
  [346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_LT,
    ACTIONS(65), 5,
      sym_implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(69), 5,
      sym_implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LT,
    ACTIONS(73), 5,
      sym_implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LT,
    ACTIONS(77), 5,
      sym_implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LT,
    ACTIONS(81), 5,
      sym_implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LT,
    ACTIONS(85), 5,
      sym_implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_LT,
    ACTIONS(89), 5,
      sym_implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LT,
    ACTIONS(93), 5,
      sym_implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_LT,
    ACTIONS(97), 5,
      sym_implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [472] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_LT,
    ACTIONS(101), 5,
      sym_implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LT,
    ACTIONS(105), 5,
      sym_implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(109), 5,
      sym_implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LT,
    ACTIONS(113), 5,
      sym_implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_LT,
    ACTIONS(117), 5,
      sym_implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [542] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LT,
    ACTIONS(121), 5,
      sym_implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_LT,
    ACTIONS(125), 5,
      sym_implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LT,
    ACTIONS(129), 5,
      sym_implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(133), 5,
      sym_implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_LT,
    ACTIONS(137), 5,
      sym_implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_LT,
    ACTIONS(141), 5,
      sym_implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LT,
    ACTIONS(145), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_QMARKxml,
  [639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_QMARKxml,
  [652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LT,
    ACTIONS(149), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_QMARKxml,
  [665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LT,
    ACTIONS(85), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_QMARKxml,
  [678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LT,
    ACTIONS(105), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_QMARKxml,
  [691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LT,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_QMARKxml,
  [704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_LT,
    ACTIONS(101), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_QMARKxml,
  [717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_LT,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_QMARKxml,
  [730] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_GT,
    ACTIONS(155), 1,
      anon_sym_SLASH_GT,
    ACTIONS(157), 1,
      sym_attribute_name,
    STATE(44), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_LT,
    ACTIONS(125), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_QMARKxml,
  [760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LT,
    ACTIONS(93), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_QMARKxml,
  [773] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_attribute_name,
    ACTIONS(159), 1,
      anon_sym_GT,
    ACTIONS(161), 1,
      anon_sym_SLASH_GT,
    STATE(49), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(133), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_QMARKxml,
  [803] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_GT,
    ACTIONS(157), 1,
      sym_attribute_name,
    ACTIONS(163), 1,
      anon_sym_SLASH_GT,
    STATE(40), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LT,
    ACTIONS(129), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_QMARKxml,
  [833] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_attribute_name,
    ACTIONS(159), 1,
      anon_sym_GT,
    ACTIONS(165), 1,
      anon_sym_SLASH_GT,
    STATE(49), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LT,
    ACTIONS(73), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_QMARKxml,
  [863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LT,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_QMARKxml,
  [876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LT,
    ACTIONS(167), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_QMARKxml,
  [889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(69), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_QMARKxml,
  [902] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_attribute_name,
    ACTIONS(171), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(49), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_LT,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_QMARKxml,
  [930] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_attribute_value,
    ACTIONS(178), 1,
      anon_sym_SQUOTE,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      sym_quoted_attribute_value,
  [946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_GT,
    ACTIONS(184), 1,
      sym_attribute_name,
    STATE(56), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_QMARK_GT,
    ACTIONS(186), 1,
      sym_attribute_name,
    STATE(53), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [974] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_semgrep_metavariable,
    ACTIONS(191), 1,
      sym_start_tag_name,
    ACTIONS(193), 1,
      sym_script_start_tag_name,
    ACTIONS(195), 1,
      sym_style_start_tag_name,
  [990] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_semgrep_metavariable,
    ACTIONS(193), 1,
      sym_script_start_tag_name,
    ACTIONS(195), 1,
      sym_style_start_tag_name,
    ACTIONS(197), 1,
      sym_start_tag_name,
  [1006] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym_attribute_name,
    ACTIONS(199), 1,
      anon_sym_GT,
    STATE(57), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_GT,
    ACTIONS(201), 1,
      sym_attribute_name,
    STATE(57), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1034] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym_attribute_value,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      sym_quoted_attribute_value,
  [1050] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_SQUOTE,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      sym_attribute_value,
    STATE(89), 1,
      sym_quoted_attribute_value,
  [1066] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym_attribute_name,
    ACTIONS(212), 1,
      anon_sym_GT,
    STATE(57), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1080] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LT_SLASH,
    ACTIONS(216), 1,
      sym_raw_text,
    STATE(19), 1,
      sym_end_tag,
    STATE(20), 1,
      sym_semgrep_end_tag,
  [1096] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym_attribute_name,
    ACTIONS(218), 1,
      anon_sym_GT,
    STATE(57), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1110] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LT_SLASH,
    ACTIONS(220), 1,
      sym_raw_text,
    STATE(18), 1,
      sym_end_tag,
    STATE(20), 1,
      sym_semgrep_end_tag,
  [1126] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_attribute_name,
    ACTIONS(224), 1,
      anon_sym_QMARK_GT,
    STATE(70), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1140] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_attribute_value,
    ACTIONS(228), 1,
      anon_sym_SQUOTE,
    ACTIONS(230), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      sym_quoted_attribute_value,
  [1156] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LT_SLASH,
    ACTIONS(234), 1,
      sym_raw_text,
    STATE(30), 1,
      sym_semgrep_end_tag,
    STATE(33), 1,
      sym_end_tag,
  [1172] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LT_SLASH,
    ACTIONS(236), 1,
      sym_raw_text,
    STATE(30), 1,
      sym_semgrep_end_tag,
    STATE(35), 1,
      sym_end_tag,
  [1188] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym_attribute_name,
    ACTIONS(238), 1,
      anon_sym_GT,
    STATE(62), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym_attribute_name,
    ACTIONS(240), 1,
      anon_sym_GT,
    STATE(60), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1216] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_attribute_name,
    ACTIONS(242), 1,
      anon_sym_QMARK_GT,
    STATE(53), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_EQ,
    ACTIONS(244), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_semgrep_metavariable,
    ACTIONS(250), 1,
      sym_end_tag_name,
    ACTIONS(252), 1,
      sym_erroneous_end_tag_name,
  [1255] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LT_SLASH,
    STATE(15), 1,
      sym_end_tag,
    STATE(20), 1,
      sym_semgrep_end_tag,
  [1268] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_QMARK_GT,
    ACTIONS(254), 1,
      anon_sym_EQ,
    ACTIONS(256), 1,
      sym_attribute_name,
  [1281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_attribute_name,
    ACTIONS(258), 2,
      ts_builtin_sym_end,
      anon_sym_QMARK_GT,
  [1301] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LT_SLASH,
    STATE(20), 1,
      sym_semgrep_end_tag,
    STATE(24), 1,
      sym_end_tag,
  [1314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_attribute_name,
    ACTIONS(262), 2,
      ts_builtin_sym_end,
      anon_sym_QMARK_GT,
  [1325] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(266), 1,
      sym_semgrep_metavariable,
    ACTIONS(268), 1,
      sym_end_tag_name,
  [1338] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LT_SLASH,
    STATE(30), 1,
      sym_semgrep_end_tag,
    STATE(50), 1,
      sym_end_tag,
  [1351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      sym_attribute_name,
    ACTIONS(270), 2,
      ts_builtin_sym_end,
      anon_sym_QMARK_GT,
  [1362] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LT_SLASH,
    STATE(30), 1,
      sym_semgrep_end_tag,
    STATE(38), 1,
      sym_end_tag,
  [1375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_EQ,
    ACTIONS(244), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      aux_sym_quoted_attribute_value_token2,
  [1431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_QMARK_GT,
    ACTIONS(284), 1,
      sym_attribute_name,
  [1441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_semgrep_metavariable,
    ACTIONS(250), 1,
      sym_end_tag_name,
  [1459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      aux_sym_quoted_attribute_value_token1,
  [1469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      aux_sym_quoted_attribute_value_token2,
  [1479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_SQUOTE,
    ACTIONS(294), 1,
      aux_sym_quoted_attribute_value_token1,
  [1489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_DQUOTE,
    ACTIONS(298), 1,
      aux_sym_quoted_attribute_value_token2,
  [1499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_SQUOTE,
    ACTIONS(300), 1,
      aux_sym_quoted_attribute_value_token1,
  [1541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_semgrep_metavariable,
    ACTIONS(268), 1,
      sym_end_tag_name,
  [1551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_GT,
  [1574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_GT,
  [1581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
  [1588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_GT,
  [1595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_GT,
  [1602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      aux_sym_doctype__token1,
  [1609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_GT,
  [1616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_GT,
  [1623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
  [1630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_GT,
  [1637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_GT,
  [1644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_SQUOTE,
  [1651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_DQUOTE,
  [1658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym_doctype,
  [1665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
  [1672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
  [1679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_SQUOTE,
  [1686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_DQUOTE,
  [1693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_EQ,
  [1700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym_erroneous_end_tag_name,
  [1707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      aux_sym_doctype__token1,
  [1714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_erroneous_end_tag_name,
  [1721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
  [1728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym_doctype,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 156,
  [SMALL_STATE(6)] = 208,
  [SMALL_STATE(7)] = 254,
  [SMALL_STATE(8)] = 300,
  [SMALL_STATE(9)] = 346,
  [SMALL_STATE(10)] = 360,
  [SMALL_STATE(11)] = 374,
  [SMALL_STATE(12)] = 388,
  [SMALL_STATE(13)] = 402,
  [SMALL_STATE(14)] = 416,
  [SMALL_STATE(15)] = 430,
  [SMALL_STATE(16)] = 444,
  [SMALL_STATE(17)] = 458,
  [SMALL_STATE(18)] = 472,
  [SMALL_STATE(19)] = 486,
  [SMALL_STATE(20)] = 500,
  [SMALL_STATE(21)] = 514,
  [SMALL_STATE(22)] = 528,
  [SMALL_STATE(23)] = 542,
  [SMALL_STATE(24)] = 556,
  [SMALL_STATE(25)] = 570,
  [SMALL_STATE(26)] = 584,
  [SMALL_STATE(27)] = 598,
  [SMALL_STATE(28)] = 612,
  [SMALL_STATE(29)] = 626,
  [SMALL_STATE(30)] = 639,
  [SMALL_STATE(31)] = 652,
  [SMALL_STATE(32)] = 665,
  [SMALL_STATE(33)] = 678,
  [SMALL_STATE(34)] = 691,
  [SMALL_STATE(35)] = 704,
  [SMALL_STATE(36)] = 717,
  [SMALL_STATE(37)] = 730,
  [SMALL_STATE(38)] = 747,
  [SMALL_STATE(39)] = 760,
  [SMALL_STATE(40)] = 773,
  [SMALL_STATE(41)] = 790,
  [SMALL_STATE(42)] = 803,
  [SMALL_STATE(43)] = 820,
  [SMALL_STATE(44)] = 833,
  [SMALL_STATE(45)] = 850,
  [SMALL_STATE(46)] = 863,
  [SMALL_STATE(47)] = 876,
  [SMALL_STATE(48)] = 889,
  [SMALL_STATE(49)] = 902,
  [SMALL_STATE(50)] = 917,
  [SMALL_STATE(51)] = 930,
  [SMALL_STATE(52)] = 946,
  [SMALL_STATE(53)] = 960,
  [SMALL_STATE(54)] = 974,
  [SMALL_STATE(55)] = 990,
  [SMALL_STATE(56)] = 1006,
  [SMALL_STATE(57)] = 1020,
  [SMALL_STATE(58)] = 1034,
  [SMALL_STATE(59)] = 1050,
  [SMALL_STATE(60)] = 1066,
  [SMALL_STATE(61)] = 1080,
  [SMALL_STATE(62)] = 1096,
  [SMALL_STATE(63)] = 1110,
  [SMALL_STATE(64)] = 1126,
  [SMALL_STATE(65)] = 1140,
  [SMALL_STATE(66)] = 1156,
  [SMALL_STATE(67)] = 1172,
  [SMALL_STATE(68)] = 1188,
  [SMALL_STATE(69)] = 1202,
  [SMALL_STATE(70)] = 1216,
  [SMALL_STATE(71)] = 1230,
  [SMALL_STATE(72)] = 1242,
  [SMALL_STATE(73)] = 1255,
  [SMALL_STATE(74)] = 1268,
  [SMALL_STATE(75)] = 1281,
  [SMALL_STATE(76)] = 1290,
  [SMALL_STATE(77)] = 1301,
  [SMALL_STATE(78)] = 1314,
  [SMALL_STATE(79)] = 1325,
  [SMALL_STATE(80)] = 1338,
  [SMALL_STATE(81)] = 1351,
  [SMALL_STATE(82)] = 1362,
  [SMALL_STATE(83)] = 1375,
  [SMALL_STATE(84)] = 1386,
  [SMALL_STATE(85)] = 1395,
  [SMALL_STATE(86)] = 1404,
  [SMALL_STATE(87)] = 1413,
  [SMALL_STATE(88)] = 1421,
  [SMALL_STATE(89)] = 1431,
  [SMALL_STATE(90)] = 1441,
  [SMALL_STATE(91)] = 1449,
  [SMALL_STATE(92)] = 1459,
  [SMALL_STATE(93)] = 1469,
  [SMALL_STATE(94)] = 1479,
  [SMALL_STATE(95)] = 1489,
  [SMALL_STATE(96)] = 1499,
  [SMALL_STATE(97)] = 1507,
  [SMALL_STATE(98)] = 1515,
  [SMALL_STATE(99)] = 1523,
  [SMALL_STATE(100)] = 1531,
  [SMALL_STATE(101)] = 1541,
  [SMALL_STATE(102)] = 1551,
  [SMALL_STATE(103)] = 1559,
  [SMALL_STATE(104)] = 1567,
  [SMALL_STATE(105)] = 1574,
  [SMALL_STATE(106)] = 1581,
  [SMALL_STATE(107)] = 1588,
  [SMALL_STATE(108)] = 1595,
  [SMALL_STATE(109)] = 1602,
  [SMALL_STATE(110)] = 1609,
  [SMALL_STATE(111)] = 1616,
  [SMALL_STATE(112)] = 1623,
  [SMALL_STATE(113)] = 1630,
  [SMALL_STATE(114)] = 1637,
  [SMALL_STATE(115)] = 1644,
  [SMALL_STATE(116)] = 1651,
  [SMALL_STATE(117)] = 1658,
  [SMALL_STATE(118)] = 1665,
  [SMALL_STATE(119)] = 1672,
  [SMALL_STATE(120)] = 1679,
  [SMALL_STATE(121)] = 1686,
  [SMALL_STATE(122)] = 1693,
  [SMALL_STATE(123)] = 1700,
  [SMALL_STATE(124)] = 1707,
  [SMALL_STATE(125)] = 1714,
  [SMALL_STATE(126)] = 1721,
  [SMALL_STATE(127)] = 1728,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semgrep_start_tag, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_semgrep_start_tag, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semgrep_end_tag, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_semgrep_end_tag, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype_, 4, 0, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype_, 4, 0, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semgrep_start_tag, 4, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_semgrep_start_tag, 4, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xmldoctype, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xmldoctype, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toplevel_node, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_toplevel_node, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xmldoctype, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xmldoctype, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, 0, 3),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, 0, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, 0, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, 0, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toplevel_attribute, 3, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [334] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_start_tag_name = 0,
  ts_external_token_script_start_tag_name = 1,
  ts_external_token_style_start_tag_name = 2,
  ts_external_token_end_tag_name = 3,
  ts_external_token_erroneous_end_tag_name = 4,
  ts_external_token_SLASH_GT = 5,
  ts_external_token_implicit_end_tag = 6,
  ts_external_token_raw_text = 7,
  ts_external_token_comment = 8,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_start_tag_name] = sym_start_tag_name,
  [ts_external_token_script_start_tag_name] = sym_script_start_tag_name,
  [ts_external_token_style_start_tag_name] = sym_style_start_tag_name,
  [ts_external_token_end_tag_name] = sym_end_tag_name,
  [ts_external_token_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [ts_external_token_SLASH_GT] = anon_sym_SLASH_GT,
  [ts_external_token_implicit_end_tag] = sym_implicit_end_tag,
  [ts_external_token_raw_text] = sym_raw_text,
  [ts_external_token_comment] = sym_comment,
};

static const bool ts_external_scanner_states[10][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_start_tag_name] = true,
    [ts_external_token_script_start_tag_name] = true,
    [ts_external_token_style_start_tag_name] = true,
    [ts_external_token_end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token_implicit_end_tag] = true,
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token_implicit_end_tag] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token_start_tag_name] = true,
    [ts_external_token_script_start_tag_name] = true,
    [ts_external_token_style_start_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token_end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
    [ts_external_token_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [9] = {
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_html_external_scanner_create(void);
void tree_sitter_html_external_scanner_destroy(void *);
bool tree_sitter_html_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_html_external_scanner_serialize(void *, char *);
void tree_sitter_html_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_html(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_html_external_scanner_create,
      tree_sitter_html_external_scanner_destroy,
      tree_sitter_html_external_scanner_scan,
      tree_sitter_html_external_scanner_serialize,
      tree_sitter_html_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
