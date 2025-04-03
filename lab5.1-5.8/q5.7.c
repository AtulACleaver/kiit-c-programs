// LA5.7 WAP to find out the sum of the elements stored in a matrix.

#include <stdio.h>

int main() {
    int rows, cols;
    int sum = 0;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols]; // Declare a matrix of size rows x cols

    // Input elements into the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of all elements in the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }

    // Print the sum
    printf("The sum of all elements in the matrix is: %d\n", sum);

    return 0;
}


/* 
Output (example):
Enter the number of rows: 2
Enter the number of columns: 3
Enter the elements of the matrix:
1
2
3
4
5
6
The sum of all elements in the matrix is: 21        
*/