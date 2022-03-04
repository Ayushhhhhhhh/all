#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int partition(int arr[], int s, int e)
{
    int pindex = s, pivot = arr[e];
    int i = s;
    while (i < e)
    {
        if (arr[i] <= pivot)
        {
            swap(arr[pindex], arr[i]);
            pindex++;
        }
        i++;
    }
    swap(arr[pindex], arr[e]);
    return pindex;
}
void quickSort(int arr[], int s, int e)
{
    if (s < e)
    {
        int p = partition(arr, s, e);
        quickSort(arr, s, p - 1);
        quickSort(arr, p + 1, e);
    }
}
int main()
{
    int n;
    cout << "Enter the size of array:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the element of array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quickSort(arr, 0, n - 1);
    cout << "Sorted array is :\n";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }

    return 0;
}