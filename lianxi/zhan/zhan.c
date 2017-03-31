#include <stdio.h>
#include <stdlib.h>

typedef struct Node{            //创建一个结点结构
  int data;                     //定义一个int型变量
  struct Node * pNext;          //定义pNext指针
}NODE, * PNODE;                 //将结点结构struct Node，再命名为NODE，将struct Node * 再命名为 * PNODE,方便操作。

typedef struct Stack{
  PNODE pTop;
  PNODE pBottom;
}STACK, * PSTACK;

void init (PSTACK pS);
void traverse(PSTACK pS);
void push (PSTACK pS, int val);
int empty(PSTACK pS);
int pop(PSTACK pS, int * val);
void clear(PSTACK pS);

int main (void){
  STACK S;
  int val;
  int i;

  init(&S);

  push(&S, 1);
  push(&S, 2);
  push(&S, 3);
  push(&S, 4);
  push(&S, 5);

  traverse(&S);

  if (pop(&S, &val) == 1){
    printf("遍历成功，出栈元素为%d\n", val);
  }
  else {
    printf("出栈失败！\n");
  }

  traverse(&S);
  clear(&S);
  traverse(&S);

  return 0;
}
//栈的初始化
void init(PSTACK pS){
  pS->pTop = (PNODE)malloc(sizeof(NODE));
  if (NULL == pS->pTop){
    printf("动态内存分配失败！\n");
    exit(-1);
  }
  else {
    pS->pBottom = pS->pTop;
    pS->pTop->pNext = NULL;
  }
  return;
}
//遍历栈S
void traverse(PSTACK pS){
  PNODE p = pS->pTop;
  printf("栈内元素：");
  while (p != pS->pBottom){
    printf("%d\t", p->data);
    p = p->pNext;
  }
  printf("\n");
  return;
}
//插入元素
void push(PSTACK pS, int val){
  PNODE pNew = (PNODE)malloc(sizeof(NODE));

  pNew->data = val;
  pNew->pNext = pS->pTop;
  pS->pTop = pNew;

  return;
}
//判断栈是否为空
int empty(PSTACK pS){
  if (pS->pTop == pS->pBottom){
    return 1;
  }
  else {
    return 0;
  }
}
//删除栈顶元素并将其值赋给*val
int pop(PSTACK pS, int *val){
  if (empty(pS) == 1){
    return 0;
  }
  else {
    PNODE r = pS->pTop;
    *val = r->data;
    pS->pTop = r->pNext;
    free (r);
    r = NULL;
    return 1;
  }
}

//清空栈
void clear(PSTACK pS){
  if (empty(pS) == 1){
    return;
  }
  else {
    PNODE p = pS->pTop;
    PNODE q = NULL;
    while (p != pS->pBottom){
      q = p->pNext;
      free (p);
      p = q;
    }
    pS->pTop = pS->pBottom;
    return;
  }
}
