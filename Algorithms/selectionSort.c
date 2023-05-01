#include <stdio.h>

void selectionSort(int arr[], int start, int end);
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

    selectionSort(arr, 0, 10);
    
    printf("\nAfter sorting: ");
    for (int i = 0; i < 10; i++)
    {
        printf("\t%d", arr[i]);
    }
    printf("\n\n");  
}

void selectionSort(int arr[], int start, int end)
{
    if (start != end)
    {
        int indexOfSmallest = start;
        for (int i = start; i < end; i++)
        {
            if (arr[i] < arr[indexOfSmallest])
                //index of the smallest element in range
                indexOfSmallest = i;
        }
        swap(&arr[start], &arr[indexOfSmallest]);
        start++;  //shift one and search again
        selectionSort(arr, start, end);      
    }
}

void swap(int* a, int* b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}