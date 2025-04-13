// Develop a user defined function function and test them in the main program for the following standard function:
/* int MatchAny(char s1[], char s2[]) :It takes two string arguments and it returns 1 if s2 is
substring of s1, returns 0 if both s1 and s2 are equal strings, otherwise, returns -1. Do not use
the standard library functions. */

#include <stdio.h>
#include <string.h>

int MatchAny(char s1[], char s2[]) {
    int i, j;
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    // Check if s2 is a substring of s1
    for (i = 0; i <= len1 - len2; i++) {
        for (j = 0; j < len2; j++) {
            if (s1[i + j] != s2[j]) {
                break;
            }
        }
        if (j == len2) {
            return 1; // s2 is a substring of s1
        }
    }

    // Check if both strings are equal
    if (strcmp(s1, s2) == 0) {
        return 0; // Both strings are equal
    }

    return -1; // s2 is not a substring of s1 and not equal to s1
}

int main() {
    char str1[100], str2[100];
    int result;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove newline character

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove newline character

    result = MatchAny(str1, str2);

    if (result == 1) {
        printf("'%s' is a substring of '%s'.\n", str2, str1);
    } else if (result == 0) {
        printf("Both strings are equal.\n");
    } else {
        printf("'%s' is not a substring of '%s'.\n", str2, str1);
    }

    return 0;
}

// Output:
// Enter the first string: Hello World
// Enter the second string: World
// 'World' is a substring of 'Hello World'.
