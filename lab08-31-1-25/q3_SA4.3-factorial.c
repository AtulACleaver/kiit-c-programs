// WAP to calculate the factorial of a given number using for, while, and do while loop.

#include <stdio.h>
int main(){
    int n, i, factorial;
    factorial = 1;

    printf("Input value of n: ");
    scanf("%d", &n);

    // Solving using for loop
    for(i = n; i > 1; i-- ){
        factorial *= i;
    }
    printf("Factorial of n = %d \n", factorial);
    return 0;
}