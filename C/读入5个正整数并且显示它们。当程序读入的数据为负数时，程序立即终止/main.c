#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    for(i=0;i<5;i++)
    {
    printf("Please enter n:");
    scanf("%d",&n);
    if(n>=0)
        printf("n = %d\n",n);
    else
    {
        printf("Program is over!\n");
        break;
    }
    }
    return 0;
}
