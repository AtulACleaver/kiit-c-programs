// // WAP to accept n integers and find their summation using dynamic memory allocation.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, sum = 0;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Dynamic memory allocation
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Input integers
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum of the integers: %d\n", sum);

    // Free allocated memory
    free(arr);

    return 0;
}