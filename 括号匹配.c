#include <iostream>
#include <stack>
#inclue <string.h> 
using namespace std;
// [{()} or [{}]) or[{) or[ or } 
bool match(char x,char y)
{
if(x=='('&& y==')')
return true;
else if(x=='['&&y==']')
return true;
else if(x=='{'&&y=='}')
return true;
else 
{
return false;
}
}
int main(int argc, char *argv[])
{
int i;
stack<char>s;
char x;
char str[20];
while(scanf("%s",str)!=EOF)
{
//ɨ���ַ���
int len=strlen(str);
bool flag=true; 
for(i=0;i<len&&flag;i++)
{
	
switch(str[i])
{
case '(':
case '[':
case '{':
s.push(str[i]);
break;
case ')':
case ']':
case '}':
if(s.empty())
{
printf("�����Ŷ���\n");
flag=false;//����ɨ�� 
}
else //ջ��Ϊ�� 
{
x=s.top();
if(match(x,str[i]))
{
s.pop();
break;
}
else 
{
printf("�������Ų�ƥ��\n");
flag=false;
}
}
}

}
//�ַ���ɨ���� 
if(s.empty())
{
printf("��������ƥ��\n");
} 
else 
{
printf("�����Ŷ���\n");
}
return 0;
}