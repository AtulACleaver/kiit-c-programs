#include <stdio.h>
int main()
{
    char str[100];    
    printf("Enter a string: ");
    gets(str);

    printf("First characters are: %c ", str[0]);

    for(int i=0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            printf("%c ", str[i+1]);
        }
    }
    return 0;
}