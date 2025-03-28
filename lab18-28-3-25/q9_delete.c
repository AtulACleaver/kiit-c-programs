// WAP to delete an element at a given index in an array and print the original and updated array inside main

#include <stdio.h>

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void deleteElement(int *arr, int n, int index)
{
    for (int i = index; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    printf("Original Array: ");
    printArray(arr, 5);

    deleteElement(arr, 5, 2);

    printf("Updated Array: ");
    printArray(arr, 4);
    return 0;
}