// WAP to check if a number is palindrome or not

#include <stdio.h>

void isPalindrome(int num){
    int o = num;
    int r = 0;

    while (o != 0){
        r = r*10 + o%10;
        o = o/10;
    }

    if(num == r){
        printf("Number is palindrome!!");
    }else{
        printf("Number is not palindrome!!");
    }
}

int main(){
    int num = 121;

    isPalindrome(num);

    return 0;
}