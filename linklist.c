#include <stdio.h>
#include <stdlib.h>

typedef int data_t;
typedef struct node{
    data_t data;
    struct node *next;
}linknode_t;


linknode_t *linklist_create()
{
    linknode_t *head = (linknode_t *)malloc(sizeof(linknode_t));
    head->next = NULL;
    return head;
}

int linklist_insert_head(linknode_t *head,data_t value)
{
    linknode_t *node  = (linknode_t *)malloc(sizeof(linknode_t));
    node->data = value;
    node->next = head->next;
    head->next = node;
    return 0;
}

int linklist_insert_tail(linknode_t *head,data_t value)
{
    linknode_t *node  = (linknode_t *)malloc(sizeof(linknode_t));
    node->data = value;
    node->next = NULL;

    while(head->next != NULL)
    {
        head = head->next;
    }

    head->next = node;

    return 0;
}

int linklist_is_empty(linknode_t *head)
{
    return head->next == NULL ? 1:0;
}

int linklist_delete_head(linknode_t *head)
{
    if(linklist_is_empty(head))
    {
        puts("empty");
        return -1;
    }

    linknode_t *temp = head->next;
    head->next = temp->next;
    free(temp);
    temp = NULL;
    return 0;
}

int linklist_change(linknode_t *head,data_t old,data_t new)
{
    while(head->next != NULL)
    {
        head = head->next;
        if(head->data == old)
        {
            head->data = new;
        }
    }

    return 0;
}

data_t linklist_pos_search_data(linknote_t *head,int pos)
{
    int i;
    if(i=1;i<=pos && head->next != NULL:i++)
    {
        head = head->next;
    }
    return head->data;
}

data_t linklist_pos_insert_data(linknote_t *head,int pos,data_t value)
{

    int i;
    linknode_t *node  = (linknode_t *)malloc(sizeof(linknode_t));
    node->data = value;
    if(i=1;i<=pos && head->next != NULL:i++)
    {
        head = head->next;
    }
    node->next = head->next;
    head->next = node;
    return 0;
}

int linklist_insert_sort(linknote_t *head,data_t value)
{

    linknode_t *node  = (linknode_t *)malloc(sizeof(linknode_t));
    node->data = value;

    while(head->next != NULL && head->next->data < value)
    {
        head = head->next;
    }
    node->next = head->next;
    head->next = node;
    return 0;
}

int linklist_reverse(linknode_t *head)
{
    linknode_t *temp = NULL;
    linknode_t *old = head->next;
    head->next = NULL;

    while(old != NULL)
    {
        temp = old;
        temp->next = head->next;
        head->next = temp;
        old = old->next;
    }

    return 0;
}

int linklist_show(linknode_t *head)
{
    while(head->next != NULL)
    {
        headd = head->next;
        printf("%d ",head->data);
    }
    putchar(10);
    return 0;
}
