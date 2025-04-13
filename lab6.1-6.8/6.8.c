// WAP to count number of digits of a positive integer n by using recursion.

#include <stdio.h>

int countDigits(int n){
    if (n == 0)
        return 0;
    else
        return 1 + countDigits(n / 10);
}

int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    if (n < 0){
        printf("Please enter a positive integer.");
        return 1;
    }
    
    int digits = countDigits(n);
    printf("Number of digits in %d is %d\n", n, digits);
    
    return 0;
}

// Output:
// Enter a positive integer: 12345
// Number of digits in 12345 is 5