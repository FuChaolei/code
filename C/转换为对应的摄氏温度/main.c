#include <stdio.h>
#include <stdlib.h>

int main()
{
    double H;
    printf("Please input fahr: ");
    scanf("%lf",&H);
    printf("The cels is: %.2f",5.00*(H-32)/9);

    return 0;
}
