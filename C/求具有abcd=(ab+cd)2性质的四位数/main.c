#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    printf("There are following numbers:\n");
    for(a=1;a<10;a++)
    {
        for(b=0;b<10;b++)
        {
            for(c=0;c<10;c++)
            {
                for(d=0;d<10;d++)
                {
                    if(a*1000+b*100+c*10+d==(a*10+b+c*10+d)*(a*10+b+c*10+d))
                        printf("%d  ",a*1000+b*100+c*10+d);
                }
            }
        }
    }
    return 0;
}
