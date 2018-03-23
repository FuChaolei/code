#include <stdio.h>
void main()
{
    char a;
    printf("Press a key and then press Enter:");
    scanf("%c", &a);
    printf("%c", a + 32);
}
