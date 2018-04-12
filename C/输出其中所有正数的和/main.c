#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,n,c=0,s=0;
    while(i)
    {
    printf("Input a number:");
    scanf("%d",&n);
    if(n>0)
        {
            s=s+n;
        c++;
        }
    else if(n==0)
    {
        i=0;
    }
    else
    {}
    }

    printf("sum = %d, count = %d\n",s,c);
    return 0;
}
