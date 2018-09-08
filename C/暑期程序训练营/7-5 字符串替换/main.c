#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char a[81]={0};
    gets(a);
    for(i=0;i<81;i++)
        {
            if(a[i]>='A'&&a[i]<='M')
    {
        a[i]='M'*2-a[i]+1;
    }
    else if(a[i]>='N'&&a[i]<='Z')
    {
        a[i]='N'*2-a[i]-1;
    }
        }
        printf("%s",a);
    return 0;
}
