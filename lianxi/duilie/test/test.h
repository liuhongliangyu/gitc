#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#define OK 1
int yes;
typedef struct node
{
  char data;
  struct node *next;
}node,*queueptr;
typedef struct
{
  queueptr front;
  queueptr rear;

}linkqueue;
void initqueue(linkqueue *q);
void enqueue(linkqueue *q,char e);
void creatqueue(linkqueue *q);
void destroyqueue(linkqueue *q);
void disqueue(linkqueue *q);
void lenqueue(linkqueue *q);
char dequeue(linkqueue *q,int e);
int queueempty(linkqueue *q);
void menu();
