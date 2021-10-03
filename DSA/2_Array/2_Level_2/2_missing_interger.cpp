#include <iostream>
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
    missing(arr, n);

    return 0;
}

int scanArray(int *arr, int n)
{

    cout << "Enter element of array: \n";
    for (int i = 0; i < n-1; i++)
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

void missing(int *arr, int n)
{
    int flag = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] != i)
        {
            cout << "Missing integer : " << i << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "No Missing integer" << endl;
    }
}
