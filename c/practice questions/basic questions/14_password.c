#include <stdio.h>

int main()
{
    int pass;
    int x = 0;

    while (x != 1)
    {
        printf("ENTER THE CORRECT PASSWORD : \n");
        scanf("%d", &pass);

        if (pass == 1234)
        {
            printf("Welcome\n");
            x = 1;
        }
        else
        {
            printf("incorrect password\n");
        }
    }
    return 0;
}