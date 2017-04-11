#include<stdio.h>
#include<stdlib.h>
//#include<process.h>

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define OVERFLOW -2

typedef char TElemType;
typedef int Status;

typedef struct BiTNode {
  TElemType data;
  struct BiTNode *lchild,*rchild; // 左右孩子指针
}BiTNode,*BiTree;
typedef BiTree QElemType;
//#include"LinkQueue.h"

void Visit(TElemType e) {
  printf("%c",e);
}

void CreateBiTree(BiTree T) {
  TElemType ch;
  scanf("%c",&ch);
  if(ch=='#') // 空
    T=NULL;
  else {
    T=(BiTree)malloc(sizeof(BiTNode)); // 生成根结点
    if(!T)
    exit(OVERFLOW);
    T->data=ch;
    printf("^^^^\n");
    CreateBiTree(T->lchild); // 构造左子树
    printf("***\n");
    CreateBiTree(T->rchild); // 构造右子树
  }
}

void PreOrderTraverse(BiTree T ) {
  if(T) {
    printf("%c", (T->data));
    PreOrderTraverse(T->lchild );
    PreOrderTraverse(T->rchild);
  }
}

void InOrderTraverse(BiTree T) {
  if(T) {
    InOrderTraverse(T->lchild);
    printf("%c",(T->data)); //再访问根结点
    InOrderTraverse(T->rchild);
  }
}

void PostOrderTraverse(BiTree T) {
  if(T) {
    PostOrderTraverse(T->lchild); // 先后序遍历左子树
    PostOrderTraverse(T->rchild); // 最后后序遍历右子树
    printf("%c",(T->data)); // 再访问根结点
  }
}
/*void LevelOrderTraverse(BiTree T,void(*Visit)(TElemType))
{ // 初始条件：二叉树T存在，Visit是对结点操作的应用函数
// 操作结果：层序递归遍历T(利用队列)，对每个结点调用函数Visit一次且仅一次
  LinkQueue q;
  QElemType a;
  if(T) {
    InitQueue(q); // 初始化队列q
    EnQueue(q,T); // 根指针入队
    while(!QueueEmpty(q)) // 队列不空
    {
      DeQueue(q,a);
      Visit(a->data);
      if(a->lchild!=NULL)
      EnQueue(q,a->lchild);
      if(a->rchild!=NULL)
      EnQueue(q,a->rchild);
    }
    printf("\n");
  }
}*/
void main() {
  BiTree T;
  printf("按先序顺序输入二叉树中结点的值，#代表空\n");
  CreateBiTree(T);
  printf("先序遍历二叉树结果为：");
  PreOrderTraverse(T);
  printf("\n中序遍历二叉树的结果为：");
  InOrderTraverse(T);
  printf("\n后序遍历二叉树的结果为：");
  PostOrderTraverse(T);
  printf("\n层次遍历二叉树的结果为：");
  //LevelOrderTraverse(T,Visit);
}
