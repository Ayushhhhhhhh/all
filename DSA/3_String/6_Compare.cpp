#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[50], str2[50];
    cout << "Enter the strings to compare :" << endl;
    gets(str1);
    gets(str2);
    int i, same = 1;
    if (strlen(str1) != strlen(str2))
    {
        cout << "Strings are different";
        same = 0;
    }
    else if (strlen(str1) == strlen(str2))
    {
        for (i = 0; i < strlen(str1); i++)
        {
            if (str1[i] != str2[i])
            {
                same = 0;
                break;
            }
        }
        if (same == 1)
        {
            cout << "Strings are Same";
        }
        else if (same == 0)
        {
            cout << "String are different";
        }
    }
    return 0;
}