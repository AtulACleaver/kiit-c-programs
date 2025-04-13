// A Fibonacci sequence is defined as follows: the first and second terms in the sequence are 0 and 1. Subsequent terms are found by adding the preceding two terms in the sequence (Fi=Fi-1+Fi-2). WAP to generate the first n terms of the sequence by writing a suitable user defined function (say fib) to be used to get nth term Fibonacci value.

#include <stdio.h>

int fib(int n){
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

// logic for n = 5
// fib(5) = fib(4) + fib(3)
// fib(4) = fib(3) + fib(2)
// fib(3) = fib(2) + fib(1)
// fib(2) = fib(1) + fib(0)
// fib(1) = 1
// fib(0) = 0
// fib(2) = 1 + 0 = 1
// fib(3) = 1 + 1 = 2
// fib(4) = 2 + 1 = 3
// fib(5) = 3 + 2 = 5
// fib(5) = 5


int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci sequence: ");
    for (int i = 0; i < n; i++){
        printf("%d ", fib(i));
    }
    
    return 0;
}

// Output:  
// Enter the number of terms: 10
// Fibonacci sequence: 0 1 1 2 3 5 8 13 21 34