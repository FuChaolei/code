#include <stdio.h>
#include <stdlib.h>
#include "math.h"
int main()
{
    float a,b,c,p,s;
    printf("Enter 3 floats:");
    scanf("%f,%f,%f",&a,&b,&c);
    p=(a+b+c)/2;
    s=p*(p-a)*(p-b)*(p-c);
    printf("area=%.2f\n",sqrt(s));
    return 0;
}
