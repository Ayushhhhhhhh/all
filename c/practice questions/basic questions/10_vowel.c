#include <stdio.h>

int main()
{
    char ch;
    printf("enter alphabet: \n");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("%c is vowel", ch);
    }
    else
    {
        printf("%c is consonant", ch);
    }
    return 0;
}