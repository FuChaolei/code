#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,r,d,a,b;
    printf("������Բ��Բ�����꣺");
    scanf("%f,%f",&a,&b);
    printf("������Բ�İ뾶��");
    scanf("%f",&r);
    printf("������Ҫ�жϵĵ������(x,y)��");
    scanf("%f,%f",&x,&y);
    d=(x-a)*(x-a)+(y-b)*(y-b);
    if(d==r*r)
        printf("�õ���Բ��\n");
    else if(d>=r*r)
        printf("�õ㲻��Բ��\n");
    else
        printf("�õ���Բ��\n");
    return 0;
}
