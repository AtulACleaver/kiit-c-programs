// Find the largest number in the array of elements

#include <stdio.h>

int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Input values of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if(largest < arr[i]){
            largest = arr[i];
        }
    }

    printf("Largest value in array is %d", largest);
    
    return 0;
}