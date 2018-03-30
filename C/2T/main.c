#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("input x:\n");
    scanf("%f",&x);
    if(x>=-7&&x<=10)
        printf("y=%.3f",5*x*x-4*x+6);
    else
        printf("y=%.3f",x/3+32);
    return 0;
}
