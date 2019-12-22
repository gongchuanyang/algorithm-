
#include<stdio.h>
int bin_search(int a[],int low,int high,int x)
{
int mid;
if(low>high) //递归结束条件
return -1;
else
{
mid=(low+high)/2;
if(a[mid]==x) 
{
return mid;
}
else if(a[mid]<x)
{
bin_search(a,mid+1,high,x);
}
else
{
bin_search(a,low,mid-1,x);
}
}
}
int main()
{
int a[]={2,4,6,7,8,9,10,11,13};
int len =sizeof(a)/sizeof(int);
int x;
while(scanf("%d",&x)!=EOF) //连续读入数据
{
int addr=bin_search(a,0,len,x);
if(addr!=-1)
{
printf("%d is located %d",x,addr);
}
}
return 0;
}
