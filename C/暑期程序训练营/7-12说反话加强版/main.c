#include <stdio.h>
#include <string.h>
char s[500010];
int main()
{
    int l,i,j;
    int f=0;
    gets(s);
    l=strlen(s);
    for(i=l-1; i>=0; i--)
    {
        if((s[i]==' '&&s[i+1]!=' ')||(!i&&s[i]!=' '))
        {
            if(f==1)
            {
                printf(" ");
            }
            if(s[i]==' '&&s[i+1]!=' ')
                for(j=i+1; j<l&&s[j]!=' '; j++)
                {
                    printf("%c",s[j]);
                    f=1;
                }
            else
                for(j=i; j<l&&s[j]!=' '; j++)
                {
                    printf("%c",s[j]);
                    f=1;
                }
        }
    }
    printf("\n");
    return 0;
}
