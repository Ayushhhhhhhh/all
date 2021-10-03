#include<stdio.h>

int main()
{
    int m1,m2,m3,m4,m5,total;
    printf("Enter marks\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
   total=((m1+m2+m3+m4+m5)/500)*100;
    
    //m1

    if (m1>=90 && m1<=100)
    { printf("congratulation your grade is A\n", m1);}
    else if(m1>=80 && m1<90)
    { printf("your grade is  B\n",m1); }
    else if (m1>=70 && m1<80)
    { printf("your grade is C\n",m1);  } 
    else if (m1>=60 && m1<70)
    { printf("your grade is D\n",m1);  }
    else
    { printf("your grade is F\n",m1);  }

    //m2

    if (m2>=90 && m2<=100)
    { printf("congratulation your grade is A\n", m2);}
    else if(m2>=80 && m2<90)
    { printf("your grade is  B\n",m2); }
    else if (m2>=70 && m2<80)
    { printf("your grade is C\n",m2);  } 
    else if (m2>=60 && m2<70)
    { printf("your grade is D\n",m2);  }
    else
    { printf("your grade is F\n",m2);  }

    //m3

    if (m3>=90 && m3<=100)
    { printf("congratulation your grade is A\n",m3); }
    else if(m3>=80 && m3<90)
    { printf("your grade is  B\n",m3); }
    else if (m3>=70 && m3<80)
    { printf("your grade is C\n",m3);  } 
    else if (m3>=60 && m3<70)
    { printf("your grade is D\n",m3);  }
    else
    { printf("your grade is F\n",m3);  }

    //m4

    if (m4>=90 && m4<=100)
    { printf("congratulation your grade is A\n",m4); }
    else if(m4>=80 && m4<90)
    { printf("your grade is  B\n",m4); }
    else if (m4>=70 && m4<805)
    { printf("your grade is C\n",m4);  } 
    else if (m4>=60 && m4<70)
    { printf("your grade is D\n",m4);  }
    else
    { printf("your grade is F\n",m4);  }

    //m5

    if (m5>=90 && m5<=100)
    { printf("congratulation your grade is A\n",m5); }
    else if(m5>=80 && m5<90)
    { printf("your grade is  B\n",m5); }
    else if (m5>=70 && m5<80)
    { printf("your grade is C\n",m5);  } 
    else if (m5>=60 && m5<70)
    { printf("your grade is D\n",m5);  }
    else
    { printf("your grade is F\n",m5);  }

    //total

    if (total>=90 && total<=100)
    { printf("congratulation your totlal grade is A\n",total); }
    else if(total>=80 && total<90)
    { printf("your totlal grade is  B\n",total); }
    else if (total>=70 && total<80)
    { printf("your totlal grade is C\n",total);  } 
    else if (total>=60 && total<70)
    { printf("your totlal grade is D\n",total);  }
    else
    { printf("your totlal grade is F\n",total);  }
    return 0;
    }