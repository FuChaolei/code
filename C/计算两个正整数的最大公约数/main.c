#include <stdio.h>
#include <stdlib.h>
int  MaxCommonFactor(int a, int  b)
{

   while(a!=b)
   {
       if(a>b)
        a=a-b;
       else
        b=b-a;
   }
   return a;
}
int main()
{

    int a,b;
    scanf("%d,%d",&a,&b);
    if(a>0&&b>0)
        printf("%d",MaxCommonFactor(a, b));
    else
        printf("-1");
    return 0;
}
