#include <stdio.h>
#include <stdlib.h>

#define N 10
typedef short data_t;

typedef struct
{
    data_t a[N];
    int last;
}sqlist_t;

sqlist_t *sqlist_create()
{
    sqlsit_t *sq = (sqlist_t *)malloc(sizeof(sqlsit_t));
    sq->last = -1;
    return sq;
}

int sqlist_is_empty(sqlist_t *sq)
{
   return sq->last == -1 ? 1:0;
}

int sqlist_is_full(sqlist_t *sq)
{
   returnsq->last == N-1 ? 1:0;
}

sqlist_t *sqlist_insert(sqlist_t *sq,data_t x)
{
    if(sqlist_is_full(sq))
    {
        return -1;
    }
    sq->last++;
    sq->a[sq->last] = x;
    return sq;
}

sqlist_t *sqlist_delete(sqlist_t *sq)
{
    if(sqlist_is_empty(sq))
    {
        puts("sq is empty");
        return -1;
    }
    sq->last--;
    return sq;
}

int sqlist_change(sqlist_t *sq,data_t old,data_t new)
{
    int i;
    for(i=0;i<=sq->last;i++)
    {
        if(sq->a[i] == old)
        {
            sq->a[i] = new;
        }
    }
    
    return 0;
}

data_t sqlist_pos_search(sqlist_t *sq,int pos)
{
    if(pos < 0 || pos > sq->last)
    {
        return -1;
    }
    return sq->a[pos];
}

int sqlist_data_search(sqlist_t *sq,data_t value)
{
    int i;
    for(i=0;i<sq->last;i++)
    {
        if(sq->a[i] == value)
        {
           return i;
        }
    }

    return -1;
}

int sqlist_insert_pos(sqlist_t *sq,int pos,data_t value)
{
    int i;
    if(sqlist_is_full(sq))
    {
        return -1;
    }
    
    for(i=sq->last;i>=pos;i--)
    {
        sq->a[i+1] = sq->a[i];
    }
    sq->a[pos] = value;
    sq->last++;
    return 0;
}
int sqlist_delete_pos(sqlist_t *sq,int pos,data_t value)
{
    int i;
    if(sqlist_is_empty(sq))
    {
        return -1;
    }
    
    for(i=pos;i<sq->last;i++)
    {
        sq->a[i] = sq->a[i+1];
    }
    sq->last--;
    return 0;
}

int sqlist_delete_repeat(sqlist_t *sq)
{
    int i,j;
    for(i=0;i<sq->last-1;i++)
    {
        for(j=i+1;j<sq->last;j++)
        {
            if(a[i] == a[j])
            {
                sqlist_delete_pos(sq,i);
                j--;
            }
        }
    }
}

int sqlist_cat(sqlist_t *sq1,sqlist_t *sq2)
{
    int i,k;
    for(i=0;i<=sq2->last;i++)
    {
        k = sq2->a[i];
        if(sqlist_data_serach_pos(sq1,k) == -1)
        {
            sqlist_insert(sq1,k);
        }

    }
    return 0;
}

int sqlist_show(sqlist_t *sq)
{
    int i;
    for(i=0;i<=sq->last;i++)
    {
        printf("%d ",sq->a[i]);
    }

    putchar(10);

    return 0;
}

