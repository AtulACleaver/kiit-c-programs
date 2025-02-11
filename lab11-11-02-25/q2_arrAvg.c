// Find avg of an arr

#include <stdio.h>
int main(){
    int n, sum = 0;

    printf("Size of array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i<n; i++){
        sum += arr[i];
    }

    float avg = sum/n;

    printf("Avg = %.2f", avg);

    return 0;
}