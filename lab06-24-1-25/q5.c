// WAP to read an alphabet from from the user and convert it into lowercase if the entered alphabet is in uppercase, otherwise display an appropriate message.

#include <stdio.h>
int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z'){
        c = c + 32;
        printf("Lowercase: %c\n", c);
    } else {
        printf("It's not an uppercase character\n");
    }
    return 0;
}