#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;

} * head;
void inserthead(int x)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = x;
    new_node->next = NULL;
    if (head != NULL)
    {
        new_node->next = head;
    }
    head = new_node;
}
void print()
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node = head;
    while (new_node != NULL)
    {
        printf("%d  ", new_node->data);
        new_node = new_node->next;
    }
    printf("\n");
}
void removeduplicate()
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    struct node *q = (struct node *)malloc(sizeof(struct node));
    struct node *qprev = (struct node *)malloc(sizeof(struct node));
    p = head;
    q = p->next;
    while (p != 0)
    {
        while (q != 0)
        {
            if (p->data == q->data)
            {
                p->next = q->next;
                free(q);
                q = p->next;
                break;
                
            }
            q = q->next;
        }
        p = p->next;
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
        inserthead(x);
    }
    //print();
    removeduplicate();
    print();
    return 0;
}