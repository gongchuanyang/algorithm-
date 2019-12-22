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
//É¨Ãæ×Ö·û´®
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
printf("ÓÒÀ¨ºÅ¶àÓà\n");
flag=false;//Ìø³öÉ¨Ãè 
}
else //Õ»²»Îª¿Õ 
{
x=s.top();
if(match(x,str[i]))
{
s.pop();
break;
}
else 
{
printf("×óÓÒÀ¨ºÅ²»Æ¥Åä\n");
flag=false;
}
}
}

}
//×Ö·û´®É¨ÃèÍê 
if(s.empty())
{
printf("×óÓÒÀ¨ºÅÆ¥Åä\n");
} 
else 
{
printf("×óÀ¨ºÅ¶àÓà\n");
}
return 0;
}