#include<stdio.h>
int Day(int year,int Month,int single_day) 
//ƽ��2��28�죬�������29�� 
//�����ܱ�4���������ܱ�100���� �����ܱ�400���� 
{
	int i;
	int day=0;
int month[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};
if((year%4==0&&year%100!=0)||year%400==0)//�ж����� 
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
printf("���������գ�\n");
while(scanf("%d%d%d",&year,&month,&day)!=EOF)
{
printf("���ǵ�%d��\n",Day(year,month,day));
printf("���������գ�\n");	
}	
return 0;
} 