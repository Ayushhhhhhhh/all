#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the element of array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int key = arr[i];
        while (key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    cout << "Sorted array is :\n";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }

    return 0;
}