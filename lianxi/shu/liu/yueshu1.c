#include <stdio.h>
int main(void){//最大公约数 与最小公倍数。
  int a, n, b, c, m, t;
  scanf ("%d%d", &a, &b);
  m = a;
  n = b;
  c = a % b;
  while (b != 0){
    c = a % b;
    a = b;
    b = c;
  }
  printf("最大公约数为%d\n", a);
  printf("%d\n", m * n / a);
  return 0;
}
