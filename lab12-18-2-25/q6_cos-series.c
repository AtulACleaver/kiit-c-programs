// 1 - x^2/2! + x^4/4! - x^6/6! + x^8/8! + .... n terms

#include <stdio.h>

int main(){
    int x, n;
    float sum = 1, fact = 1;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        fact = 1;
        for (int j = 1; j <= 2 * i; j++) {
            fact *= j;
        }
        
        if (i % 2 == 0) {
            sum -= (float)pow(x, 2 * i) / fact;
        } else {
            sum += (float)pow(x, 2 * i) / fact;
        }
    }
    printf("Sum of the series is: %f\n", sum);
    return 0;
}

// Output
// Enter the value of x: 2
// Enter the number of terms: 3
// Sum of the series is: 0.666667 