#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
int no;
struct Node *next;
}node,*linklist;
void init_linklist(linklist *l)
{
*l=(linklist)malloc(sizeof(node));
(*l)->next=*l; 
}
void create(linklist l,int n)
{
int i;
node *r=l;
node *s;
l->no=1; 
for(i=2;i<=n;i++)
{
s=(node*)malloc(sizeof(node));
s->no=i;
s->next=l;
r->next=s;
r=s;
}
}
void  yuesefu(linklist l,int m)
{
node *p,*q;
node *s;
p=l;
q=p->next;
int i=0;
while(p->next!=p)//��Ϸ�������� 
{
while(i<m-2)
{
p=p->next;
q=p->next;
i++;
}
s=q;
printf("%d ",s->no);
p->next=q->next;
free(s);
//���ñ������
p=p->next;
q=p->next;
i=0; 
} 
printf("%d",p->no);
}
int main(int argc, char *argv[])
{ 
linklist l;
init_linklist(&l);
int n,m;
printf("������Ϸ����\n");
scanf("%d",&n);
printf("���뱨�����\n");
scanf("%d",&m);
printf("��ʼ������-----------\n");
create(l,n);
printf("����˳��\n");
yuesefu(l,m);
	return 0;
}