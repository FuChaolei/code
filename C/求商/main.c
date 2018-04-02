#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    if(b==0)
        printf("cannot divide by zero.\n");
    else
        printf("%d",a/b);
    return 0;
}
