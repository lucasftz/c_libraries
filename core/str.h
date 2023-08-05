#ifndef str_h
#define str_h

#include "core.h"

typedef struct Str Str;
Str* str_new(Allocator* allocator);
Str* str_from(Allocator* allocator, char* chars);

#endif
