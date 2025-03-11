#include <stdio.h>

int main(){
    int i;
    // input n
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    double sum = 0;

    for(i = 1; i <= n; i++){
        sum = sum + 1/(double)i;
    }

    printf("Sum of series: %lf\n", sum);

    return 0;
}

// Question Series
// Q1. Write a program to find the sum of the series 1 + 1/2 + 1/3 + 1/4 + 1/5 + ... 1/n.

// Output:
// Enter n: 5
// Sum of series: 2.283333