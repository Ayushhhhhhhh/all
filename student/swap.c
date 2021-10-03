#include<stdio.h>
int swap(int *a,int *b);
int main()
{
  int a =5 , b=6;
  swap(&a,&b);
  printf("\n%d\n%d",a,b);
  return 0;
}
int swap(int *a,int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
