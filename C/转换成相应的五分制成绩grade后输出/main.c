#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s;
    printf("Please enter score:");
    scanf("%d",&s);
    if(s>=0&&s<=59)
        printf("%d！！E\n",s);
    else if(s>=60&&s<=69)
        printf("%d！！D\n",s);
    else if(s>=70&&s<=79)
        printf("%d！！C\n",s);
    else if(s>=80&&s<=89)
        printf("%d！！B\n",s);
    else if(s>=90&&s<=100)
        printf("%d！！A\n",s);
    else
        printf("Input error!\n");
    return 0;
}
