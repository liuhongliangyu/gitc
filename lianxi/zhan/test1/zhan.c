#include <stdlib.h>
#include <stdio.h>
#include "zhan.h"

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

void traverse(PSTACK pS){
  PNODE p = pS->pTop;
  printf("栈内元素为：");

  while (p != pS->pBottom){
    printf("%d\t", p->data);
    p = p->pNext;
  }
  printf("\n");
  return;
}

void push(PSTACK pS, int val){
  PNODE pNew = (PNODE)malloc(sizeof(NODE));

  pNew->data = val;
  pNew->pNext = pS->pTop;
  pS->pTop = pNew;
  return;
}

int empty(PSTACK pS){
  if (pS->pTop== pS->pBottom){
    return 1;
  }
  else {
    return 0;
  }
}

int pop(PSTACK pS, int * val){
  if (empty(pS) == 1){
    return 0;
  }
  else {
    PNODE r = pS->pTop;
    *val = r->data;
    pS->pTop = r->pNext;
    free(r);
    r = NULL;
    return 1;
  }
}

void clear(PSTACK pS){
  if (empty(pS) == 1){
    return;
  }
  else {
    PNODE p = pS->pTop;
    PNODE q = NULL;
    while (p != pS->pBottom){
      q = p->pNext;
      free(p);
      p = q;
    }
    pS->pTop = pS->pBottom;

    return;
  }
}
