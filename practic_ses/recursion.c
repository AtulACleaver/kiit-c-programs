// GCD using recursion

/* #include <stdio.h>

int gcd (int, int);

int main(){
    int a = 10;
    int b = 15;

    printf("GCD of %d and %d = %d", a, b, gcd(a, b));

    return 0;
}

int gcd (int a, int b){
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
} */

// Dry run
/* 
a = 10, b = 15
a = 15, gcd(15, 10)
a = 10, gcd(10, 15%10) = gcd(10, 5)
a = 10, gcd(5, 10%5) = gcd(5, 0)
a = 5 (return)
*/

// Fibonacci series

// Dry run
/* 
if n = 5
fibonacci(5) = fibonacci(4) + fibonacci(3)
fibonacci(4) = fibonacci(3) + fibonacci(2)
fibonacci(3) = fibonacci(2) + fibonacci(1)
fibonacci(2) = fibonacci(1) + fibonacci(0)
fibonacci(1) = 1
fibonacci(0) = 0
*/


/* #include <stdio.h>

int fib(int);

int main(){
    int n = 5;
}

int fib(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}
 */
// Dry run
/*
if n = 5
fib(5) = fib(4) + fib(3)
fib(4) = fib(3) + fib(2)
fib(3) = fib(2) + fib(1)
fib(2) = fib(1) + fib(0)
fib(1) = 1
fib(0) = 0
fib(2) = 1 + 0 = 1
fib(3) = 1 + 1 = 2
fib(4) = 2 + 1 = 3
fib(5) = 3 + 2 = 5
*/

// Count Digits

#include <stdio.h>
int count(int, int);
int main(){
    int n, c = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Number of digits = %d", count(n, c));

    return 0;
}

int count(int n, int c){
    if(n = 0){
        return c;
    }else{
        return (n/10, c + 1);
    }
}