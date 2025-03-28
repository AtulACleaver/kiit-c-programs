// WAP to insert an element after a given position

#include <stdio.h>

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void insertElement(int *arr, int n, int index, int newElement)
{
    for (int i = n; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index + 1] = newElement;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    printf("Original Array: ");
    printArray(arr, 5);

    insertElement(arr, 5, 2, 10);

    printf("Updated Array: ");
    printArray(arr, 6);
    return 0;
}

// Output: Original Array: 1 2 3 4 5
// Updated Array: 1 2 3 10 4 5