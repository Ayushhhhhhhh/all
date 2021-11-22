#include<iostream>
using namespace std;

int rec_factorial(int m)
{
    
    if (m == 1)
        return m;

    else 
        return m * rec_factorial(m - 1);
}
int main()
{
    int m = 8 ;

   cout<< "factorial = " << rec_factorial(m);

    return 0;
}