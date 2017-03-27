# 链表
## 定义
* 链表是一种物理存储单元上非连续、非顺序的存储结构，数据元素的逻辑顺序是通过链表中的指针链接次序实现的。链表由一系列结点（链表中每一个元素称为结点）组成，结点可以在运行时动态生成。每个结点包括两个部分：一个是存储数据元素的数据域，另一个是存储下一个结点地址的指针域。(引自百度百科)
![](http://nts.newbieol.com/static/k6/01.C/class-015/2.jpg)

# 结构体
* 在C语言中，结构体(struct)指的是一种数据结构，是C语言中聚合数据类型(aggregate data type)的一类。结构体可以被声明为变量、指针或数组等，用以实现较复杂的数据结构。结构体同时也是一些元素的集合，这些元素称为结构体的成员(member)，且这些成员可以为不同的类型，成员一般用名字访问。
* 定义结构体变量使用struct关键字。
```sh
//定义结构体类型
struct Books
{
   char  title[50]; 
   int   book_id;
};

int main()
{
    //定义变量并初始化
    struct  Books  book = {"xxxxx",  1234};
    
    struct  Books  book1;
    //变量成员赋值
    book1.book_id = 1235;
    strcpy(book1.title, "yyyy");
    
}
```

## 链表节点定义
C语言使用结构体存储结构存储节点。 
```sh
//链表节点
//链表类型为node
typedef struct node
{
        int   data; //节点数据
	struct node *next; //指向下一个节点的指针
}linknode,  *linklist;
```
## 链表节点的创建
```sh
#include <stdlib.h>
 void *malloc(size_t size);
 功能：申请指定大小的内存空间，并返回申请的起始地址
 返回NULL表示失败
 
 //示例代码
 struct node  * head = NULL;
 head = malloc(sizeof(struct node));
 if (head == NULL)//需要作容错判断
 {}
 
 //使用指针访问结构体成员，使用"->"
 head->data = 10;
 head->next = NULL;
```
## 内存空间的释放
c语言程序中不再使用的内存需要释放，否则会导致内存泄漏。
```sh
 void free(void *ptr);
 功能：释放指定起始地址上申请的内存空间
 
 //示例代码：
  struct node  * head = NULL;
  head = malloc(sizeof(struct node));
  
  free(head);//释放申请的内存
```
* 注意：同一块内存不可以free两次。
## 链表节点的插入
![](http://nts.newbieol.com/static/k6/01.C/class-015/1.jpg)

## 链表节点删除
![](http://nts.newbieol.com/static/k6/01.C/class-015/3.jpg)

## 示例代码
* 注：此代码只有展示， 没有节点的删除
```sh
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

```
