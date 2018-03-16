#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float capital,deposit;
    scanf("%f",&capital);
    scanf("%d",&n);
    while(n)
    {
        deposit=capital+capital*0.025;
        n--;
        capital=deposit;
    }
    printf("%f",deposit);
    return 0;
}
