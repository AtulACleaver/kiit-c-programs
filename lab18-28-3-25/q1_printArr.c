/* // WAP to print and array using array as function argument

#include <stdio.h>
void printArr(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    
    printArr(arr, 5);
    return 0;
}
// Output: 1 2 3 4 5 */


// WAP to print and array using array as function argument

#include <stdio.h>
void printArr(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    
    printArr(arr, 5);
    return 0;
}
// Output: 1 2 3 4 5