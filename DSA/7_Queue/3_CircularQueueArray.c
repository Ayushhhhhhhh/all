#include <stdio.h>
#define max 4
int queue[100], choice, rear = -1, x, i, front = -1;

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
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        printf(" Enter a value to be pushed:");
        scanf("%d", &x);
        queue[rear] = x;
    }
    else if ((rear + 1) % max == front)
    {
        printf("\n\tQueue over flow");
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d", &x);
        rear = (rear + 1) % max;
        queue[rear] = x;
    }
}
void dequeue()
{
    if (front <= -1)
    {
        printf("\n\t queue is under flow");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("\n\t The popped elements is %d", queue[front]);
        front = (front + 1) % max;
    }
}
void display()
{
    if (front >= 0)
    {
        printf("\n The elements in QUEUE \n");
        for (i = front; i != rear; i = (i + 1) % max)
            printf("%d\t", queue[i]);
        printf("%d", queue[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The QUEUE is empty");
    }
}