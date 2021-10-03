#include<stdio.h>

int main(){
    int marks;
    printf("enter your marks\n");
    scanf("%d",&marks);

    if (marks>=90 && marks<=100)
    {
       printf("congratulation your grade is A\n",marks);

    }
    else if(marks>=80 && marks<90){
        printf("your grade is  B\n",marks);
    }

    else if (marks>=70 && marks<80){
        printf("your grade is C\n",marks);

    } 
    else if (marks>=60 && marks<70){
        printf("your grade is D\n",marks);
    }
    else{
        printf("your grade is F\n",marks);
    }
    
    return 0;
}