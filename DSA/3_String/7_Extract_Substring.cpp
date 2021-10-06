#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[50], substr[50];
    cout << "Enter The main string" << endl;
    gets(str1);
    int len = strlen(str1);

    int start, end;
    cout << "Enter the position from where you want to start inserting" << endl;
    cin >> start;
    cout << "Enter the position where you want to end inserting" << endl;
    cin >> end;
    int i, j;

    for (i = 0; start < end; i++, start++)
    {
        substr[i] = str1[start];
    }
    substr[end] = '0';

    puts(substr);

    return 0;
}