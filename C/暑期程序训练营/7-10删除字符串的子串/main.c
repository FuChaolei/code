#include <stdio.h>
#include <string.h>
char s1[80]= {""};
char s2[80]= {""};
int main()
{
    int a,b,c,i,j,m=0,n=0,d=0;
    gets(s1);
    gets(s2);
    m=strlen(s1);
    n=strlen(s2);
    for(a=0; a<m; a++)
    {
        if(s1[a]==s2[0])
        {
            d=1;
        }
        for(b=0; b<n; b++)
        {
            if(s1[a+b]!=s2[b])
            {
                d=0;
            }}
        if(d==1)
        {
            m=m-n;
            for(c=a; c<m; c++)
            {
                s1[c]=s1[c+n];
            }
            a=-1;//此处a=-1而不是0，防止s1数组初始位置开始即与s2重合
            s1[m]='\0';
            d=0;
        }
    }
    for(i=0; i<m; i++)
    {
        printf("%c",s1[i]);
    }
    return 0;
}
