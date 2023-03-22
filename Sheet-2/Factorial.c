#include <stdio.h>

int factorial(int n);
int main(void)
{
    int n = 0;

    printf("\nEnter a number: ");
    scanf("%d", &n);
    printf("\nThe factorial of %d = %d\n\n", n, factorial(n));
}

int factorial(int n)
{
    if (n == 1)
        return n;
    else
        return n * factorial(n - 1);
}