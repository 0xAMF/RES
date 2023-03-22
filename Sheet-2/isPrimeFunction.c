#include <stdio.h>

int isPrime(int n);
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n) == 0)
        puts("\nPRIME NUMBER!!\n");
    else
        puts("\nNOT A PRIME NUMBER!!\n");
}

int isPrime(int n)
{
    int flag;
    for (int i = n - 1; i > 1; i--)
    {
        if (n % i != 0)
            //prime
            flag = 0;
        else
            //not prime
            flag = 1; 
    } 
    return flag;  
}