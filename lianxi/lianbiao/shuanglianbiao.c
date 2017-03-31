#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
  int id;
  struct node * prior, * next;
}Node;

/*typedef Node * DLinkList;
Books head;*/
Node * create(int val);
void show(Node * head);
int insert(Node * p, int val);
int insert1(Node * q, int val, int n);
int delete(Node * p, int val);
int updata(int val, int n);


int main(void){
  Node * head;
  head = create(0);
  insert(head, 1);
  insert(head, 2);
  insert(head, 3);
  insert(head, 4);
  insert(head, 5);
  insert(head, 7);
  insert1(head, 3, 6);
  delete(head, 4);
  updata(2, 8);
  show(head);
  return 0;
}

Node * create(int val){
  Node * p = NULL;
  p = malloc(sizeof(Node));
  if (p == NULL){
    printf("error!\n");
  }
  p->id = val;
  p->next = p;
  p->prior = p;
  return p;
}

void show(Node * head){
  Node * p = head->prior;
  while (p != head){
    printf("head->id = %d\n", p->id);
    p = p->prior;
  }
}

int insert(Node * head, int val){
  Node * p = NULL;
  p = malloc(sizeof(Node));
  if (p == NULL){
    printf("error!\n");
    return -1;
  }
  p->id = val;

  head->next->prior = p;
  p->next = head->next;
  p->prior = head;
  head->next = p;

  return 0;
}

int insert1(Node * q, int n, int val){
  Node *p = NULL;
  p = malloc(sizeof(Node));
  if (p == NULL){
    printf("error!\n");
    return -1;
  }

  p->id = val;
  p->next = NULL;
  p->prior = NULL;

  while (q->id != n){
    q = q->next;
  }

  q->next->prior = p;
  p->next = q->next;
  q->next = p;
  p->prior = q;

  return 0;
}

int delete(Node * p, int val){
  Node * q = NULL;
  q = malloc(sizeof(Node));
  if (q == NULL){
    printf("error!\n");
    return -1;
  }

  while (p->id != val){
    p = p->next;
  }

  p->next->prior = p->prior;
  p->prior->next = p->next;
  free (p);
  return 0;
}

int updata(int val, int n){
  Node * q = NULL;
  q = malloc(sizeof(Node));
  if (q == NULL){
    printf("error!\n");
    return -1;
  }
  while (q->id != val){
    q = q->next;
  }

  q->id = n;
  return 0;
}
