#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Input two integers:");
    scanf("%d %d", &a, &b);
    c = a/b;
    printf("The quotient of a and b is :%d", c);
    return 0;
}
