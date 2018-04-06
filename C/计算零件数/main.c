#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=100;i<=1000;i++)
    {
        if(i%4==2)
        {
            if(i%7==3)
            {
                if(i%9==5)
                {
                    printf("%d",i);
                    break;
                }
            }
        }
    }
    return 0;
}
