#include <stdio.h>

int fibonacci(int n);

int main(void)
{
    for (int i = 0; i < 100; i++)
    {
        printf("\nfibonacci(%d) = %d\n", i, fibonacci(i));
    }
    
}

int fibonacci(int n)
{
    int fib = 0;
    if (n < 2)
        return n;
    else
        fib = fibonacci(n - 1) + fibonacci(n - 2);
        return fib;
}
