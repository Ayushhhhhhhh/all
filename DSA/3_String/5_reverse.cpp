#include <iostream>
#include <string>
using namespace std;
int main()
{
    char s[] = "Hello i am Ayush Singhal";
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
    }
    tolower(s);
    for (int j = 0; j < i; j++, i--)
    {
        swap(s[j], s[i - 1]);
    }
    cout << s;
    return 0;
}