#include<iostream.h>
int main(void)
{
int W,count=0,i=1,temp;
int a[10]={0};
cout<<"Please input the W: "<<endl;
cin>>W;

temp=W;

while(temp!=0) {temp/=10;count++;}

while((W/10)!=0)
{
a[count-i]=W%10;
W/=10;
i++;
}
a[0]=W;

for(i=0;i<count;i++)
cout<<a[i];
}
