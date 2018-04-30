#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    double capital,deposit,rate;
    printf("Please enter rate, year, capital:");
    scanf("%lf,%d,%lf",&rate,&n,&capital);
    while(n)
    {
        deposit=capital+capital*rate;
        n--;
        capital=deposit;
    }
    printf("deposit = %lf\n",deposit);
    return 0;
}
