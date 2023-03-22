#include <stdio.h>

int main(void)
{
    int n = 0;
    int power = 0;
    int result = 1;

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter the power you want to raise to: ");
    scanf("%d", &power);

    for (int i = 0; i < power; ++i)
    {
        result *= n;
    }
    printf("Result = %d", result);
}
