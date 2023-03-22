#include <stdio.h>

int main(void){
    char op;
    int n1, n2;
    int result;

    printf("Choose the operation:\n \"a\" for add\n \"s\" for subtract\n \"m\" for multiply\n \"d\" for divide\n your choice?: ");
    scanf("%c", &op);

    printf("First number? : ");
    scanf("%d", &n1);
    printf("Second number?: ");
    scanf("%d", &n2);

    switch (op)
    {
    case 'a':
        result = n1 + n2;
        printf("%d + %d = %d", n1, n2, result);
        break;
        
    case 's':
        result = n1 - n2;
        printf("%d - %d = %d", n1, n2, result);
        break;

     case 'm':
        result = n1 * n2;
        printf("%d x %d = %d", n1, n2, result);
        break;

    case 'd':
        result = n1 / n2;
        printf("%d / %d = %d", n1, n2, result);
        break;

    default:
        printf("Invalid input");
        break;
    }
}