#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s;
    printf("Please input the score\n");
    scanf("%d",&s);
    if(s>=90)
        printf(" 优秀\n");
        else if(s>=80)
        printf(" 良好\n");
        else if(s>=70)
        printf(" 中等\n");
        else if(s>=60)
        printf(" 及格\n");
        else
        printf(" 不及格\n");
    return 0;
}
