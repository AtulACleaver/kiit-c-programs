// LA5.2 WAP to store max. 100 numbers into an array. Print all the elements that are three digit even integers.

#include <stdio.h>



int main() {
    int arr[100]; // Declare an array of size 100
    int i, count = 0;

    // Size of array
    printf("Enter the number of elements (max 100): ");
    scanf("%d", &count);

    // Input elements into the array
    printf("Enter %d integers:\n", count);
    for (i = 0; i < count; i++) {
        scanf("%d", &arr[i]);
    }

    
    // Print three-digit even integers
    printf("Three-digit even integers:\n");
    for (i = 0; i < count; i++) {
        if (arr[i] >= 100 && arr[i] <= 999 && arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}

// Output
// Enter the number of elements (max 100): 10
// Enter 10 integers:
// 123
// 456
// 789
// 101
// 234
// 567
// 890
// 345
// 678
// 901
// Three-digit even integers:
// 456 234 678