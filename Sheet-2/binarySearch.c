#include <stdio.h>

int binarySearch(int arr[], int n, int low, int high);
int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10 ,11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int n;
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("\nEnter the number you want to search for: ");
    scanf("%d", &n);

    if (binarySearch(arr, n, 0, size - 1) == -1)
        puts("\nNOT FOUND!");
    else
        printf("\nFound %d at index %d",n ,binarySearch(arr, n, 0, size - 1));

    puts("\n");
}

int binarySearch(int arr[], int n, int low, int high)
{
    int mid = low + (high - low) / 2;
    if (low < high)
    {
        if (arr[mid] == n)
            return mid;

        else if(arr[mid] > n)
            /*Search the left half*/
            return binarySearch(arr, n, low, mid - 1);
        else
            /*Serach the right half*/
            return binarySearch(arr, n, mid + 1, high); 
    }
    else
        return -1;
}