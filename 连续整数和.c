#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
int i,j;
int equal_m;
cout<<"enter equal_m:"<<endl;
cin>>equal_m;		
for(i=1;i<equal_m;i++)	//¿ØÖÆÆðµã 
{
int  j=i;
int sum=0;
while(sum<equal_m)
{
sum=sum+j;
j++; 
}
if(sum==equal_m)
{
cout<<i<<"----"<<j-1<<endl;
}
else sum=0;		
}
	return 0;
}