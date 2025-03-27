#include <stdio.h>

int main(){
    int n=10;

    int a = 0;
    int b = 1;
    int c;

    printf("0 1 ");
    for(int i = 1; i < n-1; i++){
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    return 0;
}