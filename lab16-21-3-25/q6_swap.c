// WAP a program to swap two numbers using call-by-value

#include <stdio.h>

void swap(int, int);

int main(){
    int a;
    int b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    swap(a, b);
}

void swap (int a, int b){
    int temp = a;
    int a = b;
    int b = temp;

    printf("Swap Integers: %d, %d", a, b);
}