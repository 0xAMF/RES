#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);
    
    printf("\n---------------------------------\n");
    printf("|   Multiplication Table for %02d\t|", n);
    printf("\n---------------------------------\n");

    for(int i = 1; i <= 12; i++)
    {
        printf("|\t%02d  X  %02d  =  %03d\t|\n", i, n, i*n);
    }
    printf("\n---------------------------------\n");
}