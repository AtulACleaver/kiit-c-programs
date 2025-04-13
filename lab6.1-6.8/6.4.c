// WAP to calculate x^y by writing a function for it

#include <stdio.h>

int power(int x, int y){
    int result = 1;
    for (int i = 0; i < y; i++){
        result *= x;
    }
    return result;
}

int main(){
    int x, y;
    printf("Enter base and exponent: ");
    scanf("%d %d", &x, &y);
    printf("%d^%d = %d", x, y, power(x, y));
    return 0;
}


// Output:
// Enter base and exponent: 2 3
// 2^3 = 8