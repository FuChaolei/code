#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,s=0,i=0;
    printf("Input n:");
    scanf("%d",&n);
    do
    {
        s=s+i;
        i++;
    }
    while(i<=n);
    printf("sum = %d\n",s);
    return 0;
}
