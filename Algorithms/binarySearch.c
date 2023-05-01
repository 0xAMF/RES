#include <stdio.h>

int binarySearch(int arr[], int n, int start, int end);
int main(void)
{
    int n;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};    
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Enter the number you want to search for: ");
    scanf("%d", &n);

    if (binarySearch(arr, n, 0, size - 1) == -1)
        printf("NOT FOUND!");
    else
        printf("Found element at index %d", binarySearch(arr, n, 0, size - 1));

    return 0;
}

int binarySearch(int arr[], int n, int start, int end)
{
    int mid = start + (end - start) / 2;
    if (start <= end)
    {
        if (n == arr[mid])
            return mid;
        if (n < arr[mid])
            //search the left half
            return binarySearch(arr, n, start, mid - 1);
        //search the right half otherwise   
        
        return binarySearch(arr, n, mid + 1, end);    
    }
    else
        return -1;
    
}