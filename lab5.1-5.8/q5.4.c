// LA5.4 WAP to swap the pair of elements starting from beginning.

#include <stdio.h>

void swapPairs(int arr[], int n) {
    for (int i = 0; i < n - 1; i += 2) {
        // Swap arr[i] and arr[i + 1]
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

// If n is odd, the last element remains unchanged
int main() {
    int n;

    // Size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Input elements into the array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Swap pairs of elements
    swapPairs(arr, n);

    // Print the modified array
    printf("Array after swapping pairs:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// Output
// Enter the number of elements: 5
// Enter 5 integers:
// 1
// 2
// 3
// 4
// 5
// Array after swapping pairs:
// 2 1 4 3 5