
#include "queue.h"

static uint8 queue_is_empty(queue_t *queue){
    return (queue->queue_count == 0);
}
static uint8 queue_is_full(queue_t *queue){
    return (queue->queue_count == queue->queue_max);
}

queue_t *queue_creat(uint32 max_size, queue_status *retstat){
    queue_t * my_que =NULL;
    if(NULL == retstat){
        *retstat = q_null_ptr;
    }
    else{
        my_que = (queue_t *) malloc(sizeof(queue_t));
        if(NULL == my_que){
            *retstat = q_n_ok;
        }
        else{
            my_que->queue_count= 0;
            my_que->queue_max = max_size;
            my_que->queue_front = -1;
            my_que->queue_rear = -1;
            my_que->queue_array = (void**) calloc (max_size, sizeof(void*));
            if(NULL == my_que->queue_array){
                *retstat = q_n_ok;
                free(my_que);
                my_que = NULL;
            }
            else{
                *retstat = q_ok;
            }
        }
    }
    return my_que;
}

queue_status queue_enque(queue_t *queue, void *itemptr){
    queue_status retstat = q_n_ok;
    if((NULL == queue) || (NULL == itemptr)){
        retstat = q_null_ptr;
    }
    else{
        if(queue_is_full(queue)){
            retstat = q_full;
        }
        else{
            queue->queue_rear++;
            if (queue->queue_rear == queue->queue_max){
                queue->queue_rear = 0;
            } 
            if (queue->queue_count == 0){
                queue->queue_front = 0;
                queue->queue_count = 1;
            }
            else{
                queue->queue_count++;
            }
            retstat = q_ok;
        }
    }
    return retstat;
}

void *queue_deque(queue_t *queue, queue_status *ret_status){
    void *ReturnEelem = NULL;
    if((NULL == queue) || (NULL == ret_status)){
        *ret_status = q_null_ptr;
    }
    else{
        if(!queue->queue_count){
            *ret_status = q_empty; 
            ReturnEelem = NULL;
        }
        else{
            ReturnEelem = queue->queue_array[queue->queue_front];
            queue->queue_front ++;
            if(queue->queue_front == queue->queue_max){
               queue->queue_front = 0;
            }
            else{ /* Nothing */ }
            /* Check if the element is the last element in the Queue */
            if(1 == queue->queue_count){
                queue->queue_front = -1; /* Queue is empty */
                queue->queue_rear = -1;  /* Queue is empty */
            }
            else{ /* Nothing */ }
            (queue->queue_count)--; /* Element has been deleted from the Queue */
            *ret_status = q_ok;
        }
    }
    return ReturnEelem;
}


void* queue_front(queue_t *queue, queue_status *retstat){
    void *q_void = NULL;
    if((NULL == queue) || (NULL == retstat)){
        *retstat = q_null_ptr;
    }
    else{
        if(queue_is_empty){
            *retstat = q_empty;
        }
        else{
            q_void = queue->queue_array[queue->queue_front];
            *retstat = q_ok;
        }
    }
    return q_void;
}

void* queue_rear(queue_t *queue, queue_status *retstat){
    void *q_void = NULL;
    if((NULL == queue) || (NULL == retstat)){
        *retstat = q_null_ptr;
    }
    else{
        if(queue_is_empty){
            *retstat = q_empty;
        }
        else{
            q_void = queue->queue_array[queue->queue_rear];
            *retstat = q_ok;
        }
    }
    return q_void;
}

queue_status queue_count (queue_t *queue, uint32 *q_cnt){
    queue_status retstat = q_n_ok;
    if((NULL == queue) || (NULL == q_cnt)){
        retstat = q_null_ptr;
    }
    else{
        *q_cnt = queue->queue_count;
        retstat = q_ok;
    }
    return retstat;
}

queue_status queue_destroy (queue_t *queue){
    queue_status retstat = q_n_ok;
    if(NULL == queue) {
        retstat = q_null_ptr;
    }
    else{
        free(queue->queue_array);
        queue->queue_array = NULL;
        free (queue);
        queue =NULL;
        retstat = q_ok;
    }
    return retstat;
}
