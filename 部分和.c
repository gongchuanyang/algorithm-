#include<iostream>
using namespace std;
bool dfs(int i,int sum,int *a,int n,int k)
{
if(i==n)return sum==k;
if(dfs(i+1,sum,a,n,k))
return true;
if(dfs(i+1,sum+a[i],a,n,k))
return true;
return false; 
}
void solve(int i,int sum,int *a,int n,int k)
{
if(dfs(0,0,a,n,k))
cout<<"yes"<<endl;
else cout<<"no"<<endl;
}
int main()
{
int a[4]={1,2,4,5};
int n=4;
int k=13;
solve(0,0,a,n,k);
return 0;
} 