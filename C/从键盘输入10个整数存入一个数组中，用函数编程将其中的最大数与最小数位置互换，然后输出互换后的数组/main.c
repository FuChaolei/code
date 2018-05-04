#include <stdio.h>
#include <stdlib.h>
void MaxMinExchang(int a[], int n)
{
    int i,j=0,k=0,t,max=a[0],min=a[0];
    for(i=0;i<n;i++)
    {
       if(a[i]>max)
       {
           max=a[i];
           j=i;
       }
       else if(a[i]<min)
       {
           min=a[i];
           k=i;
       }
    }
    t=a[j];
    a[j]=a[k];
    a[k]=t;
}
int main()
{
    int a[10],i;
    printf("Input 10 numbers:");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    MaxMinExchang(a,10);
    printf("Exchang results:");
    for(i=0;i<10;i++)
    printf("%4d",a[i]);
    return 0;
}
