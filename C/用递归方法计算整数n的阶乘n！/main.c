#include <stdio.h>
#include <stdlib.h>
long fact(int n)
{
    if(n==0)
        return 1;
    else return n*fact(n-1);
}
int main()
{
    int n;
    printf("Input n:");
    scanf("%d",&n);
    printf("%d! = %ld\n",n,fact(n));
    return 0;
}
