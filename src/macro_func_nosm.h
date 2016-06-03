#ifndef MACRO_FUNC_NOSM_H
#define MACRO_FUNC_NOSM_H

/**
 * Adds a macro function which does not require an ending semi-colon
 */
void add_macro_func_nosm(const char *name);

/**
 * Returns true if name is a macro function which does not require and ending
 * semi-colon
 */
bool is_macro_func_nosm(const char *name);

#endif // MACRO_FUNC_NOSM_H
