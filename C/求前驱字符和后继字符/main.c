#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("Enter a character:");
    scanf("%c",&a);
    printf("%c %c %c\n"   "%d %d %d\n",a-1,a,a+1,a-1,a,a+1);
    return 0;
}
