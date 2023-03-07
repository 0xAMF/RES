#include <stdio.h>

int main(void){
    int n = 0;
    int factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        factorial *= (n - i);
    }

    printf("Factorial = %d", factorial);
    
}