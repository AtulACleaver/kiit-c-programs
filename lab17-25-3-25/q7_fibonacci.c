// WAP a print fibonacci series using recursion.

#include <stdio.h>

int fibonacci(int);

int main(){
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("%d ", fibonacci(i));
    }

    return 0;
}

int fibonacci(int n){

    // logic
    // fibonacci(5) = fibonacci(4) + fibonacci(3)
    // fibonacci(4) = fibonacci(3) + fibonacci(2)
    // fibonacci(3) = fibonacci(2) + fibonacci(1)
    // fibonacci(2) = fibonacci(1) + fibonacci(0)
    // fibonacci(1) = 1
    // fibonacci(0) = 0

    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}