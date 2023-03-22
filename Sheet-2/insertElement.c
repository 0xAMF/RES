#include <stdio.h>

int main(void)
{
    int n;
    int arr[50];

    for (int i = 0; i < 50; i++)
    {
        printf("Enter element[%d] or 0 to end: ", i);
        scanf("%d", &arr[i]);

        if (arr[i] == 0)
        {
            break;
        }
        
    }

    printf("\nThe elements you enetered are : ");
    for (int i = 0; i < 50; i++)
    {
        if (arr[i] != 0)
        {
            printf("%d\t", arr[i]);
        }
        else
            break;
        
    }
    printf("\n\n");
}