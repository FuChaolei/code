#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s=100,b=100,c;
    int i;
    for(i=9; i>0; i--)
    {
        s=s/2;
        b=b+s*2;
        if(i==1)
            c=s/2;
    }

    printf("the total of road is %f\n",b);
    printf("the tenth is %f meter\n",c);

    return 0;
}
