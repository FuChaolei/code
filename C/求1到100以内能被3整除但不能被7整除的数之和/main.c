#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s=0,i;
    for(i=1;i<=100;i++)
    {
        if(i%3==0&&i%7!=0)
            s=s+i;
    }
    printf("sum=%d\n",s);
    return 0;
}
