// WAP to read a character from the user and test it whether it a vowel or consonant or not an alphabet.

#include <stdio.h>
int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            printf("It's a vowel\n");
        } else {
            printf("It's a consonant\n");
        }
    } else {
        printf("It's not an alphabet\n");
    }
    return 0;
}