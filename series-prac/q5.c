// Print and find sum of inverse series

#include <stdio.h>

int main() {
    int n = 5;
    double sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += (double)1 / (double)i;
        printf("1/%d, ", i);
    }

    printf("\nSum = %lf\n", sum);

    return 0;
}