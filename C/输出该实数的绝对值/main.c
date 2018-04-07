#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;
    printf("Input a float number:");
    scanf("%f",&n);
    if(n<0)
        printf("Absolute value of x is %f\n",-n);
    else
        printf("Absolute value of x is %f\n",n);
    return 0;
}
