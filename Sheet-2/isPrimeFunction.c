#include <stdio.h>

int isPrime(int n);
int main(void)
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);

    if (isPrime(n) == 0)
        printf("\n%d is a prime number\n\n", n);
    else
        printf("\n%d is not a prime number\n\n", n);
}

int isPrime(int n)
{
    int flag = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            //prime
            flag = 1;
    } 
    return flag;  
}