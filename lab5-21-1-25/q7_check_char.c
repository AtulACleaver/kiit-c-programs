// WAP to input a character check if its a integer or not using conditional operators

#include <stdio.h>
int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    (c >= '0' && c <= '9') ? printf("It's an integer\n") : printf("It's not an integer\n");
    return 0;
}