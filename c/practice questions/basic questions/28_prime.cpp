#include <iostream>
using namespace std;
int main()
{
    int n, i = 2, prime = 1;
         cin>>n;
        for (i = 2; i< n; i++)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1)
        {
            printf("prime number");
        }
        else
        {    printf("Not a prime number");
        }
    return 0;
}