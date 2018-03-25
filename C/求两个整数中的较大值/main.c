#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("input a and b=");
    scanf("%d %d",&a,&b);
    if(a>b)
        c=a;
    else
        c=b;
    printf("The max of a and b :%d",c);
    return 0;
}
