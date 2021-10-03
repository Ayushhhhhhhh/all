#include<stdio.h>

int main(){
    int n,i=0;
    printf("how many number you want to print\n");
    scanf("%d",&n);
    for(int i=n;i;i--){
        printf("number is %d\n",i);
    }
    return 0;
}