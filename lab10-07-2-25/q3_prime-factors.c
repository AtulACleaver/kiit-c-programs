// WAP to find out the prime factors of a number entered through keyboard (distinct).

#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime factors of %d are: ", n);
    // 2 is the only even prime number
    for (int i = 2; i <= n; i++){
        while (n % i == 0){
            printf("%d ", i);
            n /= i;
        }
    }

    // If n is still greater than 2, then it is a prime number
    if (n > 2){
        printf("%d ", n);
    }

    return 0;
}