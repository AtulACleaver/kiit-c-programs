// LA5.3 WAP to find out the largest even integer stored in the array of n integers. n is the user input.

#include <stdio.h>

int main() {
    int arr[100]; // Declare an array of size 100
    int i, n, largest_even = -1; // Initialize largest_even to -1 to indicate no even number found

    // Size of array
    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    // Input elements into the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the largest even integer
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0 && arr[i] > largest_even) {
            largest_even = arr[i];
        }
    }

    // Print the result
    if (largest_even != -1) {
        printf("The largest even integer is: %d\n", largest_even);
    } else {
        printf("No even integers found.\n");
    }

    return 0;
}

// Output
// Enter the number of elements (max 100): 5
// Enter 5 integers:
// 1
// 2
// 3
// 4
// 5

// The largest even integer is: 4