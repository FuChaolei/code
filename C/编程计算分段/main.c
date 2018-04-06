#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x;
    printf("Please input x:\n");
    scanf("%f",&x);
    if(x<0)
        printf("y = %.2f\n",3*x-1);
    else if(x<10)
        printf("y = %.2f\n",exp(x));
    else
        printf("y = %.2f\n",x);
    return 0;
}
