#include <iostream>
using namespace std;
int scanarray(int *arr, int n);
void printarray(int arr[100], int n);
void unio(int *arr1, int *arr2, int *uni, int n);
int inter(int *arr, int n);
int main()
{
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    int arr[n],arr2[n], uni[n];

    scanarray(arr, n);
    scanarray(arr2, n);

    unio(arr,arr2,uni,n);
    
    return 0;
}

int scanarray(int *arr, int n)
{

    cout << "Enter element of array: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    return arr[n];
}
void printarray(int arr[100], int n)
{
    int i;

    printf("array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void unio(int *arr, int *arr2, int *uni, int n)
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < n)
    {
        if (arr[i] < arr2[j])
        {
            uni[k] = arr[i];
            i++;
            k++;
        }
        else if (arr[i] == arr2[j])
        {
            uni[k] = arr[i];
            i++;
            k++;
            j++;
        }
        else
        {
            uni[k] = arr2[j];
            k++;
            j++;
        }
    }
    printarray(uni,n);
}
