#include <stdio.h>
#include <stdlib.h>
#define N 40
int Average(int score[],int n);
int ReadScore(int score[]);
int GetAboveAver(int score[],int n);
int main()
{
    int score[N],aver,n,cout;
    n=ReadScore(score);
    printf("Total students are %d\n",n);
    aver=Average(score,n);
    printf("Average score is %d\n",aver);
    cout=GetAboveAver(score,n);
    printf("Student of above average is %d\n",cout);
    return 0;
}
int Average(int score[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=score[i];
    }
    return sum/n;
    }
int ReadScore(int score[])
    {
        int i=-1;
        do
        {
            i++;
        printf("input score:");
        scanf("%d",&score[i]);
        }
        while(score[i]>=0);
        return i;
    }
    int GetAboveAver(int score[],int n)
{
    int i,j=0,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=score[i];
    }
    for(i=0;i<n;i++)
    {
    if(score[i]>=sum/n)
        j++;
    }
        return j;
}
