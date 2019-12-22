#include<stdio.h>
int main()
{
int x,y,z;
for(x=0;x<=20;x++) 
{
for(y=0;y<=33;y++)
{
z=100-x-y;
if((z%3==0)&&(3*5*x+3*3*y+z==300))
{
printf("x=%d,y=%d,z=%d",x,y,z);
printf("\n");
} 
}
}
return 0;
}
