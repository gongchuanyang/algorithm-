//硬币最少问题
#define INF 32768
#include<stdio.h>
//f[i]表示找零i元需要最少硬币数；
//f[i-dj] ,dj表示某种面值的硬币 
//需要记录动态规划中的f[i-1]，为计算f[i]做准备； 
//f[0]=0;
//输入规模 
int min(int a,int b)
{
if(a>b)
return a;
else
return b;
}
int main()
{
int i,j;
int m;
int d[4]={0,1,3,4};//储存硬币的面值 
printf("输入需要找零的钱数:\n");
scanf("%d",&m);
int f[10];
f[0]=0;
for(i=1;i<=m;i++)//找零i元 
{
int temp=INF;
j=1;
while(j<=3&&i>=d[j]) 
{
temp=min(temp,f[i-d[j]]);
j++;
}
f[i]=temp+1;
}
printf("找零%d元需要%d个硬币\n",m,f[m]);
return 0; 
} 

 