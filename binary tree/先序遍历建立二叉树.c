
//先序读入二叉树结点 
#include <iostream>
using namespace std;
typedef struct node
{
char data;
struct node *lchild;
struct node *rchild;
}node,*bitree;

void preorder_create(bitree *bt)
{
char ch ;
ch=getchar();
if (ch=='.')
*bt=NULL;
else{
//(*bt)=(bitree)malloc(sizeof(node));	
*bt=new node;	
(*bt)->data=ch;
preorder_create(&((*bt)->lchild));
preorder_create(&((*bt)->rchild));
}
}
void preorder(bitree bt)//前序遍历 
{
if(bt!=NULL)
{
cout<<bt->data<<endl;
preorder(bt->lchild);
preorder(bt->rchild);
}		
}
void inorder(bitree bt)//中序遍历 
{
if(bt!=NULL)
{
inorder(bt->lchild);
cout<<bt->data<<endl;
inorder(bt->rchild);
}		
}

void postorder(bitree bt)//后序遍历 
{
if(bt!=NULL)
{
postorder(bt->lchild);
postorder(bt->rchild);
cout<<bt->data<<endl;
}		
}

int main()
{
bitree bt=NULL;
preorder_create(&bt);
inorder(bt);//中序遍历 
return 0; 
} 
