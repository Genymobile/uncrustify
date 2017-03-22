#ifndef MACRO_FUNC_NO_SEMICOLON_H
#define MACRO_FUNC_NO_SEMICOLON_H

/**
 * Adds a macro function which does not require an ending semi-colon
 */
void add_macro_func_no_semicolon(const char *name);

/**
 * Returns true if name is a macro function which does not require an ending
 * semi-colon
 */
bool is_macro_func_no_semicolon(const char *name);

#endif // MACRO_FUNC_NO_SEMICOLON_H
