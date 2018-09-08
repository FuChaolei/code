#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,k,j;
    scanf("%d",&n);
    int a[1000];
    for(i=0;i<n;i++)
        scanf("%d ",&a[i]);
        //gets(a);
    scanf("%d",&k);
    for(i=0;i<n+1;i++)
    {
        if(a[i]<k&&a[i+1]>k)
        {

            for(j=n;j>i;j--)
                a[j+1]=a[j];
                a[i+1]=k;
                break;
        }
        else if(a[i]==k)
        {
            for(j=n;j>i;j--)
                a[j+1]=a[j];
                a[i+1]=k;
                break;
        }

    }
    for(i=0;i<=n;i++)
    printf("%d ",a[i]);
        return 0;
}
