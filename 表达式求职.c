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
//�Ȱ�'#'ѹ�������ջ��
s_op.push('#');
//������ʽ���� end with '#'��
char str[100];
gets(str);
//ɨ���ַ������� 
for(int i=0;str[i]!='\0';i++)
{
if(str[i])









}







}
 
 
 
 
 
 
 
 }




	
return 0;
}