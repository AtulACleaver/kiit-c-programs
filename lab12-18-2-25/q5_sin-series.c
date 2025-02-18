// (x^1)/1! - (x^3)/3! + (x^5)/5! - (x^7)/7! + (x^9)/9! + ..... n terms

#include <stdio.h>

int main() {
    int x, n;
    float sum = 0, fact = 1;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        fact = 1;
        for (int j = 1; j <= 2 * i - 1; j++) {
            fact *= j;
        }
        
        if (i % 2 == 0) {
            sum -= (float) (x * x * x) / fact;
        } else {
            sum += (float) (x * x * x) / fact;
        }
    }
    printf("Sum of the series is: %f\n", sum);
    return 0;
}

// pg 196 - 202 -> case studies ko try karna hai