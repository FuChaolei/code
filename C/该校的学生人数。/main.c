#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=900;i<1000;i++)
    {
        if(i%5==2&&i%7==3&&i%3==1)
            printf("there are %d students in the ground\n",i);
    }
    return 0;
}
