#include <stdio.h>
#include <stdlib.h>
unsigned int Fact(int n)
{
    int i;
    long t=1;
    for(i=1;i<=n;i++)
    {
        t*=i;
    }
    return t;
}
int main()
{
    unsigned int n,j;
    long s=0;
    printf("Input n(n>0):");
    scanf("%u",&n);
    for(j=1;j<=n;j++)
    s=s+Fact(j);
    printf("sum = %lu\n",s);
    return 0;
}
