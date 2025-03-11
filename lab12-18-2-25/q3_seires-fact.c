// 1! + 2! + 3! + 4! + 5! + ... + n!

#include <stdio.h>

int main(){
    int i;
    // input n
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    double sum = 0;
    int fact = 1;

    for(i = 1; i <= n; i++){
        fact = fact * i; 
        sum = sum + fact;
    }
    // example of for working
    /* 
    n = 5
    i = 1
    fact = 1
    sum = 0
    fact = 1 * 1 = 1
    sum = 0 + 1 = 1

    i = 2
    fact = 1 * 2 = 2
    sum = 1 + 2 = 3

    i = 3
    fact = 2 * 3 = 6
    sum = 3 + 6 = 9

    i = 4
    fact = 6 * 4 = 24
    sum = 9 + 24 = 33

    i = 5
    fact = 24 * 5 = 120
    sum = 33 + 120 = 153
    */

    printf("Sum of series: %lf\n", sum);

    return 0;
}

// Output:
// Enter n: 5
// Sum of series: 153.000000