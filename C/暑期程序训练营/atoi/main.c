#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];
  gets(a);
  int n=atoi(a);
  printf("%d",n+100);
    return 0;
}
