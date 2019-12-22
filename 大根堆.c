#include<stdio.h>
//heap_sort
void sift(int r[],int k,int m)
{
int x=r[k];//保存根记录； 
int i,j;
i=k;
j=2*i;
bool change=true;
while(j<=m&&change)
{
if(j<m&&r[j]<r[j+1])
j=j+1;
if(x>=r[j])change=false;
else 
{
r[i]=r[j];
i=j;
j=2*i;
}
} 
r[i]=x;
}

int main()
{
int i;
int a[9]={0,49,38,65,97,76,13,27,49};
for(i=4;i>=1;i--)
sift(a,i,8);//初始大根堆
for(i=8;i>=2;i--) 
{
int temp=a[1];
a[1]=a[i];
a[i]=temp;//元素少一个； 
sift(a,1,i-1); 
}
for(i=1;i<=8;i++)
printf("%d\n",a[i]);
return 0;
} 