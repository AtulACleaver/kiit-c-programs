// LA5.1 WAP to input 10 integers into an array of size 10. Print all elements.

#include <stdio.h>

int main() {
    int arr[10]; // Declare an array of size 10
    int i;

    // Input 10 integers into the array
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Print all elements of the array
    printf("The elements in the array are:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


// Output
// Enter 10 integers:
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10
// The elements in the array are:
// 1 2 3 4 5 6 7 8 9 10
