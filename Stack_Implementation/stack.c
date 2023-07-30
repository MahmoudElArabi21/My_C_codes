
#include "stack.h"

static uint8 stack_is_empty(stack_t *stack){
    return (stack->stack_count == 0);
}

static uint8 stack_is_full(stack_t *stack){
    return (stack->stack_count == stack->stack_max);
}

stack_t *stack_creat(uint32 max_size, stack_status* ret_stat){
    stack_t *my_stack = NULL;
    if(NULL == ret_stat){
        *ret_stat = st_null_ptr;
    }
    else{
        my_stack = (stack_t *) malloc(sizeof(stack_t));
        if(NULL == my_stack){
            *ret_stat = st_n_ok;
        }
        else{
            my_stack->stack_index = -1;
            my_stack-> stack_count=0;
            my_stack->stack_max = max_size;
            my_stack->stack_array = (void**) calloc(max_size, sizeof(void*));
            if (NULL == my_stack->stack_array){
                *ret_stat = st_n_ok;
                free(my_stack);
                my_stack = NULL;
            }
            else{
                *ret_stat = st_ok;
            }
        }
    }
    return my_stack;
}

stack_t *stack_destroy(stack_t* stack, stack_status* ret_stat){
    if((NULL == ret_stat) || (NULL == stack) ){
        *ret_stat = st_null_ptr; 
    }
    else{
        free(stack->stack_array);
        stack->stack_array =NULL;
        free(stack);
        stack=NULL;
        *ret_stat = st_ok;
    }
    return stack;
}

stack_status stack_push(stack_t* stack, void* item_ptr){
    stack_status ret_stat = st_n_ok;
    if((NULL == item_ptr) || (NULL == stack) ){
        ret_stat = st_null_ptr;
    }
    else{
        if (stack_is_full(stack)){
            ret_stat = st_full;
        }
        else{
            stack->stack_index ++;
            stack->stack_array[stack->stack_index] = item_ptr;
            stack->stack_count++;
            ret_stat = st_ok;
        }    
    }
    return ret_stat;
}

void* stack_pop(stack_t* stack, stack_status *ret_stat){
    void *void_ptr =NULL;
    if((NULL == ret_stat) || (NULL == stack) ){
        *ret_stat = st_null_ptr;
    }
    else{
        if(stack_is_empty(stack)){
            *ret_stat = st_empty;
        }
        else{
            void_ptr =  stack->stack_array[stack->stack_index];
            stack->stack_index--;
            stack->stack_count--;
            *ret_stat = st_ok;
        }
    }
    return void_ptr;
}

void* stack_top(stack_t* stack, stack_status *ret_stat){
    void *void_ptr =NULL;
    if((NULL == ret_stat) || (NULL == stack) ){
        *ret_stat = st_null_ptr;
    }
    else{
        if(stack_is_empty(stack)){
            *ret_stat = st_empty;
        }
        else{
            void_ptr =  stack->stack_array[stack->stack_index];
            *ret_stat = st_ok;
        }
    }
    return void_ptr;
}

stack_status stack_count(stack_t* stack, uint32* stack_cnt){
    stack_status ret_stat = st_n_ok;
    if((NULL == stack_cnt) || (NULL == stack) ){
        ret_stat = st_null_ptr;
    }
    else{
        *stack_cnt = stack->stack_count;
        ret_stat = st_ok;
    }
    return ret_stat;
}
