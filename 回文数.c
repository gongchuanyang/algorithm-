#include<iostream>
using namespace std;
int reverse(int x)
{
int j=0;
while(x!=0)
{
  j=j*10+x%10;
  x=x/10;
}
return j;
}
 bool is_huiwen(int x)
 {
 if(x==reverse(x)) 
 return true;
 else
 return false;
 }
int main()
{
int m;
printf("enter m:\n");
while(scanf("%d",&m)!=EOF)
{
if(is_huiwen(m))
printf("%d�ǻ�����",m);
else
printf("%d�����ǻ�����",m);
}
return 0; 
}