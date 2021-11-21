#include <stdio.h>
#include <stdlib.h>
struct Node
{
    /* data */
    int data;
    struct Node *Next;
} *head = NULL;
struct Node *tmp, *tail = NULL;

void insert(int item)
{

    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = item;
    node->Next = NULL;
    if (head == NULL)
    {
        head = node;
        tail = node;
    }
    else
    {

        tail->Next = node;
        tail = node;
    }
}

void insertat(int item, int index)
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

void deleteHead()
{
    head = head->Next;
}
void deleteTail()
{
    while (tmp->Next->Next != NULL)
    {
        tmp = tmp->Next;
    }
    tmp->Next = NULL;
}
void deleteAt(int index)
{
    int i = 2;
    tmp = head;
    while (i < index)
    {
        tmp = tmp->Next;
        i++;
    }
    tmp->Next = tmp->Next->Next;
}

void display()
{
    tmp = head;
    while (tmp != NULL)
    {
        printf("%d->", tmp->data);
        tmp = tmp->Next;
    }
    printf("NULL");
}
int main()
{
    insert(3);
    insert(6);
    insert(2);
    insert(3);
    //  deleteHead();
    insert(30);
    // insertat(4, 3);
    // deleteTail();
    insertat(3, 1);
    // deleteAt(2);
    display();
    return 0;
}