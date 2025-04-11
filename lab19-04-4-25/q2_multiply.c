// WAP to mutliply 2D array with 10 

#include <stdio.h>

void multiplyArr(int arr[][3], int rows);

int main(){

    int arr[4][3];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Value of Arr at [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
        
    }
    

    multiplyArr(arr, 4);

    return 0;
}

void multiplyArr(int arr[][3], int rows){
    int row;
    int col;

    for(row = 0; row < rows; row++){
        for (col = 0; col < 3; col++)
        {
            printf("%d ", arr[row][col] * 10);
        }
        printf("\n");
    }
} 