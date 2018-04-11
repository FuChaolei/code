#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c;
    int i,f=-40;
    for(i=0;i<16;i++)
    {
     c=5.0/9*(f-32);
    printf("%4d\t%6.1f\n",f,c);

    f+=10;
    }
    return 0;
}
