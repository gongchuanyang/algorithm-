#include<stdio.h>
int Day(int year,int Month,int single_day) 
//平年2月28天，闰年二月29天 
//闰年能被4整除但不能被100整除 或者能被400整除 
{
	int i;
	int day=0;
int month[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};
if((year%4==0&&year%100!=0)||year%400==0)//判断闰年 
{
month[2]=29;
}
else
month[2]=28;
for(i=1;i<Month;i++) 
day+=month[i];
day+=single_day;
return day;
} 
int main()
{
int year,month,day;
printf("输入年月日：\n");
while(scanf("%d%d%d",&year,&month,&day)!=EOF)
{
printf("这是第%d天\n",Day(year,month,day));
printf("输入年月日：\n");	
}	
return 0;
} 