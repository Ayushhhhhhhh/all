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
            node->Next = NULL;
            if (head == NULL)
            {
                head = node;
            }
            else
            {
                while (tmp->Next)
                {
                    tmp = tmp->Next;
                }
                tmp->Next = node;
            }
        }
        else
        {
            return;
        }
    }
}

void deleteHead()
{
    head = head->Next;
}
void deleteTail()
{
    tmp = head;
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
    printf("NULL\n");
}

int main()
{
    printf("--------------Singly Link List Implementation for Deletion Operation-------------\n");
    create();
    printf("Before deletion at head :\n");
    display();
    deleteHead();
    printf("After deletion at head :\n");
    display();
    printf("Before deletion at last :\n");
    display();
    deleteTail();
    printf("After deletion at last :\n");
    display();
    printf("Enter the index at which you want to delete :\n");
    int index;
    scanf("%d", &index);
    printf("Before deletion at Index :\n");
    display();
    deleteAt(index);
    printf("After deletion at Index :\n");
    display();

    return 0;
}