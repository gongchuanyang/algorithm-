#include<stdio.h>
#include<string.h> 
 typedef struct stack
 {
 char  a[10];
 int top;
 }Seqstack; 
void init(Seqstack *s)
{
s->top=-1;
}
void in_stack(Seqstack *s,char x)
{
s->top++;
s->a[s->top]=x;
}
void out_stack(Seqstack *s,char *e)
{
*e=s->a[s->top];
s->top--;
}
int main()
{
char x;
Seqstack s;
init(&s);
char huiwen[6]="xyzyx";
int len=strlen(huiwen);
int mid=len/2-1;
//将字符串前半部分压入栈中；
//0~mid
for(int i=0;i<=mid;i++)
{
in_stack(&s,huiwen[i]);
}
int compare_start;
if(len%2==0) 
compare_start=mid+1;
else
compare_start=mid+2;
for(int j=compare_start;j<=len-1;j++)
{
out_stack(&s,&x);
if(x==huiwen[j])
continue;
else
{
printf("不是回文字符串\n");
break;
}
}
	
return 0;
}