#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j=0;
    char a[81]={0},b[81]={0};
    gets(a);
    //getchar();
   for(i=0;i<81;i++)
    {
        if(a[i]>='0'&&a[i]<='9')
       {
           b[j]=a[i];
           j++;
       }
   }
   printf("%d",atoi(b));
    return 0;
}
