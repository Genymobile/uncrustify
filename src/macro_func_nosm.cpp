#include "macro_func_nosm.h"

#include <set>
#include <string>

using namespace std;
typedef set<string> stringset;
static stringset macro_func_nosm;

void add_macro_func_nosm(const char *name)
{
   macro_func_nosm.insert(name);
}

bool is_macro_func_nosm(const char *name)
{
   return macro_func_nosm.find(name) != macro_func_nosm.end();
}
