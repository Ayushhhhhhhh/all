#include <stdio.h>

int main()
{
    int length, breadth;

    printf("Enter the length of rectangle\n");

    scanf("%d", &length);

    printf("Enter the breadth of rectangle\n");

    scanf("%d", &breadth);

    int perimeter = 2 * (length + breadth);

    int area = length * breadth;

    printf("perimeter of given rectangle is %d\n", perimeter);

    printf("Area of given rectangle is %d\n", area);

    return 0;
}