#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char c;
    int flag = 0;
    char vowel[] = {'a', 'e', 'i', 'o', 'u'};
    printf("Enter a character: ");
    scanf("%c", &c);
    c = tolower(c);

    for (int i = 0; i < 5; i++)
    {
        if (c == vowel[i])
        {   
            flag = 1;
        }
    }

    if (flag == 1)
    {
        printf("Vowel");
    }
    else{
        printf("Constant");
    }
    
}