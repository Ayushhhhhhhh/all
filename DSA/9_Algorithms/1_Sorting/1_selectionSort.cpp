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
    for (int i = 0; i < n; i++)
    {
        int min = arr[i];
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                minIndex = j;
            }
        }
        int tmp = arr[i];
        arr[i] = min;
        arr[minIndex] = tmp;
    }
    cout << "Sorted array is :\n";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }

    return 0;
}