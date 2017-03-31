#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct Node{
  int data;
  struct Node * next;
}NODE, *PNODE;

typedef struct {
  PNODE head;
  PNODE tail;
}Queue;

void init(Queue * q){
  q->head = q->tail = (PNODE)malloc(sizeof(NODE));
  if (!(q->head))
  exit(1);
  q->head->next = NULL;
  return;
}
/*void create(Queue *q){
  int i, length,num;
  PNODE p;
  printf("输入队列长度：");
  scanf ("%d", &length);
  printf("输入队列元素：");
  for (i = 0; i < length; i++){
    p = (PNODE)malloc(sizeof(NODE));
    if (!p)
      exit(1);
    scanf("%d", &num);

    p->data = num;
    p->next = 0;
    printf("*****\n");
    q->tail->next = p;
    printf("&&&&&\n");
    q->tail = p;
  }
}*/

void insert(Queue * q, int val){
  PNODE p;
  p = (PNODE)malloc(sizeof(NODE));
  printf("00000\n");
  if (!p){
    printf("______\n");
    exit(1);
  }
  printf("++++\n");
  p->data = val;
  p->next = NULL;
  printf("00000\n");
  q->tail->next = p;
  printf("1111\n");
  q->tail = p;
}

void show(Queue * q){
  PNODE p;
  p = q->head->next;
  while(p != NULL){
    printf("%d\t", p->data);
    p = p->next;
  }
}

int main (void){
  Queue s;
  int i,t, val;
  //create(&s);
  /*printf("输入队列长度：");
  scanf("%d", &t);
  printf("输入元素：");
  for (i = 1; i < t + 1; i++){
    scanf("%d", &val);
    printf("+++++\n");
    insert(&s, val);
  }*/
  insert(&s, 4);
  show(&s);
  return 0;
}
