#include <stdio.h>

int main(void)
{

    char name[10];

    printf("what is your name?\n");
    scanf("%s", name);

    printf("hello, %s\n", name);

    return 0;
}