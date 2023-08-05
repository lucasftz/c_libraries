#ifndef core_internal_h
#define core_internal_h

#include "core.h"

typedef void* (allocator_function) (size_t size);
typedef void* (reallocator_function) (void* ptr, size_t size);
typedef void (deinit_function) (void* ptr);

#endif
