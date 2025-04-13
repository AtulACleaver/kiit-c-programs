// WAP to add two numbers using call by reference.

#include <stdio.h>

void add(int *a, int *b, int *sum) {
    *sum = *a + *b;
}

int main() {
    int num1, num2, result;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    add(&num1, &num2, &result);

    printf("Sum: %d\n", result);

    return 0;
}

// Output:
// Enter first number: 5
// Enter second number: 10
// Sum: 15