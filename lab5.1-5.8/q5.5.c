// LA5.5 WAP to arrange the numbers stored in the array so that it will display first all odd numbers, then even numbers.

#include <stdio.h>

void arrangeOddEven(int arr[], int n) {
    int odd[n], even[n];
    int oddCount = 0, evenCount = 0;

    // Separate odd and even numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];
        }
    }

    // Combine odd and even arrays
    for (int i = 0; i < oddCount; i++) {
        arr[i] = odd[i];
    }
    for (int i = 0; i < evenCount; i++) {
        arr[oddCount + i] = even[i];
    }
}

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

    // Arrange odd and even numbers
    arrangeOddEven(arr, n);

    // Print the modified array
    printf("Array after arranging odd and even numbers:\n");
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
// Array after arranging odd and even numbers:
// 1 3 5 2 4