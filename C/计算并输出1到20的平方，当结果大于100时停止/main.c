#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=1;i<=20;i++)
    {
        if(i*i>100)
            break;
        printf("%d*%d=%d\n",i,i,i*i);
    }
    return 0;
}
