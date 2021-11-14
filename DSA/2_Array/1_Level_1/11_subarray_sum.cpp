#include <iostream>
using namespace std;
int scanArray(int *arr, int n);
void printArray(int arr[100], int n);
int main()
{
    int n, sum, currentsum;
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    int arr[100];
    scanArray(arr, n);
    cout << "Enter array sum:" << endl;
    cin >> sum;

    for (int i = 0; i < n; i++)
    {
        currentsum = arr[i];
        for (int j = i + 1; j <= n; j++)
        {
            if (currentsum == sum)
            {
                cout << "sum of element from " << i + 1 << " to " << j << " is " << sum << endl;
                break;
            }
            else if (currentsum > sum)
            {
                break;
            }
            else
            {
                currentsum = currentsum + arr[j];
            }
        }
    }
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

    printf("Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
