#include <stdio.h>
#include <stdlib.h>
int IsPerfect(int x)
{
    int i,sum=0;
    for(i=1;i<x;i++)
    {
        if(x%i==0)
            sum=sum+i;
    }
    if(x==sum)
        return 1;
    else
        return 0;
}
int main()
{
    int x,i;
    printf("Input m:\n");
    scanf("%d",&x);
    i=IsPerfect(x);
    if(i)
        printf("%d is a perfect number\n",x);
    else
        printf("%d is not a perfect number\n",x);
    return 0;
}
