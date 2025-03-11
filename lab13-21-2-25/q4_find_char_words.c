// WAP to find no of alphabets and words in a string.

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    gets(str);
    int len = 0, words = 0, alphabets = 0;

    // without strlen
    int i;
    for(i=0; str[i] != '\0'; i++){
        len++;
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
            alphabets++;
        }
        if(str[i] == ' '){
            words++;
        }
    }
    words++;

    // find length of string
    printf("Lenght of String: %d\n", len);
    printf("No of Alphabets: %d\n", alphabets);
    printf("No of Words: %d\n", words);

    return 0;
}