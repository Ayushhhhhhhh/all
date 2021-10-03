#include <stdio.h>

int main(void) {
    int x;
    float bal;
    scanf("%d%f",&x,&bal);
    if(x%5==0 && bal>x)
    {
        float newbal= (bal-x-0.50);
        printf("%.2f",newbal);
    }
    else{
        printf("%.2f",bal);
    }
	// your code goes here
	return 0;
}
(((%)))