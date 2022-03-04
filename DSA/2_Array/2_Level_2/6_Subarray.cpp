//Given an unsorted array A of size N that contains only non - negative integers, find a continuous sub - array which adds to a given number S.
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        long long currsum;
        int start = 0, end = 0;
        // vector<int> subarray = {-1};
        currsum = arr[start];
        while (start < n && end < n)
        {
            if (currsum == s)
            {
                return {start + 1, end + 1};
                // subarray.assign(1,start+1);
                // subarray.push_back(end+1);
                break;
            }
            else if (currsum < s)
            {
                currsum += arr[++end];
            }
            else
            {
                currsum -= arr[start++];
            }
        }
        return {-1};
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long s;
        cin >> n >> s;
        int arr[n];
        const int mx = 1e9;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> res;
        res = ob.subarraySum(arr, n, s);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
} // } Driver Code Ends