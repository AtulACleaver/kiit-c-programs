// Pattern
/* 
1 2 3 4 5
  1 2 3
    1
 */

#include <stdio.h>
int main(){
    int n; 
    printf("Enter the value of N: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            printf("  ");
        }
        for(int j = 1; j <= n-i; j++){
            printf("%d ", j);
        }
        for (int j = n-i-1; j > 0; j--){
            printf("%d ", j);
        }
        
        printf("\n");
    }

    return 0;
}