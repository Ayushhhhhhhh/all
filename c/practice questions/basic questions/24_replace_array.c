#include <stdio.h>

/* C program to read an array of length 6, change the first element by the last,
the second element by the fifth and the third element by the fourth*/

int main()
{
    int a[6];
    printf("enter 6 member of array\n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        if (i < 3)
        {

            int tmp;
            tmp = a[i];
            a[i] = a[6 - (i + 1)];
            a[6 - (i + 1)] = tmp;
        }

        printf("a[%d]= %d\n", i, a[i]);
    }

    return 0;
}