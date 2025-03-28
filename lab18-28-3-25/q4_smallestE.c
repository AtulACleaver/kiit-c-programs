// WAP to find out the smallest element of an array by using array as a function argument


/* #include <stdio.h>
void sArr(int *arr, int n)
{

    int smallest = arr[0];
    for(int i=0; i<n; i++)
    {
        if(smallest > arr[i]){
            smallest = arr[i];
        }
    }

    printf("Smallest: %d", smallest);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    
    sArr(arr, 5);
    return 0;
}
// Output: 1 2 3 4 5 */

#include <stdio.h>
int sArr(int *arr, int n)
{

    int smallest = arr[0];
    for(int i=0; i<n; i++)
    {
        if(smallest > arr[i]){
            smallest = arr[i];
        }
    }

    return smallest;

}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    
    printf("Smallest: %d", sArr(arr, 5));
    return 0;
}
// Output: 1 2 3 4 5