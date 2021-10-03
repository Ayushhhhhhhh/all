#include <iostream>
using namespace std;
int scanArray(int *arr, int n);
void printArray(int arr[100], int n);
void rotate(int *arr, int n);
int main()
{
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    int arr[n];
    scanArray(arr, n);
    rotate(arr,n);
    printArray(arr, n);

    return 0;
}

int scanArray(int *arr, int n)
{

    cout << "Enter element of array: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    return arr[n];
}
void printArray(int arr[100], int n)
{
    int i;
    cout << "Array :" << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
void rotate(int *arr, int n)
{
    int temp = arr[n - 1];
    for (int i = n - 1; i > 0; i++)
    {

        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}
