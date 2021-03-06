#include <string.h>
#include <stdio.h>

#define N 150
#define MAX_LEN 10
void SortString(char str[][MAX_LEN], int n);

int main()
{
    int i, n;
    char name[N][MAX_LEN];

    printf("How many countries?");
    scanf("%d",&n);
    getchar();
    printf("Input their names\n");

    for(i=0;i<n;i++)
        gets(name[i]);

    SortString(name[N][MAX_LEN], n);
    printf("Sorted results:\n");
    for(i=0;i<n;i++)
    {
        puts(name[i]);
    }
    return 0;

}

void SortString(char str[][MAX_LEN], int n)
{
    int i,j;
    char temp[MAX_LEN];

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(str[j]<str[i])
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
}
