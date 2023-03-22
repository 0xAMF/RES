#include <stdio.h>

int main(void){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n % 2 != 0)
    {
        printf("Odd");
    }
    else{
        printf("Even");
    }
    
}