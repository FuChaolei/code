#include <stdio.h>
#include <stdlib.h>
int year(int n)
{
    if(n==1)
        return 10;
    else
        return 2+year(n-1);
}
int main()
{
    printf("The 5th person's age is %d\n",year(5));
    return 0;
}
