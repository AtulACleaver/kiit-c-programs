// Find the sum of all the elements of each row of mxn order

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

    for(int i=0; i <n; i++){
        sum = 0;
        for(int j=0; j<m; j++){
            sum += matrix[j][i];
        }
        printf("Sum of column %d is: %d\n", i+1, sum);
    }

    return 0;
}

