#include <stdio.h>
int max(int x, int y){
  return (x > y ? x : y);
}
int main(void) {
  int (*ptr)(int, int);
  int a, b;
  scanf("%d%d", &a, &b);
  ptr = max;
  printf("max = %d\n", ptr(a, b));
  return 0;
}
