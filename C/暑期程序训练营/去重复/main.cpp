#include<iostream>
using namespace std;
int main()
{
    char str[]="333635";
    int i,j=0;
    for(i=0;str[i];i++)
        if(str[i]!=str[i-1])
            str[j++]=str[i];
        str[j]=0;
        cout<<str<<endl;
    return 0;
}
