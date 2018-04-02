#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x,y,m,n;
    printf("Please input x and y:\n");
    scanf("%f,%f",&x,&y);
    m=pow(x,2);
    n=pow(y,2);
    printf("result=%.2f\n",m+n);

    return 0;
}
