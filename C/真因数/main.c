#include<stdio.h>
#include<math.h>
void main()
{
   int i,j,s,t,s1;
   for(i=11;i<=9999;i++)
   {
    s=1;t=sqrt(i);
    for(j=2;j<=t;j++)
        if(i%j==0) s=s+j+i/j;
    if(i==t*t)s-=t;    /*��i��������֮��s*/
    if(i<s)       /*�涨i<s,�����ظ�*/
    {
     s1=1;t=sqrt(s);
     for(j=2;j<=t;j++) if(s%j==0) s1=s1+j+s/j;
     if(s==t*t) s1-=t;    /*��s��������֮��s1*/
     if(s1==i)
     {
       printf("��������%d,%d\n",i,s);
       printf("%d��������֮��Ϊ��1",i);   /*����ӡ������*/
       for(j=2;j<=i/2;j++) if(i%j==0) printf("+%d",j);
       printf("=%d\n",s);
       printf("%d��������֮��Ϊ��%d",s,1);
       for(j=2;j<=s/2;j++) if(s%j==0) printf("+%d",j);
       printf("=%d\n",i);
     }
    }
   }
}
