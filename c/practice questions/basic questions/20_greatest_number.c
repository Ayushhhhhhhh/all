#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter your 4 numbers\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("%d is the greatest number", a);
            }
        }
    }
    else if (b > c)
    {
        if (b > d)
        {
            printf("%d is the greatest number", b);
        }
    }
    else if (c > d)
    {
        printf("%d is the greatest number", c);
    }
    else
    {
        printf("%d is the greatest number", d);
    }

    return 0;
}