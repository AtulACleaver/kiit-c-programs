// WAP to input any integer and print your name that many times.

#include <stdio.h>
int main(){
    int i = 0, n;
    printf("Value of N: ");
    scanf("%d", &n);
    while(i < n){
        printf("Siddharth\n");
        i++;
    }

    return 0;
}

// Output:
// Value of N: 5
// Atul
// Atul
// Atul
// Atul
// Atul