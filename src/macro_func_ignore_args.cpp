#include "macro_func_ignore_args.h"

#include <set>
#include <string>

using namespace std;
typedef set<string> stringset;
static stringset macro_func_ignore_args;

void add_macro_func_ignore_args(const char *name)
{
   macro_func_ignore_args.insert(name);
}

bool is_macro_func_ignore_args(const char *name)
{
   return macro_func_ignore_args.find(name) != macro_func_ignore_args.end();
}
