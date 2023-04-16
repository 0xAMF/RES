#include <stdio.h>
#define MAX_SIZE 50

int main(void)
{
    int n;
    int size;
    int pos;
    int arr[MAX_SIZE];

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The elements you entered are: ");
    for (int i = 0; i < size; i++)
    {
        printf("\t%d", arr[i]);
    }
    puts(" ");

    printf("\nEnter the element you want to insert: ");
    scanf("%d", &n);
    printf("At what index you want the element to be in?: ");
    scanf("%d", &pos);

    if (pos > size || pos < 0)
        printf("Invalid position!");
    else
    {
        ++size;
        for (int i = size; i >= pos; i--)
        {
            arr[i] = arr[i - 1];
        }
    }
    arr[pos] = n;
    
    printf("\nArray elements after inserting the element: ");
    for (int i = 0; i < size; i++)
    {
        printf("\t%d", arr[i]);
    }
    
}