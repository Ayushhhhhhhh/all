#include<stdio.h>
#define max 10
int stack[max],stack2[max];
int top=-1,top2=-1,N=0,a;
void pushinfirst(int x){
    if(top==max-1){
        printf("Queue overflow\n");
    }
    else{
        top++;
        stack[top]=x;
        N++;
    }
}
void enqueue(int x){
    pushinfirst(x);
}
void dequeue(){
    if(top==-1&&top==-1){
        printf("Queue underflow\n");
    }
    else{
        while(top!=-1)
        {
           a = pop();
           pushinsecond(a);
        }
        printf("Dequeud element is :%d",pop2());
        while(top2!=-1){
            b = pop2();
            pushinfirst(b);
        }
            N--;
    }
}
void display(){
    printf("\nElements of queue are :\n");
    for(int i = 0;i<N;i++)
    {
        printf("%d\t",stack[i]);
    }
}
}
int main()
{

    
    return 0;
}