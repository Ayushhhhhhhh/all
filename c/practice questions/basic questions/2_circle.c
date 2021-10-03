#include<stdio.h>

int main(){
    int radius;

    printf("Enter the radius of the circle\n" );
    scanf("%d",&radius);

    printf("The area of given circle is \n");
    printf("%f\n" ,3.1415*radius*radius);

    printf("The perimeter of given circle is \n");

    printf("%f\n" ,2*3.1415*radius);



    return 0;
}