// 1 + 1/1! + 1/2! + 1/3! + 1/4! + ... + 1/n!

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
        sum = sum + 1/(double)fact;
    }

    printf("Sum of series: %lf\n", sum);

    return 0;
}