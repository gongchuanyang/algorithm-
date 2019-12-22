#include<stdio.h>
#include<math.h>
//x is prime return 1
//else return 0
int prime(int x)
{
if(x<=1) return 0;
int bound=(int)sqrt(x)+1;
for(int i=2;i<bound;i++)
{
if(x%i==0) return 0;
else 
{
continue;
}
}
return 1;
}
int main()
{
for(int i=1;i<=100;i++)
{
if(prime(i))
{
printf("%d",i);
printf("\n");
}
}
return 0;
}