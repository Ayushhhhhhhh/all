#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *Next;
} *head1 = NULL, *head2 = NULL, *tail1, *tail2, *tmp, *newnode;
void initialize(int arr[4])
{
    int i;
    for (i = 0; i < 4; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = arr[i];
        newnode->Next = NULL;
        if (head1 == NULL)
        {
            head1 = tail1 = newnode;
        }
        else
        {
            tail1->Next = newnode;

            tail1 = newnode;
        }
    }
}
void initialize2(int arr[4])
{
    int i;
    for (i = 0; i < 4; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = arr[i];
        newnode->Next = NULL;
        if (head2 == NULL)
        {
            head2 = tail2 = newnode;
        }
        else
        {
            tail2->Next = newnode;

            tail2 = newnode;
            printf("%d", tail2->data);
        }
    }
}
void merge()
{

    tail1->Next = head2;
    head2 = NULL;
}
void print(struct node *headref)
{
    struct node *temp;
    temp = headref; //displaying Nexted list.
    printf("Nexted list:");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->Next;
    }
    printf("\n");
}
int main()
{
    int arr[4] = {1, 53, 25, 23};
    initialize(arr);
    initialize2(arr);
    printf(" \n");
    printf("%d", head1->data);
    print(head1);
    print(head2);
    merge();
    print(head1);
    return 0;
}