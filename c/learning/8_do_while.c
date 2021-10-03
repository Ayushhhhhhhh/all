#include<stdio.h>

int main(){
    //to print n natural numbers
    int i=0,n;
    printf("upto how many natural number you want to print\n");
    scanf("%d",&n);
    do{
        printf("%d\n",i+1);
        i++;
    }while(i<n);
    return 0;
}