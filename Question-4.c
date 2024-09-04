#include <stdio.h>

void squareArray(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        *(arr + i) = (*(arr + i)) * (*(arr + i));
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    squareArray(arr, size);

    printf("\nSquared array: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
