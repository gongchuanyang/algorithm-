#include<stdio.h>
//Ͱ���� 
int main()
{
int i;
int x;
int a[11];
for(i=0;i<=10;i++)
a[i]=0;
for(i=1;i<=5;i++)
{
scanf("%d",&x);//��x��ʾ���� 
a[x]++; 
}
for(i=10;i>=0;i--)
{
if(a[i]!=0)
{
for(int j=1;j<=a[i];j++)
printf("%d",i);//i��ʾ���� 
} 
}
return 0; 
} 