// Input a number and check if it is a prime number or not using function

#include <stdio.h>

int checkPrime(int);

int main(){
    int num, prime;

    printf("Enter a number: ");
    scanf("%d", &num);

    prime = checkPrime(num);

    if (prime == 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
    
    return 0;
}

int checkPrime(int a){
    int prime = 1;

    for (int i = 2; i <= a/2; i++)
    {
        if (a%i == 0)
        {
            prime = 0;
        }
        
    }

    return prime;
    
}