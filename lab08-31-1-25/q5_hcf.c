// WAP to find the GCD/HCF of two numbers

#include <stdio.h>
int main(){
    int a, b, i, hcf;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    int min = (a < b) ? a : b;

    for (i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }

    printf("HCF of %d and %d is %d\n", a, b, hcf);
    return 0;
}

int gcd (a, b){
    if(b == 0){
        return a;
    }else{
        return gcd(b, a%b);
    }
}