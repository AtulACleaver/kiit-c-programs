// WAP to count vowels and consonants in a string using pointer.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;
    char *vowel_chars = "aeiouAEIOU";

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character

    for (i = 0; str[i] != '\0'; i++) {
        if (strchr(vowel_chars, str[i])) {
            vowels++;
        } else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            consonants++;
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}

// Output:
// Enter a string: Hello World
// Number of vowels: 3
// Number of consonants: 7
