#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, a = 3,j, middle = 1, x = 1, y = 1, px,space;

    printf("width: ");
    scanf("%d", &n);
    space = n-1;
    for (int i = 0 ;i<n; i++)
    {
        for(j = 1;j<=(i+n);j++)
        {
            if(j<=space)
            {
                printf(" ");
            }
           
            else if(j==n)
            {
                printf("%d ", middle);
                px = x;
                x = x + 2 * y;
                y++;
                //for each line middle term = sqaure of x till now - the previous sum
                middle = pow(x, 2) - pow(px, 2);
            }
            else
            {
                
                printf("%d ",a);
                a += 2;
                
            }
            
           
        }  
        printf("\n");
        space--;
         
    }
    return 0;
}