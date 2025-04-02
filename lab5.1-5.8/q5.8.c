// LA5.8 WAP to find out the transpose of a given matrix.

#include <stdio.h>

int main(){
    int m;

    printf("Print no. of rows & columns: ");
    scanf("%d", &m);
    

    int matrix[m][m];

    printf("Enter the elements of the matrix: \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nOriginal Matrix: \n");
    for(int i=0; i <m; i++){
        for(int j=0; j<m; j++){
            printf("%d\t", matrix[i][j]);

        }
        printf("\n");
    }

    for(int i=0; i <m; i++){
        for(int j=i; j<m; j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    printf("\nTranspose Matrix: \n");
    for(int i=0; i <m; i++){
        for(int j=0; j<m; j++){
            printf("%d\t", matrix[i][j]);

        }
        printf("\n");
    }
    return 0;
}

