#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=0;i<=10000;i++)
    {
        if(i%5==1&&i%6==5&&i%7==4&&i%11==10)
        {
            printf("x = %d\n",i);
        break;
        }
    }
    return 0;
}
