#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a=11.5;
    float b=2.5;
    float c=10;
    printf("area=%.2f,volume=%.2f",(a*b+a*c+b*c)*2,a*b*c);
    return 0;
}
