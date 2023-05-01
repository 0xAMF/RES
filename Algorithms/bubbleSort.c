#include <stdio.h>

void bubbleSort(int arr[], int size);
void swap(int* a, int* b);

int main(void)
{
    int arr[10];
    printf("Enter 10 elements for the array: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nBefore sorting: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }

    bubbleSort(arr, 10);
    printf("\nAfter sorting: ");
    for (int i = 0; i < 10; i++)
    {
        printf("\t%d", arr[i]);
    }
    printf("\n\n");  
}

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[j] > arr[i])
            {
                swap(&arr[i], &arr[j]);
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