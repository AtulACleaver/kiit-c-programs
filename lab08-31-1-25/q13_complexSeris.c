// WAP to print the series as 1 3 7 15 31 ..........n, where n is given by user.

#include <stdio.h>
int main(){
    int i = 1, n;
    printf("Value of N: ");
    scanf("%d", &n);
    while(i <= n){
        printf("%d ", i);
        i = i * 2 + 1;
    }

    return 0;
}

// Output:
// Value of N: 10
// 1 3 7
