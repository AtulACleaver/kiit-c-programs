// WAP to intput elements in 3x3 matrix and display the matrix in tabular form.


#include <stdio.h>

int main(){
    int matrix[3][3];

    printf("Enter the elements of the matrix: \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMatrix: \n");
    for(int i=0; i <3; i++){
        for(int j=0; j<3; j++){
            printf("%d\t", matrix[i][j]);

        }
        printf("\n");
    }
    return 0;
}

