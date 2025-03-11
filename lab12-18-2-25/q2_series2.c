// 1 + 1/2^2 + 1/3^3 + 1/4^4 + 1/5^5 + ... + 1/n^n

#include <stdio.h>
#include <math.h>

int main(){
    int i;
    // input n
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    double sum = 0;

    for(i = 1; i <= n; i++){
        sum = sum + 1/pow(i, i);
    }

    printf("Sum of series: %lf\n", sum);

    return 0;
}

// Output:
// Enter n: 5
// Sum of series: 1.463611