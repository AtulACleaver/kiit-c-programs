// Write a program to count the number of characters, alphabets, tabs, newlines, words, vowels, consonants present in a in a string.

#include <stdio.h>

int main() {
    char str[100];
    int i, alphabets = 0, digits = 0, tabs = 0, newlines = 0, words = 0, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            alphabets++;
            if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            alphabets++;
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if (str[i] == '\t') {
            tabs++;
        } else if (str[i] == '\n') {
            newlines++;
        } else if (str[i] == ' ') {
            words++;
        }
    }

    // Count the last word
    if (i > 0) {
        words++;
    }

    printf("Number of characters: %d\n", i);
    printf("Number of alphabets: %d\n", alphabets);
    printf("Number of digits: %d\n", digits);
    printf("Number of tabs: %d\n", tabs);
    printf("Number of newlines: %d\n", newlines);
    printf("Number of words: %d\n", words);
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
// Output: 
// Enter a string: Hello World! 123
// Number of characters: 17
// Number of alphabets: 10
// Number of digits: 3
// Number of tabs: 0
// Number of newlines: 0
// Number of words: 3
// Number of vowels: 3
// Number of consonants: 7
