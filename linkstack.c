#include <stdio.h>
#include <stdlib.h>

typedef int data_t;
typedef struct node_t {
    data_t data;
    struct node_t *next;
}linkstack_t;

linkstack_t *link_stack_create()
{
    linkstack_t *stack = (linkstack_t *)malloc(sizeof(linkstack_t));
    stack->next = NULL;
    return stack;
}

int link_stack_is_empty()
