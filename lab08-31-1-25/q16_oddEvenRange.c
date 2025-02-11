// WAP to print all odd and even numbers separately within a given range. The range is input through user.

#include <stdio.h>
int main(){
    int i, n;
    printf("Enter the range: ");
    scanf("%d", &n);
    printf("Odd numbers: ");
    for(i = 1; i <= n; i++){
        if(i % 2 != 0){
            printf("%d ", i);
        }
    }
    printf("\nEven numbers: ");
    for(i = 1; i <= n; i++){
        if(i % 2 == 0){
            printf("%d ", i);
        }
    }

    return 0;
}

// Output:
// Enter the range: 10
// Odd numbers: 1 3 5 7 9
// Even numbers: 2 4 6 8 10