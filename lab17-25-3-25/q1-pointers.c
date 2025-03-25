// input and output pointer

#include <stdio.h>

void swap (int *p, int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main(){
    int p = 2, q = 3;

    printf("Before Swapping: p = %d, q = %d\n", p, q);

    swap(&p, &q);

    printf("After Swapping: p = %d, q = %d\n", p, q);

    return 0;
}