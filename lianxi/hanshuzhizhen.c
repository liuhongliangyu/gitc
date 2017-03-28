#include <stdio.h>


int sum(int a, int b){
  return a + b;
}
int main(void){
  int c;
  int (*fun)(int a, int b);
  fun = sum;
  printf("%d\n", fun(5, 6));
  c = (*fun) (10, 20);
  printf("%d\n", c);
  return 0;
}
