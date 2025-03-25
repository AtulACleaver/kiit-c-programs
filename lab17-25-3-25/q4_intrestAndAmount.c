// WAP to calculate simple interest and amount using call by address

#include <stdio.h>

void amount(float *, float *, float, float, float);

int main(){
    float p, r, t, amt, si;

    printf("Enter the principal amount: ");
    scanf("%f", &p);
    printf("Enter the rate of interest: ");
    scanf("%f", &r);
    printf("Enter the time period: ");
    scanf("%f", &t);

    amount(&amt, &si, p, r, t);

    printf("Simple Interest = %.0f\nAmount = %.0f", si, amt);

    return 0;
}

void amount(float *amt, float *si, float p, float r, float t){
    *si = (p * r * t) / 100;
    *amt = p + *si;
}