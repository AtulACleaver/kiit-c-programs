// WAP to find out nCr factor using a user defined function for factorial (say fact)
// Formula ncr = n! / (r! * (n - r)!)

#include <stdio.h>

int fact(int n){
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main(){
    int n, r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    if (n < r){
        printf("Invalid input");
        return 0;
    }
    
    int nCr = fact(n) / (fact(r) * fact(n - r));
    printf("nCr = %d", nCr);
    return 0;
}

// Output:
// Enter n and r: 5 2
// nCr = 10