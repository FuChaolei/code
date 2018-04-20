#include <stdio.h>
#include <stdlib.h>
int isPrime(int num)
{
    int i;
    int tmp;
    tmp=num-1;
    for(i=2;i<=tmp;i++)
        if(num%i==0)
        return 0;
    return 1;
}
int main()
{
    int i,sum=0;
    for(i=2;i<=100;i++)
    {
        if(isPrime(i))
       {
           printf("%d\n",i);
           sum=sum+i;
       }
    }
    printf("sum of prime numbers:%d\n",sum);
    return 0;
}
