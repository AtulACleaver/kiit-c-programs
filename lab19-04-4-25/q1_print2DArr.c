// WAP to print 2D arrray by passing array as a argument

#include <stdio.h>

void printArr(int arr[][3], int rows);

int main(){
    // V1
    // int arr[4][3] = {{5, 12, 2}, {12, 88, 90}, {76, 43, 82}, {80, 81, 88};

    // V2
    int arr[4][3];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Value of Arr at [%d][%d]: ", i, j);
            scanf("%d", arr[i][j]);
        }
        
    }
    

    printArr(arr, 4);

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