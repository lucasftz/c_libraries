#include "core.h"
#include "core_internal.h"

typedef struct Allocator {
    void* alloc;
    void* realloc;
    void* deinit;
} allocator;

Allocator* allocator_new(void* (alloc) (size_t size), void* (realloc) (void* ptr, size_t size), void (deinit) (void* ptr)) {
    Allocator* allocator_internal = alloc(sizeof(allocator));
    allocator_internal->alloc = alloc;
    allocator_internal->realloc = realloc;
    allocator_internal->deinit = deinit;
    return allocator_internal;
}


void* allocate(Allocator* allocator, size_t size) {
    allocator_function* allocator_alloc = allocator->alloc;
    return allocator_alloc(size);
}

void* reallocate(Allocator* allocator, void* ptr, size_t size) {
    reallocator_function* allocator_realloc = allocator->realloc;
    return allocator_realloc(ptr, size);
}

void deinit(Allocator* allocator, void* ptr) {
    deinit_function* allocator_deinit = allocator->deinit;
    return allocator_deinit(ptr);
}

