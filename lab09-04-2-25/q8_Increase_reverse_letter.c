// WAP to print the following pattern for n rows. Ex. for n=5 rows
/*
A
B A
C B A
D C B A
E D C B A
*/

#include <stdio.h>
int main(){
    int i, j, n;
    printf("Input value of N: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        for(j = i; j >= 1; j--){
            printf("%c ", j + 64);
        }
        printf("\n");
    }
}