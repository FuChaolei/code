#include<stdio.h>
int main()
{
    int i=3,j,k;
    for(j=0;j<4;j++)
    {
        i=3;
        for(i=i-j;i>0;i--)
        {
            printf(" ");
        }

        for(k=0;k<6;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
