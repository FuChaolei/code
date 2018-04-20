#include "stdio.h"
#define M 5
int main()
{   int a[M]={1,2,3,4,5};
    int i;
    for(i=M-1;i>=0;i--)
         printf("%d ",a[i]);
    return 0;
}
