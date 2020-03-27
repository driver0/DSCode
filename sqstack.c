#include <stdio.h>
#include <stdlib.h>

#define N 8

typedef  int data_t;

typedef struct {
    data_t a[N];
    int top;
}sqstack_t;

sqstack_t *sq_stack_create()
{
    sqstack_t *stack = (sqstack_t *)malloc(sizeof(sqstack_t));
    stack->top = -1;

    return stack;
}
int sq_stack_is_full(sqstack_t *stack)
{
    return stack->top == N-1 ? 1:0;
}

int sq_stack_is_empty(sqstack_t *stack)
{
    return stack->top == -1 ? 1:0;
}

int sq_stack_push(sqstack_t *stack,data_t value)
{
    if(sq_stack_is_full(stack))
    {
        return -1;
    }
    stack->top++;
    stack->a[stack->top]  = value;
    return 0;
}

data_t sq_stack_pop(sqstack_t *stack)
{
    data_t value = 0;
    if(sq_stack_is_empty(stack))
    {
        return -1;
    }

    value = stack->a[stack->top];
    stack->top--;
    return value;
}
