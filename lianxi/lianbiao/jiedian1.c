#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Books{
  struct Books * next;
  int book_id;
}node;

int insert(struct Books * head, int val);
void show(struct Books * head);

int main(void){
  struct Books head;
  struct Books *p2;
  int val;

  p2 = &head;
  head.book_id = 100;
  head.next = NULL;
  insert(&head, 101);
  insert(&head, 102);
  insert(&head, 103);
  insert(&head, 104);
  insert(&head, 105);
  insert(&head, 106);

  show(&head);
  return 0;
}

int insert(struct Books * p1, int val){
  struct Books * p = NULL;

  p = malloc(sizeof(struct Books));
  if (p == NULL){
    printf("error for malloc!\n");
    return -1;
  }

  p->book_id = val;
  p->next = NULL;

  while((p1->next) != NULL){
    p1 = p1->next;
  }

  p1->next = p;
  return 0;
}

void show(struct Books * head){
  while (head != NULL){
    printf("head->id = %d\n", head->book_id);
    head = head->next;
  }
}
