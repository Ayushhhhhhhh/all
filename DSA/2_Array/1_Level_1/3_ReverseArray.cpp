#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9},n=9,rev[10];
    int j = n-1;
    for(int i = 0;i<n;i++)
    {
       rev[i] = arr[j];
       j--;
    }
    for(int i = 0;i<n;i++)
    {
        arr[i] = rev[i];
    }
    cout<<"Reversed Array is :"<<endl;
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}