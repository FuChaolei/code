#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("请输入一个整数：");
    scanf("%d",&n);
    if(n%2==0)
        printf("%d 是一个偶数",n);
    else
        printf("%d 是一个奇数",n);
    return 0;
}
