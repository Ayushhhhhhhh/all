
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int i, n, year = 0;
    do
    {
        printf("Starting population : \n");
        scanf("%i", &i);
    } while (i <= 8);

    // TODO: Prompt for end size
    do
    {
        printf("Required population : \n");
        scanf("%i", &n);
    } while (n <= i);

    // TODO: Calculate number of years until we reach threshold
    while (i <= n)
    {
        i = i + (i / 3) - (i / 4);
        year++;
    }
    printf("Years: %i\n", year);
    return 0;
}