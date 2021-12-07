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

void insert(int item)
{
    struct Node *avail = (struct Node *)malloc(sizeof(struct Node));
    if (avail)
    {
        struct Node *node = (struct Node *)malloc(sizeof(struct Node));
        node->data = item;
        tmp = head;
        while (tmp->Next != head)
        {
            tmp = tmp->Next;
        }
        tmp->Next = node;
        node->Next = head;
    }
    else
    {
        printf("Overflow!!");
        return;
    }
}
void insertHead(int data)
{
    struct Node *avail = (struct Node *)malloc(sizeof(struct Node));
    if (avail)
    {
        struct Node *node = (struct Node *)malloc(sizeof(struct Node));
        node->data = data;
        tmp = head;
        while (tmp->Next != head)
        {
            tmp = tmp->Next;
        }

        node->Next = head;
        head = node;
        tmp->Next = head;
    }
    else
    {
        printf("Overflow!!");
    }
}

void insertat(int item, int index)
{
    struct Node *avail = (struct Node *)malloc(sizeof(struct Node));
    if (avail)
    {
        int i = 1;
        tmp = head;
        while (i < index)
        {
            tmp = tmp->Next;
            i++;
        }
        struct Node *node = (struct Node *)malloc(sizeof(struct Node));
        node->data = item;
        node->Next = tmp->Next;
        tmp->Next = node;
    }
    else
    {
        printf("Overflow!!\n");
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
    printf("--------------Circular Link List Implementation for Insertion Operation-------------\n");
        create();
        printf("Linked list:\n");
        display();
        insert(6);
        printf("Linked list after inserting 6 at last :\n");
        display();
        insertat(34, 2);
        printf("Linked list after inserting 34 at index 2 :\n");
        display();
        insertHead(1);
        printf("Linked list after inserting 1 at head :\n");
        display();

        return 0;
    }