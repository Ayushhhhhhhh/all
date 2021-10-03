#include<stdio.h>

int main(){
    float temprature;

    printf("Enter the temprature in celcius\n");

    scanf("%f",&temprature);

    printf("So your temprature in farenheit is %f\n",(temprature*9/5) + 32 );


    return 0;
}