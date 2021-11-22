#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array :\t";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array :\n";

    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int tmp;
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
    for (int i = 0; i < n'; i++)
    {
        cout << arr[i];
    }
    return 0;
}