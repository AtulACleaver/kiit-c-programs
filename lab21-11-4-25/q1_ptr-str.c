#include <stdio.h>

struct data
{
    int a;
    int b;
};


int main(){
    struct data d1;
    struct data *ptr;

    ptr = &d1;
    ptr -> a = 10;
    ptr -> b = 12;

    printf("%d, %d\n", d1.a, d1.b);
    printf("%d, %d", ptr->a, ptr->b);
    return 0;
}