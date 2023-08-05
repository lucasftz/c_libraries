#ifndef core_h
#define core_h

#include <sys/_types/_size_t.h>

#define true 1
#define false 0
#define null (void*) 0

typedef struct Allocator Allocator;
Allocator* allocator_new(void* (alloc) (size_t size), void* (realloc) (void* ptr, size_t size), void (deinit) (void* ptr));
void* allocate(Allocator* allocator, size_t size);
void* reallocate(Allocator* allocator, void* ptr, size_t size);
void deinit(Allocator* allocator, void* ptr);

#endif
