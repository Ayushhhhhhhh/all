#include <stdio.h>
#include <stdlib.h>
#define max 20
int queue[100], choice, x, i;
struct Node
{
    int Data;
    struct Node *Next;
} *front = NULL, *rear = NULL, *tmp, *newnode;
void enqueue(void);
void dequeue(void);
void display(void);
int main()
{
    printf("\n\t QUEUE OPERATIONS USING ARRAY");
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
            enqueue();
            break;
        }
        case 2:
        {
            dequeue();
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
void enqueue()
{
    tmp = (struct Node *)malloc(sizeof(struct Node));
    if (!tmp)
    {
        printf("\n\tQueue over flow");
    }

    else if (front == NULL && rear == NULL)
    {
        newnode = tmp;
        newnode->Next = front;
        printf(" Enter a value to be pushed:");
        scanf("%d", &x);
        newnode->Data = x;
        front = rear = newnode;
    }
    else
    {
        newnode = tmp;
        newnode->Next = front;
        printf(" Enter a value to be pushed:");
        scanf("%d", &x);
        newnode->Data = x;
        rear->Next = newnode;
        rear = newnode;
    }
}
void dequeue()
{
    if (front == NULL)
    {
        printf("\n\t queue is under flow");
    }
    else if (front == rear)
    {
        front = rear = NULL;
    }
    else
    {
        printf("\n\t The popped elements is %d", front->Data);
        front = front->Next;
        rear->Next = front;
    }
}
void display()
{
    if (front)
    {
        printf("\n The elements in QUEUE \n");
        tmp = front;
        while (tmp->Next != front)
        {
            printf("%d->", tmp->Data);
            tmp = tmp->Next;
        }
        printf("%d->", tmp->Data);
        printf("FRONT");
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The QUEUE is empty");
    }
}