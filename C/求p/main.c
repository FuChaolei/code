#include  <stdio.h>
main()
{
    double term, result=1;
    int n;

    for (n=2; n<=100; n++)
    {
        term = (2*n-2)*1.0 / (2*n-1);
        result = result * term;
        term = (2*n)*1.0 / (2*n-1);
        result = result * term;
    }
    printf("result=%lf\n", 4 * result);
}
