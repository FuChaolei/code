#include <stdio.h>
#include <stdlib.h>
int Fibonacci(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return Fibonacci(n-1)+Fibonacci(n-2);
}
int main()
{
    int i,n;
    printf("Input n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("Fib(%d)=%d\n",i,Fibonacci(i));
    return 0;
}
