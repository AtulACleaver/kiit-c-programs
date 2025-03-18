// Input a square matrix display lower and upper trangular matrix

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

    printf("\nLower Triangular Matrix: \n");
    for(int i=0; i <m; i++){
        for(int j=0; j<m; j++){
            if (i > j)
            {
                printf("%d\t", matrix[i][j]);
            }else{
                printf("0\t");
            }
        }
        printf("\n");
    }

    printf("\nUpper Triangular Matrix: \n");
    for(int i=0; i <m; i++){
        for(int j=0; j<m; j++){
            if (i < j)
            {
                printf("%d\t", matrix[i][j]);
            }else{
                printf("0\t");
            }
        }
        printf("\n");
    }
    return 0;
}