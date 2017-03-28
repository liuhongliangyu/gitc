#include <stdio.h>
int main(void){//编写一个单独的表达式，要求这个表达式的值根据i是否小于、等于或大于而分别为-1、0或1
  int i, j;
  scanf("%d%d", &i, &j);
  if (i > j){
    printf ("%d\n", i > j);
  }
  else if (i == j){
    printf("%d\n", !(i = j));
  }
  else {
    printf("%d\n", -(i < j));
  }
  return 0;
}
