//质因数分解
#include<stdio.h>
#include<math.h>
int prime(int x);
int prime(int x)//判断素数 
{
if(x<=1) return 0;
else
{
int bound=(int)sqrt(x)+1;
int i;
for(i=2;i<bound;i++)
{
if(x%i==0)
return 0;
}
return 1;
}
void primefactor(int x)
{
if(prime(x)==1)//如果x是质数，则直接打印 
printf("%d",x);
else
{
for(i=2;i<=x-1;i++)
{
if(x%i==0)
{
printf("%d",i);//
if(prime(x/i)==0)//不是质数 
{
primefactor(x/i);
}

else
{
printf("%d",x/i);
break;
}
}
}
}
}

int main()
{
int m;
while(scanf("%d",&m)!=EOF)
{
primefactor(m);
}
return 0;
}











