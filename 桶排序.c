#include<stdio.h>
//桶排序 
int main()
{
int i;
int x;
int a[11];
for(i=0;i<=10;i++)
a[i]=0;
for(i=1;i<=5;i++)
{
scanf("%d",&x);//用x表示分数 
a[x]++; 
}
for(i=10;i>=0;i--)
{
if(a[i]!=0)
{
for(int j=1;j<=a[i];j++)
printf("%d",i);//i表示分数 
} 
}
return 0; 
} 