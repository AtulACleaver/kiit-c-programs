// Print lenght of a string using strlen & with out it

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    // scanf("%s", str);
    gets(str);
    int len = 0;

    // without strlen
    int i;
    for(i=0; str[i] != '\0'; i++){
        len++;
    }

    // find length of string
    printf("Lenght of String: %d", len);

    return 0;
}