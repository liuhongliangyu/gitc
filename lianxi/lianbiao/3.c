#include <stdio.h>
#include <stdlib.h>
void *malloc(size_t size);

typedef struct node{
  int data;
  struct node *next;
}linknode, *linklist;

int main (void){
  struct node *head = NULL;
  head = malloc(sizeof(struct node));
  struct node *one = NULL;
  one = malloc(sizeof(struct node));
  if (head == NULL || one == NULL){
    printf("ERROR\n");
  }
  head->data = 10;
  head->next = NULL;
  one->data = 20;
  head->next = NULL;
  printf ("%d\n",head->data);
  printf("%d\n", one->data);
  free(head);
  return 0;
}
