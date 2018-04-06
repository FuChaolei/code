#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("Press a key and then press Enter:");
    scanf("%c",&a);
    if(a>=65&&a<=90)
        printf("It is an English character!\n");
    else if(a>='a'&&a<='z')
        printf("It is an English character!\n");
    else if(a>=48&&a<='9')
        printf("It is a digit character!");
    else if(a==' ')
        printf("It is a space character!");
    else
        printf("It is other character!");
    return 0;
}
