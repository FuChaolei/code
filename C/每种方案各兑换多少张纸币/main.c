#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,x,y,z;
    for(x=1;x<10;x++)
    {
        for(y=1;y<20;y++)
        {
            z=50-x-y;
            if(10*x+5*y+z==100)
            {
                printf("x = %d, y = %d, z = %d\n",x,y,z);
                n++;
            }
        }
    }
    printf("count = %d\n",n);
    return 0;
}
