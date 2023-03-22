#include <stdio.h>

 int main(void){
    int a, b, c, big;
    
    printf("Enter 3 numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    (a > b) ? (big = a) : (big = b);
    (big > c) ? (big = big) : (big = c);
    (big > b) ? (big = big) : (big = b);
    
    printf("%d is the biggest number", big);

 }