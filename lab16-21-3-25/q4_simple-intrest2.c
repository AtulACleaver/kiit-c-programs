// WAP to input p, t. r and calculate SI using funciton
// Use funciton with argument without return type

#include <stdio.h>

void si(int, int, int);

int main(){
    int p, t, r;
    printf("Enter the value of P, T, R: ");
    scanf("%d %d %d", &p, &t, &r);

    si(p, t, r);

    return 0;
}

void si(int p, int t, int r){
    float intrest = (p * r * t)/100;
    printf("Intrest = %f", intrest);
}