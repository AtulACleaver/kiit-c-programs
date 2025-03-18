// Input an array of m x n order and display the elements


#include <stdio.h>

int main(){
    int m, n;

    printf("Print no. of rows: ");
    scanf("%d", &m);
    printf("Print no. of columns: ");
    scanf("%d", &n);
    

    int matrix[m][n];

    printf("Enter the elements of the matrix: \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMatrix: \n");
    for(int i=0; i <m; i++){
        for(int j=0; j<n; j++){
            printf("%d\t", matrix[i][j]);

        }
        printf("\n");
    }
    return 0;
}

