#include <stdio.h>
#include <stdlib.h>
int complare(int a,int b)
{
    int s;
    if(a>b)
     s=a;
    else
        s=b;
    return s;
}
int main()
{
    int a,b;
    printf("Input a,b:");
    scanf("%d,%d",&a,&b);
    printf("max = %d\n",complare(a,b));
    return 0;
}
