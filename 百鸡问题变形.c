#include<stdio.h>
int main()
{
int x,y,z;
int n;
while(scanf("%d",&n)!=EOF)
{
for(x=0;x<=100;x++)
{
for(y=0;y<=100-x;y++)
{
z=100-x-y;
if(3*5*x+3*3*y+z<=3*n)
{
printf("x=%d,y=%d,z=%d",x,y,z);
printf("\n");
}
}
}
} 
return 0;
}