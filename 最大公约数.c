#include<iostream>
using namespace std;
int main()
{
int m,n;
cout<<"m,n"<<endl;
cin>>m>>n;
int d=m%n;
while(d!=0)
{
m=n;
n=d;	
d=m%n;		
}
printf("(m,n)�����Լ��%d",n);


return 0;
}