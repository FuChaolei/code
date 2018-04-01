#include <stdio.h>
#include <stdlib.h>
int IsPerfect(int n)
{
    int i,sum=0;
    for(i=1; i<n; i++)
    {
        if(n%i==0)
            sum = sum +i;
        }
    if(sum==n)
        return 1;
    return 0;
}
void main()
{
    int m;
    printf("Input m:\n");
    scanf("%d",&m);
    if(IsPerfect(m))
        printf("%d is a perfect number\n",m);
    else
        printf("%d is not a perfect number\n",m);
}
