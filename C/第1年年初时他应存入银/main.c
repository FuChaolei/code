#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float s=0,a,b;
    for(i=1;i<=5;i++)
   {
       a=s+1000;
       b=1+12*0.01875;
       s=a/b;
   }
   printf("He must save %.2f at the first year.\n",s);
    return 0;
}
