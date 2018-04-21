#include <stdio.h>
/*
���ܣ��������� n �����Ӻ�
������
    n һ��������
���أ�
    n ���������Ӻ�
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
    // �� 1~(MAX_N-1) ֮��ÿ������������֮��
    for(i=1; i<MAX_N; i++)
        numberFactorsSum[i] = factorsSum(i);

    for(i=1; i<MAX_N; i++)
        for(j=i+1; j<MAX_N; j++)
            // �����׺����Ķ��壬�ж� i �� j �ǲ����׺���
            if(numberFactorsSum[i] == j && numberFactorsSum[j] == i)
                printf("%d %d\n", i, j);

    return 0;
}
