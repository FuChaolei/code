#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("������һ��������");
    scanf("%d",&n);
    if(n%2==0)
        printf("%d ��һ��ż��",n);
    else
        printf("%d ��һ������",n);
    return 0;
}
