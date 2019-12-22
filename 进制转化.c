#include <iostream>
using namespace std;
#include<string.h>
int main(int argc, char *argv[])
{
int a,b;
char buf[20];//字符数组 
while(scanf("%d%s%d",&a,buf,&b)!=EOF)//%s用于输入字符串 
{
int len=strlen(buf);
int c;
int w=1;
int temp=0; //保存十进制数 
//从低位处理
int i;
//转换为十进制数 
for(i=len-1;i>=0;i--)
{
//数字字符 
if(buf[i]>='0'&&buf[i]<='9')
{
c=buf[i]-'0';
}
//小写字母
if(buf[i]>='a'&&buf[i]<='z')
{
c=buf[i]-'a'+10;
}
//大写字母
if(buf[i]>='A'&&buf[i]<='Z')
{
c=buf[i]-'A'+10;
}
temp=temp+c*w; 
w=a*w;
} 
//十进制转化为b进制
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