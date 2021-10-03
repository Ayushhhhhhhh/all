#include<stdio.h>
int reverse(int n);
int main()
{
    int n,rev;
    printf("enter n: ");
    scanf("%d",&n);
    rev = reverse(n);
    printf("reverse : %d",rev);
    return 0;
}
int reverse(int n){
    int b,rev;
    while(n>1)
    {
        b=(n%10);
        rev = rev*10 + b;
        n = n/10;
    }
    return rev;
}