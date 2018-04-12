#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,s=0;
    for(n=1;n<40;n++)
    {
        s=s+n*n;
        if(s>=1000)
        {
            printf("n=%d\n",n-1);
            break;
        }
    }
    return 0;
}
