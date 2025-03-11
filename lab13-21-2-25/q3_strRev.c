// Reverse a string using strrev

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    gets(str);

    // using strrev
    strrev(str);

    // find length of string
    printf("Reversed String: %s", str);

    return 0;
}