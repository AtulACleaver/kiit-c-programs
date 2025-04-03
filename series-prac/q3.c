// Fibonacci

#include <stdio.h>

int main(){
    int n = 10;

    int a = 0;
    int b = 1;

    int c;

    int count = 0;
    printf("0 1");
    for(int i = 1; count < n-2; i++){
        c = a + b;
        printf("%d", c);
        a = b;
        b = c;
        count++;
    }

    return 0;
}