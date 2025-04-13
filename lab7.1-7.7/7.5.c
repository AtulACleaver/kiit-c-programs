// WAP to reads a sentence and prints frequency of each of the vowels and total count of Consonants.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, vowels[5] = {0}, consonants = 0;
    char *vowel_chars = "aeiouAEIOU";

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (strchr(vowel_chars, str[i])) {
            if (str[i] == 'a' || str[i] == 'A') vowels[0]++;
            else if (str[i] == 'e' || str[i] == 'E') vowels[1]++;
            else if (str[i] == 'i' || str[i] == 'I') vowels[2]++;
            else if (str[i] == 'o' || str[i] == 'O') vowels[3]++;
            else if (str[i] == 'u' || str[i] == 'U') vowels[4]++;
        } else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            consonants++;
        }
    }

    printf("Frequency of vowels:\n");
    printf("A/a: %d\n", vowels[0]);
    printf("E/e: %d\n", vowels[1]);
    printf("I/i: %d\n", vowels[2]);
    printf("O/o: %d\n", vowels[3]);
    printf("U/u: %d\n", vowels[4]);
    printf("Total count of consonants: %d\n", consonants);

    return 0;
}

// Output:
// Enter a sentence: Hello World
// Frequency of vowels:
// A/a: 0
// E/e: 1
// I/i: 0
// O/o: 1
// U/u: 0
// Total count of consonants: 7
