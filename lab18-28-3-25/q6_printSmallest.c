// Print the smallest integer

#include <stdio.h>
int sPosArr(int *arr, int n)
{

    int smallest = arr[0];
    int pos = 0;

    for(int i=0; i<n; i++)
    {
        if(smallest > arr[i]){
            smallest = arr[i];
            pos = i;
        }
    }

    return pos;

}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    
    printf("Pos: %d", sPosArr(arr, 5));
    return 0;
}
// Output: 1 2 3 4 5