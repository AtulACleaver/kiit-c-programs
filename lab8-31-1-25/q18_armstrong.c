// WAP to check whether an integer number is a Armstrong number or not!.

#include <stdio.h>
#include <math.h>
int main(){
    int n, temp, rem, sum = 0, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(temp != 0){
        temp = temp / 10;
        digits++;
    }
    temp = n;
    while(temp != 0){
        rem = temp % 10;
        sum = sum + pow(rem, digits);
        temp = temp / 10;
    }
    if(sum == n){
        printf("%d is an Armstrong number.\n", n);
    }else{
        printf("%d is not an Armstrong number.\n", n);
    }

    return 0;
}

// Output:
// Enter a number: 153
// 153 is an Armstrong number.