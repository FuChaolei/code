#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("请输入月用电量：\n");
    scanf("%f",&x);
    if(x<50)
        printf("应支付电费=%.2f\n",0.53*x);
    else
         printf("应支付电费=%.2f\n",0.58*x);
    return 0;
}
