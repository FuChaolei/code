#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,t;
    float s=1.0/6+1.0/60+1.0/61+1.0/62+1.0/63+1.0/64+1.0/65+1.0/67+1.0/68+1.0/69;
    for(i=1;i<=9;i++)
    {
        t=i*10+6;
        s=s+1.0/t;
    }
    printf("The result is %.2f\n",s);
    return 0;
}
