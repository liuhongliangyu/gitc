#include <stdio.h>

#define N 10

int main(void){
  int a[10] = {1, 3, 2, 7, 6, 8, 4, 1, 9, 2};
  int sum, *p;
  sum = 0;
  for (p = &a[0]; p < &a[N];p++){
    sum += *p;
    printf("a = %p, sum = %d, p = %p\n", a, sum, p);
  }
  printf("a = %p, sum = %d, p = %p\n", a, sum, p);
  return 0;
}
