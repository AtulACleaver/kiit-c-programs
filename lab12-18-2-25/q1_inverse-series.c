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