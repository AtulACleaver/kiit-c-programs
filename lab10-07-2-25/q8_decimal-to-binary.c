// WAP to convert a decimal number into its equivalent binary number.

#include <stdio.h>
int main(){
    int num, n, binary = 0, i = 1;
    printf("Input number to convert to binary: ");
    scanf("%d", &num);

    n = num;

    while(n != 0){
        binary = binary + (n%2) * i;
        n = n/2;
        i = i * 10;
    }

    printf("Binary equivalent of %d is %d", num, binary);
    
    return 0;
}

// Output:
// Input number to convert to binary: 10
// Binary equivalent of 10 is 1010