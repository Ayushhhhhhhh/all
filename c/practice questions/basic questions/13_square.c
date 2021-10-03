#include<stdio.h>

int main()
{
    int i;
    printf("enter total number of sqaure you want: \n");
    scanf("%d", &i);

    for(int j=0;j<=i;j++)
    {
        int square =j*j;
        printf("%d ", square);
    }

    
    return 0;
}