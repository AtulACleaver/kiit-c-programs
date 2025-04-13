// WAP to extract the last character of each word of a given string.

#include <stdio.h>

int string_length(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    char last_char = str[string_length(str)-1];
    printf("Last character: %c\n", last_char);
    
    return 0;
}