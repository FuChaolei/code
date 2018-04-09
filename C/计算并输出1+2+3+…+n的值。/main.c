#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a=1,s=0,i=0;
    printf("Input n:");
    scanf("%d",&n);
    while(a)
    {
        s=s+i;
        i++;
        if(i==n+1)
        {
            a=0;
            printf("sum = %d\n",s);
        }
    }
    return 0;
}
