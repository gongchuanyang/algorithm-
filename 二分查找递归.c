
#include<stdio.h>
int bin_search(int a[],int low,int high,int x)
{
low=0,high=8;
int mid;
if(low>high)
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
int a[9]={2,4,6,7,8,9,10,11,13};
int x;
while(scanf("%d",&x)!=EOF)
{
int addr=bin_search(a,0,9,x);
if(addr!=-1)
{
printf("%d is located %d",x,addr);
}
}
return 0;
}