#include<stdio.h>
void print()
{
char a;
scanf("%c",&a);
if(a!='#') 
print();
if(a!='#')
printf("%c",a);
}
int main()
{
printf("enter a string ends #:");
print();
return 0;
}