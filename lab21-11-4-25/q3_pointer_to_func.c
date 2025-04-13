// A pointer to function is a pointer that holds the memory address of a function.
// It can be used to call the function indirectly. 
// This is useful when you want to pass a function as an argument to another function or when you want to store a function in a data structure.

// Example 
#include <stdio.h>

// Function prototypes
int add(int a, int b);
void subtract(int a, int b);


// Function pointer type


int main() {
    // Declare function pointers
    int (*op1)(int, int);

    // Assign function addresses to pointers
    op1 = add;
    

    // Call functions using pointers
    int result = (*op1)(5, 3);
    printf("Addition result: %d\n", result);

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}


// WAP to demonstrate pointer to function to perform addition of two numbers