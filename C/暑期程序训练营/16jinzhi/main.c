#include <stdio.h>

int main()
{
    char   a[]  =   "-0x11";
    int    b    =   0;
    sscanf(a,"%x",&b);
    printf("%d\n",b);
    return 0;
}
