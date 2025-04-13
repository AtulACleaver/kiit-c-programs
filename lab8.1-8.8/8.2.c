// WAP to compute the sum of all elements in an array using pointer.

#include <stdio.h>

void computeSum(int *arr, int size, int *sum) {
    *sum = 0;
    for (int i = 0; i < size; i++) {
        *sum += *(arr + i);
    }
}

int main() {
    int arr[100], size, sum;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    computeSum(arr, size, &sum);

    printf("Sum of all elements in the array: %d\n", sum);

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
// Sum of all elements in the array: 15
