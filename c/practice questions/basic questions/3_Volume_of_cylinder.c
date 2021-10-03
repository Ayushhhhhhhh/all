#include <stdio.h>

int main()
{
    int radius, height;

    printf("Enter the radius of the cylinder\n");
    scanf("%d", &radius);
    printf("Enter the height of the cylinder\n");
    scanf("%d", &height);

    printf("The Volume of given cylinder is \n");
    printf("%d", radius * radius * height);
    printf("pie\n");

    return 0;
}