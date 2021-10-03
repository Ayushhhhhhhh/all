#include <stdio.h>

int main()
{
    int a,j=1,n=0;
    printf("how much number you want : \n ");
    scanf("%d", &a);

    for ( int i = 1; i <= a; i++)
    {
        while (n < 3)
        {
            n++;

            printf("%d  ", j++);
        }
        n=0;
        printf("\n");

    }

    return 0;
}