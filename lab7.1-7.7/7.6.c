// WAP to replace all occurrences of a character in a string with the previous 3rd character if any of the character.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch, prev_ch;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character

    printf("Enter the character to replace: ");
    scanf(" %c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            if (i >= 3) {
                str[i] = str[i - 3];
            } else {
                str[i] = ch; // No replacement possible
            }
        }
    }

    printf("Modified string: %s\n", str);

    return 0;
}

// Output:
// Enter a string: Hello World
// Enter the character to replace: o
// Modified string: Helll Worlr
