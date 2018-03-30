#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("Please enter a character:\n");
    scanf("%c",&a);
    if(a>=48&&a<=57)
        printf("It is a number.");
    else if(a=='+'||a=='-'||a=='*'||a=='/')
        printf("It is an operator.");
    else
        printf("It is another character.");
    return 0;
}
