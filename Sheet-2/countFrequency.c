#include <stdio.h>

int main(void)
{
    int arr[] = {1, 2, 3, 2, 4, 5, 5, 6, 7, 8, 7};
    int elementFr[20] = {0};

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        int count = 0;
        /*Counting the occurences of each element*/
        for (int j = 0; j < sizeof(arr)/sizeof(arr[0]); j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        elementFr[i] = count;
        
        /*Removing duplicates*/
        for (int k = i - 1; k >= 0 ; k--)
        {
            if (arr[i] == arr[k])
            {
                elementFr[i] = 0;
            }
        }

        /*Printing frequency*/
        if (elementFr[i] != 0)
        {
            if (elementFr[i] == 1)
                printf("\nElement %d occured once\n", arr[i]);
            else
                printf("\nElement %d occured %d times\n", arr[i], elementFr[i]);
        }
    }
    puts("\n");
}