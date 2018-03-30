#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,z,s,c,d;
   printf("Input x:\n");
   scanf("%d",&x);
   if(x<0)
    x=0-x;
   z=x%10;
   s=(x-z)/10%10;
   c=((x-z)/10-s)/10%10;
   d=(((x-z)/10-s)/10-c)/10%10;
   printf("y=%d\n",z*1000+s*100+c*10+d);
   printf("a=%d,b=%d\n",z*10+s,c*10+d);
   printf("result=%d\n",(z*10+s)*(z*10+s),(c*10+d)*(c*10+d));
   return 0;
}
