// Copy string using strcpy & without

#include <stdio.h>
#include <string.h>

int main(){
    char str1[100], str2[100];
    // scanf("%s", str);
    gets(str1);

    // without strcpy
    int i;
    for(i=0; str1[i] != '\0'; i++){
        str2[i] = str1[i];
    }
    str2[i] = '\0'; // add null character at the end

    // find length of string
    printf("Copied String: %s", str2);

    return 0;
}