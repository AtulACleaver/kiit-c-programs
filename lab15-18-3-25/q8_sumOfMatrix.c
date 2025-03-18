// Find sum of two matrix of mxn order

#include <stdio.h>

int main(){
    int m, n;

    printf("Print no. of rows: ");
    scanf("%d", &m);
    printf("Print no. of columns: ");
    scanf("%d", &n);
    

    int matrix1[m][n];
    int matrix2[m][n];
    int sumMatrix[m][n];

    printf("Enter the elements of the matrix1: \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the matrix2: \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(int i=0; i <m; i++){
        for(int j=0; j<n; j++){
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("\nSum of two matrix: \n");
    for(int i=0; i <m; i++){
        for(int j=0; j<n; j++){
            printf("%d\t", sumMatrix[i][j]);

        }
        printf("\n");
    }
    return 0;
}