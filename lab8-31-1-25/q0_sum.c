// Find sum of n values using for, while, & do while loop

#include <stdio.h>
int main(){
    int n, i, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("Sum using for loop: %d\n", sum);
    i = 1;
    sum = 0;
    while (i <= n)
    {
        sum += i;
        i++;
    printf("Sum using while loop: %d\n", sum);
    i = 1;
    sum = 0;
    do
    {
        sum += i;
        i++;
    } while (i <= n);
    printf("Sum using do while loop: %d\n", sum);
    return 0;
}