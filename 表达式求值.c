#include <iostream>
using namespace std;
#include <stack>
#include <string>
char op_pre[5][5]={
{'>','>','<','<','>'},
{'>','>','<','<','>'},
{'>','>','>','>','>'},
{'>','>','>','>','>'},
{'<','<','<','<','='}
};
bool is_opsign(char ch)
{
if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='#')
return true;
else 
return false;
}
int op_locate(char ch)
{
int index;
switch(ch)
{
case '+': index=0;break;
case '-': index=1;break;
case '*': index=2;break;
case '/': index=3;break;
case '#': index=4;break; 
}
}

char op_cmp(char ch_1,char ch_2)
{
char op_sign;
int index_1,index_2;
index_1=op_locate(ch_1);
index_2=op_locate(ch_2);
op_sign=op_pre[index_1][index_2];
return op_sign;
}

float cal(float a,char op,float b) 
{
float result;
switch(op)
{
case '+':result=a+b;break;
case '-':result=a-b;break;
case '*':result=a*b;break;
case '/':result=a/b;break;
}
return result;
}
//表达式求值
void express_value(char *str)
{
int i=0;
char tmp;
stack<char>oper;
stack<float>data;
oper.push('#');
while(oper.top()!='#'||str[i]!='#') 
{
//op_num	
if(!is_opsign(str[i]))
{
data.push(str[i++]);
}
//op_sign
if(is_opsign(str[i]))
{
switch(op_cmp(str[i],oper.top()))
{
case '>':oper.push(str[i++]);break;
case '<': 
float num_1=data.top()-'0';
data.pop();
float num_2=data.top()-'0';
data.pop();
char op=oper.top();
oper.pop();
data.push(cal(num_1,op,num_2));
i++;
break;
case '=':return;
}
}

}
printf("%f\n",data.top());
}

int main(int argc, char *argv[])
{
char str[20];
while((scanf("%s",str))!=EOF)//end of '#'
{
express_value(str);
}	
	return 0;
}