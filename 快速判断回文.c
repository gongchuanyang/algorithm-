#include <stdio.h>
int  is_huiwen(char *str)
{
int i=0,j=0;
while(str[j]!='\0')j++;
for(j--;i<j&&(str[i]==str[j]);i++,j--);
return i>=j; 
}
int main(int argc, char *argv[])
{
char str[10];
while(gets(str))
{
if(is_huiwen(str))
{
printf("yes\n");
}	
else
printf("no\n");	
}
	return 0;
}