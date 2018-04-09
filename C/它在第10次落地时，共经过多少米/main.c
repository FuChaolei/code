#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s=100,b=0,c;
    int i;
    for(i=10; i>0; i--)
    {
        b=b+s;
        s=s/2;
        if(i==1)
            c=s;
    }

    printf("the total of road is %f\n",b);
    printf("the tenth is %f meter\n",c);

    return 0;
}
