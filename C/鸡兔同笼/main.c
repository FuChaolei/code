#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    for(x=0;x<=98;x++)
    {
        y=98-x;
        if(2*x+4*y==386)
    printf("x=%d,y=%d\n",x,y);
    }
    return 0;
}
