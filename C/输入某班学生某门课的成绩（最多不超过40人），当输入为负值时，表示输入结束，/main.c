#include <stdio.h>
#include <stdlib.h>
#define N 40
int Average(int score[],int n);
int ReadScore(int score[]);
int main()
{
    int score[N],aver,n;
    n=ReadScore(score);
    printf("Total students are %d\n",n);
    aver=Average(score,n);
    printf("Average score is %d\n",aver);
    return 0;
}
int Average(int score[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=score[i];
    }
    return n>0 ? sum/n:-1;
    }
    int ReadScore(int score[])
    {
        int i=-1;
        do{i++;
        printf("input score:");}
        while(score[i]>=0);
        return i;
    }
