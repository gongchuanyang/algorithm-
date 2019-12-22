#include<stdio.h>
int max(int a,int b)
{
if(a>b)
return a;
else
return b;
}
int main()
{
int i;
int a[7]={0,5,1,2,10,6,2};
int index[7]={0};
int cost[7]={0};
cost[0]=0;
cost[1]=a[1];
index[1]=1; 
for(i=2;i<=6;i++) 
{
if((a[i]+cost[i-2])>(cost[i-1]))
{
cost[i]=a[i]+cost[i-2];
index[i]=1;
}
else
{
cost[i]=cost[i-1];
index[i-1]=1;
}
}
printf("%d",cost[6]);
printf("选中的硬币为：\n");
for(i=0;i<7;i++)
{
if(index[i]!=0) 
{
printf("C%d ",i);
}
}
return 0;
} 