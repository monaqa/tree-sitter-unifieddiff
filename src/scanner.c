#include <tree_sitter/parser.h>
#include <stdio.h>
#include <wctype.h>

enum TokenType {
    INDICATOR_NOCHANGE,
    INDICATOR_ADDED,
    INDICATOR_DELETED,
};

void *tree_sitter_unifieddiff_external_scanner_create() { return NULL; }
void tree_sitter_unifieddiff_external_scanner_destroy(void *p) {}
void tree_sitter_unifieddiff_external_scanner_reset(void *p) {}
unsigned tree_sitter_unifieddiff_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_unifieddiff_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
}

bool tree_sitter_unifieddiff_external_scanner_scan(void *payload, TSLexer *lexer,
        const bool *valid_symbols) {

    if (valid_symbols[INDICATOR_NOCHANGE] && lexer->lookahead == ' ') {
        lexer->result_symbol = INDICATOR_NOCHANGE;
        advance(lexer);
        lexer->mark_end(lexer);
        return true;
    }

    if (valid_symbols[INDICATOR_ADDED] && lexer->lookahead == '+') {
        lexer->result_symbol = INDICATOR_ADDED;
        advance(lexer);
        lexer->mark_end(lexer);
        return true;
    }

    if (valid_symbols[INDICATOR_DELETED] && lexer->lookahead == '-') {
        lexer->result_symbol = INDICATOR_DELETED;
        advance(lexer);
        lexer->mark_end(lexer);
        return true;
    }

    return false;
}
