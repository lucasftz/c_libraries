#include "str.h"
#include "core_internal.h"

typedef struct Str {
    char* data;
    size_t len;
} Str;

Str* str_new(Allocator* allocator) {
    Str* str_internal = alloc(allocator, sizeof(Str));

    return str_internal;
}

