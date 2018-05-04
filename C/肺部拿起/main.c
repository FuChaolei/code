#include<stdio.h>
int count=0; //全局变量
int  fib(int n)
{
  int  f;
  count++;
  if(n==1||n==2) f=1;
  else f=fib(n-1)+fib(n-2);
  return f;
}
void main( )
{
  int n,x;
  printf("Input n:");
  scanf("%d", &n);
  x=fib(n);
printf("Fib(%d)=%d,count=%d\n",n,x,count);
 }
