/* 
A
A B
A B C
A B C D
*/

#include <stdio.h>

int main(){
    int n = 5;
    char c = 'A';
    
    for(int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            printf("%c ", c+j);
        }
        printf("\n");
    }

    return 0;
}