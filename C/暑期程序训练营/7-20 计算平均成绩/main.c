#include <stdio.h>
#include <stdlib.h>
struct score
{
    char num[100];
    char name[100];
    double score;
};
int main()
{
    struct score s[10000];
    int i,n;
    double average =0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s %s %lf",&s[i].num,&s[i].name,&s[i].score);
        average += s[i].score;
    }
    average=average/n;
    printf("%.2f\n",average);
    for(i=0;i<n;i++)
    {
        if(s[i].score<average)
        {
            printf("%s %s\n",s[i].name,s[i].num);
        }
    }
    return 0;
}
