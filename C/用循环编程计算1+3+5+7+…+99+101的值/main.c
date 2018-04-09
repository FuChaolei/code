#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s=0,i;
    for(i=1;i<=101;i=i+2)
    {
        s=s+i;
    }
    printf("sum=%d\n",s);
    return 0;
}
