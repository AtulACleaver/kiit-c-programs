#include <stdio.h>
#include <string.h>

void printarr(int arr1[][2], int arr2[][2], int rows)
{
    for(int row=0; row<rows; row++)
    {
        for(int col=0; col<2; col++)
        {
            printf("%d ", arr1[row][col] + arr2[row][col]);
        }
        printf("\n");
    }
}

int main()
{
    int arr1[2][2];
    int arr2[2][2];

    printf("Enter first array elements:\n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("Enter value at [%d][%d]:", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter second array elements");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("Enter value at [%d][%d]:", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    printarr(arr1[2][2], arr2[2][2], 2);

    return 0;
}