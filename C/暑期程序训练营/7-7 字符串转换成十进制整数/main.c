#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,n,j=0,k=0;
    char a[1000],b[1000];
    b[0]='0';
    b[1]='x';
    gets(a);

    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if((a[i]>='0'&&a[i]<='9')||(a[i]>='a'&&a[i]<='f')||(a[i]>='A'&&a[i]<='F')||(a[i]=='-'&&k==0))
        {
            for(;j<n;)
            {
                 b[j+2]=a[i];
                 if(b[2]=='-')
                 {
                     k=1;
                     b[0]='-';
                     b[1]='0';
                     b[2]='x';
                 }
                 if((b[2]>='0'&&b[2]<='9')||(b[2]>='a'&&b[2]<='f')||(a[i]>='A'&&a[i]<='F'))
                    k=1;
                 j++;
                 break;

            }
        }
    }
       int  c = 0;
    sscanf(b,"%x",&c);
    printf("%d",c);
    return 0;
}
