#include<stdio.h> 
#include<iostream.h>
using namespace std; 
bool dfs(int i,int sum,int a[],int n,int k)
//�����������ȫȡ����k;
//dfs�����ɹ� return true;
{
if(i==n) return  sum==k;//���ڵݹ��˲㣻 
if(dfs(i+1,sum,a,n,k))
return true;    
if(dfs(i+1,sum+a[i],a,n,k))
return true;
return false;
} 
int main()
{
int k;
int a[4]={1,2,4,7};//����������� 
printf("enter k:\n");
scanf("%d",&k);
if(dfs(0,0,a,4,k))//���سɹ�����true; 
{
printf("yes\n");
}
else
printf("no");
return 0;
} 