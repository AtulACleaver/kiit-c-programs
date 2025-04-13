/* WAP to swap three numbers in cyclic order using Call by Reference. In other words, WAP that
takes three variable (a, b, c) in as separate parameters and rotates the values stored so that
value a goes to be, b, to c and c to a. */

#include <stdio.h>
void swap(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main() {
    int x, y, z;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("Before swapping: x = %d, y = %d, z = %d\n", x, y, z);
    
    swap(&x, &y, &z);

    printf("After swapping: x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}

// Output:
// Enter three numbers: 1 2 3
// Before swapping: x = 1, y = 2, z = 3
// After swapping: x = 2, y = 3, z = 1