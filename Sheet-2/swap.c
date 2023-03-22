#include <stdio.h>

void swapByValue(int a, int b);
void swapByReference(int* a, int* b);

int main(void)
{
    int a = 1;
    int b = 2;

    printf("\nBefore: a = %d  || b = %d\n", a, b);

    swapByValue(a, b);
    printf("\nAfter (Swap by value): a = %d  || b = %d\n", a, b);

    swapByReference(&a, &b);
    printf("\nAfter (Swap by reference): a = %d  || b = %d\n\n", a, b);
}

void swapByValue(int a, int b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void swapByReference(int* a, int* b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}