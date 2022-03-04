#include <iostream>
using namespace std;
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
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    cout << "Sorted array is :\n";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }

    return 0;
}