// WAP to find the factorial of a number using recursion.

#include <stdio.h>

int factorial(int n){
    if (n == 0 || n==1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
    
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial of %d = %d", n, factorial(n));
    
    return 0;
}

// Output
// Enter a number: 5
// Factorial of 5 = 120