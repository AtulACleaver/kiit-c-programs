// WAP to generate all the prime numbers between 1 and n by using a user defined function (say isPRIME) to be used for prime number testing, where n is a value supplied by the user.

#include <stdio.h>

int isPRIME(int n){
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Prime numbers between 1 and %d are: ", n);
    for (int i = 2; i <= n; i++){
        if (isPRIME(i)){
            printf("%d ", i);
        }
    }
    
    return 0;
}

// Output:
// Enter a number: 20
// Prime numbers between 1 and 20 are: 2 3 5 7 11 13 17 19
