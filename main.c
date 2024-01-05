#include <stdio.h>
#include <stdlib.h>

struct node_meta 
/**
    metadata for a memory node
*/
{
    // Is the node being used?
    int free;
    
    // The next block in the allocation chain
    struct node_meta * alloc_next;
    
    // The next block in the arena node
    struct node_meta * arena_next;
};

struct mem_arena
/**
    a structure to hold the metadata for an arena allocation
 */
{
    int node_count;
    size_t node_size;
};

struct mem_arena * arena_create(int node_count)
/**
    Create an arena allocation
 */
{
    // the size of the memory in each node
    size_t node_size = sizeof(char) * 10;
    
    // determine the size of the arena's allocation
    size_t allocation_size = sizeof(struct mem_arena) + ((sizeof(struct node_meta) + node_size) * node_count);
    
    // Allocate the space of the arena
    struct mem_arena *arena = (struct mem_arena *)malloc(allocation_size);
    
    // check if the memory allocation failed
    if (mem_arena == NULL) {
        return NULL;
    }
    
    // fill up the arena nodes
    for (int i = 0; i < node_count; i++){
        
    }
    
    arena->node_count = node_count;
    arena->node_size = node_size;
    
    return arena;
};

struct node_meta * arena_alloc(struct mem_arena * arena, size_t size)
/**
    Create an allocation in a memory arena
 */
{
    
}

int main()
{
	// create a new memory arena with 5 nodes
    struct mem_arena *arena = arena_create(5);
    
    
    
    
    // free can get rid of the entire arena
    free(arena);
	return 0;
}
