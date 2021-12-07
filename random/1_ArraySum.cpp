
include<iostream>
using namespace std;

int main(){
    int n;
    cout+
    <<"Enter no of Element:"<<endl;
    cin>>n;

    int arr1[n],arr2[n];

    for(int i = 0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i = 0;i<n;i++)
    {
        cin>>arr2[i];
    }
    int sum[n];

    for(int i = 0;i<n;i++)
    {
        sum[i] = arr1[i] + arr2[i];

    }
    
    for(int i = 0;i<n;i++)
    {
        cout<<sum[i];
    }





    return 0;
}