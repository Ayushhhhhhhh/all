#include<stdio.h>

int main(){
    int principle,rate,year;
    printf("Enter your principle\n");

    scanf("%d",&principle);

    printf("Enter your rate\n");

    scanf("%d", &rate);

    printf("Enter your years\n");

    scanf("%d", &year);

    printf("Your intrest will be %d\n",(principle*rate*year)/100 );
    


    return 0;
}