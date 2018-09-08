#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,m,i;
    char a,b[100020];
    scanf("%d %c",&n,&a);
    getchar();
    gets(b);
    m=strlen(b);
    if(m>n)
    {
        for(i=m-n;i<m;i++)
            printf("%c",b[i]);
    }
    else{
        for(i=0;i<n-m;i++)
            printf("%c",a);
        printf("%s",b);
    }
    return 0;
}
