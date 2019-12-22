#include<iostream> 
using namespace std;
int min(int a,int b);
int main()
{
int t;
int i;
int sum;
int value[6]={1,5,10,50,100,500};
int c[6];
cout<<"输入支付的钱\n"<<endl;
cin>>sum;
cout<<"输入各种钱币的数量\n"<<endl;
for(i=5;i>=0;i--)
{
cout<<"输入面额为"<<value[i]<<"的数量"<<endl;
cin>>c[i] ;
}
int ans=0; 
for(i=5;i>=0;i--)
{
t=min(sum/value[i],c[i]);
ans+=t;
c[i]=t;
sum-=value[i]*t;
}
for(i=0;i<=5;i++)
cout<<value[i]<<"need"<<c[i]<<endl;
cout<<"总共需要"<<ans<<"硬币"<<endl; 
return 0;
}
int min(int a,int b)
{
return a<b?a:b;
}