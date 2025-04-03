#include <stdio.h>
#include <math.h>

int main() {
    int n = 5;

    int fact = 1;
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
        sum += (double)fact/(double)pow(i, i);
        printf("%d!/%d^%d, ", i, i, i);
    }

    printf("Sum = %lf", sum);

    return 0;
    
}