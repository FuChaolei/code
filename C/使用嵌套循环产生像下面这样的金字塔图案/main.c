#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    char i,j,k,m;
    printf("Please input a capital:\n");
    scanf("%c",&ch);
    for(i='A';i<=ch;i++)
    {
        for(m=ch;m>=i;m--)
        {
            printf(" ");
        }
        for(j='A';j<=i;j++)
        {
            printf("%c",j);
        }
        if(j>'A')
        {
             for(k=i-1;k>='A';k--)
                printf("%c",k);
        }
        printf("\n");
    }
    return 0;
}
