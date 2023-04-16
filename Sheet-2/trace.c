#include <stdio.h>

int main(void)
{
    int trace = 0;
    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {4, 5, 6, 9},
                        {2, 5, 4, 7}};

    puts(" ");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
            {
                trace += matrix[i][j];
            }
            printf("%d    ", matrix[i][j]);
        }
        puts("\n");
    }   

    printf("\nThe sum of the diagonal elements = %d\n\n", trace);
}

