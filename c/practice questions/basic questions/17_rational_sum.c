#include <stdio.h>

int main()
{
    //C program to calculate the value of S where S = 1 + 3/2 + 5/4 + 7/8

    float s = 1, i, j = 1, sum = 0;

    while (j <= 8)
    {

        sum = sum + (s / j);
        s = s + 2;
        j = j * 2;
    }
    printf("%f", sum);

    return 0;
}