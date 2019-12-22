#include <iostream>
#include <vector>
using namespace std;
typedef struct node
{
char data;
struct node *lchild;
struct node *rchild;
}node,*bitree;
int leaf_count=0; //叶子个数设为全局变量 
vector<char>V_leaf;

void preorder_create(bitree *bt)//先序读入二叉树结点  测试数据  AB.DF..G..C.E.H.. 
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

//先序遍历求二叉树叶子个数
void  preorder_leaf(bitree bt)
{
if(bt!=NULL)
{
if(bt->lchild==NULL && bt->rchild==NULL )
{
V_leaf.push_back(bt->data);
leaf_count++;
}
preorder_leaf(bt->lchild);
preorder_leaf(bt->rchild);
}
}

//后序遍历求二叉树叶子个数
void  postorder_leaf(bitree bt)
{
if(bt!=NULL)
{
postorder_leaf(bt->lchild);
postorder_leaf(bt->rchild);
if(bt->lchild==NULL && bt->rchild==NULL )
{
V_leaf.push_back(bt->data);
leaf_count++;
}
}
}
//main function
int main()
{
bitree bt=NULL;
preorder_create(&bt);
//preorder_leaf(bt);
postorder_leaf(bt);
cout<<"叶子结点个数:"<<leaf_count<<endl;
cout<<"叶子结点为:"<<endl;
for(vector<char>::iterator it=V_leaf.begin();it!=V_leaf.end();it++)
cout<<*it<<endl;
return 0; 
} 
