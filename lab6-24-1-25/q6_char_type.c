// WAP to check whether a character entered through keyboard is a digit, letter, special character etc or not.

#include <stdio.h>
int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (c >= '0' && c <= '9'){
        printf("It's a digit\n");
    } else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        printf("It's a letter\n");
    } else {
        printf("It's a special character\n");
    }
    return 0;
}