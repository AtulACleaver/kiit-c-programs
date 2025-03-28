// WAP to find the avg 
/* 
#include <stdio.h>
void avgArr(int *arr, int n)
{

    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
    }

    float avg = (float)sum/(float)n;

    printf("Avg = %f", avg);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    
    avgArr(arr, 5);
    return 0;
}
// Output: 1 2 3 4 5 */

#include <stdio.h>
float avgArr(int *arr, int n)
{

    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
    }

    float avg = (float)sum/(float)n;
    return avg;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    
    printf("Avg = %f", avg(arr, 5));
    return 0;
}