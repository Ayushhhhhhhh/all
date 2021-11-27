#include <iostream>
using namespace std;
int main()
{
    char s[20] = {'A', 'y', 'u', 's', 'h', '\0'};
    char s2[] = {'S', 'i', 'n', 'g', 'h', 'a', 'l', '\0'};
    char s3[] = "Ayush Singhal";
    char s5[50] = "Hari om";
    string s4 = "nice";

    cout << s << endl
         << s2 << endl
         << s3 << endl;
    cout << s4 << endl
         << s5;

    return 0;
}