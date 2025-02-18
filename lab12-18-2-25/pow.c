// WAP to print series of numbers 1, 2^2, 3^3, 4^4, 5^5

#include <stdio.h>

int main(){
    int i;
    for(i=1; i<=5; i++){
        printf("%d^%d = %d\n", i, i, i*i);
    }
    return 0;
}