
#include <iostream>
#include<algorithm>
using namespace std;
int scanArray(int *arr, int n);
void printArray(int arr[100], int n);
void duplicate(int *arr, int n);

int main()
{
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    int arr[n];
    scanArray(arr, n);
   duplicate(arr,n);
    return 0;
}
int scanArray(int *arr, int n)
{
    cout << "Enter element of array:  " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr + n); 
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

void duplicate(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        
        if (arr[i] == arr[i+1])
        {
           cout << "Duplicate found : " << arr[i] << endl;

        }
    }
}