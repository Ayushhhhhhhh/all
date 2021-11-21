#include <stdio.h>
#define max 10
int stack[max], stack2[max];
int top = -1, top2 = -1, N = 0, a, b;
void pushinfirst(int x);
void pushinsecond(int x);
void enqueue(int x);
void dequeue();
void display();
int pop();
int pop2();

int main()
{
    int choice;
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
            int element;
            printf(" Enter a value to be pushed:");
            scanf("%d", &element);
            enqueue(element);
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

void pushinfirst(int x)
{
    top++;
    stack[top] = x;
}
void pushinsecond(int x)
{
    if (top2 == max - 1)
    {
        printf("Queue overflow\n");
    }
    else
    {
        top2++;
        stack2[top2] = x;
    }
}
void dequeue()
{
    if (top == -1 && top2 == -1)
    {
        printf("Queue underflow\n");
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            a = pop();
            pushinsecond(a);
        }
        int c = pop2();
        printf("Dequeud element is :%d", c);
        N--;
        for (int i = 0; i < N; i++)
        {
            b = pop2();
            pushinfirst(b);
        }
    }
}
void display()
{
    printf("\nElements of queue are :\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d\t", stack[i]);
    }
}
void enqueue(int x)
{
    if (top == max - 1)
    {
        printf("Queue overflow\n");
    }
    else
    {
        pushinfirst(x);
        N++;
    }
}
int pop()
{
    int element = stack[top];
    top--;
    return element;
}
int pop2()
{
    int element = stack2[top2];
    top2--;
    return element;
    //return stack2[top2--];
}
