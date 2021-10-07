#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[50], str2[50];
    cout << "Enter the main string : " << endl;
    gets(str1);

    cout << "Enter the string to delete : " << endl;
    gets(str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    int start = 0, end = 0, found = 0;

    int i, j;
    for (i = 0, j = 0; i < len1; i++)
    {

        if (str1[i] == str2[j])
        {
            j++;
            
            if (str2[j] == '\0')
            {
                end = i;
                found = 1;
                break;
            }
        }
        else
        {
            start++;
            j = 0;
        }
    }
    if (found == 1)
    {
        for (i = end + 1; str1[i] != '\0'; i++, start++)
        {
            str1[start] = str1[i];
        }
    }
    else
    {
        cout << "No such string found in main string!" << endl;
    }
    str1[len1 - len2] = '\0';

    puts(str1);

    return 0;
}