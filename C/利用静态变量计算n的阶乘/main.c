#include <stdio.h>
long Func(int n);
int main()
{
    int  n;
    printf("Input n:");
    scanf("%d", &n);

        printf("%d! = %ld\n", i, Func(i));

    return 0;
}
long Func(int n)
{
    static long p = 1;      /*���徲̬����*/
    p = p * n;
    return p;
}
