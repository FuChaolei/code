#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,j=0;
    char a[81]={0},b;
    scanf("%c",&b);
    getchar();
    gets(a);
    for(i=81;i>=0;i--)
    {
        if(a[i]==b)
            {
                j=1;
                printf("index = %d\n",i);
                break;
            }
    }
     if(j!=1)
            printf("Not Found");
    return 0;
}
