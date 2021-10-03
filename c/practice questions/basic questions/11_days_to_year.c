#include <stdio.h>

int main()
{
    int days, y, m, d;

    printf("enter no of days: ");
    scanf("%d", &days);

    y = days / 365;
    days = days - (y * 365);
    m = days / 30;
    days = days - (m * 30);

    printf(" %d Year(s) \n %d Month(s) \n %d Day(s)", y, m, days);

    return 0;
}