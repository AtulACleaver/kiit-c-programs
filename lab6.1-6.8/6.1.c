// WAP to swap the values of two variables by using a suitable user defined function (say SWAP) for it

#include <stdio.h>

void swap(int, int);

int main(){
    int a = 10;
    int b = 20;

    swap(a, b);

    return 0;
}

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;

    printf("the swaped values are: %d %d", a, b);
}

// Output:
// the swaped values are: 20 10