#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("���������õ�����\n");
    scanf("%f",&x);
    if(x<50)
        printf("Ӧ֧�����=%.2f\n",0.53*x);
    else
         printf("Ӧ֧�����=%.2f\n",0.58*x);
    return 0;
}
