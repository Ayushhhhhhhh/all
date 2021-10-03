// C program to traverse the array

#include <stdio.h>

// Function to traverse and print the array

void printArray(int arr[100], int n)
{
	int i;

	printf("Array: ");
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

// Driver program
int main()
{
    int n;
    printf("Enter the size of array: \n");
    scanf("%d",&n);
	int arr[100];
	printf("Enter element of array: \n");
	for(int i = 0;i<n;i++){	
		scanf("%d",&arr[i]);
	}
	printArray(arr,n);
	return 0;
}
