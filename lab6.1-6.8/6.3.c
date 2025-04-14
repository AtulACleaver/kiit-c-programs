// WAP to test whether a number n is palindrome number or not.

#include <stdio.h>

void isPalindrome(int);

int main(){
    int num = 121;
    
    isPalindrome(num);

    return 0;
}

void isPalindrome(int num){
    int o = num;
    int r = 0;
    while(o != 0){
        r = r * 10 + o%10;
        o = o/10;
    }

    if(r == num){
        printf("it is palindrome");
    }else{
        printf("it is not palindrome");
    }
}

// Output
