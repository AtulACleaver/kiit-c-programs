// Find the number of even and odd elements present in m and n order


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

    int odd = 0;
    int even = 0;

    for(int i=0; i <m; i++){
        for(int j=0; j<n; j++){
            if (matrix[i][j] % 2 == 0)
            {
                even++;
            }else{
                odd++;
            }
            

        }
    }

    printf("No. of Odd numbers are: %d\n No. of Even numbers are: %d", odd, even);

    return 0;
}

