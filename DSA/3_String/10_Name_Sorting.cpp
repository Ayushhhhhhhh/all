#include <bits/stdc++.h>
using namespace std;
int main()
{
    string student[10];
    int n;
    cout << "Enter the Number of Students : " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the Name of " << i + 1 << " Student :" << endl;
        cin >> student[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (student[j] > student[j + 1])
            {
                swap(student[j], student[j + 1]);
            }
            // else if (student[j][0] == student[j + 1][0])
            // {
            //     if (student[j][1] > student[j + 1][1])
            //     {
            //         swap(student[j], student[j + 1]);
            //     }
            // }
        }
    }
    cout << "Names in sorted order :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << student[i] << endl;
    }
    return 0;
}