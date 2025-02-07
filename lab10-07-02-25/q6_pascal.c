// Pattern: pascal triangle
/* 
        1
      1  1
    1  2  1
  1  3  3  1
1  4  6  4  1
 */

#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n-i; j++){
            printf("  ");
        }
        int c = 1;
        for(int j = 1; j <= i; j++){
            printf("%d   ", c);
            c = c * (i-j)/j;
        }
        printf("\n");
    }
}