#include <stdio.h>
int main()
{
    int a;
    float b;
    printf("请输入两个整数：");
    scanf("%d %f",&a,&b);
    printf("%d is %.1f percent of %f",a,b,a/b*100);
    return 0;
}
