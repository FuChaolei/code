#include <stdio.h>
#include <stdlib.h>
unsigned int Fact(n)
{
    unsigned int i,s=0;
    for(i=1;i<=n;i++)
    {
        for(i=i;i>0;i--)
        {
            s=s+i*i;
        }
    }
    printf("%lu",s);

}
int main()
{
    unsigned int n;
    printf("Input n(n>0):");
    scanf("%u",&n);
    printf("sum = %lu\n",Fact(n));
    return 0;
}
