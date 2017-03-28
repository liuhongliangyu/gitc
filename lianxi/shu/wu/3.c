#include <stdio.h>
int main(void){
  int a = 2, b = 3;
  int c = a * b == 5;
  int d = 5, e = 10, f = 1;
  int g = 3, h = 2, i = 1;
  int j = 3, k = 4, l = 5;

  printf("%d\n", c);
  printf("%d\n", f > d > e);
  printf("%d\n", g > h == h < i);
  printf("%d\n", j % k + j < l);
  return 0;
}
