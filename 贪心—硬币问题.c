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
cout<<"����֧����Ǯ\n"<<endl;
cin>>sum;
cout<<"�������Ǯ�ҵ�����\n"<<endl;
for(i=5;i>=0;i--)
{
cout<<"�������Ϊ"<<value[i]<<"������"<<endl;
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
cout<<"�ܹ���Ҫ"<<ans<<"Ӳ��"<<endl; 
return 0;
}
int min(int a,int b)
{
return a<b?a:b;
}