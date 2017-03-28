#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Books{
  struct Books * next;
  int book_id;
}node;

int insert(struct Books * head, int val);
void show(struct Books * head);
void show1(struct Books * head);
int delete(struct Books * head, int val);
int insert1(struct Books * p1, int val, int n);

int main(void){
  struct Books head;
  struct Books *p2;
  int val, i, n;

  p2 = &head;
  head.book_id = 100;
  head.next = NULL;
  insert(&head, 101);
  insert(&head, 102);
  insert(&head, 103);
  insert(&head, 108);
  insert(&head, 104);
  insert(&head, 105);
  insert(&head, 106);
  insert(&head, 444);
  insert(&head, 106);
  insert1(&head, 103, 555);
  //delete(&head, val);
  show(&head);
  show1(&head);
  /*
  printf("1.insert 2.delete 3.show\n");
  scanf("%d", &i);
  switch (i){
    case 1: insert(&head, 555);show(&head);break;
    case 2: delete(&head, val);show(&head);break;
    case 3: show(&head);break;
  }*/
  /*printf("输入要插入节点的位置： ");//插入数据，但不会长留，在执行./a.out，数据会丢失。
  scanf("%d",&val);
  printf("输入要插入的节点的值： ");
  scanf("%d", &n);
  insert1(&head, val, n);
  show(&head);*/
  /*printf("请输入要删除的结点的值：\n");//删除语句。
  scanf ("%d",&val);
  printf("删除结点前：\n");
  show(&head);
  delete(&head, val);
  printf("删除结点后：\n");
  show(&head);*/
  return 0;
}

int insert1(struct Books * p1, int val, int n){
  struct Books * p = NULL;
  p = malloc(sizeof(struct Books));
  if (p == NULL){
    printf("error for malloc!\n");
    return -1;
  }
  p->book_id = n;
  p->next = NULL;
  while (p1->book_id != val){
    p1 = p1->next;
  }
  p->next = p1->next;
  p1->next = p;

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

int delete(struct Books * elem, int val){//定义两个参数，要删除的节点，和他的值。
  struct Books *temp = NULL;//定义一个移动节点。
  struct Books * head;//头节点

  /*if (elem->book_id == val){//删除头节点。
    head = elem->next;
    free(elem);
    return 0;
  }*/

    while (elem != NULL && elem->book_id != val){//循环法找到要删除的节点的值。
      temp = elem;//移动节点寻找要删除的节点。
      elem = elem->next;//节点指向下一个节点。
      if (NULL == elem){
        printf ("\n----------未找到要删除的结点------------\n\n");
        return -1;
      }
      else if (elem->book_id == val){//发现要删除节点的值
        temp->next = elem->next;//将要删除节点的next中存的地址（即下一个节点的地址），存放到上一个节点的next中，实现跳过要删除的节点。
        free(elem);//释放删除的节点。
        break;
      }
    }


}
void show(struct Books * head){
  while (head != NULL){
    printf("head->id = %d\n", head->book_id);
    head = head->next;
  }
}
void show1(struct Books * head){
  struct Books * p = NULL;

  while (head != NULL){
    if (head->next->book_id > head->next->next->book_id){

      p = head->next;
      head->next = head->next->next;
      head->next->next = p;
    }
    printf("head->id = %d\n", head->book_id);
    head->next = head->next->next;
  }
}
