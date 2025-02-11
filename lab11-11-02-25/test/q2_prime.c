// Find all the prime numbers in the array

#include <stdio.h>

int main(){
    int n;

    printf("Size of array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers: ");    
    for (int i = 0; i<n; i++){
        int isPrime = 1;
        for (int j = 2; j <= arr[i]/2; j++){
            if (arr[i] % j == 0){
                isPrime = 0;
                break;
            }
        }
        if (isPrime && arr[i] > 1){
            printf("%d ", arr[i]);
        }
    }

    return 0;
}