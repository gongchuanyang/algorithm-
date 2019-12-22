#include <stdio.h>
int main(int argc, char *argv[])
{
int hash[100001]={0};
int offset=50000;
int n,m;//-5 to 5
int i;
int x;
while(scanf("%d%d",&n,&m)!=EOF)
{
for(i=1;i<=n;i++)
{
scanf("%d",&x);//x=-5;
hash[x+offset]=1;//对应x的值 
}
for(i=100000;i>=0;i--) 
{
if(hash[i]==1&&m!=0)
{
printf("%d",i-offset);
printf(" ");
m--;
}
if(m==0)
{
printf("\n");
break;
}
} 
}
	return 0;
}