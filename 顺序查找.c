#include<stdio.h>
typedef struct student
{
int id;
char name[10];
float score;
}Student;
int search(Student s[],int n,int key)
{
for(int i=0;i<n;i++)
{
if(s[i].id==key)
return i;
}
return -1;
}
int main()
{
int id;
Student s[4]={
{1004,"TOM",100},
{1002,"LILY",95},
{1001,"ANN",93},
{1003,"LUCY",98}
};
printf("输入要查找的id:\n");
while(scanf("%d",&id)!=EOF)
{
int addr=search(s,4,id);
if(addr!=-1)
{
printf("%d%s%f",s[addr].id,s[addr].name,s[addr].score);
}
printf("\n");
printf("输入要查找的id:\n");
}
return 0;
}