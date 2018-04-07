#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c,s,area,p;
    printf("Input a,b,c:");
    scanf("%f,%f,%f",&a,&b,&c);

    if(a+b>c&&b+c>a&&a+c>b)
    {
        s=(a+b+c)/2.0;
        p=s*(s-a)*(s-b)*(s-c);
        area=sqrt(p);
        printf("area=%.4f\n",area);
    }
    else
        printf("It is not a triangle\n");
    return 0;
}
