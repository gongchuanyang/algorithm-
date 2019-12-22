#include <stdio.h>
#include <stdlib.h>
int cmp_1(const void *a,const void *b)//跟参数的排列顺序有关
{	
return 	(*(int*)a-*(int*)b);//desc
}
int main(int argc, char *argv[])
{
int buf[100];
int n;
int i;
while(scanf("%d",&n)!=EOF)
{
for(i=0;i<n;i++) 
{
scanf("%d",&buf[i]);
}
qsort(buf,n,sizeof(buf[0]),cmp_1);
for(i=0;i<n;i++) 
{
printf("%d ",buf[i]);
}
}
	return 0;
}