#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *Next;

} *head = NULL, *tmp;
void create()
{
    int x, n, i;
    printf("Enter number of elements you would like to insert:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        struct Node *avail = (struct Node *)malloc(sizeof(struct Node));
        if (avail)
        {
            struct Node *node = avail;
            tmp = head;
            avail = avail->Next;
            node->data = x;

            if (head == NULL)
            {
                head = node;
            }
            else
            {
                while (tmp->Next != head)
                {
                    tmp = tmp->Next;
                }
                tmp->Next = node;
            }
            node->Next = head;
        }
        else
        {
            printf("Overflow!!");
        }
    }
}

void deleteHead()
{
    if (head)
    {
        tmp = head;
        while (tmp->Next != head)
        {
            tmp = tmp->Next;
        }

        struct Node *freeptr;
        freeptr = head;
        tmp->Next = head->Next;
        head = head->Next;
        free(freeptr);
    }
    else
    {
        printf("Underflow!!\n");
    }
}
void deleteTail()
{
    if (head)
    {
        while (tmp->Next->Next != head)
        {
            tmp = tmp->Next;
        }
        struct Node *freeptr;
        freeptr = tmp->Next;
        tmp->Next = head;
        free(freeptr);
    }
    else
    {
        printf("Underflow!!\n");
    }
}
void deleteAt(int index)
{
    if (head)
    {
        int i = 2;
        tmp = head;
        while (i < index)
        {
            tmp = tmp->Next;
            i++;
        }
        struct Node *freeptr;
        freeptr = tmp->Next;
        tmp->Next = tmp->Next->Next;
        free(freeptr);
    }
    else
    {
        printf("Underflow!!\n");
    }
}

void display()
{
    tmp = head;
    while (tmp->Next != head)
    {
        printf("%d->", tmp->data);
        tmp = tmp->Next;
    }
    printf("%d->", tmp->data);
    printf("NULL\n");
}

int main()
{
    printf("--------------Circular Link List Implementation for Deletion Operation-------------\n");
    create();
    printf("Linked list:\n");
    deleteAt(3);
    printf("Linked list Deletion at 3 index :\n");
    display();
    deleteHead();
    printf("Linked list Deletion at head :\n");
    display();
    printf("Linked list Deletion at last :\n");

    deleteTail();
    display();

    return 0;
}