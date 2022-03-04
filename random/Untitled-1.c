#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *head = NULL, *temp;
void create()
{
    int x, n, i;
    printf("enter the number of nodes you would like to insert:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the value of node %d : ", i + 1);
        scanf("%d", &x);
        struct node *avail = (struct node *)malloc(sizeof(struct node));
        if (avail != NULL)
        {
            struct node *newnode = avail;
            temp = head;
            avail = avail->next;
            newnode->data = x;
            newnode->next = NULL;
            if (head == NULL)
            {
                head = newnode;
            }
            else
            {
                while (temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = newnode;
            }
        }
    }
}
void display()
{
    temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main()
{
    printf("--------------Singly Link List Implementation for Insertion Operation-------------\n");
    create();
    printf("Linked list:\n");
    display();
}