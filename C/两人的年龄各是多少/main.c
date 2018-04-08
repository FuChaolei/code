#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b=12,c=36;
    for(a=1;a<100;a++)
    {
        if(2*(b+a)==c+a)
        {
            printf("year=%d\n",a);
            printf("mingAge=%d\n",b+a);
            printf("motherAge=%d\n",c+a);
        }
    }

    return 0;
}
