#include <stdio.h>
int main(int argc, char *argv[])
{
    int a[10][10];
	int i,j,k;
	int row,col;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	{
	scanf("%d",&a[row][col]);
	}
	int flag;
   for(i=0;i<row;i++)
	{
	int max=a[i][0];	
	int n;
	int m;
	for(j=0;j<col;j++)
	{
	if(a[i][j]>max)
	{
	max=a[i][j];
	m=i;
	n=j;
	}	
	}
	
	flag=1;//假设是鞍点 
	for(k=0;k<row;k++)
	{
    if(a[k][n]<max)
    {
    flag=0;
    break;
    }	
	}
	
	if(flag==1)
	{ 
    printf("%d,%d,%d",m+1,n+1,max);
    break;
	} 
	}
	if(!flag)
	{
	printf("鞍点不存在\n");
	}
	return 0;
}