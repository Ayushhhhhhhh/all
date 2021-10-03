#include<iostream>
using namespace std;
int scanArray(int *arr, int n);
void printArray(int arr[100], int n);
int main()
{
    int n,k,occur=0;
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    int arr[100];
    scanArray(arr, n);
    cout<<"Enter k:"<<endl;
   cin>>k;
   for(int i = 0;i<n;i++)
   {
       if(arr[i]==k){
           occur++;
       }
   }
   cout<<k<<" repeated "<<occur<<" time/s in this array"<<endl;


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
