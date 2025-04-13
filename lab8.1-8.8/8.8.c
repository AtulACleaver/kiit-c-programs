/* WAP to find the largest element stored in an array of n elements
allocation. */

#include <stdio.h>

int main() {
    int arr[100], n, i, largest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0]; // Assume the first element is the largest

    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The largest element in the array is: %d\n", largest);

    return 0;
}

// Output:
// Enter the number of elements in the array: 5
// Enter the elements of the array:
// 1
// 2
// 3
// 4
// 5
// The largest element in the array is: 5