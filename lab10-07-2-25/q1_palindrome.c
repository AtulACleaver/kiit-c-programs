//  Check whether a number is palindrome or not

#include <stdio.h>
int main(){
    int num, n, reverse = 0, digit;
    printf("Input number to check for palindrome: ");
    scanf("%d", &num);

    n = num;

    while(n != 0){
        digit = n%10;
        n = n/10;
        reverse = reverse * 10 + digit;
    }
    if(num == reverse){
        printf("Number is palindrome");
    }else{
        printf("Number is not palindrome");
    }

    return 0;
}