#include<stdio.h>

int main(){
    int a, b, c, avg;
    printf("enter your 3 number\n");
    scanf("%d%d%d" , &a,&b,&c);
    avg = ( a + b + c ) / 3;
    printf("avg of your  numbers  is %d",avg);
    return 0;
}