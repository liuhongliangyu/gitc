# 双向链表
双向链表也叫双链表，是链表的一种，它的每个数据结点中都有两个指针，分别指向直接后继和直接前驱。所以，从节点的任意一个结点开始， 都可以很方便的访问它的前驱点和后继结点。一般我们都构造双向循环链表。
## 双链表示意图
![](http://img.ph.126.net/0LvNQe9nOzkVTupd0V-SZg==/6608423323725760827.jpg)
![](http://img.ph.126.net/JNo95Xvpkt_T0UhkjbHPag==/6608423323725760828.jpg)
* 注意：
  1. 双链表有头指针head惟一确定。
  1. 带头结点的双链表的某些运算变得方便。
  1. 将头结点和尾结点衔接起来，为双向循环链表。
## 双向链表的结点结构和形式描述
1. 结点结构（见上图a）
1. 形式描述
```sh
typedef struct dlistnode{
  Datatype data;(数据类型按自己要求改)
  struct dlistnode * prior, * next;
}DListNode;
typedef DListNode * DLinkList;
DLinkList head;
```
  由于双链表的对称性，在双链表中能方便的完成各种插入、删除操作。

1. 双链表的前插操作

  ![](http://img.ph.126.net/bUsgqzWFF1FYTuNM2d0Svw==/6608423323725760829.jpg)
  * 注意：注意箭头，没有直入框内，而是整体，代表指向的是整个结点（包括proir data next)
    ```sh
     void DInsertBefore(DListNode *p,DataType x)
      {//在带头结点的双链表中，将值为x的新结点插入*p之前，设p≠NULL
        DListNode *s=malloc(sizeof(DListNode));//①（为链表结点动态分配内存）
        s->data=x;//② （将数据X的值赋给s->data)
        s->prior=p->prior;//③ (将结点p的前驱的值赋给s的前驱 使s的前驱指向原来p之前的结点)
        s->next=p;//④ （使s的后驱指向p 经过2.3.4步结点s各个部分赋值完毕）
        p->prior->next=s;//⑤ （原来p之前的结点的后驱指向s）
        p->prior=s;//⑥  （使p的前驱指向s）
       }
    ```
2. 双链表上删除结点*p自身的操作

  ![](http://img.ph.126.net/zxjPuNTD8HoiNiTk3u9xnA==/6608423323725760854.jpg)
  
