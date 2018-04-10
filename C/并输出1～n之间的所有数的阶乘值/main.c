#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a=1;
    long x;
    printf("Please enter n:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        x=i*a;
        printf("%d! = %ld\n",i,x);
        a=x;
    }
    return 0;
}
