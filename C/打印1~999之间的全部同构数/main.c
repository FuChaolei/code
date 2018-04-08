#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    printf("Print all the isomorphism between 1-999:\n");
    k=10;
    for(i=1;i<1000;i++)
    {
        if(i==k)
            k*=10;
        j=i*i;
        if(j%k==i)
            printf("%d ",i);
    }
    return 0;
}
