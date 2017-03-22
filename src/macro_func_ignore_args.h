#ifndef MACRO_FUNC_IGNORE_ARGS_H
#define MACRO_FUNC_IGNORE_ARGS_H

/**
 * Adds a macro function whose arguments should not be formatted
 */
void add_macro_func_ignore_args(const char *name);

/**
 * Returns true if name is a macro function whose arguments should not be
 * formatted
 */
bool is_macro_func_ignore_args(const char *name);

#endif // MACRO_FUNC_IGNORE_ARGS_H
