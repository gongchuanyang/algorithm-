//Ӳ����������
#define INF 32768
#include<stdio.h>
//f[i]��ʾ����iԪ��Ҫ����Ӳ������
//f[i-dj] ,dj��ʾĳ����ֵ��Ӳ�� 
//��Ҫ��¼��̬�滮�е�f[i-1]��Ϊ����f[i]��׼���� 
//f[0]=0;
//�����ģ 
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
int d[4]={0,1,3,4};//����Ӳ�ҵ���ֵ 
printf("������Ҫ�����Ǯ��:\n");
scanf("%d",&m);
int f[10];
f[0]=0;
for(i=1;i<=m;i++)//����iԪ 
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
printf("����%dԪ��Ҫ%d��Ӳ��\n",m,f[m]);
return 0; 
} 

 