#include <stdio.h>

int main()
{
    int arr[50], n;
    printf("Enter number of element in the array :\n ");
    scanf("%d", &n);
    printf("Enter elements of array : \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    //Traverse through all element :
    printf("Elements of given array :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    //Searching
    /*
    int key,flag=0;
    printf("Enter element to search: ");
    scanf("%d",&key);

    for(int i = 0;i<n;i++)
    {
       if(key==arr[i])
           flag=1;
    }
    if(flag==1)
        printf("Element found \n");
    else
        printf("Element not found \n");
*/

    //Insertion
    int position, element;
    printf("Enter element and the position you want it to insert : \n");
    scanf("%d %d", &position, &element);
    for (int i = n - 1; i > position; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[position - 1] = element;
    n++;

    printf("New array after insersion : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    /*
    //Deletion

    int position;
    printf("Enter the position of elements you want delete : \n");
    scanf("%d", &position);

    for (int i = position - 1; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    f

        printf("New array after Deletion : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    // updation
    int position, element;
    printf("Enter the element and  position of element you want update : \n");
    scanf("%d%d", &element, &position);

    arr[position - 1] = element;
*/
    printf("New array after Updation : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}