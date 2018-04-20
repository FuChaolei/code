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
    if(i==t*t)s-=t;    /*求i的真因数之和s*/
    if(i<s)       /*规定i<s,避免重复*/
    {
     s1=1;t=sqrt(s);
     for(j=2;j<=t;j++) if(s%j==0) s1=s1+j+s/j;
     if(s==t*t) s1-=t;    /*求s的真因数之和s1*/
     if(s1==i)
     {
       printf("相亲数：%d,%d\n",i,s);
       printf("%d的真因数之和为：1",i);   /*规格打印相亲数*/
       for(j=2;j<=i/2;j++) if(i%j==0) printf("+%d",j);
       printf("=%d\n",s);
       printf("%d的真因数之和为：%d",s,1);
       for(j=2;j<=s/2;j++) if(s%j==0) printf("+%d",j);
       printf("=%d\n",i);
     }
    }
   }
}
