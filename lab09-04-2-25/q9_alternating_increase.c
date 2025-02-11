// WAP to print the following pattern for n rows. Ex. for n=5 rows
/*
1
2 1
1 2 3
4 3 2 1
1 2 3 4 5
*/

#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Input value of N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
        printf("\n");
        i++;

        if (i <= n)
        {
            for (j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
        }
    }

    return 0;
}
