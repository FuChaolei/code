#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("请输入第一个整数：");
    scanf("%d",&a);
    printf("请输入第二个整数：");
    scanf("%d",&b);
    c=a+b;
    printf("%d + %d = %d\n",a,b,c);
    return 0;
}
