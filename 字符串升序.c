#include <stdio.h>
#include <stdlib.h>
int cmp_1(const void *a,const void *b)
{
return    (*(char*)b-*(char*)a);//esc
}
int main(int argc, char *argv[])
{
char str[]={'l','v','e','r'};
int len=sizeof(str)/sizeof(char);
qsort(str,len,sizeof(str[0]),cmp_1);
for(int i=0;i<len;i++)
printf("%c",str[i]);
	return 0;
}