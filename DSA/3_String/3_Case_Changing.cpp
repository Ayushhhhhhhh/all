#include <iostream>
using namespace std;

char tolowercase(char *s);
int main()
{
    char s[] = "HELLO,AYUSH SINGHAL";
    tolowercase(s);
    cout << s;
    return 0;
}

char tolowercase(char *s)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] <= 90 && s[i] >= 65)
        {
        s[i] = s[i] + 32;
        }
    }
    return *s;
}