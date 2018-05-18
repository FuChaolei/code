#include<stdio.h>
#include<math.h>
int main()
{
    int i,m,s=0;
    long n;
    printf("Please enter n:");
    scanf("%ld",&n);
    m=pow(n,1.0/3)+1;
    for(i=1;i<=m;i++)
    {
        s=s+i*i*i;
        if(s>=n)
        {
            printf("m<=%1d\n",i-1);
            break;
        }
    }
   return 0;
}
