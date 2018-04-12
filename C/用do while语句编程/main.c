#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,s=0;
    do
    {
        printf("Input num:");
        scanf("%d",&n);
            s=s+n;
            printf("sum = %d\n",s);

    }
    while(n!=0);
    return 0;
}
