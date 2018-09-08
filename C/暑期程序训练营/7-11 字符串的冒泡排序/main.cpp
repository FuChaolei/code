#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,k;
    cin>>n;
    cin>>k;
    string a[100]= {""};
    for(i=0; i<n; i++)
        cin>>a[i];
    for(int j=0; j<k; j++)
    {
        for(i=0; i<n-1; i++)
        {
            if(a[i]>a[i+1])
            {
                string tempChar = a[i];
                a[i] = a[i+1];
                a[i+1] = tempChar;
            }
        }
    }
    for(i=0; i<n; i++)
        cout<<a[i]<<endl;
    return 0;
}
