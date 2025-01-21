// WAP to input a character check if its a integer or not

#include <stdio.h>
int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if(c >= '0' && c <= '9'){
        printf("The character is a digit\n");
    } else {
        printf("The character is not a digit\n");
    }
    return 0;
}