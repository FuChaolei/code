#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("����������������");
    scanf("%d%d",&a,&b);
    printf("%13d Remainder = %d\n",a/b,a%b);
    printf("       ------\n");
    printf("%5d ) %5d",b,a);
    return 0;
}
