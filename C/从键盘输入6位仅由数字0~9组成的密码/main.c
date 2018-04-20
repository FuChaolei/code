#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    char a;
    printf("Input your password:\n");
    for(;i<=6;)
    {
        scanf("%c",&a);
        getchar();
        if(a>='0'&&a<='9')
        {
            i++;
           printf("%c, you have enter %d-bits number\n",a,i);

        }
        else
            {
                printf("error\n");
            }
    }

    return 0;
}
