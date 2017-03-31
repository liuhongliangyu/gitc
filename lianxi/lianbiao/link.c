#include <stdio.h>
#include <stdlib.h>

typedef struct Books{
  struct Books *prior;
  struct Books *next;
  int book_id;
}Books;

Books* create(int val);
void show(Books*head);
int insert(Books * h, int val);

int main(){
  Books * head;
  head = create(0);
  show(head);
  insert(head,1);
  insert(head,2);
  insert(head,3);
  insert(head,4);
  insert(head,5);
  show(head);

  return 0;
}

Books* create(int val){
  Books * p = NULL;
  p = malloc(sizeof(Books));
  if (p == NULL){
    printf("error !");
  }
  p->book_id = val;
  p->next = p;
  p->prior = p;

  return p;
}

void show(Books *head){
  Books * p = head->prior;
  while(p != head){
    printf("head->data = %d\n", p->book_id);
    p = p->prior;
  }
}


int insert(Books * h, int val){
  Books * p = NULL;
  p = malloc(sizeof(struct Books));
  if (p == NULL){
    printf("error !");
    return -1;
  }

  p->book_id = val;

  h->next->prior = p;
  p->next = h->next;
  p->prior = h;
  h->next = p;

  return 0;
}
