#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i;
    for(a=0;a<10;a++)
    {
        for(b=0;b<10;b++)
        {
            for(i=0;i<100;i++)
            {
                if(a*1000+a*100+b*10+b==i*i)
                    printf("肇事车辆号码为：%d。",310000+i*i);
            }
        }
    }
    return 0;
}
