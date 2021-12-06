#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *Next;

} *head = NULL, *tail = NULL;
void insert(int item)
{

    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = item;
    node->Next = NULL;
    if (head == NULL)
    {
        head = tail = node;
    }
    else
    {
        tail->Next = node;
        tail = node;
    }
}
void print()
{
    struct node *tmp;
    tmp = head;
    while (tmp != NULL)
    {
        printf("%d  ", tmp->data);
        tmp = tmp->Next;
    }
    printf("NULL\n");
}
void removeduplicate()
{
    struct node *p, *q, *qprev;
    p = head;
    while (p != NULL || p->Next != NULL)
    {
        qprev = p;
        q = p->Next;
        while (q != NULL)
        {
            if (p->data == q->data)
            {
                struct node *qfree;     
                qfree = q;

                if (q->Next != NULL)
                {
                    qprev->Next = q->Next;
                }
                else
                {
                    qprev->Next = NULL;
                }
                qfree->Next = NULL;
                free(qfree);
            }
            else
            {
                qprev = qprev->Next;
            }

            q = qprev->Next;
        }
        p = p->Next;
    }
}
int main()
{
    int x, n, i;
    printf("enter number of elements you would like to insert:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        insert(x);
    }
    printf("LINKED LIST with given elements is :\n");
    print();
    removeduplicate();
    printf("LINKED LIST after removing duplicate elements is :\n");

    print();
    return 0;
}