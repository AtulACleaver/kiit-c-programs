// WAP to print a string in reverse using a pointer.

#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int length = strlen(str);
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", *(str + i));
    }
    printf("\n");
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character

    printf("Reversed string: ");
    reverseString(str);

    return 0;
}

// Output:
// Enter a string: Hello World
// Reversed string: dlroW olleH
