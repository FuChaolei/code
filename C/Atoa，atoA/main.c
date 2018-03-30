#include <stdio.h>
#include <stdlib.h>


int main()
{
    char x;
    printf("please enter a letter:\n");
    scanf("%c",&x);
    if(x<=90&&x>=65)
    {
        x+=32;
        printf("%c",x);
    }
    else if(x<=122&&x>=97)
    {
        x-=32;
        printf("%c",x);
    }
    else
    {
        printf("%c %d",x,x);
    }
    return 0;
}
