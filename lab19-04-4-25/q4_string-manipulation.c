// WAP to implement string comparison function, reverse, concatnate, find string lenght

#include <stdio.h>
#include <string.h>

int strLength(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int comp(char str1[], char str2[]){
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i]){
            return 0;
        }
        i++;
    }
    return i;
}

void reverse(char str[]){
    int start = 0;
    int end = strLength(str);

    while(start < end){
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

void concat (char str1[], char str2[]){
    // Concatenate two strings
    // str1 = str1 + str2
    int i = strLength(str1);
    int j = 0;
    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0'; // Null-terminate the concatenated string
}


int main(){
    char str1[] = "twitter";
    char str2[] = "twitter";    

    printf("%d", comp(str1, str2));

    reverse(str1);
    printf("\nReversed: %s", str1);
    return 0;
}
