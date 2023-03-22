#include <stdio.h>

void bubbleSort(int arr[], int size);
void swap(int* a, int* b);

int main(void)
{
    int arr[] = {9, 6, 4, 7, 8, 2, 3, 1, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    puts("\n");
    puts("Before: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }

    bubbleSort(arr, size);
    puts("\nAfter: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    puts("\n");
}

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[j] > arr[i])
            {
                swap(&arr[j], &arr[i]);
            }
        } 
    } 
}

void swap(int* a, int* b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}