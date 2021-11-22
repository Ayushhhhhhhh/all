#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key);
int main()
{
    int n;
    cout << "Enter no of element in your array:\n";
    cin >> n;
    int arr[n];
    cout << "Enter Element of the array\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter element to find:\n";
    cin >> key;

    int result = binarySearch(arr, n - 1, key);
    if (result == -1)
    {
        cout << "Element is not present in array";
    }
    else
    {
        cout << "Element is present at index " << result;
    }
    return 0;
}

int binarySearch(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
