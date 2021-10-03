#include <stdio.h>

int main()
{
   char ar[]= {'a','b','c','d','e'};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("[%c,%c]", ar[i] , ar[j] );
        }
        printf("\n");
    }
    return 0;
}