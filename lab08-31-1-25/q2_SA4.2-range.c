// WAP to print all numbers within a given range. The range is to be input by the user using for, while, and do while loop.

#include <stdio.h>
int main(){
    int start, end, i;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    for (i = start; i <= end; i++)
    {
        printf("%d\n", i);
    }

    i = start;
    while (i <= end)
    {
        printf("%d\n", i);
        i++;
    }

    i = start;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= end);

    return 0;
}