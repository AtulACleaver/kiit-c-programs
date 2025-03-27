// (x^1)/1! - (x^3)/3! + (x^5)/5! - (x^7)/7! + (x^9)/9! + ..... n terms

#include <stdio.h>
#include <math.h> 


int main() {
    double x, n;
    float sum = 0, fact = 1;
    printf("Enter the value of x: \n");
    scanf(" %lf", &x);
    printf("Enter the number of terms: \n");
    scanf(" %lf", &n);
    for (int i = 1; i <= n; i++) {
        fact = 1;
        for (int j = 1; j <= 2 * i - 1; j++) {
            fact *= j;
        }

        if (i % 2 == 0) {
            sum -= (pow(x, 2 * i - 1) / fact);
        } else {
            sum += (pow(x, 2 * i - 1) / fact);
        }
    }
    printf("Sum of the series is: %f\n", sum);
    return 0;
}

// Output
// Enter the value of x:
// 2
// Enter the number of terms:
// 5
// Sum of the series is: 1.933333


// pg 196 - 202 -> case studies ko try karna hai

// 4.4 4