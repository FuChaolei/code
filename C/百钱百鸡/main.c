#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,i=1;
    for(a=0; a<=20; a++)
    {
        for(b=0; b<34; b++)
        {
            c=100-a-b;

            if(5*a+3*b+c*1.0/3==100)
            {

                printf("%2d:cock=%2d hen=%2d chicken=%2d\n",i,a,b,c);
                i++;
            }
        }
    }

    return 0;
}
