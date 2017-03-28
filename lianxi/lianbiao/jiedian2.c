#include<stdlib.h>
#include<stdio.h>

#define N 15

typedef struct linklist
{
    int data;
    struct linklist *next;
}list, *plist;

/*创建链表*/
void create_list(plist* head)
{
    int i;
    if (NULL == *head)/*若头为空，插入第一个元素1*/
    {
        plist phead = (plist)malloc(sizeof(list));
        phead->data = 1;
        phead->next = NULL;
        *head = phead;
    }
    for (i = 2; i < N + 1; i++)/*插入数据2~15*/
    {
        plist p = (plist)malloc(sizeof(list));
        p->data = i;
        p->next = *head;
        *head = p;
    }
}
/*打印输出*/
void print_list(plist head)
{
    plist p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
/*删除结点*/
void delete_node(plist* head, int num)
{
    plist elem = *head;
    plist temp = NULL;

    if (elem->data == num)
    {
        *head = elem->next;
        free(elem);
        return;
    }
    else
    {
        while (elem != NULL)
        {
            temp = elem;
            elem = elem->next;
            if (NULL == elem)
            {
                printf("\n------------未找到要删除的结点----------------\n\n");
                return;
            }
            else if (elem->data == num)/*找到data值为num的结点*/
            {
                temp->next = elem->next; /*elem前一个结点的next指向elem元素后一个结点*/
                free(elem);/*释放被删除的结点占用的空间*/
                break;
            }
        }
    }

}

void main()
{
    int num;
    plist head;
    head = NULL;
    create_list(&head);

    printf("请输入要删除的结点（1~15）：\n");
    scanf("%d", &num);

    printf("删除结点之前：\n");
    print_list(head);

    delete_node(&head, num);
    printf("删除结点之后：\n");
    print_list(head);

    system("pause");
}
