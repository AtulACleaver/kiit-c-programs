// WAP to find the sum of the digits of a 3-digit number.

#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    sum = num%10 + (num/10)%10 + num/100;
    printf("Sum of the digits of %d is %d\n", num, sum);
    return 0;
}
