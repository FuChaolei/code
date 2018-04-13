#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,d,s=1;
    printf("Input days:\n");
    scanf("%d",&d);
    for(i=1;i<d;i++)
    {
        s=(s+1)*2;
    }
    printf("x=%d\n",s);
    return 0;
}
