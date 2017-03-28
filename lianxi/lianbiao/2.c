#include <stdio.h>
#include <stdlib.h>
void *malloc(size_t size);

typedef struct node
{
  int data;
  struct node * next;
}linknode, *linklist;

int main(void){
  struct node * head = NULL;
  head = malloc(sizeof(struct node));
  if (head == NULL)
  {}
  head->data = 10;
  head->next = NULL;
  printf("%d\n", head -> data);
  free(head);
  return 0;
}
