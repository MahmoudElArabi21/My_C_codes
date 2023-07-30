
#ifndef _QUEUE_H
#define _QUEUE_H

#include "../my_types.h"

typedef struct {
    void **queue_array;
    sint32 queue_front;
    sint32 queue_rear;
    uint32 queue_max;
    sint32 queue_count;
}queue_t;

typedef enum {
    q_null_ptr=0,
    q_ok,
    q_n_ok,
    q_empty,
    q_full
}queue_status;

queue_t *queue_creat(uint32 max_size, queue_status *retstat);
queue_status queue_enque(queue_t *queue, void *itemptr);
void* queue_deque(queue_t *queue, queue_status *retstat);
void* queue_front(queue_t *queue, queue_status *retstat);
void* queue_rear(queue_t *queue, queue_status *retstat);
queue_status queue_count (queue_t *queue, uint32 *q_cnt);
queue_status queue_destroy (queue_t *queue);



#endif
