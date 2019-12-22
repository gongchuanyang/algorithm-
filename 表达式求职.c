#include<iostream>
using namespace std;
#include<stack> 
bool is_op(char c)
{
if(c=='+')
return true;

else if(c=='-')
return true;

else if(c=='*')
return true;

else if (c=='\')
return  true;

else if(c=='#')
return true;

else 
return false;

}


int main()
{
stack<int>s_data;
stack<char>s_op;
//先把'#'压入操作符栈中
s_op.push('#');
//读入表达式序列 end with '#'；
char str[100];
gets(str);
//扫面字符串序列 
for(int i=0;str[i]!='\0';i++)
{
if(str[i])









}







}
 
 
 
 
 
 
 
 }




	
return 0;
}