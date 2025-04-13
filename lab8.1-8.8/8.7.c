// WAP to display values in reverse order from an integer array using pointer.

#include <stdio.h>


void displayReverse(int *arr, int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[100], size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array in reverse order:\n");
    displayReverse(arr, size);

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
// Array in reverse order:
// 5 4 3 2 1