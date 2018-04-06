#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,r,d,a,b;
    printf("请输入圆的圆心坐标：");
    scanf("%f,%f",&a,&b);
    printf("请输入圆的半径：");
    scanf("%f",&r);
    printf("请输入要判断的点的坐标(x,y)：");
    scanf("%f,%f",&x,&y);
    d=(x-a)*(x-a)+(y-b)*(y-b);
    if(d==r*r)
        printf("该点在圆上\n");
    else if(d>=r*r)
        printf("该点不在圆内\n");
    else
        printf("该点在圆内\n");
    return 0;
}
