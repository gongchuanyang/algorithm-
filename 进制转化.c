#include <iostream>
using namespace std;
#include<string.h>
int main(int argc, char *argv[])
{
int a,b;
char buf[20];//�ַ����� 
while(scanf("%d%s%d",&a,buf,&b)!=EOF)//%s���������ַ��� 
{
int len=strlen(buf);
int c;
int w=1;
int temp=0; //����ʮ������ 
//�ӵ�λ����
int i;
//ת��Ϊʮ������ 
for(i=len-1;i>=0;i--)
{
//�����ַ� 
if(buf[i]>='0'&&buf[i]<='9')
{
c=buf[i]-'0';
}
//Сд��ĸ
if(buf[i]>='a'&&buf[i]<='z')
{
c=buf[i]-'a'+10;
}
//��д��ĸ
if(buf[i]>='A'&&buf[i]<='Z')
{
c=buf[i]-'A'+10;
}
temp=temp+c*w; 
w=a*w;
} 
//ʮ����ת��Ϊb����
int a[20];
int size=0;
while(temp!=0)
{
a[size++]=temp%b;
temp=temp/b;
}
for(int i=size-1;i>=0;i--)
{
printf("%d",a[i]);
}
}		
	return 0;
}