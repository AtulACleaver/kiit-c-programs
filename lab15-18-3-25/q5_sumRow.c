// Find the sum ofall the elements of each row of mxn order

// Find the number of even and odd elements present in m and n order

// Input an array of m x n order and display the elements

// WAP to intput elements in 3x3 matrix and display the matrix in tabular form.


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

    int sum = 0;

    for(int i=0; i <m; i++){
        sum = 0;
        for(int j=0; j<n; j++){
            sum += matrix[i][j];
        }
        printf("Sum of row %d is: %d\n", i, sum);
    }

    return 0;
}

