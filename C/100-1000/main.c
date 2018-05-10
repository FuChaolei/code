#include<stdio.h>
int main()
{
    int i,j;
    long s=0;
    for(i=2;i<=10;i++)
    {
        for(j=2;j<=i;j++)
        {
            j=j*(j+1);

        }
        s=s+j;
    }
    printf("1!+2!+...+10! = %ld\n",s+1);
    return 0;
}
