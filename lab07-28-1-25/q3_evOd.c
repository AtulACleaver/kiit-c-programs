// WAP to input a number to test for even or odd

#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    switch(n % 2){
        case 0:
            printf("Even\n");
            break;
        case 1:
            printf("Odd\n");
            break;
    }

    return 0;
}

// Output:
// Enter a number: 5
// Odd