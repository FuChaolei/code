#include <stdio.h>
#include <stdlib.h>
int GetAboveAver(int score[], int n)
{
    int i;
    int sum=0,avg;
    for(i=0;i<n;i++){
        sum=sum+score[i];}
    avg=sum/n;
    return avg;
}
int main()
{
    int score[40];
    int i=0,j=0;
    int avg,higher;
    while(1)
    {
        scanf("%d",&score[i]);
        if(score[i]<0||i==40)
            break;
        i++;
    }
    avg=GetAboveAver(score,i);
     for(j=0;j<i;j++)
     {
         if(score[i]>avg)
        higher++;
     }
    printf("Total students are %d\n",i);
    printf("Average score is %d\n",avg);
    printf("Students of above average is %d\n",higher);
    return 0;
}
