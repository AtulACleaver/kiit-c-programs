// WAP to find gdc using recursion

#include <stdio.h>

int gcd(int, int);

int main(){
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("GCD = %d", gcd(a, b));

    return 0;
}

int gcd(int a, int b){
    // Logic
    // gcd(12, 15) = gcd(15, 12 % 15)
    // gcd(15, 12 % 15) = gcd(15, 12)
    // gcd(15, 12) = gcd(12, 15 % 12)
    // gcd(12, 15 % 12) = gcd(12, 3)
    // gcd(12, 3) = gcd(3, 12 % 3)
    // gcd(3, 12 % 3) = gcd(3, 0)
    // gcd(3, 0) = 3
    
    if(b != 0)
        return gcd(b, a % b);
    else
        return a;
}