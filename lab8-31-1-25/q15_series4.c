// WAP to print the series as 3 5 7 11 13 17..........n, where n is given by user.

#include <stdio.h>
int main(){
    int i = 1, n, a = 2, b = 3, c;
    printf("Value of N: ");
    scanf("%d", &n);
    printf("3 ");
    for(i = 1; i <= n; i++){
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    return 0;
}

// Output:
// Value of N: 10
// 3 5 7 11 13 17 23 29 37 47 59 71