#include <iostream>
#include <algorithm>
using namespace std;
int scanArray(int *arr, int n);
void printArray(int arr[100], int n);
void missing(int *arr, int n);
int main()
{
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    int arr[n];
    scanArray(arr, n);
    printArray(arr, n);
    missing(arr, n);

    return 0;
}

int scanArray(int *arr, int n)
{

    cout << "Enter element of array: \n";
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + (n - 1));
    return *arr;
}
void printArray(int arr[100], int n)
{
    int i;
    cout << "Array :" << endl;
    for (i = 0; i < n - 1; i++)
    {
        cout << arr[i];
    }
}

void missing(int *arr, int n)
{

    if (flag == 0)
    {
        cout << "No Missing integer" << endl;
    }
}
