#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,j=0,k=0;
    char a[1000];
    gets(a);
    int n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]==' ')
            {
                j++;
                for(k=0;k<=n-i;k++)
                {
                    if(a[i+k]!=' ')
                        {
                    i=i+k-1;
                    break;
                        }
                }
            }
    }
    if(a[0]==' ')
        j--;
    if(a[n-1]==' ')
        j--;
    printf("%d",j+1);
    return 0;
}
