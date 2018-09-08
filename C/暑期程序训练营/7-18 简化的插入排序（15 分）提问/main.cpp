#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n;
    char t;
    cin>>n;
    char a[1000]={""};
    char b[1000]={""};
    //k=2*n+1;
    //for(i=0;i<k;i++)
       // {
            //cin.getline(a,k);
        fgets(a,sizeof(a),stdin);
        //    }
    cin>>t;
    a[2*n+1]=t;
    a[2*n+2]=' ';
    for(i=0;i<n+1;i++)
        b[i]=a[i*2];
    sort(b,b+n+1);
    for(i=0;i<n+1;i++)
    {
        cout<<b[i]<<' '<<endl;
    }
    return 0;
}
    /*string s1, s2, s3;
    s1 = s2 = "1234567890";
    s3 = "aaa";
    s1.insert(5, s3);
    cout << s1 << endl;
    s2.insert(5, "bbb");
    cout << s2 << endl;


    system("pause");
}*/
