// WAP which takes two integer operands and one operator form the user, performs the operation and then prints the result. (Consider the operators +,-,*, /, % etc). Use switch case.

#include <stdio.h>
int main(){
    int a, b;
    char operator;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Enter the operator: ");
    scanf(" %c", &operator);
    switch (operator)
    {
    case '+':
    {
        printf("Sum: %d\n", a+b);
        break;
    }
    case '-':
    {
        printf("Difference: %d\n", a-b);
        break;
    }
    case '*':
    {
        printf("Product: %d\n", a*b);
        break;
    }
    case '/':
    {
        printf("Quotient: %d\n", a/b);
        break;
    }
    case '%':
    {
        printf("Remainder: %d\n", a%b);
        break;
    }
    default:
    {
        printf("Invalid operator\n");
        break;
    }
    }
    return 0;
}

// Output:
// Enter two integers: 5 3
// Enter the operator: *
// Product: 15