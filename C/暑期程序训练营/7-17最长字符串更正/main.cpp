#include <iostream>
using namespace std;
string a;
int work(int x,int y)
{
    if(y-x==1||y==x)
    {
        if(a[x]==a[y])
            return 1;
        return 0;
    }
    if(a[x]==a[y])
    {
        return work(x+1,y-1)==1;
    }
    return 0;
}
int main()
{
    int res=1;
    getline(cin,a);
    for(int i=0; i<a.length(); i++)
    {
        for(int j=a.length(); j>i; j--)

        {
            if(a[j]==a[i]&&work(i,j))
            {
                res=max(j-i+1,res);

                break;

            }
        }
    }
    cout<<res<<endl;
    return 0;
}
