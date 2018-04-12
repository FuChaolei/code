#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,b,c;
    for(i=100;i<1000;i++)
    {
        a=i%10;
        b=(i-a)/10%10;
        c=(i-a-b*10)/100;
        if(i==a*a*a+b*b*b+c*c*c)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
