#include<bits/stdc++.h>

using namespace std;

bool com(int a,int b)
{
    return a>b;   //降序排列，如果改为return a<b，则为升序
}
int main()
{
    int i,j=0,b[11]={0};
    char a[12]={""},c[12]={""},d=',';
    for(i=0;i<11;i++)
    cin>>a[i];
    for(i=0;i<11;i++)
    {
        if(a[i]=='0'&&b[0]!=1)
        {
            c[j]='0';
            j++;
            b[0]=1;
            continue;
        }
        else if(a[i]=='1'&&b[1]!=1)
        {
            c[j]='1';
            j++;
            b[1]=1;
            continue;
        }
        else if(a[i]=='2'&&b[2]!=1)
        {
            c[j]='2';
            j++;
            b[2]=1;
            continue;
        }else if(a[i]=='3'&&b[3]!=1)
        {
            c[j]='3';
            j++;
            b[3]=1;
            continue;
        }else if(a[i]=='4'&&b[4]!=1)
        {
            c[j]='4';
            j++;
            b[4]=1;
            continue;
        }else if(a[i]=='5'&&b[5]!=1)
        {
            c[j]='5';
            j++;
            b[5]=1;
            continue;
        }else if(a[i]=='6'&&b[6]!=1)
        {
            c[j]='6';
            j++;
            b[6]=1;
            continue;
        }else if(a[i]=='7'&&b[7]!=1)
        {
            c[j]='7';
            j++;
            b[7]=1;
            continue;
        }else if(a[i]=='8'&&b[8]!=1)
        {
            c[j]='8';
            j++;
            b[8]=1;
            continue;
        }
        else if(a[i]=='9'&&b[9]!=1)
        {
            c[j]='9';
            j++;
            b[9]=1;
           continue;
        }
        //cout<<c[i]<<endl;
    }


    sort(c,c+j,com);
    cout<<"int[] arr = new int[]{";
    for(int k=0;k<j;k++)
    {
        if(k==j-1)
        d='}';
        cout<<c[k]<<d;
    }
        cout<<';'<<endl;
        cout<<"int[] index = new int[]{";
        for(i=0;i<11;i++)
    {
        for(int m=0;m<j;m++)
        {
            if(a[i]==c[m])
        {
            d=',';
            if(i==10)
                d='}';
            cout<<m<<d;
            continue;
        }

        }

        //cout<<c[i]<<endl;}
    }
    cout<<';'<<endl;
    return 0;
}
