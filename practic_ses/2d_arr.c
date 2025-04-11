// Practice of all 2D array functions

#include <stdio.h>

void printArr(int [][3], int);
void multArr(int [][3], int, int);

int main(){
    // Array 1 -> Direct Input
    int arr1[][3] = {{12, 1, 4}, {8, 19, 1}, {82, 8, 0}};
    // Array 2 -> For loop input

    int arr2[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("value of arr[%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    printArr(arr2, 3);

    // Multiply
    int m = 2;
    multArr(arr1, 3, m);

    return 0;
}

void printArr(int arr[][3], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
        printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void multArr(int arr[][3], int n, int m){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
        printf("%d ", m*arr[i][j]);
        }
        printf("\n");
    }
}
