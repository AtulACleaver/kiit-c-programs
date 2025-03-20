// WAP to find the product of two matrices.

#include <stdio.h>

int main()
{
    int r1, c1;

    printf("Print no. of rows in first matrix: ");
    scanf("%d", &r1);
    printf("Print no. of columns in first matrix: ");
    scanf("%d", &c1);

    int r2, c2;
    printf("Print no. of rows in second matrix: ");
    scanf("%d", &r2);
    printf("Print no. of columns in second matrix: ");
    scanf("%d", &c2);

    if (c1 == r2)
    {

        int matrix1[r1][c1];
        int matrix2[r2][c2];

        printf("Enter the elements of the matrix1: \n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("Enter element at [%d][%d]: ", i, j);
                scanf("%d", &matrix1[i][j]);
            }
        }

        printf("Enter the elements of the matri21: \n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("Enter element at [%d][%d]: ", i, j);
                scanf("%d", &matrix2[i][j]);
            }
        }

        int multipliedMatrix[r1][c2];

        printf("Mutliplication of Matrix: \n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                multipliedMatrix[i][j] = 0;
                for (int k = 0; k < c1; k++)
                {
                    multipliedMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d\t", multipliedMatrix[i][j]);
            }
            printf("\n");
        }

    }
    else
    {
        printf("Try again... the matrix multiplication doesn't satisfy!!");
    }
}