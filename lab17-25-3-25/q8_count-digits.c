// WAP to count digits of a positive integer using recursion

#include <stdio.h>

int count(int, int);

int main(){
    int n, c = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Number of digits = %d", count(n, c));

    return 0;
}

int count(int n, int c){
    if(n == 0)
        return c;
    else
        return count(n / 10, c + 1);
}