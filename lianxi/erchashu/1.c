#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct binode{
  int data;
  struct binode * left, * right;
}binode, * bitree;

/*bitree creat_bt(){
  bitree t;
  int x;
  scanf ("%d",  &x);
  if (x == 0){
    t = NULL;
  }else{
    t = (bitree)malloc(sizeof(binode));
    t->data = x;
    printf("请输入%d结点的左孩子结点（若没有，请输入0)", t->data);
    t->left = creat_bt();
    printf("请输入%d结点的右孩子结点（若没有，请输入0)", t->data);
    t->right = creat_bt();
  }
  return t;
}
*/
void create(bitree T){
  char ch;
  //ch = getchar();
  scanf("%c", &ch);
  if (ch == '#'){
    T = NULL;
  }
  else {
    if (!(T = (bitree)malloc(sizeof(binode)))){
      exit(-1);
    }
  //T = (bitree)malloc(sizeof(binode));
  T->data = ch;
  //T->left = create(T->left);
  //T->right = create(T->right);
  create(T->left);
  create(T->right);
  }
  //return T;
}

void Preorder(bitree T){
  if (T != NULL){
    printf("%c ", T->data);
    Preorder(T->left);
    Preorder(T->right);
  }
}
int main(int argc, char const *argv[]) {
  bitree T = NULL;
  create(T);
  Preorder(T);
  return 0;
}
