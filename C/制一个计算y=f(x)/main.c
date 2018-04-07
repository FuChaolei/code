#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("Please input x:\n");
    scanf("%f",&x);
    if(x<1)
        printf("y=%.2f\n",x);
    else if(x>=10)
        printf("y=%.2f\n",5*x-11);
    else
        printf("y=%.2f\n",-1/x-1);
    return 0;
}
