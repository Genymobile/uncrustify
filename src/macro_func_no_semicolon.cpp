#include "macro_func_no_semicolon.h"

#include <set>
#include <string>

using namespace std;
typedef set<string> stringset;
static stringset macro_func_no_semicolon;

void add_macro_func_no_semicolon(const char *name)
{
   macro_func_no_semicolon.insert(name);
}

bool is_macro_func_no_semicolon(const char *name)
{
   return macro_func_no_semicolon.find(name) != macro_func_no_semicolon.end();
}
