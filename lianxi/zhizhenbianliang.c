#include <stdio.h>
int main(void){//指针是一个变量，其值为另一个变量在内存中的地址。
  int *p;
  double * p1;
  float *p2;
  char *p3 = NULL;//注意：NULL指针的用法。

  int a = 10;
  double b = 13.123;
  float c = 1.23;

  p = &a;
  p1 = &b;
  p2 = &c;

  printf ("p =%p, p1 = %p, p2 = %p, p3 = %p, %p, %p, %p, %p\n",p, p1, p2, p3,&a, &b, &c, &*p);
  return 0;
}
