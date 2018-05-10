#include<stdio.h>
int main()
{
    int a,i,j;
    long s=0;
    for(i=1;i<=10;i++)
    {
        a=1;
        for(j=i;j>0;j--)
        {
            a=a*j;
            }
        s=s+a;
    }
    printf("1!+2!+...+10! = %ld\n",s);
    return 0;
}
