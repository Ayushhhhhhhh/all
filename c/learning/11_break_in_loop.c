#include<stdio.h>

int main(){
    
    for(int i=0;i<100;i++){
        printf("the i upto 10 %d\n",i);
        if(i==10){
            break;
        }
    }
    return 0;
}