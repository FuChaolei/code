#include <stdio.h>
#include <stdlib.h>
double myPOW(int x,int n)
{
    int i,sum=1;
    double y;
    if(n>0)
    {
        for(i=1; i<=n; i++)
        {
            sum=sum*x;
        }
        return sum;
    }
    else if(n<0)
    {
        for(i=1; i<=-n; i++)
        {
            sum=sum*x;
        }
        y=1.0/sum;
        return y;
    }
    else if(n==0&&x==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int x,n;
    printf("Enter x and n\n");
    scanf("%d%d",&x,&n);
    printf("mypow(%d,%d) = %.2f\n",x,n,myPOW(x,n));
    return 0;
}
