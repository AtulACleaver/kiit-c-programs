// Learning Pointers in c
// Pointers are variables that store info of another variable
// Pointers are declared using the * operator
// The address of a variable is obtained using the & operator
// The value of a pointer is obtained using the * operator

// Example

/* #include <stdio.h>

int main(){

    int a = 10; // normal variable
    int *p; // pointer variable
    p = &a; // p stores the address of a

    printf("Value of a: %d\n", a); // prints 10
    printf("Address of a: %p\n", &a); // prints address of a
    printf("Value of p: %p\n", p); // prints address of a
    printf("Value pointed by p: %d\n", *p); // prints 10

    return 0;

} */

// Example 2: Use in function
#include <stdio.h>
#include <string.h>


void swap(int *x, int *y) {
    int temp;
    temp = *x; // dereference x
    *x = *y; // dereference y
    *y = temp; // dereference temp
}


// Give me programs (10 questions) to practice pointers in c
// 1. Write a program to swap two numbers using pointers.
// 2. Write a program to find the length of a string using pointers.
// 3. Write a program to reverse a string using pointers.
// 4. Write a program to find the maximum and minimum element in an array using pointers.
// 5. Write a program to sort an array using pointers.
// 6. Write a program to find the sum of all elements in an array using pointers.
// 7. Write a program to find the average of all elements in an array using pointers.
// 8. Write a program to find the second largest element in an array using pointers.
// 9. Write a program to find the second smallest element in an array using pointers.
// 10. Write a program to find the median of an array using pointers.

void swap_num(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void find_length(char *str){
    int count = 0;
    while(*str != '\0'){
        count++;
        str++;
    }
    printf("Length of string is: %d\n", count);
}

int main(){

    char str[100] = "youtube.com";

    find_length(str);

    return 0;
}

