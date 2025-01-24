// WAP to read an alphabet from the user and convert it into uppercase if the entered alphabet is in lowercase, otherwise display an appropriate message.

#include <stdio.h>
int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z'){
        c = c - 32;
        printf("Uppercase: %c\n", c);
    } else {
        printf("It's not a lowercase character\n");
    }
    return 0;
}