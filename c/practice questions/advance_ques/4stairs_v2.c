#include<stdio.h>

int main(void)
{
    int n;
    
    //get a positive integer between 1 to 8
    
    do
    {
        printf("width: ");

        scanf("%d",&n);
        
    }
    while (n > 8 || n < 1);
    
    //print the mario pyramid
    
    for (int i = 0 ; i < n ; i++)
    {
        //print number of space
        for (int j = n - 1 ; j > i ; j--)
        {
            printf(" ");
            
        }
        
        //print number of stair req
        
        for (int k = 0 ; k <= i ; k++)
        {
            printf("-");
        }

        //print space between stairs

        for (int l = 0 ; l < 2 ; l++)
        {
            printf(" ");
        }
        //print mirror stairs

        for (int m = 0 ; m <= i ; m++)
        {
            printf("-");
        }
      
        printf("\n");
    }
}