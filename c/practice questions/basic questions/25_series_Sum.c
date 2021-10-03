#include<stdio.h>
//sum of series 1 + 1/2 + 1/3 + ………. + 1/n
int main()
{
    int n,sum=0;
    printf("Enter n : ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        printf(" 1/%d  + ", i);
    }
    for(int i=1;i<=n;i++)
    {
        sum = sum + (1/i);
    }
    printf("sum : %d", sum);
    return 0;
}