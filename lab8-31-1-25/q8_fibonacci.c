// WAP to find the first n numbers of a Fibonacci sequence.

#include <stdio.h>
int main(){
    int i, n, fib;
    printf("Value of N: ");
    scanf("%d", &n);
    
    printf("0 1 ");
    for(i = 2; i <= n; i++){
        fib = i - 1 + i - 2;
        printf("%d ", fib);
    }

    return 0;
}