#include <stdio.h>
#include <stdlib.h>
#define max 20
int choice, x, i;
struct Node
{
    int Data;
    struct Node *Next;
} *head = NULL, *top, *tmp,*avail, *newnode;
void push(void);
void pop(void);
void display(void);
int main()
{
    printf("\n\t STACK OPERATIONS USING LINKED LIST");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            printf("\n\t EXIT POINT ");
            break;
        }
        default:
        {
            printf("\n\t Please Enter a Valid Choice(1/2/3/4)");
        }
        }
    } while (choice != 4);
    return 0;
}
void push()
{
    avail = (struct Node *)malloc(sizeof(struct Node));
    if (!avail)
    {
        printf("\n\tHeap overflow");
    }
    else
    {
        newnode = avail;
        printf(" Enter a value to be pushed:");
        scanf("%d", &x);
        newnode->Data = x;
        newnode->Next = top;
        top = tmp;
    }
}
void pop()
{
    if (top == NULL)
    {
        printf("\n\t Heap Underflow");
    }
    else
    {
        tmp = top;
        printf("\n\t The popped elements is %d", top->Data);
        top = top->Next;
        tmp->Next = NULL;
        free(tmp);
    }
}
void display()
{
    if (top != NULL)
    {
        printf("\n The elements in STACK \n");
        for (struct Node *i = top; i != NULL; i = i->Next)
            printf("\n%d", i->Data);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
}