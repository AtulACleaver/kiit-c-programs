// WAP to input P, T, R and calculate Simple Intrest using function

#include <stdio.h>

float si (int, int, int);

int main(){
    int p = 10000;
    int t = 2;
    int r = 5;

    printf("Intrest = %f", si(p, t, r));

    return 0;
}

float si(int p, int t, int r){
    float intrest = (p * r * t)/100;
    return intrest;
}