#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int Data;
    struct Node *Next;
    struct Node *Prev;
} *head = NULL, *tmp = NULL, *avail = NULL;

void create()
{
    int n, i = 0;
    printf("Enter the number of node you would like to insert:\n");
    scanf("%d", &n);
    printf("Enter the %d nodes :", n);
    while (i < n)
    {
        
        int data;
        scanf("%d", &data);
        avail = (struct Node *)malloc(sizeof(struct Node *));
        if (avail)
        {
            struct Node *newNode = avail;
            newNode->Data = data;
            newNode->Next = NULL;
            if (head == NULL)
            {
                head = newNode;
            }
            else
            {
                tmp = head;
                while (tmp->Next)
                {
                    tmp = tmp->Next;
                }
                tmp->Next = newNode;
            }
        }
        else
        {
            printf("Overflow!!!\n");
            break;
        }
        i++;
    }
}
int main()
{
    create();
    return 0;
}