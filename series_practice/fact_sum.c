#include <stdio.h>

int main(){
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int fact = 1;
    int sum = 0;
    
    for(int i = 1; i <= n; i++){
        fact*= i;
        sum += fact;

        // Logic
        // n = 5
        // i = 1
        // fact = 1
        // sum = 0
        // fact = 1 * 1 = 1
        // sum = 0 + 1 = 1

        // i = 2
        // fact = 1 * 2 = 2
        // sum = 1 + 2 = 3

        // i = 3
        // fact = 2 * 3 = 6
        // sum = 3 + 6 = 9

        // i = 4
        // fact = 6 * 4 = 24
        // sum = 9 + 24 = 33

        // i = 5
        // fact = 24 * 5 = 120
        // sum = 33 + 120 = 153
    }

    printf("Sum of factorial = %d", sum);

    return 0;
}