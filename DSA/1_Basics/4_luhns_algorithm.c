#include <stdio.h>

int main()
{
    long card, sum, product, tmp = card, digitget = card;
    scanf("%d", &card);
    while (tmp != 0)
    {
        product *= (tmp % 100) / 10;
        sum += (tmp % 100) / 10;
        tmp = tmp / 100;
    }
    tmp = product + sum;
    int digit = 0;
    while (digitget != 0)
    {
        int digitget = digitget / 10;
        digit++;
    }
    int firsttwo;
    long getfirsttwo;
    for (int i = digit; i != 2; i--)
    {
        getfirsttwo = card;
        getfirsttwo / 10;
    }
    firsttwo = getfirsttwo;
    if (tmp % 10 == 0)
    {
        if (digit == 15 && firsttwo == 55 || 54 || 53 || 52 || 51)
        {
            printf("American Express\n");
        }
        else if (digit == 16)
        {
            printf("MasterCard \n");
        }
        else if (digit == 13 || digit == 16)
        {
            printf("Visa");
        }
    }
    else
    {
        printf("invalid Number");
    }
    return 0;
}