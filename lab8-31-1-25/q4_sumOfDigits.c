// find sum of digits using for, while, and do while loop

#include <stdio.h>
int main(){
    int n, i, sum = 0, digit;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = n; i > 0; i = i / 10)
    {
        digit = i % 10;
        sum += digit;
    }
    printf("Sum using for loop: %d\n", sum);
    i = n;
    sum = 0;
    while (i > 0)
    {
        digit = i % 10;
        sum += digit;
        i = i / 10;
    }
    printf("Sum using while loop: %d\n", sum);
    i = n;
    sum = 0;
    do
    {
        digit = i % 10;
        sum += digit;
        i = i / 10;
    } while (i > 0);
    printf("Sum using do while loop: %d\n", sum);
    return 0;
}