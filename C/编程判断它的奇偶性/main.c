#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Input an integer number:\n");
    scanf("%d",&a);
    if(a%2==0)
        printf("%d is an even number\n",a);
    else
        printf("%d is an odd number\n",a);
    return 0;
}
