#include <stdio.h>

int main(){
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    int largest = arr[0];
    int pos = 0;

    for(int i = 1; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
            pos = i;
        }
    }

    printf("Largest element in the array is: %d", largest);

    return 0;
}