#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, a = 3, middle = 1, x = 1, y = 1, px;

    printf("width: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        //print number of space
    for (int j = n - 1; j > i; j--)
        {
            printf(" ");
        }
        //print a = 1 3 5 7
    for (int k = 0; k <= i; k++)
        {
            if (k != i)
            {
                printf("%d ", a);
                a += 2;
            }
            // middle number is sum of 1 + 3 + 5 + 7 + 13 which is equal to n^n
            else
            {
                printf("%d ", middle);
                px = x;
                x = x + 2 * y;
                y++;
                //for each line middle term = sqaure of x till now - the previous sum
                middle = pow(x, 2) - pow(px, 2);
            }
        }

        for (int m = 0; m < i; m++)
        {
            printf("%d ", a);
            a += 2;
        }

        printf("\n");
    }
}