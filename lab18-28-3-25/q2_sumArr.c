// WAP to find sum of array using array as function argument

#include <stdio.h>
void sumArr(int arr[], int n)
{

    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
    }
    printf("Sum of Arr = %d", sum);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    
    sumArr(arr, 5);
    return 0;
}
// Output: 1 2 3 4 5