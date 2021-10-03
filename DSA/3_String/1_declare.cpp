#include <iostream>
using namespace std;
int main()
{
    char s[20] = {'A', 'y', 'u', 's', 'h', '\0'};
    char s2[] = {'S', 'i', 'n', 'g', 'h', 'a', 'l', '\0'};
    char s3[] = "Ayush Singhal";
    string s4 = "nice";

    cout << s << " " << s2 << " " << s3;
    cout << s4;

    return 0; 
}