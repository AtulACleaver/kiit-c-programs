// WAP to count vowels and consonants in a string using pointer.

#include <stdio.h>
#include <string.h>

int vowel_count(char *[], int);

int main(){
    char str[100];
    int i, v_count, c_count;

    printf("Enter a string: ");
    scanf("%s", str);

    v_count = vowel_count(&str, strlen(str));
    c_count = strlen(str) - v_count;

    printf("Number of vowels: %d\n", v_count);
    printf("Number of consonants: %d\n", c_count);

    return 0;
}

int vowel_count(char *str[], int length){
    int i, count = 0;
    char vowels[] = "aeiouAEIOU";

    for(i = 0; i < length; i++){
        if(strchr(vowels, str[i]) != NULL){
            count++;
        }
    }
    return count;