// WAP to print the natural numbers from 1 to 20 for loop, while loop, and do while loop.

#include <stdio.h>
int main(){
    int i;
    for (i = 1; i <= 20; i++)
    {
        printf("%d\n", i);
    }
    i = 1;
    while (i <= 20)
    {
        printf("%d\n", i);
        i++;
    }
    i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 20);
    
    return 0;
}