#include <iostream>
using namespace std;
int main()
{
    int arr[] = {6, 2, 3, 5, 2, 5, 9}, n = 7, peak = 0;
    int i = 0;
    if (arr[0] > arr[1])
    {
        cout << "Peak element found: " << arr[i] << " at index: " << i << endl;
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            cout << "Peak element found: " << arr[i] << " at index: " << i << endl;
            peak = 1;
        }
    }
    if (peak == 0)
    {
        cout << "no Peak element found" << endl;
    }
    return 0;
}