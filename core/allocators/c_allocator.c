#include <stdlib.h>
#include "c_allocator.h"

Allocator* c_allocator(void) {
    return allocator_new(malloc, realloc, free);
}

