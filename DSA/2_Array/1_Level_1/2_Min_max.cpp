#include<iostream>
#include<climits>
using namespace std;
int main(){
    int min=INT_MAX,max=INT_MIN;
    int arr[] = {3,5,67,3,7,1,9,3},n=8;

    for(int i = 0;i<n;i++)
    { //
        if(arr[i]<min){
            min = arr[i];
        }
        else if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"Maximum Element of the array is : "<<max<<endl;
    cout<<"Minimun Element of the array is : "<<min<<endl;
    return 0;
}