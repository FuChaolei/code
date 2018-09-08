#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,j,m,k=-1,c=0,d=0;
    char a[1024];
    gets(a);
    m=strlen(a);
    int t=m-1;
    for(i=0;i<m;i++)
    {
        if(k==-1)
    k=-k;
        for(j=t;j>=0;j--){

            if(a[i]==a[j]&&k==1)
        {
            k=-1;
            c++;
           // t=j;
            break;

        }
        else
        {
            if(c>d)
            {
                d=c;
                c=0;
            }
        }
        }
    }
    //if(c%2==1)
    printf("%d",c);
    //else
       // printf("%d",c/2);
    return 0;
}
