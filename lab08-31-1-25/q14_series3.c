// WAP to print the series as 1 1 2 3 5 8 13 ..........n, where n is given by user.

#include <stdio.h>
int main(){
    int i = 1, n, a = 0, b = 1, c;
    printf("Value of N: ");
    scanf("%d", &n);
    printf("1 ");
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
// 1 1 2 3 5 8 13 21 34 55 89 144
