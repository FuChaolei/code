#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t,w,h;
    printf("Please enter h,w:\n");
    scanf("%f,%f",&h,&w);
    t=w/(h*h);
    if(t<18&&t>0)
        printf("Lower weight!\n");
    else if(t>=18&&t<25)
    printf("Standard weight!\n");
    else if(t>=25&&t<27)
    printf("Higher weight!\n");
    else if(t>=27)
    printf("Too fat!\n");
    return 0;
}
