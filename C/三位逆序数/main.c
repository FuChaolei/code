#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,y,z;
    printf("Please input a sanweishu:\n");
    scanf("%d",&n);
    if(n<0)
        n=-n;
    x=n%10;
    y=(n-x)/10%10;
    z=(n-10*y-x)/10/10;
    printf("%d",x*100+y*10+z);
    return 0;
}
