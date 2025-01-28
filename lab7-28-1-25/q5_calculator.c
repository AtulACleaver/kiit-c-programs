// WAP to input any two integers, and provide a menu to the user to select any of the options as add, subtract, multiply, divide and display the result accordingly. if else

#include <stdio.h>
int main(){
    int a, b, choice;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Enter your choice:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    scanf("%d", &choice);
    if (choice == 1){
        printf("Sum: %d\n", a+b);
    } else if (choice == 2){
        printf("Difference: %d\n", a-b);
    } else if (choice == 3){
        printf("Product: %d\n", a*b);
    } else if (choice == 4){
        printf("Quotient: %d\n", a/b);
    } else {
        printf("Invalid choice\n");
    }
    return 0;
}