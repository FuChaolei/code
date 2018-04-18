#include <stdio.h>
#include <stdlib.h>
long fact(int n)
{
    int i,s=1;
    for(i=1;i<=n;i++)
    s*=i;
    return s;
}
int main()
{
    int i,n;
    long s=0;
    printf("Input n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s=s+fact(i);
        printf("1!+2!+бн+%d! = %ld\n",n,s);
    return 0;
}
