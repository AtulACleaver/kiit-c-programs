// WAP to display the reverse of a number entered through keyboard.

#include <stdio.h>
int main(){
    int n, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n != 0){
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    printf("Reverse of the number: %d\n", rev);

    return 0;
}

// Output:
// Enter a number: 12345
// Reverse of the number: 54321
