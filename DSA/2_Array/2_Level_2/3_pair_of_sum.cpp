
#include <iostream>
using namespace std;
int scanArray(int *arr, int n);
void printArray(int arr[100], int n);
void pairSum(int *arr, int n,int key);


int main()
{
    int n, key;
    cout << "Enter the size of array: " << endl;
    cin >> n;
   
    int arr[n];
    scanArray(arr, n); 
    cout << "Enter the pair sum you want : " << endl;
    cin >> key;
    pairSum(arr,n,key);
    return 0;
}
int scanArray(int *arr, int n)
{
    cout << "Enter element of array:  " << endl;
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
void pairSum(int *arr, int n,int key)
{
    int sum;
    for(int i = 0;i<n-1;i++)
    {
        sum = arr[i]+arr[i+1];
        if(sum==key)
        {
            cout<<"pair of:"<<arr[i]<<" and "<<arr[i+1]<< " found at index "<<i<<","<<i+1<<" gives the sum of "<<key<<endl;
        }
    }
}