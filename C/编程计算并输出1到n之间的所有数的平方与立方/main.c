#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("Please enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d*%d = %d\n",i,i,i*i);
    }
    for(i=1;i<=n;i++)
    {
        printf("%d*%d*%d = %d\n",i,i,i,i*i*i);
    }
    return 0;
}
