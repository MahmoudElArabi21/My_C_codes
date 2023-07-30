
#ifndef _STACK_H
#define _STACK_H

#include "../my_types.h"

typedef struct {
    void** stack_array;
    sint32 stack_index;
    sint32 stack_count;
    uint32 stack_max;    
}stack_t;

typedef enum {
    st_null_ptr=0,
    st_ok,
    st_n_ok,
    st_empty,
    st_full
}stack_status;

stack_t *stack_creat(uint32 max_size, stack_status* ret_stat);
stack_t *stack_destroy(stack_t* stack, stack_status* ret_stat);
stack_status stack_push(stack_t* stack, void* item_ptr);
void* stack_pop(stack_t* stack, stack_status *ret_stat);
void* stack_top(stack_t* stack, stack_status *ret_stat);
stack_status stack_count(stack_t* stack, uint32* stack_cnt);

#endif
