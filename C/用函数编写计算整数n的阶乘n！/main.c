#include <stdio.h>
#include <stdlib.h>
long int fact(int n)
{
    int i,s=1;
    for(i=1;i<=n;i++)
    s*=i;
    return s;
}
int main()
{
    int m;
    printf("Input m:");
    scanf("%d",&m);
    printf("%d! = %ld\n",m,fact(m));
    return 0;
}
