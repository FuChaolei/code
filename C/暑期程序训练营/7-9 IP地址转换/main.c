#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,b[5]={0},k,j;
    char a[33];
    for(i=0;i<32;i++)
    {
        gets(a);
        for(i=0;i<8;i++)
        {
            k=pow(2,7-i);
            j=a[i]-'0';
            b[0]=j*k+b[0];

        }
        for(i=8;i<16;i++)
        {
            b[1]=(a[i]-'0')*pow(2,15-i)+b[1];
        }
        for(i=16;i<24;i++)
        {
            b[2]=(a[i]-'0')*pow(2,23-i)+b[2];
        }
        for(i=24;i<32;i++)
        {
            b[3]=(a[i]-'0')*pow(2,31-i)+b[3];
        }
    }
    printf("%d.%d.%d.%d",b[0],b[1],b[2],b[3]);
    return 0;
}
