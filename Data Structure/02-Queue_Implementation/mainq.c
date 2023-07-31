#include "queue.h"

// queue_t *queue_creat(uint32 max_size, queue_status *retstat);
// queue_status queue_enque(queue_t *queue, void *itemptr);
// void* queue_deque(queue_t *queue, queue_status *retstat);
// void* queue_front(queue_t *queue, queue_status *retstat);
// void* queue_rear(queue_t *queue, queue_status *retstat);
// queue_status queue_count (queue_t *queue, uint32 *q_cnt);
// queue_status queue_destroy (queue_t *queue);

uint32 Queue1MaxElem = 0;
queue_t *Queue1;
void *QueueRetVal;
queue_status retstatus =q_n_ok;
uint32 Number1 = 0x11, Number2 = 0x22, Number3 = 0x33, Number4 = 0x44, Number5 = 0x55;
uint32 QueueCount;
int main (){
    Queue1 = queue_creat (9, &retstatus);
    if(Queue1){
        printf("retstatus : %d\nQueue created with size %d\n",retstatus, Queue1->queue_max);
    }
    retstatus = queue_enque(Queue1, &Number1);
    retstatus = queue_count(Queue1, &QueueCount);
    printf("Queue count :%d\n", QueueCount);
    retstatus = queue_enque(Queue1, &Number1);
    retstatus = queue_enque(Queue1, &Number2);
    retstatus = queue_enque(Queue1, &Number3);
    retstatus = queue_count(Queue1, &QueueCount);
    printf("Queue count :%d\n", QueueCount);
    retstatus = q_n_ok;
    QueueRetVal = queue_deque(Queue1, &retstatus);
    printf("--> %d\n", retstatus);
    printf("dequeued value :%x\n", QueueRetVal);
}