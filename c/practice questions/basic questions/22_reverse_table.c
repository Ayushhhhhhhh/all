#include<stdio.h>

int main(){
    int n,i;
    printf("enter n\n");
    scanf("%d",&n);

    for(i=10;i;i--){
        printf("%d X %d = %d\n",n,i, i*n);
      
    }


    return 0;
}