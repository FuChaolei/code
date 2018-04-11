#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s=0;
    int i,a;
    for(i=1; i<=99; i++)
    {
        a=i*(i+1)*(i+2);
        s=s+1.0/a;
        i++;
    }
    printf("sum=%f\n",s);
    return 0;
}
