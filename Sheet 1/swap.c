#include <stdio.h>

void swap(int* a, int* b);
int main(void){
    int a;
    int b;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    
    printf("Before: %d \t %d", a, b);

    swap(&a, &b);

    printf("\nAfter:  %d \t %d", a, b);
}

void swap(int* a, int* b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}