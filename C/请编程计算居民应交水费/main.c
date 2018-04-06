#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x;
    printf("Enter x:");
    scanf("%lf",&x);
      if(x<0)
      printf("f(%.2f)=%.2f\n",x,0.0);
      else if(x>=0&&x<=15)
      printf("f(%.2f)=%.2f\n",x,4*x/3);
      else
    printf("f(%.2f)=%.2f\n",x,2.5*x-10.5);
      return 0;
      }
