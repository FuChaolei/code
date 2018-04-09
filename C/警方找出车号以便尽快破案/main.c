#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x,i,y,z,a,b,c,d;
    y=sqrt(1000);
    z=sqrt(9999);
    for(i=y;i<=z;i++)
    {
        x=i*i;
       a=x%10;
       b=(x-a)/10%10;
       c=((x-a)/10-b)/10%10;
       d=(((x-a)/10-b)/10-c)/10%10;
       if(a==b&&c==d)
        printf("The number is:%d\n",x);
    }

    return 0;
}
