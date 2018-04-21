#include <stdio.h>
/*
功能：求正整数 n 的因子和
参数：
    n 一个正整数
返回：
    n 的所有因子和
*/
unsigned int factorsSum(unsigned int n)
{
    unsigned int i, sum=0;
    for(i=1; i<n; i++)
        if(n%i == 0)
            sum += i;
    return sum;
}
#define MAX_N 10000
int main()
{
    unsigned int numberFactorsSum[MAX_N], i, j;
    // 求 1~(MAX_N-1) 之间每个数的真因数之和
    for(i=1; i<MAX_N; i++)
        numberFactorsSum[i] = factorsSum(i);

    for(i=1; i<MAX_N; i++)
        for(j=i+1; j<MAX_N; j++)
            // 根据亲合数的定义，判定 i 和 j 是不是亲合数
            if(numberFactorsSum[i] == j && numberFactorsSum[j] == i)
                printf("%d %d\n", i, j);

    return 0;
}
