#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student
{
char name[101];
int age;
int score;
}s; 
int cmp_1(const void *a,const void *b)
{
s *m=(s*)a;
s *n=(s*)b;  
if(m->score!=n->score)  
{
return (n->score)-(m->score) ;//逆序 
}  
else
{
	
if(strcmp(m->name,n->name))//不相等返回真 
{
return strcmp(m->name,n->name);
}   
else 
{
return (m->age)-(n->age);
}  
  
}
}
int main(int argc, char *argv[])
{
	s info[20];
    int i;
	int n;
	while(scanf("%d",&n)!=EOF)
	{
	for(i=0;i<n;i++)
	{
	scanf("%s%d%d",info[i].name,&info[i].age,&info[i].score);
	}
	qsort(info,n,sizeof(info[0]),cmp_1);
		for(i=0;i<n;i++)
	{
	printf("%s%d %d\n",info[i].name,info[i].age,info[i].score);
	}
	}
	return 0;
}