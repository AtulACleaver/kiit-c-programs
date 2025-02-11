// WAP to evaluate the equation y=xn where n is a non-negative integer.

#include <stdio.h>
int main(){
    int x, n, i, y = 1;
    printf("Value of X: ");
    scanf("%d", &x);
    printf("Value of N: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
        y *= x;
    }
    printf("Y = %d\n", y);

    return 0;
}