#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string m,k;
    cin>>n;
    cin>>k;
    m=k;
    for(int i=0;i<n-1;i++)
    {
        cin>>k;
        if(k<m)
            m=k;
    }
    cout<<"Min is:"<<m<<endl;
    return 0;
}
