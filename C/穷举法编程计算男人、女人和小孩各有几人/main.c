#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    printf("Man\tWomen\tChildren\n");
    for(x=0;x<=30;x++)
    {
        for(y=0;y<=30-x;y++)
        {
            z=30-x-y;
            if(3*x+2*y+z==50)
                printf("%3d\t%5d\t%8d\n",x,y,z);
        }
    }
    return 0;
}
