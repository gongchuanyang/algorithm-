#include<stdio.h> 
#include<iostream.h>
using namespace std; 
bool dfs(int i,int sum,int a[],int n,int k)
//搜索的深度完全取决于k;
//dfs搜索成功 return true;
{
if(i==n) return  sum==k;//用于递归退层； 
if(dfs(i+1,sum,a,n,k))
return true;    
if(dfs(i+1,sum+a[i],a,n,k))
return true;
return false;
} 
int main()
{
int k;
int a[4]={1,2,4,7};//序列是有序的 
printf("enter k:\n");
scanf("%d",&k);
if(dfs(0,0,a,4,k))//搜素成功返回true; 
{
printf("yes\n");
}
else
printf("no");
return 0;
} 