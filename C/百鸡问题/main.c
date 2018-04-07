#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,y;
    float c;
    for(a=0;a<101;a++)
    {
        for(b=0;b<101-a;b++)
        {
            for(c=0;c<101-a-b;c++)
            {
                if(5*a+3*b+c/3.0==100&&a+b+c==100)
                {
                    y=(int)c;
                printf("x=%d,y=%d,z=%d\n",a,b,y);
                }
            }
        }
    }

    return 0;
}
