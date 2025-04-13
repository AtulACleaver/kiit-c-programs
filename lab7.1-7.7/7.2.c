// Write a program to concatenate two strings without using any library function.

#include <stdio.h>

int main(){
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    // Find the length of str1
    int i = 0;
    while (str1[i] != '\0') {
        i++;
    }

    // Concatenate str2 to str1
    int j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0'; // Null-terminate the concatenated string

    printf("Concatenated string: %s\n", str1);

    return 0;
}