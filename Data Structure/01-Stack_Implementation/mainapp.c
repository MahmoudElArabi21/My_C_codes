#include "stack.h"

// stack_t *stack_creat(uint32 max_size, stack_status* ret_stat);
// stack_t *stack_destroy(stack_t* stack, stack_status* ret_stat);
// stack_status stack_push(stack_t* stack, void* item_ptr);
// void* stack_pop(stack_t* stack, stack_status *ret_stat);
// void* stack_top(stack_t* stack, stack_status *ret_stat);
// stack_status stack_count(stack_t* stack, uint32* stack_cnt);

stack_t *stack_ret_ptr = NULL;
stack_status stack_ret_stat = st_n_ok;
uint32 var1 = 18;
uint8 var2 = 5;
uint8 var3 = 'A';
uint32 stack_counter =0;
int main (){
    stack_ret_ptr = stack_creat (8, &stack_ret_stat);
    if(stack_ret_ptr){
        printf("status: %i \t  stack created with size %d\n", stack_ret_stat, stack_ret_ptr->stack_max);
    }
    stack_ret_stat = st_n_ok;
    stack_ret_stat = stack_push (stack_ret_ptr, &var1);
    if (stack_ret_stat == st_ok){
        printf("element %d was pushed \n",*(uint32*)(stack_top(stack_ret_ptr, &stack_ret_stat)) );
    }
    stack_ret_stat = st_n_ok;
    stack_ret_stat = stack_push (stack_ret_ptr, &var2);
    if (stack_ret_stat == st_ok){
        printf("element %d was pushed \n",*(uint8*)(stack_top(stack_ret_ptr, &stack_ret_stat)) );
    }
    stack_ret_stat = st_n_ok;
    stack_ret_stat = stack_push (stack_ret_ptr, &var3);
    if (stack_ret_stat == st_ok){
        printf("element %c was pushed \n",*(uint8*)(stack_top(stack_ret_ptr, &stack_ret_stat)) );
    }
    stack_ret_stat = stack_count(stack_ret_ptr, &stack_counter);
    printf("stack count is %d \n",stack_counter );

    stack_ret_stat = st_n_ok;
    printf("%c element poped\n", *(uint8*)(stack_pop(stack_ret_ptr, &stack_ret_stat)));
    printf("now %d element is the top\n", *(uint8*)(stack_top(stack_ret_ptr, &stack_ret_stat)));
    
    stack_ret_stat = st_n_ok;
    stack_ret_stat = stack_count(stack_ret_ptr, &stack_counter);
    printf("stack count is %d \n",stack_counter );

    stack_ret_ptr = stack_destroy(stack_ret_ptr, &stack_ret_stat);
    if (NULL == stack_ret_ptr){
        printf("stack is destroyed succesfully");
    }
}