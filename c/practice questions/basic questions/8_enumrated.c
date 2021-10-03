#include <stdio.h>

int main()
{
    enum month
    {
        jan = 1,
        feb,
        may,
        june
    };
    printf("jan is the %dth month", jan);
    return 0;
}