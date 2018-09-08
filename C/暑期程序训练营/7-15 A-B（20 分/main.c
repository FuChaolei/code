#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[10005],b[10005];
    int i,j,k,m,n;
    gets(a);
    m=strlen(a);
    gets(b);
    n=strlen(b);
    for(i=0; i<m; i++)
    {
        k=1;
        for(j=0; j<n; j++)
        {
            if(a[i]==b[j])
            {
                k=0;
                break;
            }
        }
        if(k==1)
            printf("%c",a[i]);
    }
    printf("\n");
    return 0;
}
