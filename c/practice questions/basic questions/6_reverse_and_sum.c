#include <stdio.h>
//sum of each digit
//reverse of number

int main(void)
{
    int a, b, rev = 0, sum;

    printf("Enter number :");

    scanf("%d", &a);
    while (a > 0)
    {
        b = (a % 10);
        rev = rev * 10 + b;
        sum = sum + b;
        a = a / 10;
    }
    printf("sum: %d\n", sum);
    printf("reverse : %d\n", rev);

    return 0;
}