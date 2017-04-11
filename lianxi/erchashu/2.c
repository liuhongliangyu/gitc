#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define OVERFLOW -2

typedef char TElemType;
typedef int Status;
typedef struct BiTNode{
  TElemType data;
  struct BiTNode * lchild, * rchild;
}BiTNode, * BiTree;

typedef BiTree QElemType;
//#include "LinkQueue.h"

void Visit(TElemType e){
  printf("%c", e);
}

void CtreateBiTree(BiTree T){
  TElemType ch;
  scanf("%c", &ch);
  if (ch == '#')
    T = NULL;
  else {
    T = (BiTree)malloc(sizeof(BiTNode));
    if (!T)
      exit(OVERFLOW);
    T->data = ch;
    printf("****\n");
    CtreateBiTree(T->lchild);
    printf("&&\n");
    CtreateBiTree(T->rchild);
  }
}

void PreOrderTraverse(BiTree T){
  if (T){
    printf("%c", (T->data));
    PreOrderTraverse(T->lchild);
    PreOrderTraverse(T->rchild);
  }
}

int main (void){
  BiTree T;
  printf("按先序顺序输入二叉树中结点的值，#代表空\n");
  CtreateBiTree(T);
  printf("先序遍历二叉树结果为：");
  PreOrderTraverse(T);
  return 0;
}
