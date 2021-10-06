#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[50], str2[50];
    cout << "Enter the main string : " << endl;
    gets(str1);

    cout << "Enter the string to insert : " << endl;
    gets(str2);
    cout << "Enter the position you want to insert :" << endl;
    int position;
    cin >> position;
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    int i, j;
    for (i = len1 - 1; i >= position - 1; i--)
    {
        str1[i + len2] = str1[i];
    }
    for (int j = 0, i = position - 1; j < len2; i++, j++)
    {
        str1[i] = str2[j];
    }
    str1[len1 + len2] = '\0';

    puts(str1);

    return 0;
}