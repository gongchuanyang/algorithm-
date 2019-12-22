#include<stdio.h>
#include<iostream.h>
using namespace std;
#define maxsize 10
typedef struct queue
{
int que[maxsize];
int front;
int rear;
}Queue; 

bool is_full(Queue *q)
{
if((q->rear+1)%maxsize==q->front )
return true;
else
{
return false;
}
}

bool is_empty(Queue *q)
{
if(q->front==q->rear)
return true;
else
return false;
}
void init_queue(Queue *q)
{
q->front=0;
q->rear=q->front;
}
void in_queue(Queue *q ,int x)
{
if(!is_full(q))
//入队 
{
q->que[q->rear]=x;
q->rear=(q->rear+1)%maxsize;
}
else
{
printf("队列已满\n");
}
}
void  out_queue(Queue *q ,int *e)
{
if(!is_empty(q))
{
//出队
*e=q->que[q->front]; 
q->front=(q->front+1)%maxsize;
}
else
{
printf("队列已空\n");
}
}
int main()
{
int x;
Queue q;
init_queue(&q);
cout<<"入队:"<<endl;
while(scanf("%d",&x)!=EOF)
{
in_queue(&q,x);
}
out_queue(&q,&x);
cout<<x<<endl;
out_queue(&q,&x);
cout<<x<<endl; 
out_queue(&q,&x);
cout<<x<<endl;
return 0;
}