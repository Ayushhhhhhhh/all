#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int word = 1;
    char s[] = "Hlo my name is Ayush";
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ' && s[i + 1] != ' ')
        {
            word++;
        }
    }
    cout << word;
    int nice;

    return 0;
}