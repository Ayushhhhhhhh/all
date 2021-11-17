#include <stdio.h>
#include <stdlib.h>
struct Node
{
    /* data */
    int Data;
    struct Node *Next;
} *head = NULL, *tail, *tmp;

void insert()
{
    struct Node *newnode;
    newnode = (struct node *)malloc(sizeof(struct Node));
    if (newnode)
    {
        scanf("%d", &newnode->Data);
        newnode->Next = NULL;
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->Next = newnode;
            tail = newnode;
        }
    }
    else
    {
        return;
    }
}
void display()
{
    tmp = head;
    while (tmp != NULL)
    {
        printf("%d->", tmp->Data);
        tmp = tmp->Next;
    }
    printf("NULL");
}

int main()
{
    for (int i = 0; i < 3; i++)
    {
        insert();
        /* code */
    }
    display();

    return 0;
}