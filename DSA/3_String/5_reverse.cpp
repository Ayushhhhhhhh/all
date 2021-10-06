#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[] = "lahgniS hsuyA ma i olleH";

    char ch[50];

    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {

        // convert str[i] to lowercase
        ch[i] = tolower(s[i]);
    }
    for (int j = 0; j < len; j++, len--)
    {
        swap(ch[j], ch[len - 1]);
    }
    cout << ch;     

    return 0;
}       