#include <stdio.h>
#include <stdlib.h>

int main()
{
    double capital,accrual;
    int year,flag;
    printf("���� �洢����:\n");
    scanf("%lf%d",&capital,&year);
    accrual = 0;
    flag = 1;
    switch(year)
    {
    case 1 :
        accrual = 1 * capital * 2.25;
        break;
    case 2 :
        accrual = 2 * capital * 2.43;
        break;
    case 3 :
        accrual = 3 * capital * 2.70;
        break;
    case 5 :
        accrual = 5 * capital * 2.88;
        break;
    case 8 :
        accrual = 8 * capital * 3.00;
        break;
    default :
        flag = 0;
        printf("�������!\n");
        break;
    }
    if(flag) printf("%d�꣬������Ϣ��Ϊ:%.2lf\n",year,capital + accrual);
    return 0;
}
