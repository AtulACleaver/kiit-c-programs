// LA5.6 WAP to display the array elements in reverse order.

#include <stdio.h>

int main() {
    int arr[100]; // Declare an array of size 100
    int i, n;

    // Size of array
    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    // Input elements into the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the array elements in reverse order
    printf("Array elements in reverse order:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}