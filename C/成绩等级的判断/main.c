#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s;
    printf("Please input the score\n");
    scanf("%d",&s);
    if(s>=90)
        printf(" ����\n");
        else if(s>=80)
        printf(" ����\n");
        else if(s>=70)
        printf(" �е�\n");
        else if(s>=60)
        printf(" ����\n");
        else
        printf(" ������\n");
    return 0;
}
