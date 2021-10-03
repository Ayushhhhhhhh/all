#include<stdio.h>

int main(){
    int n,i=0;
    printf("how many number you want to print\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("number is %d\n",i+1);
    }
    return 0;
}