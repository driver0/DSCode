#include <stdio.h>
#include <stdlib.h>

#define N 8

typedef int data_t;

typedef struct{
    data_t a[N];
    int front;
    int rear;
}sqqueue_t;

sqqueue_t *sqqueue_create()
{
    sqqueue_t *queue = (sqqueue_t *)malloc(sizeof(sqqueue_t));
    queue->front = 0;
    queue->rear = 0;
    return queue;
}

int sqqueue_is_full(sqqueue_t *queue)
{
    return (queue->rear+1)%N == queue->front ? 1:0;
}

int sqqueue_is_empty(sqqueue_t *queue)
{
    return queue->rear == queue->front ? 1:0;
}

int sqqueue_input(sqqueue_t *)



