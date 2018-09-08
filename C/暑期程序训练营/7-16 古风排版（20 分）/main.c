#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,j,n,m,c;
    char a[10000];
    scanf("%d",&n);
    getchar();
    gets(a);
    m=strlen(a);
    c=n-m%n;
    for(i=m; i<m+c; i++)
        a[i]=' ';
    if(m%n==0)
    {
        for(i=0; i<n; i++)
        {
            for(j=m-n+i; j>=0;)
            {
                printf("%c",a[j]);
                j=j-n;
            }
            printf("\n");
        }
    }
    else
    {
        for(i=0; i<n; i++)
        {
            for(j=c+m-n+i; j>=0;)
            {
                printf("%c",a[j]);
                j=j-n;
            }
            printf("\n");
        }
    }
    return 0;
}
