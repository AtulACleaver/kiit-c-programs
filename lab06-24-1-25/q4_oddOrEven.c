// WAP to test whether a number entered through keyboard is ODD or EVEN with if-else statement.

#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0){
        printf("It's an even number\n");
    } else {
        printf("It's an odd number\n");
    }
    return 0;
}