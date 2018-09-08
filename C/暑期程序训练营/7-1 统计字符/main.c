#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,l=0,b=0,d=0,o=0;
    char a[11]={0};
    for(i=0;i<10;i++)
    a[i]=getchar();
    for(i=0;i<10;i++)
    {
        if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
        l++;
        else if(a[i]==' ')
            b++;
        else if(a[i]>='0'&&a[i]<='9')
            d++;
        else if(a[i]=='\n')
            b++;
        else
            o++;
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d",l,b,d,o);
    return 0;
}
