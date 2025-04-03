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


// /*
// Output (example):
// Print no. of rows & columns: 3
// Enter the elements of the matrix:
// Enter element at [0][0]: 1
// Enter element at [0][1]: 2
// Enter element at [0][2]: 3
// Enter element at [1][0]: 4
// Enter element at [1][1]: 5
// Enter element at [1][2]: 6               
// Enter element at [2][0]: 7
// Enter element at [2][1]: 8
// Enter element at [2][2]: 9
//
// Original Matrix:
// 1	2	3
// 4	5	6
// 7	8	9   

// Transpose Matrix:
// 1	4	7
// 2	5	8
// 3	6	9
// */