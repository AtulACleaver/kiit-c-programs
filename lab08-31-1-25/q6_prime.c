// WAP to ceck whether a number is prime or not using for loop, while loop, and do while loop.

#include <stdio.h>
int main(){
    int n, i, prime = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 1)
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }
}