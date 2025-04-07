// WAP to perform addition of two 2D arrays by passing array as a argument

#include <stdio.h>

void printArr(int arr[][3], int rows);
void addArr(int arr1[][3], int arr2[][3], int rows);

int main(){

    int arr1[4][3];
    int arr2[4][3];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Value of Arr1 at [%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
        
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Value of Arr2 at [%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
        
    }
    
    printArr(arr1, 4);
    printArr(arr2, 4);
    addArr(arr1, arr2, 4);

    return 0;
}

void printArr(int arr[][3], int rows){
    int row;
    int col;

    for(row = 0; row < rows; row++){
        for (col = 0; col < 3; col++)
        {
            printf("%d ", arr[row][col]);
        }
        printf("\n");
    }
}

void addArr(int arr1[][3], int arr2[][3], int rows){
    int row;
    int col;

    printf("After adding:\n");
    for(row = 0; row < rows; row++){
        for (col = 0; col < 3; col++)
        {
            printf("%d ", arr1[row][col] + arr2[row][col]);
        }
        printf("\n");
    }
}

// Output:
// Value of Arr1 at [0][0]: 1
// Value of Arr1 at [0][1]: 2
// Value of Arr1 at [0][2]: 3
// Value of Arr1 at [1][0]: 4
// Value of Arr1 at [1][1]: 5
// Value of Arr1 at [1][2]: 6
// Value of Arr1 at [2][0]: 7
// Value of Arr1 at [2][1]: 8
// Value of Arr1 at [2][2]: 9
// Value of Arr1 at [3][0]: 10
// Value of Arr1 at [3][1]: 11
// Value of Arr1 at [3][2]: 12
// Value of Arr2 at [0][0]: 1
// Value of Arr2 at [0][1]: 2
// Value of Arr2 at [0][2]: 3
// Value of Arr2 at [1][0]: 4
// Value of Arr2 at [1][1]: 5
// Value of Arr2 at [1][2]: 6
// Value of Arr2 at [2][0]: 7
// Value of Arr2 at [2][1]: 8
// Value of Arr2 at [2][2]: 9
// Value of Arr2 at [3][0]: 10
// Value of Arr2 at [3][1]: 11
// Value of Arr2 at [3][2]: 12
// 1 2 3
// 4 5 6
// 7 8 9
// 10 11 12
// 1 2 3
// 4 5 6
// 7 8 9
// 10 11 12     

// After adding:
// 2 4 6
// 8 10 12
// 14 16 18
// 20 22 24
//