#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    long s=0;
    for(i=1;i<=99;i=i+2)
    {
        s=s+i*(i+1)*(i+2);
    }
    printf("sum = %ld",s);
    return 0;
}
