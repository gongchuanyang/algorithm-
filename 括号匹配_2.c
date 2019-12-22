#include <iostream>
using namespace std;
#include<string>

bool match(char a,char b) 
{
if(a=='('&&b==')')
return true;
else if(a=='['&&b==']')
return true;
else if(a=='{'&&b=='}')
return true;
else 
return false;
}

typedef struct STACK 
{
char a[20];
int top;
}stack;

void init_stack(stack *s)
{
s->top=-1;
}

void push(stack *s,char *e)
{
++s->top;
s->a[s->top]=*e;
}

void pop(stack *s)
{
--s->top;
}

char top(stack *s)
{
return s->a[s->top];
}

bool empty(stack *s)
{
return s->top==-1?true:false;
}

void kuohao(char *str)
{
int i;
stack s;
init_stack(&s);
for(i=0;str[i]!='\0';i++)
{
switch(str[i])
{
case '(':
case '[':
case '{':
push(&s,&str[i]);
break;
case ')':
case ']':
case '}':
if(empty(&s))
{
cout<<"�����Ŷ���"<<endl; 
return ;
}
else
{
if(match(top(&s),str[i]))
{
pop(&s);
break;
}
else
{
cout<<"�������Ų�ƥ��"<<endl;
return ; 
}
}

}
}
if(empty(&s))
{
cout<<"��������ƥ��"<<endl; 
}
else
{
cout<<"�����Ŷ���"<<endl; 
}
} 
int main(int argc, char *argv[])
{
char str[20];
while(gets(str))
{
kuohao(str);
}
	return 0;
}