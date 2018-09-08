#include <stdio.h>
#include <stdlib.h>

int main()
{
    char b[5];
     int  c = 0;
     gets(b);
    sscanf(b,"%x",&c);
    printf("%d",c);
    return 0;
}
