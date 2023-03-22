#include <stdio.h>

int fibonacci(int n);

int main(void)
{
    for (int i = 0; i <= 100; i++)
    {
        printf("\nfibonacci(%d) = %d\n", i, fibonacci(i));
    }
    
}

int memo[1000]= {0};
int fibonacci(int n)
{
    if (n < 2)
        return n;

    if (memo[n] != 0)
        return memo[n];
    
    else
        memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
        return memo[n];
}
