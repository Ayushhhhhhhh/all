#include <iostream>
using namespace std;

//Prototype
int scanArray(int *arr, int n);

void swap(int *i, int *j);
void linearSort(int *arr, int n);

int main()
{
    int n,k;
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    int arr[100];
    scanArray(arr, n);
    linearSort(arr, n);
    cout<<"Enter k:"<<endl;
    cout<<k<<" smalest  element of this array is : "<<arr[k-1]<<endl;
    cout<<k<<" largest  element of this array is : "<<arr[n-k]<<endl;
   

    return 0;
}

//Functions
int scanArray(int *arr, int n)
{

    cout << "Enter element of array: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    return arr[n];
}

void linearSort(int *arr, int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}
void swap(int *i, int *j)
{

    int temp = *i;
    *i = *j;
    *j = temp;
}