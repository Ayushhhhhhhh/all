#include <iostream>
using namespace std;

//Prototype
int scanArray(int *arr, int n);
void printArray(int arr[100], int n);
void swap(int *i, int *j);
void linearSort(int *arr, int n);

int main()
{
    int n;
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    int arr[100];
    scanArray(arr, n);
    linearSort(arr, n);
    printArray(arr, n);

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
void printArray(int arr[100], int n)
{
    int i;

    printf("Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
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