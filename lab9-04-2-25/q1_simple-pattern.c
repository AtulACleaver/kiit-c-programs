// Print the pattern
/*
    * * * * *
    * * * * *
    * * * * *
    * * * * *
*/

#include <stdio.h>
int main(){
int r, c;

printf("No. of rows: ");
scanf("%d", &r);

printf("No. of columns: ");
scanf("%d", &c);

for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
        printf("* ");
    }
    printf("\n");
}
}